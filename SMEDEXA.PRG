*****************
* MENU EXAMES
*****************
FUNCTION smedexa(mnm,mdat,mtipo)
****************
LOCAL mprg:='SMEDEXA',opcao
opcao := 0
op_tela(12,05,15,26,'MENU DE EXAMES')
WHILE .T.
        apaga(00,00,30,79)
        exibi_prg(mprg)
        setcor(1)
        @ 1,1 PROMPT ' Exame a Digitar    ' MESSAGE '** Exame Para Digitar, <ESC> p/Retorno **'
        @ 2,1 PROMPT ' Exame Pre-digitado ' MESSAGE '** Exames Pre-Digitado, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smedexa1(mnm,mdat,mtipo)       && ATESTADO A DIGITAR
                CASE opcao = 2
                        smedexa2(mnm,mdat,mtipo)       && ATESTADO PRE-DIGITADO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M *********************************************
* EMITE PEDIDO DE EXAME
**************************
FUNCTION smedexa1(rnome,rdata,rquant)
****************
LOCAL mprg:='SMEDEXA1',lba,cba,opcao,ml1,mnome,mcont,mquantd:=0

PRIVATE mtipo_imp:='M',mimp_tipo:=0,mporta_imp,traco,marq:=SPACE(35)

mnome := SPACE(35)
mcont := 1
lba := 21
cba := 73
traco := REPLI('-',80)
opcao := SPACE(1)
op_tela(06,06,30,73,' Pedido de Exame '+STRZERO(mcont,2))
WHILE mcont <= rquant
        Mensagem('Tecle <F10> p/Imprimir    -   <ESC> p/Abandonar')
        ml1 = SPACE(60)
        setcor(1)
        SET INTEN ON
        DEVPOS(1,2);DEVOUT('Para:')
        DEVPOS(1,44);DEVOUT('Data:')
        DEVPOS(2,2);DEVOUT('Solicito:')
        DEVPOS(23,2);DEVOUT('Quantidade de Copias:')

        @ 1,7 GET rnome PICT '@!'
        @ 1,50 GET rdata
        READ
        IF LASTKEY() = 27
                mcont = mcont + 1
                LOOP
        ENDIF
        IF EMPTY(rnome)
                LOOP
        ENDIF
        mreceita := ml1
        rreceita := MEMOEDIT(mreceita,3,06,lba-1,cba-1)
        mquantd := 1
        @ 23,23 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('SMEDHTI.REL')
                LOOP
        ENDIF
                FOR i = 1 TO mquantd
                        cabec()
                        @ PROW()+4,31 SAY 'PEDIDO DE EXAME'
                        @ PROW(),31 SAY 'PEDIDO DE EXAME'
                        @ PROW()+3,01 SAY ' '
                        @ PROW()+1,05 SAY 'Para o Sr.(a).'
                        @ PROW()+2,05 SAY rnome
                        @ PROW(),05 SAY rnome
                        @ PROW()+2,05 SAY 'Solicito:'
                        @ PROW()+1,00 SAY ' '
                        linhas := MLCOUNT(rreceita,60)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(rreceita,60,linha,,)
                                @ PROW(),12 SAY LIN
                                @ PROW()+1,12 SAY ' '
                        NEXT

                        @ PROW()+5,30 SAY 'Recife,'
                        @ PROW(),37 SAY rdata
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW(),00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC(m_set[1,46],80)
                        rodape()
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        mcont = mcont + 1
        EXIT
        IF mcont > 1
               LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************************** F I M *********************
*****************
* MENU EXAMES
*****************
FUNCTION smedexa2(mnm,mdat,mqt)
****************
LOCAL opcao
opcao := 0
op_tela(17,10,21,23,'MENU DE EXAMES')
WHILE .T.
        apaga(00,00,30,79)
        setcor(1)
        @ 1,1 PROMPT ' Exame    1 ' MESSAGE '** Exame 1 Pre-Digitado, <ESC> p/Retorno **'
        @ 2,1 PROMPT ' Exame    2 ' MESSAGE '** Exame 2 Pre-Digitado, <ESC> p/Retorno **'
        @ 3,1 PROMPT ' Exame    3 ' MESSAGE '** Exame 3 Pre-Digitado, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smedex21(mnm,mdat,mqt,1)       && ATESTADO A DIGITAR
                CASE opcao = 2
                        smedex21(mnm,mdat,mqt,2)       && ATESTADO A DIGITAR
                CASE opcao = 3
                        smedex21(mnm,mdat,mqt,3)       && ATESTADO A DIGITAR
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

