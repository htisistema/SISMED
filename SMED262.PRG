*************************
* MENU ALTERACAO DE SENHAS
*************************
FUNCTION smed262
***************
LOCAL opcao,mcod_vend,mnome,vsenha1,vsenha,mdata_cad,vnivel
lci:=10
cci:=23
lba:=16
cba:=72
tela:=SAVESCREEN(00,00,24,79)
WHILE .T.
        mcod_vend = 0
        mnome = SPACE(30)
        vnivel = SPACE(1)
        opcao = SPACE(1)
        vsenha = SPACE(8)
        vsenha1 = SPACE(8)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        mensagem('Digite o Codigo do Operador a ser Alterado - <ESC> p/Abandonar')
        ***********
        SELE('sen')
        SET ORDER TO 2
        ***********
        GO TOP

        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operador__:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome__________:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nivel_________:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data__________:')
        DEVPOS(lci+5,cci+2);DEVOUT('Senha_________:')

        @ lci+1,cci+18 GET mcod_vend PICT '999'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_vend)
                LOOP
        ENDIF

        SEEK STRZERO(mcod_vend,3)

        IF ! FOUND()
                atencao('Codigo nao Cadastrado !!!')
                LOOP
        ENDIF
        mnome := snome
        vnivel := snivel
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(lci+4,cci+18);DEVOUT(sdata_cad )
        setcor(1)
        @ lci+2,cci+18 GET mnome PICT '@!'
        @ lci+3,cci+18 GET vnivel PICT '9' VALID vnivel $ '1,2'
        READ

        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('N','Deseja alterar a senha [s/N]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                WHILE .T.
                        setcor(3)
                        DEVPOS(lci+5,cci+18);DEVOUT('þþþþþþþþ')
                        setcor(1)
                        vsenha = SPACE(8)
                        vsenha1 = SPACE(8)
                        mensagem('Digite sua Senha')
                        SETCOLOR('bg/bg,bg/bg,r')
                        @ lci+25,cci+18 GET vsenha PICT '@!'
                        READ
                        setcor(1)
                        IF LASTKEY() = 27
                                vsenha = SPACE(8)
                                EXIT
                        ENDIF
                        IF EMPTY(vsenha)
                                LOOP
                        ENDIF
                        mensagem('Digite Novamente sua Senha')
                        SETCOLOR('bg/bg,bg/bg,r,x')
                        @ lci+25,cci+18 GET vsenha1 PICT '@!'
                        READ
                        setcor(1)
                        IF LASTKEY() = 27
                                vsenha = SPACE(8)
                                EXIT
                        ENDIF
                        IF vsenha = vsenha1
                                EXIT
                        ELSE
                                atencao('Senha Digitada Errada, Tente novamente !!!')
                                LOOP
                        ENDIF
                ENDDO
        ENDIF
        opcao := op_simnao('S','Confirma a Alteracao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ELSE
                IF vsenha = SPACE(8)
                        vsenha = ssenha
                ENDIF
                IF BLOQREG()
                        REPLA snome WITH mnome
                        REPLA snivel WITH vnivel
                        REPLA ssenha WITH CRIPTO(vsenha)
                        COMMIT
                        UNLOCK
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ENDIF
ENDDO
RETURN NIL
*********************** f i m ************************************

