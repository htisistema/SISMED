*************************
* MENU Convenio
*************************
*** smed220.PRG:  Menu de Convenio
***
FUNCTION smed220
**************
LOCAL mprg := 'SMED220'
LOCAL tela,tela1,li,ci,lb,cb,pode,point,opcao

PRIVATE mcod_conv

li := 13
ci := 01
lb := 16
cb := 70

IF ! ver_nivel(mprg,'MENU DE CONVENIOS','15',nivel_acess,,'AMBIE')
RETURN NIL
ENDIF

*********************************************
CLOSE ALL
abriarq('smedconv','conv')
* SET INDEX TO convcod
*********************************************
setcor(3)
op_tela(07,08,24,80,'CONVENIOS')
@ 1,0 TO 1,70
@ 1,12 SAY CHR(194)
@ 12,12 SAY CHR(193)
@ 2,12 TO 12-1,12
setcor(1)
DEVPOS(2,2);DEVOUT('Cod.:')
DEVPOS(2,14);DEVOUT('Convenio:')
DEVPOS(3,2);DEVOUT('Cod.:')
DEVPOS(3,14);DEVOUT('Convenio:')
DEVPOS(4,2);DEVOUT('Cod.:')
DEVPOS(4,14);DEVOUT('Convenio:')
DEVPOS(5,2);DEVOUT('Cod.:')
DEVPOS(5,14);DEVOUT('Convenio:')
DEVPOS(6,2);DEVOUT('Cod.:')
DEVPOS(6,14);DEVOUT('Convenio:')
DEVPOS(7,2);DEVOUT('Cod.:')
DEVPOS(7,14);DEVOUT('Convenio:')
DEVPOS(8,2);DEVOUT('Cod.:')
DEVPOS(8,14);DEVOUT('Convenio:')
DEVPOS(9,2);DEVOUT('Cod.:')
DEVPOS(9,14);DEVOUT('Convenio:')
DEVPOS(10,2);DEVOUT('Cod.:')
DEVPOS(10,14);DEVOUT('Convenio:')
DEVPOS(11,2);DEVOUT('Cod.:')
DEVPOS(11,14);DEVOUT('Convenio:')


pode=.T.

*************
SELE('conv')
GO TOP
*************

WHILE .T.
        exibi_prg(mprg)
        mcod_conv := 0
        mrsocial := SPACE(35)
        mensagem("<I>nclusão  <A>lteração  <E>xclusão  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF()
                        setcor(3)
                        @ 1+f,8 SAY codconv
                        @ 1+f,24 SAY rsocial
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ 1+f,8 SAY SPACE(2)
                        @ 1+f,24 SAY SPACE(30)
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
                        smed221()
                        pode := .T.
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        tela1 := SAVESCREEN(li,ci,lb,cb)
                        WHILE .T.
                                mensagem('Digite o Codigo do Convenio a ser Alterado - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)

                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+12);DEVOUT(CHR(193))
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+14);DEVOUT('Convenio:')

                                @ li+1,ci+8 GET mcod_conv PICT '99'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_conv)
                                        ORDSETFOCUS(1)

                                        SEEK STRZERO(mcod_conv,2)

                                        IF ! FOUND()
                                                mcod_conv := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_conv,2))
                                DEVPOS(li+1,ci+24);DEVOUT(rsocial)
                                setcor(1)
                                smed222()
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        tela1 := SAVESCREEN(li,ci,lb,cb)
                        WHILE .T.
                                mensagem('Digite o Codigo do Convenio a ser Excluir - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)

                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+13);DEVOUT(CHR(193))
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+14);DEVOUT('Convenio:')

                                @ li+1,ci+8 GET mcod_conv PICT '99'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcod_conv)
                                        SET ORDER TO 1

                                        SEEK STRZERO(mcod_conv,2)

                                        IF ! FOUND()
                                                mcod_conv := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mcod_conv,2))
                                DEVPOS(li+1,ci+24);DEVOUT(rsocial)
                                setcor(1)
                                smed223()
                                GO TOP
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
        ENDCASE
ENDDO
******************************* f i m *********************************************

