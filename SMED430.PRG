*****************
* MENU AGENDA
*****************

FUNCTION smed430
****************

LOCAL opcao,lci,cci,lba,cba,li,ci,lb,cb,tela400

lci := cci := 0
lba := 13
cba := 53

opcao := 0
****************************************************
* VERIFICAR NIVEL DE ACESSO DA SENHA
****************************************************
* Niveis de acesso: 1 e 2
****************************************************
IF ! nivel('1','2')
        atencao('Acesso nao Autorizado !!!')
        RETURN NIL
ENDIF
****************************************************
op_tela(10,25,13,53,'EXCLUSAO DA AGENDA')

WHILE .T.
        apaga(00,00,30,79)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Exclusao Agenda Pessoal   ' MESSAGE '** Exclusao Agenda Pessoal, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT ' Exclusao Agenda Consultas ' MESSAGE '** Exclusao Agenda Consulta e Excaixe, <ESC> p/Retorno **'
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
                        smed431()       && EXCLUSAO AGENDA PESSOAL
                CASE opcao = 2
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed432()       && EXCLUSAO AGENDA CONSULTA
       ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

