#include "fileio.ch"
#include "commands.ch"

#define  ETX CHR(3)
#define  CR  CHR(13)
#define  LF  CHR(10)
#define ENT_TXT  'ENTNFE.TXT'
#define SAI_TXT  'SAINFE.TXT'
#define TMP_TXT  'ENTNFE.TMP'
//Static sENDER   := ''  ,;
Static SEM_ERRO := .F. ,;
sSECHORA := 0   ,;
sRETHORA := ''  ,;
sSECCOO  := 0   ,;
sNUMCUPOM:= ''  ,;
sSECEST  := 0   ,;
sESTADO  := ''  ,;
sMODELO  := ''
#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
***********************
* CARTA DE CORRECAO NFE
***********************
FUNCTION sac216()
*****************
LOCAL mprg:='SAC216',mchNFe,morgao,mcnpj,mdata_emi,msequencia,mcorrecao,mcorrecao1,mcorrecao2,mcorrecao3,mcorrecao4,mnum_nota:=SPACE(12),;
      aret:={},lExit := .T.

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mpag:=0,marq_sai:='',mcam_nfe:='',mretorno:='',m_email :=SPACE(60),;
        mcam_arq:=''
mensagem('INCICIANDO O NFe Aguarde um momento....')
CLEAR GETS
op_tela(15,40,25,120,' CARTA DE CORRECAO DA NFE',,'*')
marq_sai := "C:\ACBrNFeMonitor\SAINFE.TXT"
WHILE .T.
        mchNFe := SPACE(50)
        morgao := '  '
        mcnpj  := mcgc_firm
        mdata_emi := ''
        mdata := mdata_sis
        msequencia := '10'
        mcorrecao := mcorrecao1 := mcorrecao2 := mcorrecao3 := mcorrecao4 := SPACE(50)
        mnum_nota:=SPACE(12)
        exibi_prg(mprg)
        SET CENTURY ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        //mtot_quantd := mensagem2('Quantidade de item:',mtot_quantd,'999,999.99',,'N')

        DEVPOS(00,01);DEVOUT('Numero da Nota.....:')
        DEVPOS(01,01);DEVOUT('Chave de acesso NFe:')
        DEVPOS(02,01);DEVOUT('Orgao..............:')
        DEVPOS(03,01);DEVOUT('CNPJ...............:')
        DEVPOS(04,01);DEVOUT('Data de Emissao....:')
        //DEVPOS(05,01);DEVOUT('Sequencia..........:')
        DEVPOS(05,01);DEVOUT('Correcao...........:')
        setcor(3)
        DEVPOS(03,22);DEVOUT(mcnpj)
        setcor(1)
        mensagem('INCICIANDO O ACBR Aguarde um momento....')
        IF ! EMPTY(m_indiv[1,43])
                IF ! IBR_INIT(ALLTRIM(m_indiv[1,43]))
                        atencao('Nao e possivel INICIALIZAR o ACBRMONITORPLUS pelo TCP-IP, verificar se estar instalado...')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                NFE_INIT(ALLTRIM(m_indiv[1,37]))
        ENDIF
        mensagem('ATIVANDO O ACBR Aguarde um momento....')
        IF ! EMPTY(m_indiv[1,43])
                IF ! IBR_OK( IBR_COMANDO( 'NFE.Ativo',,25))
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                IF ! IBR_OK(nfe_comando('NFE.Ativo',,25))
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
        mensagem('Verificando STATUS DO SERVICO NFe Aguarde um momento....')
        IF ! IBR_OK(IBR_comando('NFE.STATUSSERVICO',,30))
                //wvw_lclosewindow();RETURN NIL
        ENDIF
        mchNFe := '                                            '
        //mchNFe := '26180324494200000106550010000000011000000019'
        @ 00,22 GET mnum_nota VALID IF(EMPTY(mnum_nota),.F.,.T.)
        @ 01,22 GET mchNFe
        READ
	IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
	ENDIF
        morgao := vercod_uf(m_set[1,19])
        setcor(3)
        DEVPOS(02,22);DEVOUT(morgao)
        DEVPOS(04,22);DEVOUT(mdata)
        setcor(1)
        //@ 04,22 GET mdata
        //@ 05,22 GET msequencia
        @ 05,22 GET mcorrecao VALID IF(LEN(mcorrecao) < 15,.F.,.T.)
        @ 06,22 GET mcorrecao1
        @ 07,22 GET mcorrecao2
        @ 08,22 GET mcorrecao3
        @ 09,22 GET mcorrecao4
        READ
	IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
	ENDIF
        opcao := op_simnao('S','Confirma os dados:')
        IF opcao = 'N'
	        wvw_lclosewindow()
                RETURN NIL
        ENDIF
                	aret:={}
                        lExit := .T.
                        mensagem('Gerando o numero da CARTA DE CORRECAO Aguarde um momento....')
                        while lExit
                                //sr_begintransaction()
                                //try
                                        sr_getconnection():exec( "select numero from sacnocce where sr_recno = 1 for update with lock",,.t.,@aret)
                                        if len(aRet) = 0
                               	                sr_getconnection():exec("insert into sacnocce (numero,sr_deleted,sr_recno)   values (" + sr_cdbvalue(strzero(1,6) ) + ",' ',1)",,.f.)
                               	                msequencia = STRZERO(1,6)
                                        else
                                                msequencia = STRZERO(VAL(aret[1,1])+1,6)
                       	                        sr_getconnection():exec("update sacnocce set numero = " + sr_cdbvalue(msequencia) + "  where sr_recno = 1 ",,.f.)
                                        endif
                                        sr_committransaction()
                                        lExit:=.F.
                                //catch e
                                //        tracelog(valtoprg())
                                //        sr_rollbacktransaction()
                                //end
                                //sr_endtransaction()
                        end

        //atencao(MSEQUENCIA)
        mensagem('CRIANDO CARTA DE CORRECAO DE NUMERO: '+msequencia)
        //mretorno := IBR_comando('ACBr.DeleteFiles',{ALLTRIM(m_indiv[1,40])+'CCE.INI'},,3)
        mArq := FCREATE(ALLTRIM(m_indiv[1,40])+'CCE.INI')
        sLinhas     :=  '[EVENTO]'                  + m_qp
        mdata_emi := DTOC(mdata)+' '+time()
        sLinhas := sLinhas + 'idLote='+mnum_nota                         + m_qp + ;
                        '[EVENTO001]'                           + m_qp + ;      //'id=001'                            + m_qp + ;
                        'chNFe='+ALLTRIM(mchNFe)           + m_qp + ;
                        'cOrgao='+SUBSTR(ALLTRIM(mchNFe),1,2)                  + m_qp + ;
                        'CNPJ='+ALLTRIM(mcnpj)                + m_qp + ;
                        'dhEvento='+ALLTRIM(mdata_emi)            + m_qp + ;
                        'tpEvento=110110' + m_qp + ; //'nSeqEvento='+ALLTRIM(STR(VAL(msequencia)))+ m_qp + ;
                        'nSeqEvento=1'+ m_qp + ;
                        'versaoEvento=3.10' + m_qp + ;
                        'descEvento=Carta de Correcao' + m_qp + ;
                        'xCorrecao='+ALLTRIM(mcorrecao+mcorrecao1+mcorrecao2+mcorrecao3+mcorrecao4)     //+'")'
                        //'xCorrecao='+ALLTRIM(mcorrecao) //+'")'
        //m_email := mcons_cli[1,27]

        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
        mensagem('ENVIANDO CARTA DE CORRECAO')
        //mret := IBR_comando('NFe.EnviarEvento',{ALLTRIM(m_indiv[1,40])+'CCE.INI',1,1,1})
        mret := IBR_comando('NFe.EnviarEvento',{ALLTRIM(m_indiv[1,40])+'CCE.INI',,100})
        IF 'XMotivo=Rejeicao' $ mret
                atencao(mret)
                LOOP
        ELSE
                atencao('NF-e foi AUTORIZADA pela SEFAZ...')
        ENDIF
        //atencao(mret)
        enviar_evento(mret)
        mensagem('IMPRIMINDO CARTA DE CORRECAO')
        mret := IBR_comando('NFe.ImprimirEvento('+mcam_arq+')',,100)
        IF op_simnao('S','Deseja enviar EMAIL para o Cliente') = 'S'
                op_tela(10,10,11,70,'Enviar EMAIL')
                DEVPOS(00,00);DEVOUT('Email de Destino:')
                @ 00,18 GET m_email VALID IF(EMPTY(m_email),.F.,.T.)
                READ
                IF LASTKEY() # 27
                        //NFe.EnviarEmailEvento(cEmailDestino,cArqXMLEvento,[cArqXMLNFe],cEnviaPDF,[cAssunto],[cEmailsCopias],[cAnexos])
                        m_ret := IBR_comando('NFe.EnviarEmailEvento('+m_email+','+mcam_arq+',"",1)',,3)
                        atencao(m_ret)
                        wvw_lclosewindow()
                ELSE
                        wvw_lclosewindow()
                ENDIF
        ENDIF
        CLEAR GETS
        wvw_lclosewindow()
        RETURN NIL
