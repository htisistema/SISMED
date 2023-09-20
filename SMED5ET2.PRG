***********************************
* MENU DE ETIQUETAS PERSONALIZADAS
***********************************

FUNCTION smed5et2()
****************

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 19
cba := 25
*----------------------------------------------
CLOSE ALL
//abriarq('smedprn','prn')
*--------------------------------------------------
op_tela(15,06,19,25,'ETIQUETAS PRODUTOS')
WHILE .T.
        setcor(1)
        @ lci+2,cci+1 PROMPT ' Etiqueta Normal  ' MESSAGE '*** Emissao de Etiquetas Padrao - <ESC> p/abandonar ***'
        @ lci+3,cci+1 PROMPT ' Etiqueta Pequena ' MESSAGE '*** Emissao de Etiquetas Pequenas - <ESC> p/abandonar ***'
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        smed5e21()
                CASE opcao = 2
                        smed5e22()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************

