*** con24.PRG: Menu de Duplicatas (Receber)
*******************************************
FUNCTION con24(tipo_con24,tp_)
***************
LOCAL MPRG:='CON24',opcao,li_con24,ci_con24,lb_con24,cb_con24
PRIVATE mmens
li_con24 := ci_con24 := 00
IF tp_ = NIL
        lb_con24 := 12
ELSE
        lb_con24 := 04
ENDIF
cb_con24 := 21
*------------------------------------------------------------------------------------
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('saccred','cred');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('smedcli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
mmens := ' '
IF tp_ = NIL .AND. tipo_con24 = NIL
        op_tela(10,10,22,31,'Documentos A RECEBER')
ELSEIF tipo_con24 = NIL
        op_tela(10,10,17,31,'CREDITO DE CLIENTES')
ENDIF
WHILE .T.
        exibi_prg(mprg)
        IF tipo_con24 = NIL
                setcor(1)
                @ li_con24,ci_con24 PROMPT ' Inclusao Documento   '
                @ li_con24+1,ci_con24 PROMPT ' Alteracao Documento  '
                @ li_con24+2,ci_con24 PROMPT ' Exclusao Documento   '
                @ li_con24+3,ci_con24 PROMPT ' Consulta Documento   '
                @ li_con24+4,ci_con24 PROMPT ' EStorno Documento    '
                @ li_con24+5,ci_con24 PROMPT ' Baixa Documentos     '
                @ li_con24+6,ci_con24 PROMPT ' Relatorios           '
                IF tp_ = NIL
                        @ li_con24+7,ci_con24 PROMPT ' Inclusao  Varios Doc. '
                        @ li_con24+8,ci_con24 PROMPT ' Cadastro  Tipo Doc.    '
                        @ li_con24+10,ci_con24 PROMPT ' AGrupamento Documento '
                        @ li_con24+11,ci_con24 PROMPT ' Inclusao de VaLes     '
                        @ li_con24+12,ci_con24 PROMPT ' Processo de Documentos '
                ELSE
                        @ li_con24+7,ci_con24 PROMPT ' Baixa GERAL CREDITO   '
                ENDIF
                SET INTEN ON
                MENU TO opcao
                IF LASTKEY()=27
                        EXIT
                ENDIF
                IF opcao = 1
                        IF tp_ = NIL
                                con241()
                        ELSE
                                con241('C')
                        ENDIF
                ELSEIF opcao = 2
                        IF tp_ = NIL
                                con251(,'A')
                        ELSE
                                con251(,'A','C')
                        ENDIF
                ELSEIF opcao = 3
                        IF tp_ = NIL
                                con251(,'E')
                        ELSE
                                con251(,'E','C')
                        ENDIF
                //ELSEIF opcao = 3
                //        IF tp_ = NIL
                //                con243()
                //        ELSE
                //                con243('C')
                //        ENDIF
                ELSEIF opcao = 4
                        IF tp_ = NIL
                                con244()
                        ELSE
                                con244(,'C')
                        ENDIF
                ELSEIF opcao = 5
                        IF tp_ = NIL
                                con251(,'S')
                        ELSE
                                con251(,'S','C')
                        ENDIF
                ELSEIF opcao = 6
                        IF tp_ = NIL
                                con25()
                        ELSE
                                con251(,,'C')
                        ENDIF
                ELSEIF opcao = 7
                        IF tp_ = NIL
                                con42()
                        ELSE
                                con42('C')
                        ENDIF
                ELSEIF opcao = 8
                        IF tp_ = NIL
                                con2411()
                        ELSE
                                con2521()
                        ENDIF
                ELSEIF opcao = 9
                        IF tp_ = NIL
                                sactipdc()
                        ENDIF
                ELSEIF opcao = 10
                        IF tp_ = NIL
                                con252(,'G')
                        ENDIF
                ELSEIF opcao = 11
                        IF tp_ = NIL
                                con241v()
                        ENDIF
                ELSEIF opcao = 12
                        IF tp_ = NIL
                                con251(,'P')
                        ENDIF
                ENDIF
                //EXIT
        ELSEIF tp_ <> NIL
                con241('C','CX')
                RETURN NIL
        ELSE
                IF tp_ = NIL
                        con244()
                ELSE
                        con244(,'C')
                ENDIF
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

