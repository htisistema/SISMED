*************************
* MENU MEDICAMENTOS
*************************
***
*** smed240.PRG:  Menu de Medicamentos
***

FUNCTION smed240
**************

LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,pode,point,mregistro,mnome,opcao

li := ci := 0
lb := 22
cb := 69

lci := cci := 0
lba := 19
cba := 69

*********************************************
CLOSE ALL
abriarq('smeddro','dro')
* SET INDEX TO droncom,drocod
*********************************************

setcor(3)
op_tela(07,08,19,69," Medicamentos ")
@ lci+1,cci TO lci+1,cba
@ lci+1,cci+15 SAY CHR(194)
@ lba,cci+15 SAY CHR(193)
@ lci+2,cci+15 TO lba-1,cci+15
setcor(1)
DEVPOS(lci+2,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+2,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+3,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+3,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+4,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+4,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+5,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+5,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+6,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+6,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+7,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+7,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+8,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+8,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+9,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+9,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+10,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+10,cci+17);DEVOUT('Medicamento:')
DEVPOS(lci+11,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+11,cci+17);DEVOUT('Medicamento:')


pode=.T.

*************
SELE('dro')
SET ORDER TO 1
GO TOP
*************
WHILE .T.
        mregistro := 0
        mnome := SPACE(35)
        mensagem("<I>nclus„o  <A>ltera‡„o  <E>xclus„o  < ou > Consulta  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF()
                        setcor(3)
                        @ lci+1+f,cci+8 SAY cod_med
                        @ lci+1+f,cci+30 SAY nomecom
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+8 SAY SPACE(5)
                        @ lci+1+f,cci+30 SAY SPACE(15)
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
                        smed241()
                        pode := .T.
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        WHILE .T.
                                mensagem('Digite o Codigo do Medicamento a ser Alterado - <ESC> Retornar')
                                setcor(3)
                                op_tela(20,08,22,69,'ALTERACAO DE MEDICAMENTO')

                                DEVPOS(li,ci+15);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+15);DEVOUT(CHR(193))
                                setcor(1)

                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+17);DEVOUT('Medicamento:')

                                @ li+1,ci+8 GET mregistro PICT '99999'
                                @ li+1,ci+30 GET mnome PICT '@!' WHEN mregistro = 0
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK STRZERO(mregistro,5)

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK RTRIM(mnome)

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(cod_med)
                                DEVPOS(li+1,ci+30);DEVOUT(nomecom)
                                setcor(1)
                                smed242()
                                pode := .T.
                                wvw_lclosewindow()
                                EXIT
                        ENDDO
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        WHILE .T.
                                mensagem('Digite o Codigo do Medicamento a ser Excluir - <ESC> Retornar')
                                setcor(3)
                                op_tela(20,08,22,69,'ALTERACAO DE MEDICAMENTO')
                                DEVPOS(li,ci+15);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+15);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+15);DEVOUT(CHR(193))
                                setcor(1)

                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+17);DEVOUT('Medicamento:')

                                @ li+1,ci+8 GET mregistro PICT '99999'
                                @ li+1,ci+30 GET mnome PICT '@!' WHEN mregistro = 0
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mregistro)
                                        SET ORDER TO 2

                                        SEEK STRZERO(mregistro,5)

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSEIF ! EMPTY(mnome)
                                        SET ORDER TO 1

                                        SEEK RTRIM(mnome)

                                        IF ! FOUND()
                                                mregistro := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(cod_med)
                                DEVPOS(li+1,ci+30);DEVOUT(nomecom)
                                setcor(1)
                                smed243()
                                GO TOP
                                pode := .T.
                                wvw_lclosewindow()
                                EXIT
                        ENDDO
        ENDCASE
ENDDO
******************************* f i m *********************************************

