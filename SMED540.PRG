****************
* MENU RECEITAS
*****************
FUNCTION smed540(vnome,vdata,vquantd)
****************
LOCAL mprg:='SMED540'
LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 16
cba := 23
opcao := 0
*********************************************
IF ! abriarq('smedrece','rece');RETURN NIL;ENDIF
IF ! abriarq('smeddro','dro');RETURN NIL;ENDIF
/*
IF ! ABRARQ('rece')
        abriarq('smedrece','rece')
        * SET INDEX TO rececod
ENDIF
IF ! ABRARQ('dro')
        abriarq('smeddro','dro')
        * SET INDEX TO droncom,drocod
ENDIF
*/
*********************************************
op_tela(12,10,16,23,' Receitas ')
WHILE .T.
        apaga(00,00,30,79)
        exibi_prg(mprg)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' p/Cod.Med. ' MESSAGE '*** Fazer Receita p/Cod.dos Remedios - <ESC> p/Retornar ***'
        @ lci+2,cci+1 PROMPT ' p/Codigo   ' MESSAGE '*** p/Codigo da Receita - <ESC> p/Retornar ***'
        @ lci+3,cci+1 PROMPT ' Descrever  ' MESSAGE '*** Receita a Digitar - <ESC> p/Retornar ***'

        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smed541(vnome,vdata,vquantd)       && EMISSAO DE RECEITA POR COD.MEDICAMENTO
                        EXIT
                CASE opcao = 2
                        smed542(vnome,vdata,vquantd)       && EMISSAO DE RECEITA POR COD.DE RECEITA
                        EXIT
                CASE opcao = 3
                        receita(vnome,vdata,vquantd)
                        EXIT
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** F I M ********************************************8
