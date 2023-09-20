****************
* MENU RECEITAS
*****************
FUNCTION smed5frm
****************
LOCAL opcao,lci,cci,lba,cba,telamenu,mprg:='SMED5FRM'
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),mnome,mdata
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mdata := CTOD('  /  /  ')
mnome := SPACE(35)
lci := cci := 0
lba := 19
cba := 26
op_tela(12,10,20,64,' FORMULARIOS DIVERSOS ',,1)
opcao := 0
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        @ lci+1,cci PROMPT ' Formulario COLPOSCOPIA E CITOLOGIA ONCOTICA           '
        @ lci+2,cci PROMPT ' DENSITOMETRIA OSSEA DE COLUNA LOMBAR E FEMUR PROXIMAL '
        @ lci+3,cci PROMPT ' Formulario MAMOGRAFIA BILATERAL                       ' 
        @ lci+4,cci PROMPT ' Formulario U S G TRANSVAGINAL                         '
        @ lci+5,cci PROMPT ' Formulario HEMOGRAMA COMPLETO                         '
        @ lci+6,cci PROMPT ' CULTURA DE CONTEUDO VAGINAL COM ANTIOBIOGRAMA         '
        @ lci+7,cci PROMPT ' Formulario U S G AREA AXILAR / MAMAS                  '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        smed5frm1(1)
                CASE opcao = 2
                        smed5frm1(2)
                CASE opcao = 3
                        smed5frm1(3)
                CASE opcao = 4
                        smed5frm1(4)
                CASE opcao = 5
                        smed5frm1(5)
                CASE opcao = 6
                        smed5frm1(6)
                CASE opcao = 7
                        smed5frm1(7)
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M ********************************************
*********************
* IMPRIMI FORMULARIO 1
*********************
FUNCTION smed5frm1(mtipo)
******************************
LOCAL telaprin,i:=0,mquantd:=1
op_tela(10,10,14,70,' IMPRESSAO',,1)
WHILE .T.

        DEVPOS(01,01);DEVOUT('Nome do Cliente.....: ')
        DEVPOS(02,01);DEVOUT('Data................: ')
        DEVPOS(03,01);DEVOUT('Quantidade de copias: ')
        @ 01,23 GET mnome PICT '@!'
        @ 02,23 GET mdata
        @ 03,23 GET mquantd PICT '99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        IF mtipo = 1
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,00 SAY PADC('COLPOSCOPIA E CITOLOGIA ONCOTICA',80)
                        * @ PROW()+3,01 SAY 'HD : '
                        * @ PROW()+3,01 SAY 'CID: '
                        @ PROW()+3,01 SAY 'OBS: '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        ELSEIF mtipo = 2
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,00 SAY PADC('DENSITOMETRIA OSSEA DE COLUNA LOMBAR E FEMUR PROXIMAL',80)
                        * @ PROW()+3,01 SAY 'HD : MENOPAUSA COM OSTEOPOROSE'
                        * @ PROW()+3,01 SAY 'CID: N 95.2'
                        @ PROW()+3,01 SAY 'OBS: '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT

        ELSEIF mtipo = 3
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,00 SAY 'MAMOGRAFIA BILATERAL'
                        @ PROW()+3,01 SAY 'U S G MAMAS E AREA AXILAR'
                        *@ PROW()+3,01 SAY 'HD : DISPLASIA MAMARIA'
                        *@ PROW()+3,01 SAY 'CID: N 60'
                        @ PROW()+3,01 SAY 'OBS:_________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT

        ELSEIF mtipo = 4
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,01 SAY '[ ] U S G TRANSVAGINAL'
                        @ PROW()+3,01 SAY '[ ] U S G TIREOIDE COM DOPPLER COLOR'
                        @ PROW()+3,01 SAY '[ ] U S G ABDOMEN SUPERIOR'
                        @ PROW()+3,01 SAY '[ ] ____________________________________'
                        @ PROW()+3,01 SAY 'OBS:_________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        *@ PROW()+3,01 SAY 'HD : '
                        *@ PROW()+3,01 SAY 'CID: '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT

        ELSEIF mtipo = 5
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,01 SAY '[ ] HEMOGRAMA COMPLETO              [ ] ESTRADIOL'
                        @ PROW()+1,01 SAY '[ ] GLICEMIA DE JEJUM               [ ] PROLACTINA'
                        @ PROW()+1,01 SAY '[ ] GRUPO SANGUINEO E FATOR RH      [ ] F S H. LH'
                        @ PROW()+1,01 SAY '[ ] PROGESTERONA PLASMATICA         [ ] PROGESTERONA'
                        @ PROW()+1,01 SAY '[ ] GLICEMIA POS-PRANDIAL           [ ] T3, T4, TSH'
                        @ PROW()+1,01 SAY '[ ] V D R L                         [ ] H C G   SUBUNIDADE   BETA'
                        @ PROW()+1,01 SAY '[ ] I M F PARA RUBEOLA              [ ] P/DIAGNOSTICO DE GRAVIDEZ'
                        @ PROW()+1,01 SAY '[ ] I M F PARA TOXOPLASMOSE         [ ] FERRO'
                        @ PROW()+1,01 SAY '[ ] ANTI HIV 1 E 2                  [ ] FERRITINA'
                        @ PROW()+1,01 SAY '[ ] UREIA                           [ ] 250HVITD3'
                        @ PROW()+1,01 SAY '[ ] CREATININA                      [ ] VITAMINA B12'
                        @ PROW()+1,01 SAY '[ ] SUMARIO DE URINA                [ ] TGO'
                        @ PROW()+1,01 SAY '[ ] UROCULTURA COM ANTIBIOGRAMA     [ ] TGP'
                        @ PROW()+1,01 SAY '[ ] COLESTEROL TOTAL, HDL, LDL      [ ] BILIRRUBINAS'
                        @ PROW()+1,01 SAY '[ ] TRIGLICERIDIOS                  [ ] ACIDO URICO'
                        @ PROW()+1,01 SAY '[ ] INSULINA EM JEJUM               [ ] PCR'
                        @ PROW()+1,01 SAY '[ ] CEA                             [ ] HEMOGLOBINA GLICADA'
                        @ PROW()+1,01 SAY '[ ] CA15.3                          [ ] CA 125'
                        @ PROW()+1,01 SAY '[ ] CORTISOL                        [ ] CA 19.9'
                        @ PROW()+1,01 SAY '[ ] ZINCO'
                        @ PROW()+1,01 SAY '[ ] _________________________________________________'
                        @ PROW()+1,01 SAY '    _________________________________________________'
                        @ PROW()+1,01 SAY '    _________________________________________________'

                        @ PROW()+2,01 SAY 'OBS:_________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+6,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+4,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        ELSEIF mtipo = 6
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,00 SAY PADC('CULTURA DE CONTEUDO VAGINAL COM ANTIOBIOGRAMA + PESQUISA A FRESCO',80)
                        @ PROW()+1,00 SAY PADC('+',80)
                        @ PROW()+1,00 SAY PADC('CULTURA COM ANTIBIOGRAMA PARA UREAPLASMA',80)
                        @ PROW()+1,00 SAY PADC('+',80)
                        @ PROW()+1,00 SAY PADC('PCR PARA CLAMIDIA',80)
                        *@ PROW()+3,01 SAY 'HD : LEUCORREIA'
                        *@ PROW()+3,01 SAY 'CID: N 95.2'
                        @ PROW()+3,01 SAY 'OBS:_________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT

        ELSEIF mtipo = 7
                i := 0
                FOR i = 1 TO mquantd
                        cabec()
                        pitalico(.F.)
                        imprt(impressora,'N')
                        @ PROW()+3,05 SAY 'Solicito Para: '
                        IF ! EMPTY(mnome)
                                @ PROW(),PCOL()+2 SAY mnome
                        ENDIF
                        @ PROW()+3,01 SAY '[ ] U S G AREA AXILAR'
                        @ PROW()+3,01 SAY '[ ] U S G DE MAMAS'
                        @ PROW()+3,01 SAY '[ ] ____________________________________'
                        @ PROW()+3,01 SAY 'OBS:_________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        @ PROW()+2,01 SAY '    _________________________________________________ '
                        *@ PROW()+3,01 SAY 'HD : '
                        *@ PROW()+3,01 SAY 'CID: '
                        @ PROW()+8,30 SAY 'Recife,'
                        IF ! EMPTY(mdata)
                                @ PROW(),PCOL()+2 SAY mdata
                        ENDIF
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC('CREMEPE: '+crm,80)
                        rodape(1)
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        ENDIF
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *******************************