************************** F I M *********************************************
* EMITE PEDIDO DE EXAME 1,2,3
**************************
FUNCTION smedex21(rnome,rdata,rquant,mtp)
****************
LOCAL lba,cba,opcao,mnome,mquantd:=0,m_matriz:={},;
      m_demo:={},i,mpoint,mmarca,mdescricao

PRIVATE mtipo_imp:='M',mimp_tipo:=0,mporta_imp,traco,marq:=SPACE(35)

mnome := SPACE(35)
lba := 21
cba := 77
traco := REPLI('-',80)
op_tela(02,04,30,77,'EMITE PEDIDO DE EXAME 1 2 3')
WHILE .T.
        opcao := SPACE(1)
        setcor(3)
        @ 2,cci TO 2,cba
        @ lba-2,cci TO lba-2,cba
        setcor(1)
        DEVPOS(1,2);DEVOUT('Para:')
        DEVPOS(1,44);DEVOUT('Data:')
        DEVPOS(lba+1,2);DEVOUT('Quantidade Copias:')
        @ 1,7 GET rnome PICT '@!' VALID IF(EMPTY(rnome),.F.,.T.)
        @ 1,50 GET rdata
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ASIZE(m_matriz,0)
        IF mtp = 1
                AADD(m_matriz,{' ','USG. DE MAMAS                                                  ',' '})
                AADD(m_matriz,{' ','USG. TRANSVAGINAL                                              ',' '})
                AADD(m_matriz,{' ','USG. OBSTETRICA                                                ',' '})
                AADD(m_matriz,{' ','USG. PELVICA                                                   ',' '})
                AADD(m_matriz,{' ','USG. ABDOMEN TOTAL                                             ',' '})
                AADD(m_matriz,{' ','MAMOGRAFIA BILATERAL                                           ',' '})
                AADD(m_matriz,{' ','DENSITOMETRIA OSSEA DO ESQUELETO TOTAL                         ',' '})
                AADD(m_matriz,{' ','DENSITOMETRIA OSSEA DE COLUNA LOMBAR E FEMUR PROXIMAL          ',' '})
                AADD(m_matriz,{' ','HD:____________________________________________________________','*'})
        ELSEIF mtp = 2
                AADD(m_matriz,{' ','COLPOSCOPIA                                                    ',' '})
                AADD(m_matriz,{' ','CITOLOGIA ANCOTICA                                             ',' '})
                AADD(m_matriz,{' ','CITOLOGIA DE SECRECAO MAMRIA "E"                               ',' '})
                AADD(m_matriz,{' ','CITOLOGIA DE SECRECAO MAMARIA "D"                              ',' '})
                AADD(m_matriz,{' ','OUTROS:________________________________________________________','*'})
        ELSEIF mtp = 3
                AADD(m_matriz,{' ','HEMOGRAMA                                                      ',' '})
                AADD(m_matriz,{' ','GLICEMIA DE JEJUM                                              ',' '})
                AADD(m_matriz,{' ','GRUPO SANGUINEO E FATOR RH                                     ',' '})
                AADD(m_matriz,{' ','IMF PARA TOXOPLASMOSE                                          ',' '})
                AADD(m_matriz,{' ','IMF PARA RUBEOLA                                               ',' '})
                AADD(m_matriz,{' ','VDRL                                                           ',' '})
                AADD(m_matriz,{' ','HCG SUB UNIDADE BETA P/DIAGNOSTICO DE PRENHEZ                  ',' '})
                AADD(m_matriz,{' ','GLICEMIA POS PRANDIAL                                          ',' '})
                AADD(m_matriz,{' ','UREIA                                                          ',' '})
                AADD(m_matriz,{' ','CREATININA                                                     ',' '})
                AADD(m_matriz,{' ','ACIDO URICO                                                    ',' '})
                AADD(m_matriz,{' ','COLESTEROL TOTAL                                               ',' '})
                AADD(m_matriz,{' ','HDL, LDL                                                       ',' '})
                AADD(m_matriz,{' ','TRIGLICERIDIOS                                                 ',' '})
                AADD(m_matriz,{' ','TS, TC, AE, TP                                                 ',' '})
                AADD(m_matriz,{' ','ESTRADIOL                                                      ',' '})
                AADD(m_matriz,{' ','FSH                                                            ',' '})
                AADD(m_matriz,{' ','LH                                                             ',' '})
                AADD(m_matriz,{' ','PROGESTERONA                                                   ',' '})
                AADD(m_matriz,{' ','PROLACTINA                                                     ',' '})
                AADD(m_matriz,{' ','T3                                                             ',' '})
                AADD(m_matriz,{' ','T4 LIVRE                                                       ',' '})
                AADD(m_matriz,{' ','TSH                                                            ',' '})
                AADD(m_matriz,{' ','SUMARIO DE URINA                                               ',' '})
                AADD(m_matriz,{' ','UROCULTURA C/ANTIBIOGRAMA                                      ',' '})
                AADD(m_matriz,{' ','PLANOTEST                                                      ',' '})
                AADD(m_matriz,{' ','CULTURA SECRECAO VAGINAL C/ANTIBIOGRAMA C/PESQUISA A FRESCO    ',' '})
                AADD(m_matriz,{' ','CULTURA C/ANTIBIOGRAMA P/CLAMIDIA                              ',' '})
                AADD(m_matriz,{' ','OUTROS:________________________________________________________','*'})
        ENDIF
        mpoint := 0
        WHILE .T.
                mensagem('Escolha o tipo de exame - <'+setesq+' '+setdir+'>Imprimir - <ESC>Aborta')
                ASIZE(m_demo,0)
                FOR i = 1 TO LEN(m_matriz)
                        AADD(m_demo,'['+m_matriz[i,1]+']  '+m_matriz[i,2])
                NEXT
                mpoint := ACHOICE(3,1,lba-1,cba-3,m_demo,,,mpoint+1)
                DO CASE
                        CASE LASTKEY() = 27
                                EXIT
                        CASE LASTKEY() = 13
                                mmarca := SPACE(1)
                                mdescricao := m_matriz[mpoint,2]
                                DEVPOS(lba-1,1);DEVOUT('[X]')
