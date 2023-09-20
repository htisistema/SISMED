* MENU ESPECIALISTA
*************************
*** smed230.PRG:  Menu de Especialistas

FUNCTION smed230
**************
LOCAL mprg:='SMED230'
LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,pode,point,opcao,mnome

li := 13
ci := 01
lb := 15
cb := 80

lci := cci := 0
lba := 12
cba := 80

*********************************************
CLOSE ALL
IF ! abriarq('smedmed','med');RETURN NIL;ENDIF
*********************************************

setcor(3)
op_tela(07,01,24,80,'ESPECIALISTA')

@ lci+1,cci TO lci+1,cba
@ lci+1,cci+44 SAY CHR(194)
@ lba,cci+44 SAY CHR(193)
@ lci+2,cci+44 TO lba-1,cci+44
setcor(1)
janela(lci,cba," Especialistas ")
DEVPOS(lci+2,cci+2);DEVOUT('Nome:')
DEVPOS(lci+2,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+3,cci+2);DEVOUT('Nome:')
DEVPOS(lci+3,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+4,cci+2);DEVOUT('Nome:')
DEVPOS(lci+4,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+5,cci+2);DEVOUT('Nome:')
DEVPOS(lci+5,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+6,cci+2);DEVOUT('Nome:')
DEVPOS(lci+6,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+7,cci+2);DEVOUT('Nome:')
DEVPOS(lci+7,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+8,cci+2);DEVOUT('Nome:')
DEVPOS(lci+8,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+9,cci+2);DEVOUT('Nome:')
DEVPOS(lci+9,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+10,cci+2);DEVOUT('Nome:')
DEVPOS(lci+10,cci+45);DEVOUT('Especialidade:')
DEVPOS(lci+11,cci+2);DEVOUT('Nome:')
DEVPOS(lci+11,cci+45);DEVOUT('Especialidade:')


pode=.T.

*************
SELE('med');ORDSETFOCUS(2)
GO TOP
*************
WHILE .T.
        exibi_prg(mprg)
        mnome := SPACE(35)
        mensagem("<I>nclusão  <A>lteração  <E>xclusão  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF()
                        setcor(3)
                        @ lci+1+f,cci+8 SAY profission
                        @ lci+1+f,cci+60 SAY LEFT(especialid,15)
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+8 SAY SPACE(35)
                        @ lci+1+f,cci+60 SAY SPACE(15)
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
                        smed231()
                        pode := .T.
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        tela1 := SAVESCREEN(li,ci,lb,cb)
                        WHILE .T.
                                mensagem('Digite o Codigo do Especialista a ser Alterado - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)
                                setcor(1)
                                DEVPOS(li,ci+29);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+45);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+45);DEVOUT(CHR(193))

                                DEVPOS(li+1,ci+2);DEVOUT('Nome:')

                                @ li+1,ci+8 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mnome)

                                        SEEK RTRIM(mnome)

                                        IF ! FOUND()
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(profission)
                                DEVPOS(li+1,ci+60);DEVOUT(LEFT(especialid,15))
                                setcor(1)
                                smed232()
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        tela1 := SAVESCREEN(li,ci,lb,cb)
                        WHILE .T.
                                mensagem('Digite o Codigo do Especialista a ser Excluir - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)
                                setcor(1)
                                DEVPOS(li,ci+12);DEVOUT(CHR(194))
                                DEVPOS(li+1,ci+12);DEVOUT(CHR(179))
                                DEVPOS(li+2,ci+13);DEVOUT(CHR(193))

                                DEVPOS(li+1,ci+2);DEVOUT('Nome:')

                                @ li+1,ci+8 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mnome)

                                        SEEK RTRIM(mnome)

                                        IF ! FOUND()
                                                mnome := 0
                                                atencao('Codigo nao Cadastrado !!!')
                                                LOOP
                                        ENDIF
                                ELSE
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+1,ci+8);DEVOUT(profission)
                                DEVPOS(li+1,ci+60);DEVOUT(LEFT(especialid,15))
                                setcor(1)
                                smed233()
                                GO TOP
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
        ENDCASE
ENDDO
******************************* f i m *********************************************

