**************************
* EMITE TEXTOS
*************************
FUNCTION smed570
****************
LOCAL lci,cci,lba,cba,opcao,tela570
PRIVATE traco
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := 06
cci := 10
lba := 21
cba := 73
tela570 := SAVESCREEN(00,00,24,79)
traco := REPLI('=',80)
opcao := SPACE(1)
*----------------------------------------------------
CLOSE ALL
abriarq('texto','tex')
*----------------------------------------------------
SET KEY -9 TO ctrl_w()
* SET KEY -40 TO lim_text()
WHILE .T.
        ***********
        SELE('tex')
        ***********
        IF ! BLOQREG()
                LOOP
        ENDIF
        SETCOLOR(vcor[2])
        botao(lci,cci,lba,cba)
        janela(lci,cba,'  T E X T O  ')
        setcor(1)
        Mensagem('Tecle <F10> Grava e Imprimir - <Ctrl+Y>Apagar linha p/linha - <ESC> p/Abandonar')

        REPLA texto WITH MEMOEDIT(texto,lci+1,cci+2,lba-1,cba-1,,,,,,7)

        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela570)
                UNLOCK
                SET KEY -9 TO
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma Impressao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF ! impress()
                        LOOP
                ENDIF
                WHILE .T.
                        IF ! imp_arq('SMED.REL')
                                LOOP
                        ENDIF
                        mensagem('Espere o Final da Impressao OK')
                        cabec()
                        @ PROW()+2,01 SAY ' '
                        linhas := MLCOUNT(texto,60)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(texto,60,linha,,)
                                @ PROW()+1,10 SAY LIN
                                IF PROW() >= 58
                                        EJECT
                                        mcont = 0
                                ENDIF
                        NEXT

                        @ PROW()+4,30 SAY 'Recife,'
                        @ PROW(),37 SAY DATE()
                        @ PROW()+4,45 SAY REPLI('_',LEN(m_set[1,23])+4)
                        @ PROW()+1,47 SAY m_set[1,23]
                        @ PROW()+1,47 SAY crm
                        @ 59,58 SAY TIME()+' Hrs.'
                        @ 60,00 SAY traco
                        @ PROW()+1,90 SAY ' '
                        EJECT
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        RESTSCREEN(00,00,24,79,tela570)
                        IF mimp_tipo = 2
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                        ELSEIF mimp_tipo = 1
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                        ENDIF
                        EXIT
                ENDDO
        ELSE
                LOOP
        ENDIF
ENDDO
RETURN NIL
*********************************** F I M *******************************************

