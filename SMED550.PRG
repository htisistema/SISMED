****************
* MENU RECIBOS
*****************
FUNCTION smed550
****************
LOCAL mprg:='SMED550',;
      opcao,lci,cci,lba,cba,telamenu,mnome,mdata,mvalor,msinal,mcpf

lci := cci := 0
lba := 16
cba := 27
mnome := SPACE(35)
mdata := DATE()
mvalor := 0
msinal := SPACE(1)
mcpf   := SPACE(14)
opcao := 0
*********************************************
CLOSE ALL
abriarq('smedrec','rec')
* SET INDEX TO recind
*********************************************
op_tela(12,12,16,27,'MENU DOS RECIBOS')
WHILE .T.
        exibi_prg(mprg)
        apaga(23,00,23,79)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Recibo 1     ' MESSAGE '*** Recibo Pre-digitado ***'
        @ lci+2,cci+1 PROMPT ' Recibo 2     ' MESSAGE '*** Recibo a Digitar ***'
        @ lci+3,cci+1 PROMPT ' Cancelamento ' MESSAGE '*** Cancelamento de Recibo ***'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                CLOSE ALL
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        recibo(mnome,mdata,mvalor,mcpf)
                CASE opcao = 2
                        smed551()       && RECIBO MANUAL
                CASE opcao = 3
                        smed552()       && CANCELAMENTO DE RECIBO
        ENDCASE
ENDDO
RETURN NIL
************************** F I M ********************************************8
**************************
* EMITE RECIBOS
**************************
FUNCTION smed551
****************
LOCAL lci,cci,lba,cba,opcao,ml1,tela551,telaprin,mnome,mdata

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco

mnome := SPACE(35)
lci := cci := 0
lba := 21
cba := 73
traco := REPLI('-',80)
opcao := SPACE(1)
mdata := DATE()
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(06,10,21,73,'RECIBO')
WHILE .T.
        Mensagem('Tecle <F10> p/Imprimir    -   <ESC> p/Abandonar')
        ml1 = SPACE(60)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data:')
        @ lci+1,COL()+1 GET mdata
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mrecibo := ml1
        rrecibo := MEMOEDIT(mrecibo,lci+2,cci+2,lba-1,cba-1,,,,,,12)

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('SMED551.REL')
                LOOP
        ENDIF
                cabec()
                imprt(impressora,'E',4)
                @ PROW(),15 SAY 'R E C I B O'
                imprt(impressora,'N')
                @ PROW()+6,01 SAY ' '
                linhas := MLCOUNT(rrecibo,60)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,60,linha,,)
                        @ PROW()+1,10 SAY LIN
                        @ PROW()+1,10 SAY ' '
                NEXT

                @ PROW()+6,30 SAY 'Recife,'
                @ PROW(),37 SAY mdata
                @ PROW()+4,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                @ PROW()+1,00 SAY PADC(crm,80)
                IF ver_serie() <> '140200'
                        @ PROW()+1,00 SAY PADC(cpf,80)
                ENDIF
                rodape()
                @ PROW()+1,00 SAY ' '
                EJECT
        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        wvw_lclosewindow()
        RETURN NIL
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M *******************************************
********************************
* CANCELAR RECIBO
********************************
FUNCTION smed552
*****************
LOCAL tela,lci,cci,lba,cba,point,opcao,m_codigo:={},m_posicao:={},mdata
lci := 06
cci := 01
lba := 22
cba := 78
mdata := mdata_sis
tela := SAVESCREEN(00,00,24,79)
*---------------------------------------------------------------
*********************************************
CLOSE ALL
abriarq('smedrec','rec')
* SET INDEX TO recind
*********************************************
WHILE .T.
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+2,cci+13 SAY CHR(194)
        @ lci+2,cci+1 TO lci+2,cba-1
        @ lci+3,cci+13 TO lba-1,cci+13

        @ lci+2,cci+55 SAY CHR(194)
        @ lci+3,cci+55 TO lba-1,cci+55
        setcor(1)
        janela(lci,cba,' Recibo Emitente ')
        DEVPOS(lci+1,cci+1);DEVOUT(' Data ')
        DEVPOS(lci+1,cci+13);DEVOUT(' Cliente ')
        DEVPOS(lci+1,cci+56);DEVOUT('     Valor')
        DEVPOS(lci+1,cci+68);DEVOUT('Operador')

        DEVPOS(lci,cci+2);DEVOUT(' Digite a data da despesas: ')
        @ lci,cci+30 GET mdata
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        IF EMPTY(mdata)
                LOOP
        ENDIF

        *************
        SELE('rec')
        ORDSETFOCUS(1)
        DBSETFILTER({|| data = mdata})
        GO TOP
        *************
        IF LASTREC() = 0
                atencao('Nao existe nenhuma despesa !!!')
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento OK !!!')
        ASIZE(m_codigo,0)
        ASIZE(m_posicao,0)
        WHILE ! EOF()
                AADD(m_codigo,'  '+DTOC(data)+'  '+CHR(179)+'   '+nome+'   '+CHR(179)+' '+TRANSFORM(valor,'999,999.99')+'   '+CHR(179)+' '+operador)
                AADD(m_posicao,RECNO())
                SKIP
        ENDDO

        IF LEN(m_codigo) = 0
                atencao('Nenhum despesa')
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF

        mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Confirma o cancelamento" )
        point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo)

        DO CASE
                CASE LASTKEY()=27
                        RESTSCREEN(00,00,24,79,tela)
                        CLOSE ALL
                        RETURN NIL
                CASE LASTKEY() = 13
                        IF ! nivel('1','3','5')
                                atencao('Acesso nao Autorizado !!!')
                                IF ! aut_sen('Senha de Liberacao de Ambiente:')
                                        UNLOCK
                                        RESTSCREEN(00,00,24,79,tela)
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        GO m_posicao[point]
                        opcao := op_simnao('N','Confirma Cancelamento do Recibo [s/N]:')
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        IF opcao = 'N'
                                EXIT
                        ELSE
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        EXIT
                                ENDIF
                                DELE
                                DBCOMMITALL()
                                DBUNLOCKALL()
                        ENDIF
        ENDCASE
ENDDO
************************* F I M ******************************************


