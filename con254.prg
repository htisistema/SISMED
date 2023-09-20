MEMVAR getlist,nivel_acess,mdata_sis,cod_operado
***
*** CON254.PRG: BAIXA DE DOCUMENTO PRO ARQUIVO DE RETORNO P/BANCO
***
*********************************************
FUNCTION con254()
***************
LOCAL MPRG:='CON254',mcaminho,;
      m_dupr:={},m_pagas:={},m_n_encon:={},lin,linha,linhas,i:=0,;
      mtit:=' ',mtipo:=' ',sdados:='',mtot_pg,mqtd_pg,mtot_nao,mqtd_nao

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'BAIXA DE DOCUMENTO POR ARQUIVO RETORNO BANCO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*------------------------------------------------------------------------------------
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
op_tela(10,05,13,75," BAIXA DE DOCUMENTO PELO ARQUIVO RETORNO BANCO")
mcaminho := SPACE(45)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'J'
****************************************************
        limpa(00,00,30,90)
        m_dupr := {}
        m_pagas := {}
        m_n_encon := {}
        *****************
        SELE('dupr');ORDSETFOCUS(1)
        *****************
        DEVPOS(01,01);DEVOUT('Caminho do Arquivo:')
        DEVPOS(02,01);DEVOUT('No.e Nome do Banco:')
        Mensagem('Digite o Tipo e Numero do Documento. [ESC] Abandona.')
        @ 01,21 GET mcaminho PICT '@!'
        READ
        IF LASTKEY()=27         // .OR. mduplicata := SPACE(12)
                EXIT
        ENDIF
        IF ! File(mcaminho)
                atencao('Nao existe este ARQUIVO no caminho especificado, Verifique o Caiminho !!!!')
                LOOP
        ENDIF
        mtot_pg:=mqtd_pg:=mtot_nao:=mqtd_nao:=0
        linha        := fopen(mcaminho)
        //atencao('linha:'+STRZERO(linha,5))
        linhas       := fseek(linha, 0, 2 )
        //atencao('linhas:'+STRZERO(linhas,5))
        fclose( linha )
        linha        := fopen(mcaminho)
        i := 0
        sdados := ''
        FOR i := 1 TO linhas
                sRetorno := " "
                fread(linha, @sRetorno,1)
                sdados += sretorno
                IF LEN(sdados) = 402
                        AADD(m_dupr,sdados)
                        sdados := ''
                ENDIF
        NEXT
        IF LEN(m_dupr) = 0
                atencao('Nao tem nenhuma baixa a se feita verificar o arquivo...')
                LOOP
        ENDIF
        IF SUBSTR(m_dupr[1],77,3) = '237'
                setcor(3)
                DEVPOS(02,21);DEVOUT('237 - BRADESCO')
                setcor(1)
                mtit := 'BAIXA DE DOCUMENTO P/ARQUIVO DE RETORNO DO BANCO BRADESCO'
                marq := 'BRAD'+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+'.RET'
        ELSEIF SUBSTR(m_dupr[1],77,3) = '341'
                setcor(3)
                DEVPOS(02,21);DEVOUT('341 - ITAU')
                setcor(1)
                mtit := 'BAIXA DE DOCUMENTO P/ARQUIVO DE RETORNO DO BANCO ITAU'
                marq := 'ITAU'+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+'.RET'
        ELSE
                atencao('Nao foi encontrado o BANCO NO ARQUIVO')
                LOOP
        ENDIF
        opcao := op_simnao('Confirma o processo do Arquivo:')
        IF opcao = 'N' .OR. LASTKEY() = 27
                LOOP
        ENDIF
        i:=0
        FOR i=1 TO LEN(m_dupr)
                IF SUBSTR(m_dupr[i],1,1) <> '1' .OR. VAL(SUBSTR(m_dupr[i],254,13)) = 0
                        LOOP
                ENDIF
                SEEK 'DU'+'   '+SUBSTR(m_dupr[i],117,10)+' '+STRZERO(VAL(SUBSTR(m_dupr[i],38,5)),5)
                IF ! FOUND()               //     cod.cliente  1                            numero documento 2                                          vencimento 4                                                                    data credito 5                                                               valor titulo 5                                            valor pago 6
                        AADD(m_n_encon,'    '+STRZERO(VAL(SUBSTR(m_dupr[i],38,5)),5)+'    '+SUBSTR(m_dupr[i],117,10)+'  '+SUBSTR(m_dupr[i],147,2)+'/'+SUBSTR(m_dupr[i],149,2)+'/'+SUBSTR(m_dupr[i],150,2)+'  '+SUBSTR(m_dupr[i],296,2)+'/'+SUBSTR(m_dupr[i],298,2)+'/'+SUBSTR(m_dupr[i],300,2)+'  '+TRANSFORM(VAL(SUBSTR(m_dupr[i],153,13))/100,'99,999,999.99')+'  '+TRANSFORM(VAL(SUBSTR(m_dupr[i],254,13))/100,'99,999,999.99'))
                        mqtd_nao ++
                        mtot_nao := mtot_nao + VAL(SUBSTR(m_dupr[i],254,13)) / 100
                        LOOP
                ENDIF
                BLOQREG()
                dupr->datpag := CTOD(SUBSTR(m_dupr[i],296,2)+'/'+SUBSTR(m_dupr[i],298,2)+'/'+SUBSTR(m_dupr[i],300,2))
                dupr->datope := mdata_sis
                dupr->vlpago := VAL(SUBSTR(m_dupr[i],254,13)) / 100
                dupr->pago := "B"
                dupr->obs1:= mtit
                mqtd_pg ++
                mtot_pg := mtot_pg + VAL(SUBSTR(m_dupr[i],254,13)) / 100
                AADD(m_pagas,'    '+STRZERO(VAL(SUBSTR(m_dupr[i],38,5)),5)+'    '+SUBSTR(m_dupr[i],117,10)+'  '+SUBSTR(m_dupr[i],147,2)+'/'+SUBSTR(m_dupr[i],149,2)+'/'+SUBSTR(m_dupr[i],150,2)+'  '+SUBSTR(m_dupr[i],296,2)+'/'+SUBSTR(m_dupr[i],298,2)+'/'+SUBSTR(m_dupr[i],300,2)+'  '+TRANSFORM(VAL(SUBSTR(m_dupr[i],153,13))/100,'99,999,999.99')+'  '+TRANSFORM(VAL(SUBSTR(m_dupr[i],254,13))/100,'99,999,999.99'))
        NEXT
        DBCOMMITALL()
        DBUNLOCKALL()
        IF ! imp_arq(marq,'R')
                LOOP
        ENDIF
        i:=pag := 0
        mtipo := 'NOME ARQUIVO: '+marq
        FOR i=1 TO LEN(m_pagas)
                IF pag=0 .OR. PROW()>=59
                        pag:=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",80))
                        DEVPOS(PROW()+1,00);DEVOUT(' D O C U M E N T O S   P A G O S ')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",80))
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.Cliente   No.Docum.   Vencim.  Dat.Cred  Vlr.Documento     Valor Pago")

                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_pagas[i])
        NEXT
        IF ! EMPTY(mqtd_pg)
                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",80))
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL BAIXADOS: Quantidade: '+TRANSFORM(mqtd_pg,'99,999,999')+' - R$: '+TRANSFORM(mtot_pg,'99,999,999.99'))
                EJECT
        ENDIF
        i:=pag:=0
        FOR i=1 TO LEN(m_n_encon)
                IF pag=0 .OR. PROW()>=59
                        pag:=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",80))
                        DEVPOS(PROW()+1,00);DEVOUT(' D O C U M E N T O S   N A O   E N C O N T R A D O S')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",80))
                        DEVPOS(PROW()+1,00);DEVOUT("Cod.Cliente   No.Docum.   Vencim.  Dat.Cred  Vlr.Documento     Valor Pago")
                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",80))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_n_encon[i])
        NEXT
        IF ! EMPTY(mqtd_nao)
                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",80))
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL NAO ENCONTRADO: Quantidade: '+TRANSFORM(mqtd_nao,'99,999,999')+' - R$: '+TRANSFORM(mtot_nao,'99,999,999.99'))
        ENDIF
        DEVPOS(PROW()+2,00);DEVOUT(REPLICATE("*",80))
        DEVPOS(PROW()+1,00);DEVOUT('TOTAL GERAL...: Quantidade: '+TRANSFORM(mqtd_nao+mqtd_pg,'99,999,999')+' - R$: '+TRANSFORM(mtot_nao+mtot_pg,'99,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("*",80))
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao(marq)
ENDDO
wvw_lclosewindow()
RETURN NIL
