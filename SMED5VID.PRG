*************************
* MENU VIDEOLARINGOSCOPIA E OUTROS
*************************
FUNCTION smed5vid
*****************
LOCAL mprg:='SMED5VID',opcao,lci,cci,lba,cba,tela500
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := cci := 0
lba := 17
cba := 39
mnome := SPACE(35)
mdata := DATE()
msinal := SPACE(1)
opcao := 0
op_tela(13,18,17,39,' RELATORIO DE VIDEOS ')
*********************************************
CLOSE ALL
abriarq('smedcli','cli')
abriarq('smedconv','conv')
abriarq('smedtab','tab')
*********************************************
WHILE .T.
        exibi_prg(mprg)
        @ lci+1,cci+1 PROMPT ' Videolaringoscopia ' 
        @ lci+2,cci+1 PROMPT ' Videorinoscopia    ' 
        @ lci+3,cci+1 PROMPT ' Videootoscopia     ' 
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5vid1()               && LIST.CADASTRO INDIVIDUAL
                CASE opcao = 2
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5vid2()               &&
                CASE opcao = 3
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5vid3()               &&
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL 
************************** f i m  ******************************************************
*************************************
* EMITE EXAME VIDEOLARINGOSCOPIA
*************************************
FUNCTION smed5vid1

LOCAL lci,cci,lba,cba,mnome,mlin1,mlin2,mlin3,mlin4,mlin5,lin6,;
      mlin7,mlin8,mlin9,mlin10,mlin11,mlin12,mlin13,mlin14,mlin15,mlin16,mlin17,;
      mlin18,mlin19,mdata

PRIVATE traco

lci := cci := 0
lba := 22
cba := 78
op_tela(05,02,27,78,' Exame Videolaringoscopia ')
traco := REPLI('-',80)
WHILE .T.
        SET INTEN ON
        mdata := DATE()
        mnome := SPACE(35)
        mlin1 := SPACE(60)
        mlin2 := SPACE(60)
        mlin3 := SPACE(60)
        mlin4 := SPACE(60)
        mlin5 := SPACE(60)
        mlin6 := SPACE(60)
        mlin7 := SPACE(60)
        mlin8 := SPACE(60)
        mlin9 := SPACE(60)
        mlin10 := SPACE(60)
        mlin11 := SPACE(60)
        mlin12 := SPACE(60)
        mlin13 := SPACE(60)
        mlin14 := SPACE(60)
        mlin15 := SPACE(60)
        mlin16 := SPACE(60)
        mlin17 := SPACE(60)
        mlin18 := SPACE(60)
        mlin19 := SPACE(60)

        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Nome.........:')
        DEVPOS(lci+1,cci+53);DEVOUT('Data:')
        DEVPOS(lci+2,cci+1);DEVOUT('Anamnese.....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Aparelho.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Medicamento..:')
        DEVPOS(lci+6,cci+1);DEVOUT('Laringoscopia:')
        DEVPOS(lci+13,cci+1);DEVOUT('Laringopseudoestroboscopia:')
        DEVPOS(lci+18,cci+1);DEVOUT('Conclusao...:')
        @ lci+1,cci+16 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
        @ lci+1,cci+59 GET mdata
        @ lci+2,cci+16 GET mlin1
        @ lci+3,cci+16 GET mlin2
        @ lci+4,cci+16 GET mlin3
        @ lci+5,cci+16 GET mlin4
        @ lci+6,cci+16 GET mlin5
        @ lci+7,cci+16 GET mlin6
        @ lci+8,cci+16 GET mlin7
        @ lci+9,cci+16 GET mlin8
        @ lci+10,cci+16 GET mlin9
        @ lci+11,cci+16 GET mlin10
        @ lci+12,cci+16 GET mlin11
        @ lci+14,cci+16 GET mlin12
        @ lci+15,cci+16 GET mlin13
        @ lci+16,cci+16 GET mlin14
        @ lci+17,cci+16 GET mlin15
        @ lci+18,cci+16 GET mlin16
        @ lci+19,cci+16 GET mlin17
        @ lci+20,cci+16 GET mlin18
        @ lci+21,cci+16 GET mlin19
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF

        cabec()
        @ PROW()+1,00 SAY PADC('EXAME DE VIDEOLARINGOSCOPIA',80)
        @ PROW(),00 SAY PADC('EXAME DE VIDEOLARINGOSCOPIA',80)
        @ PROW()+3,02 SAY 'Nome ..........:'
        @ PROW(),02 SAY 'Nome ..........:'
        @ PROW(),18 SAY mnome


        @ PROW()+2,02 SAY 'Anamnese:'
        @ PROW(),02 SAY 'Anamnese:'
        @ PROW()+1,06 SAY mlin1
        @ PROW()+1,06 SAY mlin2

        @ PROW()+2,02 SAY 'Aparelho Utilizado:'
        @ PROW(),02 SAY 'Aparelho Utilizado:'
        @ PROW()+1,06 SAY mlin3

        @ PROW()+2,02 SAY 'Medicamento Utilizado:'
        @ PROW(),02 SAY 'Medicamento Utilizado:'
        @ PROW()+1,06 SAY mlin4

        @ PROW()+2,02 SAY 'Laringoscopia:'
        @ PROW(),02 SAY 'Laringoscopia:'
        @ PROW()+1,06 SAY mlin5
        @ PROW()+1,06 SAY mlin6
        @ PROW()+1,06 SAY mlin7
        @ PROW()+1,06 SAY mlin8
        @ PROW()+1,06 SAY mlin9
        @ PROW()+1,06 SAY mlin10
        @ PROW()+1,06 SAY mlin11

        @ PROW()+2,02 SAY 'Laringopseudoestroboscopia:'
        @ PROW(),02 SAY 'Laringopseudoestroboscopia:'
        @ PROW()+1,06 SAY mlin12
        @ PROW()+1,06 SAY mlin13
        @ PROW()+1,06 SAY mlin14
        @ PROW()+1,06 SAY mlin15

        DEVPOS(PROW()+2,02);DEVOUT('Conclusao:')
        DEVPOS(PROW(),02);DEVOUT('Conclusao:')
        @ PROW()+1,06 SAY mlin16
        @ PROW()+1,06 SAY mlin17
        @ PROW()+1,06 SAY mlin18
        @ PROW()+1,06 SAY mlin19
        @ PROW()+3,35 SAY 'Recife,'
        @ PROW(),42 SAY mdata
        pitalico(.T.)
        @ PROW()+5,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY PADC(crm,80)
        rodape()
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(00,00,24,79,tela)
        CLOSE ALL
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
******************************* F I M  *************************************************
*************************************
* EMITE EXAME VIDEORINOSCOPIA
*************************************

