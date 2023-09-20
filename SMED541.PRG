*************************************
* RECEITAS POR CODIGO DE MEDICAMENTOS
*************************************
FUNCTION smed541(mnome,mdata,mqtd_rece)
****************
LOCAL mprg:='SMED541',;
      opcao,tela,mrece,msele,y:=0

PRIVATE mcod1,mcod2,mcod3,mcod4,mcod5,mcod6,muso1,muso2,muso3,muso4,muso5,muso6,;
        mdose1,mdose2,mdose3,mdose4,mdose5,mdose6,mposo1,mposo2,mposo3,mposo4,mposo5,;
        mposo6,mnome1,mnome2,mnome3,mnome4,mnome5,mnome6,lba,cba,traco,mquantd,;
        mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)

traco := REPLI('-',80)

muso1 := muso2 := muso3 := muso4 := muso5 := muso6 := SPACE(7)
mcod1 := mcod2 := mcod3 := mcod4 := mcod5 := mcod6 := SPACE(5)
mnome1 := mnome2 := mnome3 := mnome4 := mnome5 := mnome6 := SPACE(15)
mdose1 := mdose2 := mdose3 := mdose4 := mdose5 := mdose6 := SPACE(24)
mposo1 := mposo2 := mposo3 := mposo4 := mposo5 := mposo6 := SPACE(50)
IF mnome = NIL
        mnome := SPACE(35)
        mdata := DATE()
        mqtd_rece := 1
ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(03,02,22,77,'RECEITAS POR CODIGO DE MEDICAMENTOS')
FOR Y = 1 TO mqtd_rece
        limpa(00,00,30,90)
        exibi_prg(mprg)                
        mquantd := 1
        opcao := SPACE(1)
        Mensagem('Preencha os Codigo - <ESC> p/Abandonar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Nome Cliente:')
        DEVPOS(1,53);DEVOUT('Data:')
        @ 2,1 TO 2,76
        DEVPOS(3,2);DEVOUT('Codigo')
        DEVPOS(3,11);DEVOUT('Uso')
        DEVPOS(3,20);DEVOUT('Nome Med.')
        DEVPOS(3,40);DEVOUT('Dosagem:')
        DEVPOS(4,10);DEVOUT('Posologia:')
        DEVPOS(19,2);DEVOUT('Cod.da Receita:')
        DEVPOS(20,2);DEVOUT('Quantid.Copias:')
        @ 5,1 TO 5,76
        @ 1,16 GET mnome PICT '@!'
        @ 1,59 GET mdata PICT '99/99/99'

        @ 7,2 GET mcod1 PICT '99999' VALID med(mcod1,1)
        @ 9,2 GET mcod2 PICT '99999' VALID med(mcod2,2) WHEN mcod1 <> ' '
        @ 11,2 GET mcod3 PICT '99999' VALID med(mcod3,3) WHEN mcod2 <> ' '
        @ 13,2 GET mcod4 PICT '99999' VALID med(mcod4,4) WHEN mcod3 <> ' '
        @ 15,2 GET mcod5 PICT '99999' VALID med(mcod5,5) WHEN mcod4 <> ' '
        @ 17,2 GET mcod6 PICT '99999' VALID med(mcod6,6) WHEN mcod5 <> ' '
        @ 20,18 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        READ

        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mnome)
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
        msele := SELE()
        *************
        SELE('rece')
        *************
        GO BOTT
        mrece := STRZERO(VAL(cod_rece)+1,5)
        opcao := 'S'
        mensagem('Codigo da RECEITA:')
        setcor(3)
        DEVPOS(19,18);DEVOUT(mrece)
        setcor(1)
        opcao := op_simnao('S','Deseja Grava a Receita[S/n]:')
        IF opcao = 'S'
                IF ADIREG()
                        REPLA cod_rece WITH mrece
                        REPLA codigo1 WITH mcod1
                        REPLA codigo2 WITH mcod2
                        REPLA codigo3 WITH mcod3
                        REPLA codigo4 WITH mcod4
                        REPLA codigo5 WITH mcod5
                        REPLA codigo6 WITH mcod6
                        SELE(msele)
                        COMMIT
                        UNLOCK
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                SELE(msele)
                LOOP
        ENDIF
