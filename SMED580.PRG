***************************
* MENU DECL.COMPARECIMENTO
***************************
FUNCTION smed580
****************
LOCAL mprg:='SMED580',;
      opcao

opcao := 0
op_tela(12,01,15,29,' Declaracao Comparecimento ')
WHILE .T.
        apaga(00,00,30,79)
        exibi_prg(mprg)
        setcor(1)
        @ 1,1 PROMPT ' Declaracao p/Paciente     ' MESSAGE '** Declaracao de Comparecimento do Paciente, <ESC> p/Retorno **'
        @ 2,1 PROMPT ' Declaracao p/Acompanhante ' MESSAGE '** Declaracao de Comparecimento do Acompanhate, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smed581()
                CASE opcao = 2
                        smed582()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

************************** F I M *********************************************
* EMITE DECLARACAO DE COMPARECIMENTOS
*************************************
FUNCTION smed581
****************
LOCAL mprg:='SMED581',;
      lin,lin1,lin2,lin3,lin4,mdeclara,linhas := 0,mdata,i;
      ,mperiodo,extenso,opcao,mnome,mqtd:=0

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco

********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(17,10,22,73,' DECLARACAO DE COMPARECIMENTO ')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        SET INTEN ON
        mperiodo := SPACE(9)
        mdata := CTOD('  /  /  ')
        mnome := SPACE(35)
        lin1 := '         '
        lin2 := ' compareceu ao meu Consultorio  no  dia  '
        lin3 := '  Durante o  '
        lin4 := '  expediente.'
        mqtd := i := 0
        opcao := SPACE(1)
        traco := REPLI('-',80)
        apaga(23,00,23,79)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Nome.............:')
        DEVPOS(2,2);DEVOUT('Data ............:')
        DEVPOS(3,2);DEVOUT('Expediente ......:')
        DEVPOS(4,2);DEVOUT('Quantidade Copias:')
        @ 1,21 GET mnome PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mdata := DATE()
        @ 2,21 GET mdata PICT '  /  /  '
        @ 3,21 GET mperiodo PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Quantidade Copias:')
        mqtd := 1
        @ 4,21 GET mqtd PICT '9' VALID IF(EMPTY(mqtd),.F.,.T.)
        READ
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('HTI.REL')
                LOOP
        ENDIF
        mdeclara := lin1+IF(EMPTY(mnome),mnome,RTRIM(mnome))+lin2+DTOC(mdata)+lin3+IF(EMPTY(mperiodo),mperiodo,RTRIM(mperiodo))+lin4
        FOR i = 1 TO mqtd
                cabec()
                @ PROW()+4,23 SAY 'DECLARACAO  DE  COMPARECIMENTO'
                @ PROW()+4,01 SAY ' '

                linhas := MLCOUNT(mdeclara,60)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(mdeclara,60,linha,,10)
                        @ PROW()+1,10 SAY PADR(RTRIM(LIN),60)
                        @ PROW()+1,10 SAY ' '
                NEXT

                @ PROW()+6,30 SAY 'Recife,'
                @ PROW(),37 SAY mdata
                @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                rodape()
                EJECT
        NEXT
        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M  *************************************************
* EMITE DECLARACAO DE COMPARECIMENTOS DO ACOMPANHANTE
*************************************
FUNCTION smed582
****************
LOCAL mprg:='SMED582',;
      lin,lin1,lin2,lin3,lin4,lin5,mdeclara,linhas := 0,mdata,i;
      ,mperiodo,extenso,opcao,mnome,mqtd:=0,mnome_aco

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco

********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(16,10,22,73,' DECLARACAO DE COMPARECIMENTO ')
WHILE .T.
        SET INTEN ON
        mperiodo := SPACE(9)
        mdata := CTOD('  /  /  ')
        mnome := mnome_aco := SPACE(35)
        lin1 := '         '
        lin2 := ' compareceu ao meu Consultorio  no  dia  '
        lin3 := '  Durante o  '
        lin4 := '  expediente acompanhando a Sra.'
        lin5 := '  para atendimento medico.'
        mqtd := i := 0
        opcao := SPACE(1)
        traco := REPLI('-',80)
        apaga(00,00,30,79)
        exibi_prg(mprg)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Nome Acopanhante.:')
        DEVPOS(2,2);DEVOUT('Nome Paciente....:')
        DEVPOS(3,2);DEVOUT('Data ............:')
        DEVPOS(4,2);DEVOUT('Expediente ......:')
        DEVPOS(5,2);DEVOUT('Quantidade Copias:')
        @ 1,21 GET mnome_aco PICT '@!'
        @ 2,21 GET mnome PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mdata := DATE()
        @ 3,21 GET mdata PICT '  /  /  '
        @ 4,21 GET mperiodo PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Quantidade Copias:')
        mqtd := 1
        @ 5,21 GET mqtd PICT '9' VALID IF(EMPTY(mqtd),.F.,.T.)
        READ
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('HTI.REL')
                LOOP
        ENDIF
        mdeclara := lin1+IF(EMPTY(mnome_aco),mnome_aco,RTRIM(mnome_aco))+lin2+DTOC(mdata)+lin3+IF(EMPTY(mperiodo),mperiodo,RTRIM(mperiodo))+lin4+IF(EMPTY(mnome),mnome,RTRIM(mnome))+lin5
        FOR i = 1 TO mqtd
                cabec()
                @ PROW()+4,23 SAY 'DECLARACAO  DE  COMPARECIMENTO'
                @ PROW()+4,01 SAY ' '

                linhas := MLCOUNT(mdeclara,60)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(mdeclara,60,linha,,10)
                        @ PROW()+1,10 SAY PADR(RTRIM(LIN),60)
                        @ PROW()+1,10 SAY ' '
                NEXT

                @ PROW()+6,30 SAY 'Recife,'
                @ PROW(),37 SAY mdata
                @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                rodape()
                EJECT
        NEXT
        SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M  *************************************************

