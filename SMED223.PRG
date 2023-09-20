* EXCLUSAO DE CONVENIO
***********************
FUNCTION smed223
****************
LOCAL mprg := 'SMED223',opcao

IF ! ver_nivel(mprg,'EXCLUSAO DE CONVENIOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(10,14,18,75,'EXCLUSAO DE CONVENIOS')
WHILE .T.
        exibi_prg(mprg)
        opcao := SPACE(1)
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Codigo Convenio.:')
        DEVPOS(1,25);DEVOUT('Data:')
        DEVPOS(2,2);DEVOUT('Razao Social....:')
        DEVPOS(3,2);DEVOUT('Modalidade......:')
        DEVPOS(4,2);DEVOUT('Prazo p/Consulta:')
        DEVPOS(5,2);DEVOUT('Fator...........:')
        DEVPOS(6,2);DEVOUT('Endereco........:')
        DEVPOS(7,2);DEVOUT('Fone............:')

        Mensagem('<ESC> Retornar - <E> Excluir Reg. - <'+setcim+'> Prox.Reg. - <'+setbaix+'> Reg.Ant.')

        WHILE .T.
                setcor(3)
                DEVPOS(1,20);DEVOUT(codconv)
                DEVPOS(1,31);DEVOUT(dataini)
                DEVPOS(2,20);DEVOUT(rsocial)
                DEVPOS(3,20);DEVOUT(modalidade)
                DEVPOS(4,20);DEVOUT(prazo)
                DEVPOS(5,20);DEVOUTPICT(fator,'9.9')
                DEVPOS(6,20);DEVOUT(endereco)
                DEVPOS(7,20);DEVOUT(foneconv)
                setcor(1)
                INKEY(0)
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                SKIP -1
                                atencao('Fim do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 27
                        setcor(1)
                        SET CURSOR ON
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

                IF LASTKEY() = 69 .OR. LASTKEY() = 101
                        setcor(1)
                        SET CURSOR ON
                        EXIT
                ENDIF
        ENDDO
        opcao := 'S'
        opcao := op_simnao('S','Confirma Exclusao [S/n]:')
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF opcao = 'S'
                IF BLOQREG()
                        DELE
                        COMMIT
                        UNLOCK
                        atencao('Convenio Excluido OK ')
                        wvw_lclosewindow()
                        RETURN NIL
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************** f i m ***********************************