NEXT
wvw_lclosewindow()
RETURN NIL
********************** f i m ***********************************
* VERIFICA O MEDICAMENTO
**************************
FUNCTION med(rcod,posicao)
*******************
LOCAL msele
WHILE .T.
        msele := SELE()
        IF rcod = SPACE(5)
                SELE(msele)
                RETURN .T.
        ENDIF
        ****************
        SELE('dro')
        SET ORDER TO 2
        GO TOP
        ****************
        SEEK rcod
        IF ! FOUND()
                Atencao('Codigo nao Cadastrado !!!')
                SELE(msele)
                RETURN .F.
        ENDIF

        IF posicao = 1
                muso1 := uso_med
                mcod1 := cod_med
                mnome1 := nomecom
                mdose1 := dose_quant
                mposo1 := posologia
                setcor(3)
                DEVPOS(7,9);DEVOUT(muso1)
                DEVPOS(7,18);DEVOUT(mnome1)
                DEVPOS(7,40);DEVOUT(mdose1)
                DEVPOS(8,10);DEVOUT(mposo1)
                setcor(1)
        ENDIF
        IF posicao = 2
                muso2 := uso_med
                mcod2 := cod_med
                mnome2 := nomecom
                mdose2 := dose_quant
                mposo2 := posologia
                setcor(3)
                DEVPOS(9,9);DEVOUT(muso2)
                DEVPOS(9,18);DEVOUT(mnome2)
                DEVPOS(9,40);DEVOUT(mdose2)
                DEVPOS(10,10);DEVOUT(mposo2)
                setcor(1)
        ENDIF
        IF posicao = 3
                muso3 := uso_med
                mcod3 := cod_med
                mnome3 := nomecom
                mdose3 := dose_quant
                mposo3 := posologia
                setcor(3)
                DEVPOS(11,9);DEVOUT(muso3)
                DEVPOS(11,18);DEVOUT(mnome3)
                DEVPOS(11,40);DEVOUT(mdose3)
                DEVPOS(12,10);DEVOUT(mposo3)
                setcor(1)
        ENDIF
        IF posicao = 4
                muso4 := uso_med
                mcod4 := cod_med
                mnome4 := nomecom
                mdose4 := dose_quant
                mposo4 := posologia
                setcor(3)
                DEVPOS(13,9);DEVOUT(muso4)
                DEVPOS(13,18);DEVOUT(mnome4)
                DEVPOS(13,40);DEVOUT(mdose4)
                DEVPOS(14,10);DEVOUT(mposo4)
                setcor(1)
        ENDIF
        IF posicao = 5
                muso5 := uso_med
                mcod5 := cod_med
                mnome5 := nomecom
                mdose5 := dose_quant
                mposo5 := posologia
                setcor(3)
                DEVPOS(15,9);DEVOUT(muso5)
                DEVPOS(15,18);DEVOUT(mnome5)
                DEVPOS(15,40);DEVOUT(mdose5)
                DEVPOS(16,10);DEVOUT(mposo5)
                setcor(1)
        ENDIF
        IF posicao = 6
                muso6 := uso_med
                mcod6 := cod_med
                mnome6 := nomecom
                mdose6 := dose_quant
                mposo6 := posologia
                setcor(3)
                DEVPOS(17,9);DEVOUT(muso6)
                DEVPOS(17,18);DEVOUT(mnome6)
                DEVPOS(17,40);DEVOUT(mdose6)
                DEVPOS(18,10);DEVOUT(mposo6)
                setcor(1)
        ENDIF
        SELE(msele)
        RETURN .T.
ENDDO
*********************************** F I M ******************