*                               @ lba-1,2 GET mmarca PICT '@!' VALID mmarca $ 'X, '
                                @ lba-1,5 GET mdescricao PICT '@!' WHEN ! EMPTY(m_matriz[mpoint,3])
                                READ
                                opcao := op_simnao('S','Confirma a inclusao do Exame [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        m_matriz[mpoint,1] := ' '
                                        m_matriz[mpoint,2] := '_______________________________________________________________'
                                ELSE
                                        m_matriz[mpoint,1] := 'X'
                                        IF ! EMPTY(m_matriz[mpoint,3])
                                                m_matriz[mpoint,2] := mdescricao
                                                AADD(m_matriz,{' ','_______________________________________________________________','*'})
                                        ENDIF
                                ENDIF
                                limpa(lba-1,1,lba-1,cba-1)
                        CASE LASTKEY() = 19 .OR. LASTKEY() = 4
                                i := 0
                                mquantd := 1
                                @ lba+1,21 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
                                READ
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                mensagem('Espere o Final da Impressao OK')
                                IF ! imp_arq('SMEDHTI.REL')
                                        LOOP
                                ENDIF
                                        FOR i = 1 TO mquantd
                                                cabec()
                                                @ PROW()+2,31 SAY 'PEDIDO DE EXAME'
                                                @ PROW(),31 SAY 'PEDIDO DE EXAME'
                                                @ PROW()+2,01 SAY ' '
                                                @ PROW()+1,05 SAY 'Para o Sr.(a).'
                                                @ PROW()+2,05 SAY rnome
                                                @ PROW(),05 SAY rnome
                                                @ PROW()+2,05 SAY 'Solicito:'
                                                linha := 0
                                                FOR linha = 1 TO LEN(m_matriz)
                                                        IF mtp = 3
                                                                @ PROW()+1,05 SAY m_demo[linha]
                                                        ELSE
                                                                @ PROW()+1,05 SAY m_demo[linha]
                                                                @ PROW()+1,05 SAY ' '
                                                        ENDIF
                                                NEXT
                                                @ PROW()+3,30 SAY 'Recife,'
                                                @ PROW(),37 SAY rdata
                                                @ PROW()+3,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                                                @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                                                @ PROW(),00 SAY PADC(m_set[1,23],80)
                                                @ PROW()+1,00 SAY PADC(m_set[1,46],80)
                                                rodape()
                                                @ PROW()+1,90 SAY ' '
                                                EJECT
                                        NEXT
                                        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
                                        IF mimp_tipo = 2
                                                FCLOSE('HTI.REL')
                                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                                        ELSEIF mimp_tipo = 1
                                                FCLOSE('HTI.REL')
                                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                                        ENDIF
                                EXIT
                ENDCASE
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************************** F I M *********************

