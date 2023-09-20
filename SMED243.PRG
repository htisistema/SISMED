**************************
* EXCLUSAO DE MEDICAMENTOS
**************************

FUNCTION smed243
****************

LOCAL lci,cci,lba,cba,opcao,mnomedr,mnomecom,mposo,tela234

lci := 15
cci := 04
lba := 19
cba := 77
tela234 := SAVESCREEN(00,00,24,79)

WHILE .T.

        opca := SPACE(1)
        opcao := 0
        mnomedr := SPACE(20)
        mnomecom := SPACE(15)
        mposo := SPACE(50)
        Mensagem('Preencha o Campos ou Tecle <ESC> P/Retornar')

        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome Comercial ...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome da Droga ....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Posologia ........:')
/*
        *************
        SELE('dro')
        *************
        SET INTEN ON

        @ lci+1,cci+22 GET mnomecom PICT '@!'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela234)
                RETURN NIL
        ENDIF

        IF EMPTY(mnomecom)
                LOOP
        ENDIF
        ********************
        SEEK RTRIM(mnomecom)
        ********************
        IF ! FOUND()
                atencao('Medicamento nao Cadastrado no Arquivo !!!')
                LOOP
        ENDIF
*/

        WHILE .T.
                Mensagem('<ESC> Retornar - <E> Excluir Reg. - <'+setcim+'> Prox.Reg. - <'+setbaix+'> Reg.Ant.')
                mnomecom := nomecom
                mnomedr := nomedroga
                mposo := posologia
                setcor(3)
                DEVPOS(lci+1,cci+22);DEVOUT(mnomecom)
                DEVPOS(lci+2,cci+22);DEVOUT(mnomedr)
                DEVPOS(lci+3,cci+22);DEVOUT(mposo)
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
                        RESTSCREEN(00,00,24,79,tela234)
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
                LOOP
        ENDIF

        IF opcao = 'S'
                IF BLOQREG()
                        DELE
                        COMMIT
                        UNLOCK
                        atencao('Medicamento Excluido OK ')
                        RESTSCREEN(00,00,24,79,tela234)
                        RETURN NIL
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        RESTSCREEN(00,00,24,79,tela234)
                        RETURN NIL
                ENDIF
        ELSE
                RESTSCREEN(00,00,24,79,tela234)
                RETURN NIL
        ENDIF
ENDDO

********************** f i m ***********************************

