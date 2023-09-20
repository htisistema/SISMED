*************************
* MENU Cliente
*************************
***
*** smed210.PRG:  Menu de Clientes
***

FUNCTION smed210
**************

LOCAL tela,tela1,lci,cci,lba,cba,li,ci,lb,cb,pode,point,mregistro,mnome,opcao

li := 20
ci := 08
lb := 22
cb := 69

lci := 07
cci := 08
lba := 19
cba := 69

tela1 := SAVESCREEN(li,ci,lb,cb)
tela := SAVESCREEN(lci,cci,lba,cba)
*****************************************************
CLOSE ALL
abriarq('smedcli','cli')
abriarq('smedtab','tab')
abriarq('smedconv','conv')
abriarq('smedmov','contr')
abriarq('smeddro','dro')
abriarq('smedrec','rec')
abriarq('smedclin','clin')
abriarq('smedrece','rece')
abriarq('smedcomp','com')
abriarq('smedpulm','pul')
abriarq('smedradio','rad')
abriarq('smedhist','hist')
abriarq('smedexam','exam')
abriarq('smeddiag','diag')
abriarq('smedcond','cond')
*****************************************************

GO TOP

pode=.T.

WHILE .T.
        *************
        SELE('cli');SET ORDER TO 1
        *************
        SETCOR(3)
        botao(lci,cci,lba,cba)
        @ lci+1,cci+1 TO lci+1,cba-1
        @ lci+2,cci+15 TO lba-1,cci+15
        SETCOR(1)
        janela(lci,cba," Clientes ")
        DEVPOS(lci+2,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+2,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+3,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+3,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+4,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+5,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+5,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+6,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+6,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+7,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+7,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+8,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+8,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+9,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+9,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+10,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+10,cci+17);DEVOUT('Cliente:')
        DEVPOS(lci+11,cci+2);DEVOUT('Cod.:')
        DEVPOS(lci+11,cci+17);DEVOUT('Cliente:')


        mregistro := 0
        mnome := SPACE(35)
        mensagem("<I>nclus„o <A>ltera‡„o/Cons. <E>xclus„o <>Consulta <ESC>Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF()
                        setcor(3)
                        @ lci+1+f,cci+8 SAY registro
                        @ lci+1+f,cci+25 SAY nome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+8 SAY SPACE(5)
                        @ lci+1+f,cci+25 SAY SPACE(35)
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
                        RESTSCREEN(li,ci,lb,cb,tela1)
                        RESTSCREEN(lci,cci,lba,cba,tela)
                        CLOSE ALL
                        RETURN NIL
                CASE LASTKEY()=ASC("I") .OR. LASTKEY()=ASC("i")
                        smed211()
                        pode := .T.
                        LOOP
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        WHILE .T.
                                mensagem('Digite o Codigo do Cliente a ser Alterado - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+17);DEVOUT('Cliente:')

                                @ li+1,ci+8 GET mregistro PICT '99999'
                                @ li+1,ci+25 GET mnome PICT '@!' WHEN mregistro = 0
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
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
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mregistro,5))
                                DEVPOS(li+1,ci+25);DEVOUT(nome)
                                setcor(1)
                                smed212()
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        WHILE .T.
                                mensagem('Digite o Codigo do Cliente a ser Excluir - <ESC> Retornar')
                                setcor(3)
                                botao(li,ci,lb,cb)
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Cod.:')
                                DEVPOS(li+1,ci+17);DEVOUT('Cliente:')

                                @ li+1,ci+8 GET mregistro PICT '99999'
                                @ li+1,ci+25 GET mnome PICT '@!' WHEN mregistro = 0
                                READ
                                IF LASTKEY() = 27
                                        GO TOP
                                        RESTSCREEN(li,ci,lb,cb,tela1)
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
                                DEVPOS(li+1,ci+8);DEVOUT(STRZERO(mregistro,5))
                                DEVPOS(li+1,ci+25);DEVOUT(nome)
                                setcor(1)
                                smed213()
                                GO TOP
                                pode := .T.
                                RESTSCREEN(li,ci,lb,cb,tela1)
                                EXIT
                        ENDDO
        ENDCASE
ENDDO
******************************* f i m *********************************************

