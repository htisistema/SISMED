*************************************
* EMISSAO RECEITAS POR CODIGO
*************************************
FUNCTION smed542(mnome,mdata,mqtd_rece)
****************
LOCAL mprg:='SMED542',;
      opcao,mrece,msele,mcod_rece,y:=0

PRIVATE mcod1,mcod2,mcod3,mcod4,mcod5,mcod6,muso1,muso2,muso3,muso4,muso5,muso6,;
        mdose1,mdose2,mdose3,mdose4,mdose5,mdose6,mposo1,mposo2,mposo3,mposo4,mposo5,;
        mposo6,mnome1,mnome2,mnome3,mnome4,mnome5,mnome6,traco,;
        mquantd,;
        mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)

traco := REPLI('-',80)

muso1 := muso2 := muso3 := muso4 := muso5 := muso6 := SPACE(7)
mcod1 := mcod2 := mcod3 := mcod4 := mcod5 := mcod6 := SPACE(5)
mnome1 := mnome2 := mnome3 := mnome4 := mnome5 := mnome6 := SPACE(15)
mdose1 := mdose2 := mdose3 := mdose4 := mdose5 := mdose6 := SPACE(24)
mposo1 := mposo2 := mposo3 := mposo4 := mposo5 := mposo6 := SPACE(50)
IF mnome = NIL
        mdata := DATE()
        mnome := SPACE(35)
        mqtd_rece := 1
ENDIF
mcod_rece := SPACE(5)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(03,02,22,77,'EMISSAO RECEITAS POR CODIGO')
FOR y = 1 TO mqtd_rece
        limpa(00,00,30,90)
        exibi_prg(mprg)
        *************
        SELE('rece');ORDSETFOCUS(1)
        GO TOP
        *************
        mquantd := 1
        opcao := SPACE(1)
        Mensagem('Preencha os Codigo - <ESC> p/Abandonar')
        setcor(1)

        DEVPOS(1,2);DEVOUT('Nome Cliente:')
        DEVPOS(1,53);DEVOUT('Data:')
        @ 2,1 TO 2,cba-1
        DEVPOS(3,2);DEVOUT('Cod.da Receita:')
        DEVPOS(4,2);DEVOUT('Codigo')
        DEVPOS(4,11);DEVOUT('Uso')
        DEVPOS(4,20);DEVOUT('Nome Med.')
        DEVPOS(4,40);DEVOUT('Dosagem:')
        DEVPOS(5,10);DEVOUT('Posologia:')
        DEVPOS(19,2);DEVOUT('Quantidades de Copias:')
        @ 6,1 TO 6,cba-1
        @ 1,16 GET mnome PICT '@!'
        @ 1,59 GET mdata PICT '99/99/99'
        @ 3,18 GET mcod_rece PICT '99999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mnome)
                LOOP
        ENDIF
        SEEK mcod_rece
        IF ! FOUND()
                atencao('Codigo da Receita Invalido !!!')
                LOOP
        ENDIF
        Mensagem('<ENTER> Confirma - <'+setcim+'> Prox.Reg.- <'+setbaix+'> Reg.Ant. - <ESC> bandonar')
        WHILE .T.
                mcod_rece := cod_rece
                mcod1 := codigo1
                mcod2 := codigo2
                mcod3 := codigo3
                mcod4 := codigo4
                mcod5 := codigo5
                mcod6 := codigo6
                setcor(3)
                DEVPOS(3,18);DEVOUT(mcod_rece)
                DEVPOS(7,2);DEVOUT(mcod1)
                DEVPOS(9,2);DEVOUT(mcod2)
                DEVPOS(11,2);DEVOUT(mcod3)
                DEVPOS(13,2);DEVOUT(mcod4)
                DEVPOS(15,2);DEVOUT(mcod5)
                DEVPOS(17,2);DEVOUT(mcod6)
                setcor(1)
                med(mcod1,1)
                med(mcod2,2)
                med(mcod3,3)
                med(mcod4,4)
                med(mcod5,5)
                med(mcod6,6)
                INKEY(0)
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                SKIP -1
                                atencao('Fim do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 13
                        SET CURSOR ON
                        EXIT
                ENDIF
                IF LASTKEY() = 27
                        SET CURSOR ON
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDDO
        @ 19,22 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF

        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('HTI.REL')
                LOOP
        ENDIF
                FOR i = 1 TO mquantd
                        cabec()
                        imprt(impressora,'E',4)
                        @ PROW(),14 SAY 'R E C E I T A'
                        imprt(impressora,'N')
                        @ PROW()+3,01 SAY ' '
                        @ PROW()+1,05 SAY 'Para o Sr.(a).'
                        @ PROW()+2,05 SAY mnome

                        IF mnome1 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso1)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome1)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose1)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo1)
                        ENDIF
                        IF mnome2 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso2)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome2)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose2)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo2)
                        ENDIF

                        IF mnome3 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso3)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome3)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose3)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo3)
                        ENDIF

                        IF mnome4 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso4)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome4)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose4)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo4)
                        ENDIF

                        IF mnome5 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso5)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome5)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose5)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo5)
                        ENDIF

                        IF mnome6 <> SPACE(15)
                                DEVPOS(PROW()+2,10);DEVOUT('Uso '+muso6)
                                DEVPOS(PROW()+1,10);DEVOUT(mnome6)
                                DEVPOS(PROW(),PCOL()+20);DEVOUT(mdose6)
                                DEVPOS(PROW()+1,10);DEVOUT(mposo6)
                        ENDIF
                        @ PROW()+3,30 SAY 'Recife,'
                        @ PROW(),37 SAY mdata
                        @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                        rodape()
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        SETPRC(00,00)
        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
NEXT
wvw_lclosewindow()
RETURN NIL
********************** f i m ***********************************
