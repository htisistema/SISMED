*************************
* MENU PROCEDIMENTOS DA AMB.
*************************
***
*** smed280.PRG:  Menu de Procedimentos AMB.
***

FUNCTION smed280
**************

LOCAL lci,cci,lba,cba,li,ci,lb,cb,pode,point,mregistro,mnome,opcao,;
      mvlr_us

li := ci := 0
lb := 22
cb := 79

lci := cci := 0
lba := 28
cba := 79

*********************************************
CLOSE ALL
abriarq('smedcid','cid')
* SET INDEX TO smedcid1, smedcid2
*********************************************

setcor(3)
op_tela(06,02,28,79,' Procedimentos da A.M.B. ')
@ lci+2,cci TO lci+2,cba
@ lci+2,cci+15 SAY CHR(194)
@ lba,cci+15 SAY CHR(193)
@ lci+3,cci+15 TO lba-1,cci+15
setcor(1)
DEVPOS(lci+1,cci+2);DEVOUT('Codigo')
DEVPOS(lci+1,cci+16);DEVOUT('Procedimento')
pode=.T.

*************
SELE('cid')
SET ORDER TO 1
GO TOP
*************
WHILE .T.
        mregistro := SPACE(11)
        mnome := SPACE(60)
        mvlr_us := 0
        mensagem("<I>nclusão  <A>lteração  <E>xclusão  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 19
                IF tipo = 'D'
                        WHILE tipo = 'D' .AND. ! EOF()
                                SKIP
                        ENDDO
                ENDIF
                IF ! EOF()
                        setcor(3)
                        @ lci+2+f,cci+2 SAY codigo
                        @ lci+2+f,cci+16 SAY nome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+2+f,cci+2 SAY SPACE(11)
                        @ lci+2+f,cci+16 SAY SPACE(60)
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
                        op_tela(19,02,22,79,' INCLUSAO Procedimentos da A.M.B. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Procedimento a Incluir - <ESC> Retornar')
                                setcor(3)
                                DEVPOS(li,ci+15);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+3,ci+15);DEVOUT(CHR(193))
                                setcor(1)

                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Procedimentos ')
                                DEVPOS(li+2,ci+20);DEVOUT("Quantidades de US's:")

                                @ li+1,ci+2 GET mregistro PICT '99.99.999-9'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF EMPTY(mregistro)
                                        LOOP
                                ENDIF

                                SEEK 'P'+ mregistro

                                IF FOUND()
                                        atencao('Codigo ja esta Cadastrado !!!')
                                        LOOP
                                ENDIF
                                @ li+1,ci+16 GET mnome PICT '@!'
                                @ li+2,ci+41 GET mvlr_us PICT '999.99'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao do Procedimento [S/n]:')
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
                                                REPLA nome WITH mnome
                                                REPLA vlr_us WITH mvlr_us
                                                REPLA tipo WITH 'P'
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
                        op_tela(19,02,22,79,' ALTERACAO Procedimentos da A.M.B. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Medicamento a ser Alterado - <ESC> Retornar')
                                setcor(3)
                                DEVPOS(li,ci+15);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+3,ci+15);DEVOUT(CHR(193))
                                setcor(1)

                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Procedimentos ')
                                DEVPOS(li+2,ci+20);DEVOUT("Quantidades de US's:")

                                @ li+1,ci+2 GET mregistro PICT '99.99.999-9'
                                @ li+1,ci+17 GET mnome PICT '@!' WHEN mregistro = SPACE(11)
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK 'P' + mregistro

                                        IF ! FOUND()
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK 'P' + RTRIM(mnome)

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
                                mvlr_us := vlr_us
                                @ li+1,ci+2 GET mregistro PICT '99.99.999-9'
                                @ li+1,ci+17 GET mnome PICT '@!'
                                @ li+2,ci+41 GET mvlr_us PICT '999.99'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao do Procedimento [S/n]:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ELSE
                                        REPLA nome WITH mnome
                                        REPLA tipo WITH 'P'
                                        REPLA vlr_us WITH mvlr_us
                                        COMMIT
                                        UNLOCK
                                        LOOP
                                ENDIF
                                EXIT
                        ENDDO
                        wvw_lclosewindow()
                        pode := .T.
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        op_tela(19,02,22,79,' EXCLUSAO Procedimentos da A.M.B. ')
                        WHILE .T.
                                mregistro := SPACE(11)
                                mnome := SPACE(60)
                                mensagem('Digite o Codigo do Medicamento a ser Excluir - <ESC> Retornar')
                                setcor(3)
                                DEVPOS(li,ci+15);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+3,ci+15);DEVOUT(CHR(193))
                                setcor(1)

                                DEVPOS(li,ci+2);DEVOUT(' Codigo ')
                                DEVPOS(li,ci+20);DEVOUT(' Procedimentos ')
                                DEVPOS(li+2,ci+20);DEVOUT("Quantidades de US's:")

                                @ li+1,ci+2 GET mregistro PICT '99.99.999-9'
                                @ li+1,ci+17 GET mnome PICT '@!' WHEN mregistro = SPACE(11)
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK 'P' + mregistro

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK 'P' + RTRIM(mnome)

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
                                DEVPOS(li+2,ci+41);DEVOUTPICT(vlr_us,'999.99')
                                setcor(1)
                                opcao := op_simnao('S','Confirma a Exclusao do Procedimento [S/n]:')
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
                        ENDDO
                        wvw_lclosewindow()
        ENDCASE
ENDDO
******************************* f i m *********************************************

