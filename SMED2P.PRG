*************************
* MENU PATOLOGIA
*************************
***
*** smed2p.PRG:  Menu de patologia
***

FUNCTION smed2p
**************

LOCAL lci,cci,lba,cba,pode,point,mregistro,mnome,opcao

lci := cci := 0
lba := 29
cba := 69

*****************************************************
CLOSE ALL
IF ! abriarq('smedpato','pato');RETURN NIL;ENDIF
*****************************************************
GO TOP
pode=.T.
op_tela(07,08,29,69,'PATOLOGIAS')
WHILE .T.
        *************
        SELE('pato');SET ORDER TO 1
        *************
        DEVPOS(lci,cci+2);DEVOUT('Patologia')
        @ lci+1,cci TO lci+1,cba
        SETCOR(1)
        mensagem("Tecle <ENTER>Inclusão, Alteração e Consulta  <ESC>Retorna" )
        point=RECNO()
        f:=0
        FOR f=1 TO 20
                IF ! EOF()
                        setcor(3)
                        @ lci+1+f,cci+2 SAY pato->patologia
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+2 SAY SPACE(30)
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
                CASE LASTKEY()=13
                        smed2p1()
                        pode := .T.
                        LOOP
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************

