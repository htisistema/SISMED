*************************
* MENU CIRURGIA
*************************
***
*** smed260.PRG:  Menu de CIRURGIA
***
FUNCTION smed260
**************
LOCAL mprg:='SMED260'
LOCAL lci,cci,lba,cba,li,ci,lb,cb,pode,point,opcao,mdescricao

PRIVATE mcod_cirur

li := ci := 0
lb := 22
cb := 69

lci := cci := 0
lba := 29
cba := 69

*********************************************
CLOSE ALL
abriarq('smedcirur','cirur')
* SET INDEX TO smedcirur
*********************************************
op_tela(07,08,29,69," Cirurgias ")
setcor(3)
DEVPOS(lci,cci+2);DEVOUT('Codigo')
DEVPOS(lci,cci+14);DEVOUT('Cirurgia')
@ lci+1,cci TO lci+1,cba
@ lci+1,cci+12 SAY CHR(194)
@ lba,cci+12 SAY CHR(193)
@ lci+2,cci+12 TO lba-1,cci+12
setcor(1)
pode=.T.
*************
SELE('cirur')
ORDSETFOCUS(1)
GO TOP
*************
WHILE .T.
        exibi_prg(mprg)
        mcod_cirur := 0
        mrsocial := SPACE(35)
        mensagem("<I>nclusão  <A>lteração  <E>xclusão  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 20
                IF ! EOF()
                        setcor(3)
                        @ lci+1+f,cci+2 SAY cod_cirur
                        @ lci+1+f,cci+14 SAY descricao
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+2 SAY SPACE(3)
                        @ lci+1+f,cci+14 SAY SPACE(30)
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
                        CLOSE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                CASE LASTKEY()=ASC("I") .OR. LASTKEY()=ASC("i")
                        op_tela(20,08,22,69," INCLUSÃO Cirurgias ")
                        WHILE .T.
                                mensagem('Digite o Codigo do Cirurgia a ser Alterado - <ESC> Retornar')
                                mcod_cirur := 0
                                GO BOTT
                                mcod_cirur := VAL(cod_cirur)+1
                                mdescricao := SPACE(30)
                                setcor(3)
                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+12);DEVOUT(CHR(193))
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+14);DEVOUT('Cirurgia:')
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_cirur,3))
                                setcor(1)
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                @ li+1,ci+24 GET mdescricao PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma Inclusao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF ADIREG()
                                                REPLA cod_cirur WITH STRZERO(mcod_cirur,3)
                                                REPLA descricao WITH mdescricao
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        op_tela(20,08,22,69," ALTERAÇÃO Cirurgias ")
                        WHILE .T.
                                mensagem('Digite o Codigo do Cirurgia a ser Alterado - <ESC> Retornar')
                                mcod_cirur := 0
                                mdescricao := descricao
                                setcor(3)
                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+12);DEVOUT(CHR(193))
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+14);DEVOUT('Cirurgia:')

                                @ li+1,ci+8 GET mcod_cirur PICT '999'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_cirur)

                                        SEEK STRZERO(mcod_cirur,3)

                                        IF ! FOUND()
                                                mcod_cirur := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                        mdescricao := descricao
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_cirur,3))
                                setcor(1)
                                @ li+1,ci+24 GET mdescricao PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF BLOQREG()
                                                REPLA cod_cirur WITH STRZERO(mcod_cirur,3)
                                                REPLA descricao WITH mdescricao
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        op_tela(20,08,22,69," EXCLUSÃO Cirurgias ")
                        WHILE .T.
                                mcod_cirur := 0
                                mensagem('Digite o Codigo do Cirurgia a ser Excluir - <ESC> Retornar')
                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+13);DEVOUT(CHR(193))
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+14);DEVOUT('Cirurgia:')

                                @ li+1,ci+8 GET mcod_cirur PICT '999'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_cirur)

                                        SEEK STRZERO(mcod_cirur,3)

                                        IF ! FOUND()
                                                mcod_cirur := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_cirur,3))
                                DEVPOS(li+1,ci+24);DEVOUT(descricao)
                                setcor(1)
                                opcao := op_simnao('S','Confirma Exclusao [s/N]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF BLOQREG()
                                                DELE
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
        ENDCASE
ENDDO
******************************* f i m *********************************************

