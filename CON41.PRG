**** CON41.PRG: Menu de Relatorios  (Pagar)
***
********************************************
FUNCTION con41
***************
LOCAL MPRG:='CON41',op41,lci,cci,lba,cba

lci := cci := 00
lba := 05
cba := 34

op41 := 0
op_tela(10,10,15,44,' Relatorio Documento  A PAGAR ')

WHILE .T.
        exibi_prg(mprg)
        @ lci,cci PROMPT " 0-> Documentos Recebidos            "
        @ lci+1,cci PROMPT " 1-> Documentos a Vencer/Vencidos  "
        @ lci+2,cci PROMPT " 2-> Documentos Pagas              "
        @ lci+3,cci PROMPT " 3-> Emissao de Recibo Pagamento   "
        @ lci+4,cci PROMPT " 4-> Documento a Receber X a Pagar "
        MENU TO op41
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE op41=1
                        con411()
                CASE op41=2
                        con413()
                CASE op41=3
                        con414()
                CASE op41=4
                        con418()
                CASE op41=5
                        con419()
        ENDCASE
ENDDO
RETURN NIL










