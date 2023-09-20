*************************************************
* EMISSAO DA PATOLOGIA
*************************************************
FUNCTION smed5pat
****************
LOCAL mprg:='SMED5PAT',opcao,mcont,mpag,mpatologia

PRIVATE mrsoc,traco,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
traco := REPLI('-',80)
*****************************************************
CLOSE ALL
IF ! abriarq('smedpato','pato');RETURN NIL;ENDIF
/*
IF ! ABRARQ('pato')
        abriarq('smedpato','pato')
ENDIF
*/
*****************************************************
op_tela(16,24,18,77)
WHILE .T.
        exibi_prg(mprg)
        mcont = 0
        opcao := SPACE(1)
        mpatologia := SPACE(30)
        setcor(1)
        apaga(23,00,23,79)

        *****************
        SELE('pato')
        SET ORDER TO 1
        *****************
        Mensagem('Preencha o Campo ou Tecle <ESC> P/Retornar')
        DEVPOS(01,01);DEVOUT('Patologia:')
        SET INTEN ON
        @ 01,12 GET mpatologia PICT '@!' VALID IF(EMPTY(mpatologia),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ***********************
        SEEK RTRIM(mpatologia)
        ***********************
        IF ! FOUND()
                atencao('Nome nao Existente no Arquivo !!!')
                LOOP
        ENDIF

        WHILE .T.
                Mensagem('<ESC> Retornar - <ENTER> Imprimir - <'+setcim+'> Prox.Reg. - <'+setbaix+'> Reg.Ant.')
                DEVPOS(01,12);DEVOUT(pato->patologia)
                tecla = INKEY(0)
                IF tecla = 5
                        SKIP
                        LOOP
                ENDIF

                IF tecla = 24
                        SKIP -1
                        LOOP
                ENDIF

                IF tecla = 27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

                IF tecla = 13
                        SET CURSOR ON
                        EXIT
                ENDIF

        ENDDO
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        mpag = 1
        cabec()
        DEVPOS(PROW()+3,00);DEVOUT(PADC('PATOLOGIA: '+RTRIM(pato->patologia),80))
        DEVPOS(PROW(),00);DEVOUT(PADC('PATOLOGIA: '+RTRIM(pato->patologia),80))
        DEVPOS(PROW()+1,00);DEVOUT(' ')
        linhas := MLCOUNT(pato->descricao,60)

        FOR linha = 1 TO  linhas
                LIN := MEMOLINE(pato->descricao,60,linha,,)
                @ PROW()+1,10 SAY LIN
                IF PROW() = 41
                        mpag = mpag +1
                        @ PROW()+3,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW(),00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC(crm,80)
                        rodape()
                        @ PROW()+1,00 SAY PADC(mpag,80)
                        @ 60,00 SAY traco
                        EJECT
                        cabec()
                        cabhist('PATOLOGIA: '+pato->patologia)
                ENDIF
        NEXT

        @ PROW()+3,30 SAY 'Recife,'
        @ PROW(),37 SAY DATE()
        @ PROW()+3,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY PADC(crm,80)
        rodape()
        @ PROW()+1,00 SAY PADC(mpag,80)
        EJECT
        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M **************************
