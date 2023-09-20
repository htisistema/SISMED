***********************************
* MENU DE ETIQUETAS
***********************************

FUNCTION smed5etq
****************

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 11
cba := 23
op_tela(08,06,11,23,' Etiquetas ')

WHILE .T.
        @ lci+1,cci+1 PROMPT '  Clientes      ' MESSAGE '*** Emissao de Etiquetas de Clientes - <ESC> p/abandonar ***'
        @ lci+2,cci+1 PROMPT '  Personalizada ' MESSAGE '*** Emissao de Etiquetas de Personalizadas - <ESC> p/abandonar ***'
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        smed5et1()
                CASE opcao = 2
                        smed5et2()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

*********************************** F I M ************************************

