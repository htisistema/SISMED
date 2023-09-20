MEMVAR getlist,memp_resa,mdata_sis

****************************
* EMITE RECIBO DA HTI
****************************
FUNCTION sac63(mnome,mvalor,mdata,mdesc)

LOCAL mprg:='SAC63',;
      lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0,;
      opcao,tela1,telarec,telaprin,mref,mref1,mref2,mref3,;
      mref4,mref5,mref6,mvenc,mtipo_f:='F',i:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mquantd:=1,traco

IF ! AbriArq('saccfg','cfg');RETURN NIL;ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
lci := 08
cci := 08
lba := 19
cba := 74
lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
opcao := SPACE(1)
traco := REPLI('-',80)
telarec := SAVESCREEN(01,00,24,79)
IF mnome = NIL
        mnome := SPACE(35)
        mnome := m_set[1,23]+SPACE(35-LEN(m_set[1,23]))
        mdata := mdata_sis
ENDIF
IF mvalor = NIL
        mvalor := 0
ENDIF
WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := 'M'
        mensagem('Preencha os campos  -  <ESC> p/Retornar')
        mref :=  'manutencao do sistema SIAC (sistema integrado de '
        mref1 := 'automacao comercial) do mes '+SUBSTR(DTOC(mdata),4)+'.             '
        mref2 := SPACE(49)
        mref3 := SPACE(49)
        mref4 := SPACE(49)
        mref5 := SPACE(49)
        mquantd := 1
        mvenc := mdata_sis
        botao(lci,cci,lba,cba,,' R E C I B O ')
        SET INTEN ON
        DEVPOS(lci+1,cci+2);DEVOUT('Data Emissao:')
        DEVPOS(lci+1,cci+28);DEVOUT('Vencimento:')
        DEVPOS(lci+1,cci+52);DEVOUT('Tp.Form.:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor:')
        DEVPOS(lci+4,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+10,cci+2);DEVOUT('Quantidade Copias:')
        @ lci+1,cci+16 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        @ lci+1,cci+40 GET mvenc VALID IF(EMPTY(mvenc),.F.,.T.)
        @ lci+1,cci+62 GET mtipo_f PICT '@!' VALID mtipo_f $ 'F,B'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(01,00,24,79,telarec)
                RETURN NIL
        ENDIF

        @ lci+2,cci+8 GET mnome PICT '@!'
        @ lci+3,cci+9 GET mvalor PICT '9,999,999.99'
        @ lci+4,cci+15 GET mref
        @ lci+5,cci+15 GET mref1
        @ lci+6,cci+15 GET mref2
        @ lci+7,cci+15 GET mref3
        @ lci+8,cci+15 GET mref4
        @ lci+9,cci+15 GET mref5
        @ lci+10,cci+21 GET mquantd PICT '9'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED.REL','R')
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                IF mtipo_f = 'F'
                        insercom_b('',mnome,DTOC(mvenc),DTOC(mdata),'CIBO',DTOC(mdata),mvalor,mref,mref1,mref2,mref3,mref4,mref5)
                ELSE
                        DEVPOS(PROW(),00);DEVOUT(CHR(15))
                        DEVPOS(PROW(),00);DEVOUT('H R B  Solucoes em Informatica Ltda.       ')
                        DEVPOS(PROW()+1,00);DEVOUT('Rua Agenor Lopes, 292 - Sl.403')
                        DEVPOS(PROW()+1,00);DEVOUT('Boa Viagem - Recife - PE                    ')
                        DEVPOS(PROW()+1,00);DEVOUT('TeleFax: (081) 3325.6663 - 8835.1753      ')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',54))
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('R E C I B O',54))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',54))
                        DEVPOS(PROW()+1,00);DEVOUT('Cliente..........: '+mnome)
                        DEVPOS(PROW()+1,00);DEVOUT('Emissao..........: '+DTOC(mdata))
                        DEVPOS(PROW()+1,00);DEVOUT('Vencimento.......: '+DTOC(mvenc))
                        DEVPOS(PROW()+1,00);DEVOUT('Valor Documen..R$: '+TRANSFORM(mvalor,'99,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT('(-)Desconto....R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(+)Juros/Multa.R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(+)Outros......R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT('(=)Total...... R$: .............')
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',54))
                        DEVPOS(PROW()+1,00);DEVOUT('Referente:')
                        DEVPOS(PROW()+1,00);DEVOUT(mref)
                        DEVPOS(PROW()+1,00);DEVOUT(mref1)
                        DEVPOS(PROW()+1,00);DEVOUT(mref2)
                        DEVPOS(PROW()+1,00);DEVOUT(mref3)
                        DEVPOS(PROW()+1,00);DEVOUT(mref4)
                        DEVPOS(PROW()+1,00);DEVOUT(mref5)
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',54))
                        @ PROW()+2,00 SAY PADC('Recebido em ....../....../......',54)
                        @ PROW()+3,00 SAY PADC('Recebido por....................',54)
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',54))
                        DEVPOS(PROW()+cfg->qtdlinped,00);DEVOUT(CHR(18))
                ENDIF
        NEXT
        IF mtipo_f = 'F'
                EJECT
        ENDIF
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(01,00,24,79,telarec)
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                //lertexto('RECEITA.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                //MYRUN('DOSPRINTER '+IF(m_cfg[79]='2','/SEL2','/SEL')+' /DEL '+ALLTRIM('')+'HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        RETURN NIL
        mvalor := 0
        mnome := SPACE(35)
        LOOP

ENDDO
RETURN NIL
******************************* F I M ******************************8
* FUNCAO PARA IMPRESSAO DO BOLETO HTI SISTEMAS
******************************************
FUNCTION insercom_b(cli_bol,razao_bol,venc_bol,emissao_bol,numdoc_bol,datproc_bol,;
                    valor,obs1,obs2,obs3,obs4,obs5,obs6,desc)

LOCAL lin1,lin2,lin3,rrecibo,linha,linhas,lin,mvalor_tot:=0

MEMVAR traco,mtipo_imp

lin1 := '          Recebi de '
lin2 := ' a importancia de R$ '
lin3 := ' referente a '
traco := REPLI('-',80)
DEVPOS(PROW()  ,00);DEVOUT(PADC('клллкллл кллллллл кллллллл                                                     ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('ГлллГллл ГлллПллл ГлллПллл           Rua Agenor Lopes, 292 - Sl.403            ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('Гллллллл Гллллллл Гллллллй              Boa Viagem - Recife - PE               ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('ГлллПллл ГлллПллй ГлллПллл     Fone: (81) 3325.6663 - CNPJ: 02.702.271/0001-14 ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('ГлллГллл ГлллГллл Гллллллл                                                     ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('РФФйРФФй РФФйРФФй РФФФФФФй                                                     ',80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('  SOLUCOES EM INFORMATICA                                                      ',80))
DEVPOS(PROW()+1,00);DEVOUT(REPLI('Ф',80))
DEVPOS(PROW()+2,00);DEVOUT('Valor Doc. R$: '+TRANSFORM(valor,'999,999.99'))
IF desc <> NIL .AND. desc > 0
        mvalor_tot := valor - desc
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desc. R$: '+TRANSFORM(desc,'999,999.99'))
ELSE
        mvalor_tot := valor
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desc. R$: ..........')
ENDIF
rrecibo := lin1+RTRIM(cli_bol+'-'+razao_bol)+lin2+LTRIM(TRANSFORM(mvalor_tot,'@E 9,999,999.99'))+' '+'('+ext(mvalor_tot,10)+')'+lin3         + RTRIM(obs1) + RTRIM(obs2) + RTRIM(obs3) + RTRIM(obs4) + RTRIM(obs5) + RTRIM(obs6) + ', que damos plena quitacao da mesma'
DEVPOS(PROW(),PCOL()+2);DEVOUT('Valor a Pagar R$: '+TRANSFORM(mvalor_tot,'999,999.99'))
DEVPOS(PROW()+1,00);DEVOUT(REPLI('Ф',80))
imprt(mtipo_imp,'E',2)
DEVPOS(PROW(),18);DEVOUT('RECIBO')
DEVPOS(PROW()+2,45);DEVOUT('R$ ')
DEVPOS(PROW(),49);DEVOUT('('+LTRIM(TRANSFORM(mvalor_tot,'@E 9,999,999.99'))+')')
DEVPOS(PROW()+1,01);DEVOUT(' ')

linhas := MLCOUNT(rrecibo,70)

FOR linha = 1 TO  linhas
        LIN := MEMOLINE(rrecibo,70,linha,,10)
        DEVPOS(PROW()+1,05);DEVOUT(PADR(RTRIM(LIN),70))
NEXT

DEVPOS(PROW()+2,00);DEVOUT(PADC('Recife, '+venc_bol,80))
DEVPOS(PROW()+3,00);DEVOUT(PADC(REPLI('-',LEN('HTI Sistemas Ltda.')+2),80))
DEVPOS(PROW()+1,00);DEVOUT(PADC('HTI Sistemas Ltda.',80))
DEVPOS(PROW()+2,00);DEVOUT(traco)
DEVPOS(PROW()+1,66);DEVOUT(TIME()+' Hrs.')
DEVPOS(PROW()+4,00);DEVOUT(' ')
RETURN .T.

