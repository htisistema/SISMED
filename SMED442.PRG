***************************
* MENU DE ENCAIXE
***************************

FUNCTION smed442
****************

LOCAL lci,cci,lba,cba,li,ci,lb,cb,tela,tela1,mnome,mhora,mconvenio,mfone

PRIVATE mrsoc

lci := 06
cci := 02
lba := 18
cba := 78

li := 10
ci := 15
lb := 16
cb := 65
/*
li := 20
ci := 02
lb := 22
cb := 78
*/
tela := SAVESCREEN(00,00,24,79)
tela1 := SAVESCREEN(li,ci-1,lb+1,cb)

pode=.T.

WHILE .T.
        mrsoc := SPACE(30)
        *************
        SELE('cons')
        SET ORDER TO 4
        GO TOP
        *************

        SEEK DTOS(mdata_cons) + 'EN'
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+1,cci+1 TO lci+1,cba-1
        @ lci+1,cci+7 SAY CHR(194)
        @ lba,cci+7 SAY CHR(193)

        @ lci+1,cci+44 SAY CHR(194)
        @ lba,cci+44 SAY CHR(193)
        @ lci+2,cci+7 TO lba-1,cci+7
        @ lci+2,cci+44 TO lba-1,cci+44
        setcor(1)

        @ lci,cci+3 SAY " Encaixes "
        DEVPOS(lci+1,cci+2);DEVOUT('Hora')
        DEVPOS(lci+1,cci+9);DEVOUT('Cliente:')
        DEVPOS(lci+1,cci+46);DEVOUT('Convenio')


        mensagem("<I>nclus„o  <A>ltera‡„o  <E>xclus„o  <> ou <C>onsulta  <ESC>Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF() .AND. mdata_cons = data .AND. turno = 'EN'
                        setcor(3)
                        @ lci+1+f,cci+2 SAY hora
                        @ lci+1+f,cci+9 SAY nome
                        @ lci+1+f,cci+46 SAY con_conv
                        vcconv(con_conv)
                        @ lci+1+f,COL() SAY '-'+LEFT(mrsoc,25)
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+2 SAY SPACE(5)
                        @ lci+1+f,cci+9 SAY SPACE(35)
                        @ lci+1+f,cci+46 SAY SPACE(28)
                        setcor(1)
                ENDIF
        NEXT F
        IF EOF() .OR. mdata_cons <> data
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
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL
                CASE LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        WHILE .T.
                                setcor(3)
                                botao(li,ci,lb,cb)
                                @ li+1,ci+1 TO li+1,cb-1
                                setcor(1)
                                mensagem('Preencha os dados acima - <ESC> p/Abandonar')
                                mnome := SPACE(35)
                                mhora := SPACE(5)
                                mconvenio := SPACE(2)
                                mfone := SPACE(8)
                                DEVPOS(li,ci);DEVOUT(' Inclusao de Consulta ')
                                DEVPOS(li+2,ci+2);DEVOUT('Hora....:')
                                DEVPOS(li+3,ci+2);DEVOUT('Nome....:')
                                DEVPOS(li+4,ci+2);DEVOUT('Convenio:')
                                DEVPOS(li+5,ci+2);DEVOUT('Fone....:')
                                @ li+2,ci+12 GET mhora PICT '99:99' VALID ver_hora(mhora)
                                @ li+3,ci+12 GET mnome PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mnome)
                                        LOOP
                                ENDIF
                                *****************
                                SELE('cli')
                                SET ORDER TO 1
                                *****************

                                SEEK mnome

                                IF FOUND()
                                        mfone := fone
                                        mconvenio := codconv
                                        vcconv(mconvenio)
                                        setcor(3)
                                        DEVPOS(li+4,ci+12);DEVOUT(mconvenio+'-'+mrsoc)
                                        DEVPOS(li+5,ci+12);DEVOUTPICT(mfone,'999-9999')
                                        setcor(1)
                                ENDIF
                                @ li+4,ci+12 GET mconvenio PICT '99' VALID vcconv(mconvenio)
                                READ
                                IF EMPTY(mconvenio)
                                        LOOP
                                ENDIF
                                setcor(3)
                                DEVPOS(li+4,ci+12);DEVOUT(mconvenio+'-'+mrsoc)
                                setcor(1)
                                @ li+5,ci+12 GET mfone PICT '999-9999'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Inclusao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        *************
                                        SELE('cons')
                                        SET ORDER TO 4
                                        *************
                                        IF ADIREG()
                                                REPLA turno WITH 'EN'
                                                REPLA hora WITH mhora
                                                REPLA nome WITH mnome
                                                REPLA data WITH mdata_cons
                                                REPLA con_conv WITH mconvenio
                                                REPLA fone WITH mfone
                                                COMMIT
                                                UNLOCK
                                                GO TOP
                                                SEEK DTOS(mdata_cons) + 'EN'
                                                FOR f=1 TO 10
                                                        IF ! EOF() .AND. mdata_cons = data .AND. turno = 'EN'
                                                                setcor(3)
                                                                @ lci+1+f,cci+2 SAY hora
                                                                @ lci+1+f,cci+9 SAY nome
                                                                @ lci+1+f,cci+46 SAY con_conv
                                                                vcconv(con_conv)
                                                                @ lci+1+f,COL() SAY '-'+LEFT(mrsoc,25)
                                                                setcor(1)
                                                                SKIP
                                                        ELSE
                                                                setcor(3)
                                                                @ lci+1+f,cci+2 SAY SPACE(5)
                                                                @ lci+1+f,cci+9 SAY SPACE(35)
                                                                @ lci+1+f,cci+46 SAY SPACE(28)
                                                                setcor(1)
                                                        ENDIF
                                                NEXT F
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                        ENDIF
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                        WHILE .T.
                                setcor(3)
                                botao(li,ci,lb,cb)
                                @ li+1,ci+1 TO li+1,cb-1
                                setcor(1)
                                mensagem('Digite a hora que deseja Alterar - <ESC> p/Abandonar')
                                mnome := SPACE(35)
                                mhora := SPACE(5)
                                mconvenio := SPACE(2)
                                mfone := SPACE(8)
                                DEVPOS(li,ci);DEVOUT(' Inclusao de Consulta ')
                                DEVPOS(li+2,ci+2);DEVOUT('Hora....:')
                                DEVPOS(li+3,ci+2);DEVOUT('Nome....:')
                                DEVPOS(li+4,ci+2);DEVOUT('Convenio:')
                                DEVPOS(li+5,ci+2);DEVOUT('Fone....:')
                                @ li+2,ci+12 GET mhora PICT '99:99'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mhora)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons')
                                SET ORDER TO 2
                                ******************

                                SEEK mhora + DTOS(mdata_cons)

                                IF ! FOUND()
                                        atencao('Data nao esta Preenchida')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                point := RECNO()
                                mnome := nome
                                mconvenio := con_conv
                                mfone := fone
                                @ li+3,ci+12 GET mnome PICT '@!'
                                @ li+4,ci+12 GET mconvenio PICT '99' VALI vcconv(mconvenio)
                                READ
                                setcor(3)
                                DEVPOS(li+4,ci+48);DEVOUT('-'+LEFT(mrsoc,25))
                                setcor(1)
                                @ li+5,ci+12 GET mfone PICT '999-9999'
                                READ
                                IF LASTKEY() = 27
                                        UNLOCK
                                        LOOP
                                ENDIF
                                IF EMPTY(mnome)
                                        UNLOCK
                                        LOOP
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
                                        REPLA turno WITH 'EN'
                                        REPLA hora WITH mhora
                                        REPLA nome WITH mnome
                                        REPLA data WITH mdata_cons
                                        REPLA con_conv WITH mconvenio
                                        REPLA fone WITH mfone
                                        COMMIT
                                        UNLOCK
                                        SET ORDER TO 4
                                        GO point
                                        f := 0
                                        FOR f=1 TO 10
                                                IF ! EOF() .AND. mdata_cons = data .AND. turno = 'EN'
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY hora
                                                        @ lci+1+f,cci+9 SAY nome
                                                        @ lci+1+f,cci+46 SAY con_conv
                                                        vcconv(con_conv)
                                                        @ lci+1+f,COL() SAY '-'+LEFT(mrsoc,25)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY SPACE(5)
                                                        @ lci+1+f,cci+9 SAY SPACE(35)
                                                        @ lci+1+f,cci+46 SAY SPACE(28)
                                                        setcor(1)
                                                ENDIF
                                        NEXT F
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                        WHILE .T.
                                setcor(3)
                                botao(li,ci,lb,cb)
                                @ li+1,ci+1 TO li+1,cb-1
                                setcor(1)
                                mensagem('Digite a hora que deseja Excluir - <ESC> p/Abandonar')
                                mhora := SPACE(5)
                                DEVPOS(li,ci);DEVOUT(' Inclusao de Consulta ')
                                DEVPOS(li+2,ci+2);DEVOUT('Hora....:')
                                DEVPOS(li+3,ci+2);DEVOUT('Nome....:')
                                DEVPOS(li+4,ci+2);DEVOUT('Convenio:')
                                DEVPOS(li+5,ci+2);DEVOUT('Fone....:')
                                @ li+2,ci+12 GET mhora PICT '99:99'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mhora)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons')
                                SET ORDER TO 2
                                ******************

                                SEEK mhora + DTOS(mdata_cons)

                                IF ! FOUND()
                                        atencao('Nao tem ninguem neste Horario')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                vcconv(con_conv)
                                setcor(3)
                                DEVPOS(li+3,ci+12);DEVOUT(nome)
                                DEVPOS(li+4,ci+12);DEVOUT(con_conv)
                                DEVPOS(li+4,COL()+1);DEVOUT('-'+LEFT(mrsoc,25))
                                DEVPOS(li+5,ci+12);DEVOUT(fone)
                                setcor(1)
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
                                        SET ORDER TO 4
                                        GO TOP
                                        SEEK DTOS(mdata_cons) + 'EN'
                                        f := 0
                                        FOR f=1 TO 10
                                                IF ! EOF() .AND. mdata_cons = data .AND. turno = 'EN'
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY hora
                                                        @ lci+1+f,cci+9 SAY nome
                                                        @ lci+1+f,cci+46 SAY con_conv
                                                        vcconv(con_conv)
                                                        @ lci+1+f,COL() SAY '-'+LEFT(mrsoc,25)
                                                        setcor(1)
                                                        SKIP
                                                ELSE
                                                        setcor(3)
                                                        @ lci+1+f,cci+2 SAY SPACE(5)
                                                        @ lci+1+f,cci+9 SAY SPACE(35)
                                                        @ lci+1+f,cci+46 SAY SPACE(28)
                                                        setcor(1)
                                                ENDIF
                                        NEXT F
                                ENDIF
                        ENDDO
                CASE LASTKEY() = ASC('C') .OR. LASTKEY() = ASC('c')
                        WHILE .T.
                                setcor(3)
                                botao(li,ci,lb,cb)
                                @ li+1,ci+1 TO li+1,cb-1
                                setcor(1)
                                mensagem('Digite a hora que deseja Consultar - <ESC> p/Abandonar')
                                mhora := SPACE(5)
                                DEVPOS(li,ci);DEVOUT(' Inclusao de Consulta ')
                                DEVPOS(li+2,ci+2);DEVOUT('Hora....:')
                                DEVPOS(li+3,ci+2);DEVOUT('Nome....:')
                                DEVPOS(li+4,ci+2);DEVOUT('Convenio:')
                                DEVPOS(li+5,ci+2);DEVOUT('Fone....:')
                                @ li+2,ci+12 GET mhora PICT '99:99' VALID ver_hora(mhora)
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(li,ci,lb,cb,tela1)
                                        EXIT
                                ENDIF
                                IF EMPTY(mhora)
                                        LOOP
                                ENDIF
                                ******************
                                SELE('cons')
                                SET ORDER TO 2
                                ******************

                                SEEK mhora + DTOS(mdata_cons)

                                IF ! FOUND()
                                        atencao('Nao tem ninguem neste Horario')
                                        LOOP
                                ENDIF
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                vcconv(con_conv)
                                setcor(3)
                                DEVPOS(li+3,ci+12);DEVOUT(nome)
                                DEVPOS(li+4,ci+12);DEVOUT(con_conv)
                                DEVPOS(li+4,COL()+1);DEVOUT('-'+LEFT(mrsoc,25))
                                DEVPOS(li+5,ci+12);DEVOUT(fone)
                                setcor(1)
                                mensagem('Pressione qualquer tecla p/continuar')
                                INKEY(0)
                        ENDDO
        ENDCASE
ENDDO
*************************** F I M ***********************************8

