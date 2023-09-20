*************************
* CADASTRO DE DESPESAS
*************************
FUNCTION smed2des
***************

LOCAL tela,lci,cci,lba,cba,point,pode,msele,morde,men,;
      opcao,mmerc,f

PRIVATE mgrupo

lci := 07
cci := 01
lba := 17
cba := 79

****************************************************
* VERIFICAR NIVEL DE ACESSO DA SENHA
****************************************************
* Niveis de sao: 1 e 2 e 3
****************************************************

IF ! nivel('1','5','2')
        atencao('Usuario nao Autorizado !!!')
        RETURN NIL
ENDIF

****************************************************

tela := SAVESCREEN(00,00,24,79)
setcor(3)
botao(lci,cci,lba,cba)
@ lci+2,cci+1 TO lci+2,cba-1
@ lci+1,cci+07 SAY CHR(194)
@ lba,cci+07 SAY CHR(193)
@ lci+2,cci+07 TO lba-1,cci+07
setcor(1)

janela(lci,cba,' Despesas ')
DEVPOS(lci+1,cci+2);DEVOUT('Cod.')
DEVPOS(lci+1,cci+09);DEVOUT('Descricao')
pode=.t.

************
CLOSE ALL
abriarq('smedde','desp')
* SET INDEX TO smedde
SELE('desp')
ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        mensagem('< > Consulta  <I>nclusao  <A>lteracao  <E>xclusao  <ESC> Retorna')
        opcao := 'S'
        point=RECNO()
        FOR f=1 TO 07
                IF EOF()
                        setcor(3)
                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                        setcor(1)

                        setcor(3)
                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                        setcor(1)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                setcor(1)

                setcor(3)
                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1+LEFT(desc2,28))
                setcor(1)
                SKIP
        NEXT f
        IF EOF()
                pode=.f.
        ENDIF
        GO point
        SET CURSOR OFF
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
                        RESTSCREEN(00,00,24,79,tela)
                        CLOSE ALL
                        RETURN NIL

                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(00,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da despesa e faca a descricao - <ESC> p/Retornar')
                                mcoddesp := 0
                                mdesc1 := SPACE(40)
                                mdesc2 := SPACE(40)
                                setcor(3)
                                botao(lba+2,cci,lba+5,cba)
                                @ lba+2,cci+13 SAY CHR(194)
                                @ lba+3,cci+13 SAY CHR(179)
                                @ lba+4,cci+13 SAY CHR(179)
                                @ lba+5,cci+13 SAY CHR(193)
                                setcor(1)
                                janela(lba+2,cba,' Inclusao Despesas ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mgrupo=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mcoddesp)
                                        LOOP
                                ENDIF

                                *************
                                SELE('desp')
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                *************
                                SEEK  STRZERO(mcoddesp,3)
                                *************
                                IF FOUND()
                                        atencao('Despesa ja Cadastrada')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                setcor(1)

                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                @ lba+4,cci+26 GET mdesc2 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF EMPTY(mdesc1)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF ADIREG()
                                                desp-> codigo := STRZERO(mcoddesp,3)
                                                desp-> desc1 := mdesc1
                                                desp-> desc2 := mdesc2
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                ORDSETFOCUS(3)
                                                LOOP
                                        ENDIF
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 07
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                        setcor(1)

                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                setcor(1)

                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1+LEFT(desc2,28))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(00,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Alterado - <ESC> p/Retornar')
                                mcoddesp := 0
                                mdesc1 := SPACE(40)
                                mdesc2 := SPACE(40)
                                setcor(3)
                                botao(lba+2,cci,lba+5,cba)
                                @ lba+2,cci+13 SAY CHR(194)
                                @ lba+3,cci+13 SAY CHR(179)
                                @ lba+4,cci+13 SAY CHR(179)
                                @ lba+5,cci+13 SAY CHR(193)
                                setcor(1)
                                janela(lba+2,cba,' Alteracao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mcoddesp=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                SELE('desp')
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                *************
                                SEEK  STRZERO(mcoddesp,3)
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
                                mdesc2 := desc2
                                setcor(3)
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                setcor(1)

                                @ lba+3,cci+26 GET mdesc1 PICT '@!'
                                @ lba+4,cci+26 GET mdesc2 PICT '@!'
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
                                        desp-> codigo := STRZERO(mcoddesp,3)
                                        desp-> desc1 := mdesc1
                                        desp-> desc2 := mdesc2
                                        COMMIT
                                        UNLOCK
                                        ORDSETFOCUS(1)
                                        GO TOP
                                        FOR f=1 TO 07
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("  ")
                                                        setcor(1)

                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                setcor(1)

                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1+LEFT(desc2,28))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO

                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        SET CURSOR ON
                        tela1 := SAVESCREEN(00,00,24,79)
                        WHILE .T.
                                mensagem('Digite o Codigo da Despesa a ser Excluida - <ESC> p/Retornar')
                                mcoddesp := 0
                                mdesc1 := SPACE(40)
                                mdesc2 := SPACE(40)
                                setcor(3)
                                botao(lba+2,cci,lba+5,cba)
                                @ lba+2,cci+13 SAY CHR(194)
                                @ lba+3,cci+13 SAY CHR(179)
                                @ lba+4,cci+13 SAY CHR(179)
                                @ lba+5,cci+13 SAY CHR(193)
                                setcor(1)
                                janela(lba+2,cba,' Exclusao ')
                                DEVPOS(lba+3,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+3,cci+15);DEVOUT('Descricao:')
                                @ lba+3,cci+8 GET mcoddesp PICT '999' VALID IF(mcoddesp=0,.F.,.T.)
                                READ

                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        EXIT
                                ENDIF
                                *************
                                SELE('desp')
                                ORDSETFOCUS(1)
                                GO TOP
                                *************
                                *************
                                SEEK  STRZERO(mcoddesp,3)
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
                                DEVPOS(lba+3,cci+8);DEVOUT(STRZERO(mcoddesp,3))
                                DEVPOS(lba+3,cci+26);DEVOUT(desc1)
                                DEVPOS(lba+4,cci+26);DEVOUT(desc2)
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
                                        FOR f=1 TO 07
                                                IF EOF()
                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+3);DEVOUT("   ")
                                                        setcor(1)

                                                        setcor(3)
                                                        DEVPOS(lci+2+f,cci+09);DEVOUT(SPACE(40))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+3);DEVOUT(codigo)
                                                setcor(1)

                                                setcor(3)
                                                DEVPOS(lci+2+f,cci+09);DEVOUT(desc1+LEFT(desc2,28))
                                                setcor(1)
                                                SKIP
                                        NEXT f
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
RETURN NIL
*************************** f i m *******************************************

