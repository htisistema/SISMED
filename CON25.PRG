*** CON25.PRG: MENU Baixa de Duplicatas (Receber)
*********************************************
FUNCTION con25(tp)
***************
LOCAL MPRG:='CON25',;
      lba,cba,tela,tela1,opcao

lba = 05
cba = 29
*------------------------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
IF tp <> NIL
        op_tela(0,0,lba,cba,' Baixa DOC. A RECEBER *** CAIXA ***')
ELSE
        op_tela(0,0,lba,cba,' Baixa DOC. A RECEBER *** MOVIMENTO ***')
ENDIF

WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        setcor(1)
        @ 0,0 PROMPT ' 0-> Individual Documento    '
        @ 1,0 PROMPT ' 1-> Geral Documento         '
        @ 2,0 PROMPT ' 2-> Estorno Documento       '
        @ 3,0 PROMPT ' 3-> Transferencia Documento '
        @ 4,0 PROMPT ' 4-> Baixa Parcial Documento '
        @ 5,0 PROMPT ' 5-> Demonstrativo Debito    '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                        con251(tp)
                CASE opcao = 2
                        con252(tp)
                CASE opcao = 3
                        con251(,'S')
                CASE opcao = 4
                        con253(tp)
                CASE opcao = 5 .AND. tp = NIL
                        con2511()
                CASE opcao = 6
                        con252(,'*')
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