FUNCTION smed5vid2


LOCAL telaprin,tela,lci,cci,lba,cba,mnome,mlin1,mlin2,mlin3,mlin4,mlin5,lin6,;
      mlin7,mlin8,mlin9,mlin10,mlin11,mlin12,mlin13,mlin14,mlin15,mlin16,mlin17,;
      mlin18,mlin19,mdata

PRIVATE traco

lci := cci := 0
lba := 22
cba := 78
op_tela(05,02,27,78,' Exame Videorinoscopia ')
traco := REPLI('-',80)
WHILE .T.
        SET INTEN ON
        mdata := DATE()
        mnome := SPACE(35)
        mlin1 := SPACE(60)
        mlin2 := SPACE(60)
        mlin3 := SPACE(60)
        mlin4 := SPACE(60)
        mlin5 := SPACE(60)
        mlin6 := SPACE(60)
        mlin7 := SPACE(60)
        mlin8 := SPACE(60)
        mlin9 := SPACE(60)
        mlin10 := SPACE(60)
        mlin11 := SPACE(60)
        mlin12 := SPACE(60)
        mlin13 := SPACE(60)
        mlin14 := SPACE(60)
        mlin15 := SPACE(60)
        mlin16 := SPACE(60)
        mlin17 := SPACE(60)
        mlin18 := SPACE(60)
        mlin19 := SPACE(60)

        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Nome.........:')
        DEVPOS(lci+1,cci+53);DEVOUT('Data:')
        DEVPOS(lci+2,cci+1);DEVOUT('Aparelho.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Medicamento..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Videorinoscopia:')
        DEVPOS(lci+15,cci+1);DEVOUT('Conclusao...:')
        @ lci+1,cci+16 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
        @ lci+1,cci+59 GET mdata
        @ lci+2,cci+16 GET mlin1
        @ lci+3,cci+16 GET mlin2
        @ lci+5,cci+16 GET mlin3
        @ lci+6,cci+16 GET mlin4
        @ lci+7,cci+16 GET mlin5
        @ lci+8,cci+16 GET mlin6
        @ lci+9,cci+16 GET mlin7
        @ lci+10,cci+16 GET mlin8
        @ lci+11,cci+16 GET mlin9
        @ lci+12,cci+16 GET mlin10
        @ lci+13,cci+16 GET mlin11
        @ lci+14,cci+16 GET mlin12
        @ lci+15,cci+16 GET mlin13
        @ lci+16,cci+16 GET mlin14
        @ lci+17,cci+16 GET mlin15
        @ lci+18,cci+16 GET mlin16
        @ lci+19,cci+16 GET mlin17
        @ lci+20,cci+16 GET mlin18
        @ lci+21,cci+16 GET mlin19
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        cabec()
        @ PROW()+1,00 SAY PADC('EXAME DE VIDEORINOSCOPIA',80)
        @ PROW(),00 SAY PADC('EXAME DE VIDEORINOSCOPIA',80)
        @ PROW()+3,02 SAY 'Nome ..........:'
        @ PROW(),02 SAY 'Nome ..........:'
        @ PROW(),18 SAY mnome

        @ PROW()+2,02 SAY 'Aparelho Utilizado:'
        @ PROW(),02 SAY 'Aparelho Utilizado:'
        @ PROW()+1,06 SAY mlin1

        @ PROW()+2,02 SAY 'Medicamento Utilizado:'
        @ PROW(),02 SAY 'Medicamento Utilizado:'
        @ PROW()+1,06 SAY mlin2

        @ PROW()+2,02 SAY 'Videorinoscopia:'
        @ PROW(),02 SAY 'Videorinoscopia:'
        @ PROW()+1,06 SAY mlin3
        @ PROW()+1,06 SAY mlin4
        @ PROW()+1,06 SAY mlin5
        @ PROW()+1,06 SAY mlin6
        @ PROW()+1,06 SAY mlin7
        @ PROW()+1,06 SAY mlin8
        @ PROW()+1,06 SAY mlin9
        @ PROW()+1,06 SAY mlin10
        @ PROW()+1,06 SAY mlin11
        @ PROW()+1,06 SAY mlin12


        DEVPOS(PROW()+2,02);DEVOUT('Conclusao:')
        DEVPOS(PROW(),02);DEVOUT('Conclusao:')
        @ PROW()+1,06 SAY mlin13
        @ PROW()+1,06 SAY mlin14
        @ PROW()+1,06 SAY mlin15
        @ PROW()+1,06 SAY mlin16
        @ PROW()+1,06 SAY mlin17
        @ PROW()+1,06 SAY mlin18
        @ PROW()+1,06 SAY mlin19
        @ PROW()+3,35 SAY 'Recife,'
        @ PROW(),42 SAY mdata
        pitalico(.T.)
        @ PROW()+5,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY PADC(crm,80)
        rodape()
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(00,00,24,79,tela)
        CLOSE ALL
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
******************************* F I M  *************************************************
*************************************
* EMITE EXAME VIDEOOTOSCOPIA
*************************************

