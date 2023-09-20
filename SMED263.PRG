*************************
* MENU EXCLUSAO DE SENHAS
*************************

FUNCTION smed263
***************

LOCAL opcao,mcod_vend,vsenha

lci:=10
cci:=23
lba:=16
cba:=72
tela:=SAVESCREEN(00,00,24,79)

WHILE .T.
        mcod_vend = 0
        mnome = SPACE(30)
        vsenha := SPACE(8)
        opcao = SPACE(1)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        mensagem('Digite o Codigo do Operador a ser Excluido - <ESC> p/Abandonar')
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
        setcor(3)
        DEVPOS(lci+5,cci+18);DEVOUT('þþþþþþþþ')
        setcor(1)

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
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(lci+2,cci+18);DEVOUT(snome)
        DEVPOS(lci+3,cci+18);DEVOUT(snivel)
        DEVPOS(lci+4,cci+18);DEVOUT(sdata_cad )
        setcor(1)
        opcao := op_simnao('S','Confirma a Exclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ELSE
                IF BLOQARQ()
                        DELE
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

