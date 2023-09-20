*************************
* CADASTRO DE DESPESAS
*************************
FUNCTION sacdesp
***************
LOCAL MPRG:='SACDESP'
LOCAL tela,lci,cci,lba,cba,point,pode,msele,morde,men,mcoddesp,mdesc1,;
      opcao,mmerc,f

PRIVATE mgrupo

lci := 04
cci := 01
lba := 17
cba := 79

tela := SAVESCREEN(01,00,24,79)
botao(lci,cci,lba,cba)
@ lci+2,cci+1 TO lci+2,cba-1
@ lci+1,cci+07 SAY CHR(194)
@ lba,cci+07 SAY CHR(193)
@ lci+2,cci+07 TO lba-1,cci+07

janela(lci,cba,' CONTAS Despesas ')
DEVPOS(lci+1,cci+2);DEVOUT('Cod.')
DEVPOS(lci+1,cci+09);DEVOUT('Descricao')
pode=.t.

************
USE sacdesp ALIAS cdesp NEW SHARED
SELE('cdesp');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('< > Consulta  <I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        opcao := 'S'
        point=RECNO()
        FOR f=1 TO 10
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1)
                setcor(1)
                SKIP
        NEXT f
        IF EOF()
                pode=.f.
        ENDIF
        GO point
        INKEY(0)
        DO CASE
                CASE LASTKEY()=5
                        IF ! BOF()
                                SKIP -1
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=24
                        IF ! EOF() .AND. pode=.T.
                                SKIP
                        ENDIF
                CASE LASTKEY()=18
                        IF ! BOF()
                                SKIP -9
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=3
                        IF ! EOF() .AND. pode=.T.
                                SKIP 9
                        ENDIF

                CASE LASTKEY()=27
                        RESTSCREEN(01,00,24,79,tela)
                        RELEASE mgrupo
                        RETURN NIL
                        CLOSE ALL
                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                *************
                                GO BOTT
                                *************
                                mensagem('Digite o Codigo da despesa e faca a descricao - <ESC> p/Retornar')
                                mcoddesp := SPACE(4)
                                mdesc1 := SPACE(25)
                                botao(lba+2,cci,lba+5,cba)
                                janela(lba+2,cba,' Inclusao Despesas ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '@! X.XX'
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mcoddesp)
                                        LOOP
                                ENDIF
                                GO TOP
                                *************
                                SEEK  mcoddesp
                                *************
                                IF FOUND()
                                        atencao('Despesa ja Cadastrada')
                                        LOOP
                                ENDIF
                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdesc1)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF ADIREG()
                                                Cdesp-> codigo := mcoddesp
                                                Cdesp-> desc1 := mdesc1
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                ORDSETFOCUS(3)
                                                LOOP
                                        ENDIF
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(25))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                mcoddesp := SPACE(4)
                                mdesc1 := SPACE(25)
                                botao(lba+2,cci,lba+5,cba)
                                janela(lba+2,cba,' Alteracao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '@! X.XX' VALID IF(EMPTY(mcoddesp),.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                *************
                                SEEK mcoddesp
                                *************
                                IF ! FOUND()
                                        atencao('Grupo nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF

                                mdesc1 := desc1
                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao [S/n]:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        Cdesp-> codigo := mcoddesp
                                        Cdesp-> desc1 := mdesc1
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("  ")
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(25))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        tela1 := SAVESCREEN(01,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                mcoddesp := SPACE(4)
                                mdesc1 := SPACE(25)
                                botao(lba+2,cci,lba+5,cba)
                                janela(lba+2,cba,' Exclusao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '@! X.XX' VALID IF(EMPTY(mcoddesp),.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(01,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                GO TOP
                                *************
                                *************
                                SEEK  mcoddesp
                                *************
                                IF ! FOUND()
                                        atencao('Despesa nao Cadastrado !!!')
                                        LOOP
                                ENDIF
                                IF ! BLOQARQ()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(mcoddesp)
                                DEVPOS(lba+3,cci+26);DEVOUT(desc1)
                                setcor(1)
                                opcao := op_simnao('S','Confirma Exclusao [S/n]:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 10
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(25))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1)
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
RETURN NIL
*************************** f i m *******************************************