FUNCTION smed5vid3


LOCAL telaprin,tela,lci,cci,lba,cba,mnome,mlin1,mlin2,mlin3,mlin4,mlin5,lin6,;
      mlin7,mlin8,mlin9,mlin10,mlin11,mlin12,mlin13,mlin14,mlin15,mlin16,mlin17,;
      mlin18,mlin19,mdata

PRIVATE traco

lci := cci := 0
lba := 22
cba := 78
op_tela(05,02,27,78,' Exame Videootoscopia ')
traco := REPLI('-',80)
WHILE .T.
        SET INTEN ON
        mdata := DATE()
        mnome := SPACE(35)
        mlin1 := SPACE(60)
        mlin2 := SPACE(60)
        mlin3 := SPACE(60)
        mlin4 := SPACE(60)
        mlin5 := SPACE(60)
        mlin6 := SPACE(60)
        mlin7 := SPACE(60)
        mlin8 := SPACE(60)
        mlin9 := SPACE(60)
        mlin10 := SPACE(60)
        mlin11 := SPACE(60)
        mlin12 := SPACE(60)
        mlin13 := SPACE(60)
        mlin14 := SPACE(60)
        mlin15 := SPACE(60)
        mlin16 := SPACE(60)
        mlin17 := SPACE(60)
        mlin18 := SPACE(60)
        mlin19 := SPACE(60)

        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Nome.........:')
        DEVPOS(lci+1,cci+53);DEVOUT('Data:')
        DEVPOS(lci+2,cci+1);DEVOUT('Aparelho.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Medicamento..:')
        DEVPOS(lci+4,cci+1);DEVOUT('Videootoscopia:')
        DEVPOS(lci+15,cci+1);DEVOUT('Conclusao...:')
        @ lci+1,cci+16 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
        @ lci+1,cci+59 GET mdata
        @ lci+2,cci+16 GET mlin1
        @ lci+3,cci+16 GET mlin2
        @ lci+5,cci+16 GET mlin3
        @ lci+6,cci+16 GET mlin4
        @ lci+7,cci+16 GET mlin5
        @ lci+8,cci+16 GET mlin6
        @ lci+9,cci+16 GET mlin7
        @ lci+10,cci+16 GET mlin8
        @ lci+11,cci+16 GET mlin9
        @ lci+12,cci+16 GET mlin10
        @ lci+13,cci+16 GET mlin11
        @ lci+14,cci+16 GET mlin12
        @ lci+15,cci+16 GET mlin13
        @ lci+16,cci+16 GET mlin14
        @ lci+17,cci+16 GET mlin15
        @ lci+18,cci+16 GET mlin16
        @ lci+19,cci+16 GET mlin17
        @ lci+20,cci+16 GET mlin18
        @ lci+21,cci+16 GET mlin19
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        cabec()
        @ PROW()+1,00 SAY PADC('EXAME DE VIDEOOTOSCOPIA',80)
        @ PROW(),00 SAY PADC('EXAME DE VIDEOOTOSCOPIA',80)
        @ PROW()+3,02 SAY 'Nome ..........:'
        @ PROW(),02 SAY 'Nome ..........:'
        @ PROW(),18 SAY mnome

        @ PROW()+2,02 SAY 'Aparelho Utilizado:'
        @ PROW(),02 SAY 'Aparelho Utilizado:'
        @ PROW()+1,06 SAY mlin1

        @ PROW()+2,02 SAY 'Medicamento Utilizado:'
        @ PROW(),02 SAY 'Medicamento Utilizado:'
        @ PROW()+1,06 SAY mlin2

        @ PROW()+2,02 SAY 'Videootoscopia:'
        @ PROW(),02 SAY 'Videootoscopia:'
        @ PROW()+1,06 SAY mlin3
        @ PROW()+1,06 SAY mlin4
        @ PROW()+1,06 SAY mlin5
        @ PROW()+1,06 SAY mlin6
        @ PROW()+1,06 SAY mlin7
        @ PROW()+1,06 SAY mlin8
        @ PROW()+1,06 SAY mlin9
        @ PROW()+1,06 SAY mlin10
        @ PROW()+1,06 SAY mlin11
        @ PROW()+1,06 SAY mlin12


        DEVPOS(PROW()+2,02);DEVOUT('Conclusao:')
        DEVPOS(PROW(),02);DEVOUT('Conclusao:')
        @ PROW()+1,06 SAY mlin13
        @ PROW()+1,06 SAY mlin14
        @ PROW()+1,06 SAY mlin15
        @ PROW()+1,06 SAY mlin16
        @ PROW()+1,06 SAY mlin17
        @ PROW()+1,06 SAY mlin18
        @ PROW()+1,06 SAY mlin19
        @ PROW()+3,35 SAY 'Recife,'
        @ PROW(),42 SAY mdata
        pitalico(.T.)
        @ PROW()+5,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY PADC(crm,80)
        rodape()
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(00,00,24,79,tela)
        CLOSE ALL
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
******************************* F I M  *************************************************

