***************************
* MENU DE FERIADOS
***************************

FUNCTION smed450
****************
LOCAL mprg:='SMED450'
LOCAL lci,cci,lba,cba,li,ci,lb,cb,mnome,mdata

lci := cci := 0
lba := 28
cba := 55

li := ci := 0
lb := 22
cb := 55

pode=.T.
**************************************************************************
CLOSE ALL
abriarq('smedcon','cons')
**************************************************************************
op_tela(06,05,28,55,' Data de Feriados ')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        *************
        SELE('cons');ORDSETFOCUS(4)
        GO TOP
        *************
        setcor(3)
        @ lci+1,cci+1 TO lci+1,cba-1
        @ lci+1,cci+11 SAY CHR(194)
        @ lba,cci+11 SAY CHR(193)
        @ lci+2,cci+11 TO lba-1,cci+11
        setcor(1)
        DEVPOS(lci,cci+2);DEVOUT(' Data ')
        DEVPOS(lci,cci+14);DEVOUT(' Tipo de Feriado ')


        mensagem("<I>nclus„o  <A>ltera‡„o  <E>xclus„o  <> ou <C>onsulta  <ESC>Retorna" )
        WHILE cons->turno <> 'FE' .AND. ! EOF()
                SKIP
        ENDDO
        point=RECNO()
        FOR f=1 TO 20
                IF ! EOF()
                        WHILE cons->turno <> 'FE' .AND. ! EOF()
                                SKIP
                                LOOP
                        ENDDO
                        IF EOF()
                                LOOP
                        ENDIF
                        setcor(3)
                        @ lci+1+f,cci+2 SAY cons->data
                        @ lci+1+f,cci+13 SAY cons->nome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+2 SAY SPACE(8)
                        @ lci+1+f,cci+13 SAY SPACE(35)
                        setcor(1)
                ENDIF
        NEXT F
        IF ! EOF()
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
                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        botao(20,05,22,55,'INCLUIR FERIADOS')
                        WHILE .T.
                                mensagem('Digite a data que deseja Incluir - <ESC> Abandonar')
                                mnome := SPACE(35)
                                mdata := CTOD('  /  /  ')
                                setcor(3)
                                @ li,ci+11 SAY CHR(194)
                                @ lb,ci+11 SAY CHR(193)

                                DEVPOS(li+1,ci+11);DEVOUT(CHR(179))
                                setcor(1)

                                @ li+1,ci+2 GET mdata PICT '99/99/99' VALID ver_data(mdata)
                                @ li+1,ci+13 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        IF ADIREG()
                                                cons-> turno := 'FE'
                                                cons-> hora := '00:00'
                                                cons-> nome := mnome
                                                cons-> data := mdata
                                                COMMIT
                                                UNLOCK
                                                GO point
                                                FOR f=1 TO 10
                                                        WHILE turno <> 'FE' .AND. ! EOF()
                                                                SKIP
                                                                LOOP
                                                        ENDDO
                                                        IF EOF()
                                                                LOOP
                                                        ENDIF
                                                        IF ! EOF()
                                                                setcor(3)
                                                                @ lci+1+f,cci+2 SAY cons->data
                                                                @ lci+1+f,cci+13 SAY cons->nome
                                                                setcor(1)
                                                                SKIP
                                                        ELSE
                                                                setcor(3)
                                                                @ lci+1+f,cci+2 SAY SPACE(8)
                                                                @ lci+1+f,cci+13 SAY SPACE(35)
                                                                setcor(1)
                                                        ENDIF
                                                NEXT F
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                        ENDIF
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        botao(20,05,22,55,'ALTERACAO FERIADOS')
                        WHILE .T.
                                mensagem('Digite a data que deseja Alterar - <ESC> Abandonar')
                                mnome := SPACE(35)
                                mdata := CTOD('  /  /  ')
                                setcor(3)
                                @ li,ci+11 SAY CHR(194)
                                @ lb,ci+11 SAY CHR(193)

                                DEVPOS(li+1,ci+11);DEVOUT(CHR(179))
                                setcor(1)

                                @ li+1,ci+2 GET mdata PICT '99/99/99'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF EMPTY(mdata)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons');ORDSETFOCUS(4)
                                ******************

                                SEEK DTOS(mdata)+'FE'

                                IF ! FOUND()
                                        atencao('Esta data nao esta com feriado')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                point := RECNO()
                                mnome := cons->nome
                                @ li+1,ci+13 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao [S/n]:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        UNLOCK
                                        LOOP
                                ELSE
                                        cons-> nome := mnome
                                        cons-> data := mdata
                                        COMMIT
                                        UNLOCK
                                        SET ORDER TO 4
                                        GO point
                                        FOR f=1 TO 10
                                                WHILE turno <> 'FE' .AND. ! EOF()
                                                        SKIP
                                                        LOOP
                                                ENDDO
                                                IF EOF()
                                                        LOOP
                                                ENDIF
                                                IF ! EOF()
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY cons->data
                                                        @ lci+1+f,cci+13 SAY cons->nome
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY SPACE(8)
                                                        @ lci+1+f,cci+13 SAY SPACE(35)
                                                        setcor(1)
                                                ENDIF
                                        NEXT F
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        botao(20,05,22,55,'EXCLUSAO FERIADOS')
                        WHILE .T.
                                mensagem('Digite a data que deseja Excluir - <ESC> Abandonar')
                                mdata := CTOD('  /  /  ')
                                setcor(3)
                                @ li,ci+11 SAY CHR(194)
                                @ lb,ci+11 SAY CHR(193)

                                DEVPOS(li+1,ci+11);DEVOUT(CHR(179))
                                setcor(1)

                                @ li+1,ci+2 GET mdata PICT '99/99/99'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF EMPTY(mdata)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons')
                                SET ORDER TO 4
                                ******************

                                SEEK DTOS(mdata)+'FE'

                                IF ! FOUND()
                                        atencao('Esta data nao esta com feriado')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                point := RECNO()
                                setcor(3)
                                DEVPOS(li+1,ci+13);DEVOUT(cons->nome)
                                setcor(1)
                                IF LASTKEY() = 27
                                        UNLOCK
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma a Exclusao [S/n]:')
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        UNLOCK
                                        LOOP
                                ELSE
                                        DELE
                                        COMMIT
                                        UNLOCK
                                        GO TOP
                                        SEEK DTOS(mdata) + 'FE'
                                        f := 0
                                        FOR f=1 TO 10
                                                WHILE turno <> 'FE' .AND. ! EOF()
                                                        SKIP
                                                        LOOP
                                                ENDDO
                                                IF EOF()
                                                        LOOP
                                                ENDIF
                                                IF ! EOF()
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY cons->data
                                                        @ lci+1+f,cci+13 SAY cons->nome
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY SPACE(8)
                                                        @ lci+1+f,cci+13 SAY SPACE(35)
                                                        setcor(1)
                                                ENDIF
                                        NEXT F
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE LASTKEY() = ASC('C') .OR. LASTKEY() = ASC('c')
                        botao(20,05,22,55,'CONSULTA FERIADOS')
                        WHILE .T.
                                mensagem('Digite a data que deseja Consultar - <ESC> Abandonar')
                                mhora := SPACE(5)
                                setcor(3)
                                botao(li,ci,lb,cb)
                                @ li,ci+11 SAY CHR(194)
                                @ lb,ci+11 SAY CHR(193)

                                DEVPOS(li+1,ci+11);DEVOUT(CHR(179))
                                setcor(1)

                                @ li+1,ci+2 GET mdata PICT '99/99/99'
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF EMPTY(mdata)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons');ORDSETFOCUS(4)
                                ******************

                                SEEK DTOS(mdata)+'FE'

                                IF ! FOUND()
                                        atencao('Esta data nao esta com feriado')
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+13);DEVOUT(cons->nome)
                                setcor(1)
                                mensagem('Pressione qualquer tecla p/continuar')
                                INKEY(0)
                        ENDDO
                        wvw_lclosewindow()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

***************************** F I M ******************************************
* VERIFICA DATA
*******************
FUNCTION ver_data(vdata)
************************
LOCAL msele,morde

msele := SELE()
morde := INDEXORD()

*******************
SELE('cons')
SET ORDER TO 4
*******************

SEEK DTOS(vdata)

IF ! FOUND()
        RETURN .T.
ELSE
        IF turno = 'FE'
                atencao('Esta data ja foi marca com Feriado')
                RETURN .F.
        ENDIF
        IF turno = 'T1' .OR. turno = 'T2' .OR. turno = 'TD' .OR. turno = 'EN'
                atencao('Esta data ja foi marcada Consultas')
                RETURN .F.
        ENDIF
ENDIF
