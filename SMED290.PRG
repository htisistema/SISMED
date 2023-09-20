*************************
* MENU DIAGNOSTICO DA CID.
*************************
***
*** smed290.PRG:  Menu de Diagnostico CID.
***

FUNCTION smed290
**************
LOCAL mprg:='SMED290'
LOCAL lci,cci,lba,cba,li,ci,lb,cb,pode,point,mregistro,mnome,opcao

li := ci := 00
lb := 22
cb := 79

lci := cci := 00
lba := 29
cba := 79

*********************************************
CLOSE ALL
abriarq('smedcid','cid')
* SET INDEX TO smedcid1, smedcid2
*********************************************

op_tela(07,05,29,85,' Diagnostico da C.I.D. ')
setcor(1)
DEVPOS(lci+1,cci+5);DEVOUT('Codigo')
DEVPOS(lci+1,cci+19);DEVOUT('Diagnostico')
@ lci+2,cci TO lci+2,cba
pode=.T.

*************
SELE('cid')
SET ORDER TO 1
GO TOP
*************
WHILE .T.
        exibi_prg(mprg)
        mregistro := SPACE(11)
        mnome := SPACE(60)
        mensagem("<I>nclusão  <A>lteração  <E>xclusão  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 19
                IF tipo = 'P'
                        WHILE tipo = 'P' .OR. ! EOF()
                                SKIP
                        ENDDO
                ENDIF
                IF ! EOF()
                        setcor(3)
                        @ lci+2+f,cci+1 SAY codigo+'-'+cod
                        @ lci+2+f,COL()+1 SAY nome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+2+f,cci+1 SAY SPACE(17)
                        @ lci+2+f,COL()+1 SAY SPACE(60)
                        setcor(1)
                ENDIF
        NEXT F
        IF EOF()
                pode=.F.
        ENDIF
        GO POINT
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
                                SKIP -10
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=3
                        IF ! EOF() .AND. pode=.T.
                                SKIP 10
                        ENDIF
                CASE LASTKEY()=27
                        wvw_lclosewindow()
                        CLOSE ALL
                        RETURN NIL
                CASE LASTKEY()=ASC("I") .OR. LASTKEY()=ASC("i")
                        *************
                        SELE('cid')
                        SET ORDER TO 2
                        GO TOP
                        *************
                        op_tela(20,05,22,85,' INCLUSAO Diagnostico da C.I.D. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mcod := SPACE(5)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Diagnostico a Incluir - <ESC> Retornar')
                                setcor(1)
                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Diagnostico ')

                                @ li+1,ci+2 GET mregistro PICT 'XXXX.X/X'
                                @ li+1,COL()+1 GET mcod
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF EMPTY(mregistro)
                                        LOOP
                                ENDIF

                                SEEK 'D'+ mregistro

                                IF FOUND()
                                        atencao('Codigo ja esta Cadastrado !!!')
                                        LOOP
                                ENDIF
                                @ li+1,ci+16 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao do Diagnostico [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        IF ! ADIREG()
                                                atencao('Nao foi Possivel acessar o Arquivo !!!')
                                                LOOP
                                        ELSE
                                                REPLA codigo WITH mregistro
                                                REPLA cod WITH mcod
                                                REPLA nome WITH mnome
                                                REPLA tipo WITH 'D'
                                                COMMIT
                                                UNLOCK
                                        ENDIF
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        wvw_lclosewindow()
                        pode := .T.
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        op_tela(20,05,22,85,' ALTERACAO Diagnostico da C.I.D. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mcod := SPACE(5)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Diagnostico a ser Alterado - <ESC> Retornar')
                                setcor(1)
                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Diagnostico ')

                                @ li+1,ci+2 GET mregistro PICT 'XXXX.X/X'
                                @ li+1,ci+17 GET mnome PICT '@!' WHEN mregistro = SPACE(11)
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK 'D' + mregistro

                                        IF ! FOUND()
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK 'D' + RTRIM(mnome)

                                        IF ! FOUND()
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                mregistro = codigo
                                mnome := nome
                                mcod := cod
                                @ li+1,ci+2 GET mregistro PICT 'XXXX.X/X'
                                @ li+1,COL()+1 GET mcod
                                @ li+1,ci+17 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao do Diagnostico [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        REPLA cod WITH mcod
                                        REPLA nome WITH mnome
                                        REPLA tipo WITH 'D'
                                        COMMIT
                                        UNLOCK
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        wvw_lclosewindow()
                        pode := .T.
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        op_tela(20,05,22,85,' EXCLUSAO Diagnostico da C.I.D. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Diagnostico a ser Excluir - <ESC> Retornar')
                                setcor(1)

                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Diagnostico ')

                                @ li+1,ci+2 GET mregistro PICT 'XXXX.X/X'
                                @ li+1,ci+17 GET mnome PICT '@!' WHEN mregistro = SPACE(11)
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK 'D' + mregistro

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK 'D' + RTRIM(mnome)

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+2);DEVOUT(codigo)
                                DEVPOS(li+1,ci+17);DEVOUT(nome)
                                setcor(1)
                                opcao := op_simnao('S','Confirma a Exclusao do Diagnostico [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        DELE
                                        COMMIT
                                        UNLOCK
                                ENDIF
                                GO TOP
                                pode := .T.
                                LOOP
                        ENDDO
                        wvw_lclosewindow()
        ENDCASE
ENDDO
******************************* f i m *********************************************