ENDDO
RETURN NIL
*********************** F I M **********************************
FUNCTION enviar_evento(marq_sai)
****************************
LOCAL m_retorno,lin,linhas,linha,mmen

//marq_sai := IBR_comando('NFe.EnviarEvento',{ALLTRIM(m_indiv[1,40])+mret,1,1,1})
        //atencao('1 '+mret)
        //atencao('2 '+ALLTRIM(m_indiv[1,40])+mret)
        //atencao('3 '+marq_sai)
        m_retorno :={}
        lin := MEMOLINE(marq_sai,150,1,,)
        linhas := linha := 0
        linhas := MLCOUNT(marq_sai,150)
        FOR linha = 1 TO  linhas
                lin := MEMOLINE(marq_sai,150,linha,,)
                AADD(m_retorno,ALLTRIM(lin))
        NEXT
        IF LEN(m_retorno) > 0
                IF SUBSTR(m_retorno[1],1,2) = 'OK'
                        h:=0
                        FOR h = 1 TO LEN(m_retorno)
                                IF SUBSTR(UPPER(m_retorno[h]),1,7) = 'ARQUIVO'
                                        mcam_arq := ALLTRIM(SUBSTR(UPPER(m_retorno[h]),9))
                                        EXIT
                                ENDIF
                        NEXT
                        //atencao('Messagem: CHAVE DA NFE: '+mcam_arq)
                ENDIF
        ENDIF
RETURN NIL
************************** F I M *************************************
