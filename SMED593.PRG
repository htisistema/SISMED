*****************
* MENU DAS ESTATISTICAS
*****************

FUNCTION smed593
****************

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 14
cba := 69
opcao := 0
*********************************************
abriarq('smedclin','clin')
*********************************************
op_tela(11,47,14,69,'MENU DAS ESTATISTICAS')
WHILE .T.
        apaga(00,00,30,79)
        setcor(1)

        @ lci+1,cci+1 PROMPT '  Por Diagnosticos   ' MESSAGE '** Lista CLIENTES com este DIAGNOSTICO no Periodo, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT '  Por Medicamentos   ' MESSAGE '** Lista CLIENTES que tomou este MEDICAMENTO no Periodo, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smed5932()              && LIST.TODOS OS DIAGNOSTICOS
                CASE opcao = 2
                        smed5933()              && LIST.TODOS OS CLIENTE COM MEDICAMENTOS
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

************************** F I M ********************************************

