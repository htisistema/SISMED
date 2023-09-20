*****************
* MENU ATESTADOS
*****************
FUNCTION smed560
****************
LOCAL mprg:='SMED560',;
      opcao

cba := 23
opcao := 0
op_tela(12,10,15,23,'MENU ATESTADOS')
WHILE .T.
        exibi_prg(mprg)        
        setcor(1)
        @ 1,1 PROMPT ' Atestado 1 ' MESSAGE '** Atestado Pre-Digitado, <ESC> p/Retorno **'
        @ 2,1 PROMPT ' Atestado 2 ' MESSAGE '** Atestado Para Digitar, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        smed561()       && ATESTADO PRE-DIGITADO
                CASE opcao = 2
                        smed562()       && ATESTADO A DIGITAR
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M *********************************************
* EMITE ATESTADO
**************************
FUNCTION smed562
****************
LOCAL mprg:='SMED562',;
      opcao,matesta,ratesta,mlin,mdata,mquantd

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco

traco := REPLI('-',80)
opcao := SPACE(1)
mlin := SPACE(10)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(06,10,30,73,' ATESTADO ')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mdata := DATE()
        Mensagem('Tecle <F10> p/Imprimir    -   <ESC> p/Abandonar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Data do Atestado:')
        DEVPOS(23,02);      DEVOUT('Quantidade Copia:')
        @ 1,21 GET mdata
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        matesta := mlin
        ratesta := MEMOEDIT(matesta,2,2,20,72,,,,,,10)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mquantd := 1
        @ 23,21 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
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
                        imprt('M','E',4)
                        @ PROW(),13 SAY 'A T E S T A D O'
                        imprt('M','N')
                        @ PROW()+4,01 SAY ' '
                        linhas := MLCOUNT(ratesta,60)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(ratesta,60,linha,,)
                                @ PROW()+1,10 SAY LIN
                                @ PROW()+1,10 SAY ' '
                        NEXT

                        @ PROW()+4,30 SAY 'Recife,'
                        @ PROW(),37 SAY mdata
                        @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                        rodape()
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M ***********************************
* EMITE ATESTADO
****************************
FUNCTION smed561
*****************
LOCAL mprg:='SMED561',;
      lin,lin1,lin2,lin3,mnome,mdia,linhas := 0,extenso1;
      ,opcao,mcid,mdata,mquantd,mdiag1,mdiag2

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco
mnome := SPACE(35)
mdia := SPACE(2)
mcid := SPACE(20)
mdiag1 := mdiag2 := SPACE(40)
/*
lin1 := '          Atesto para os devidos fins que a(o) Sra.(o) '
lin2 := ' necessita de abono de suas faltas ao trabalho por '
lin3 := ' dias, a contar da data de hoje, por motivo de doenca.'
*/
lin1 := '          Atesto para os devidos fins que a(o) Sra.(o) '
lin2 := ' por motivo de doenca encontra-se sob os meus cuidados medicos e devera permanecer de repouso durante '
lin3 := ' dia(s), a partir desta data.'
traco := REPLI('-',80)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(14,10,22,73,' ATESTADO ')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mdata := DATE()
        mensagem('Preencha os Campos  ou <ESC> p/Retornar')
        opcao := 0
        setcor(1)
        SET INTEN ON
        DEVPOS(01,01);DEVOUT('Nome:')
        DEVPOS(02,01);DEVOUT('Dias Afastado ...:')
        DEVPOS(03,01);DEVOUT('CID:')
        DEVPOS(03,26);DEVOUT('Data do Atestado:')
        DEVPOS(04,01);DEVOUT('Diagnostico')
        DEVPOS(07,01);DEVOUT('Quantidade de Copias:')
        @ 01,06 GET mnome PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        @ 02,20 GET mdia PICT '99'
        @ 03,06 GET mcid
        @ 03,44 GET mdata
        @ 05,01 GET mdiag1
        @ 06,01 GET mdiag2
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mquantd := 1
        @ 07,COL()+1 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('HTI.REL')
                LOOP
        ENDIF
        rrecibo := lin1+IF(EMPTY(mnome),mnome,RTRIM(mnome))+lin2+mdia+lin3
                FOR i = 1 TO mquantd
                        cabec()
                        imprt('M','E',4)
                        @ PROW(),13 SAY 'A T E S T A D O'
                        imprt('M','N')
                        @ PROW()+4,01 SAY ' '

                        linhas := MLCOUNT(rrecibo,60)

                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(rrecibo,60,linha,,10)
                                @ PROW()+1,12 SAY PADR(RTRIM(LIN),60)
                                @ PROW()+1,12 SAY ' '
                        NEXT

                        @ PROW()+2,12 SAY 'CID:'
                        @ PROW(),17 SAY mcid
                        @ PROW()+2,12 SAY 'DIAGNOSTICO:'
                        @ PROW(),25 SAY mdiag1
                        @ PROW()+1,25 SAY mdiag2
                        @ PROW()+3,30 SAY 'Recife,'
                        @ PROW(),37 SAY mdata
                        @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                        rodape()
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M *******************************************

