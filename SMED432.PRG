*******************************
* EXCLUSAO DE DIAS DA AGENDA CONSULTAS
*******************************

FUNCTION smed432
****************

LOCAL lci,cci,lba,cba,opcao,tela430,tela1,mdata1,mdata2,tdata


lci :=  10
cci :=  30
lba :=  13
cba :=  55
tela430 := SAVESCREEN(00,00,24,79)

**************************************************************************
CLOSE ALL
abriarq('smedcon','cons')
* SET INDEX TO consdat,conshora,consnome,consturn
**************************************************************************

WHILE .T.

        Mensagem('Preencha as Datas ou Tecle <ESC> Retornar')
        opcao := SPACE(1)
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        tdata := 0
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data inicio:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final :')

        SET INTEN ON
        @ lci+1,cci+15 GET mdata1 PICT '@D'
        READ

        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela430)
                CLOSE ALL
                RETURN NIL
        ENDIF

        IF EMPTY(mdata1)
                LOOP
        ENDIF

        *********************
        SELE('cons')
        SET ORDER TO 1
        **********************
        SET SOFTSEEK ON

        SEEK DTOS(mdata1)

        SET SOFTSEEK OFF

        IF EOF()
               GO TOP
        ENDIF


        @ lci+2,cci+15 GET mdata2 PICT '@D'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        tdata = mdata2 - mdata1

        IF tdata < 0
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Exclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF BLOQARQ()
*                        DELE WHILE mdata2 <> datacomp
                        DELE WHILE data <= mdata2
*                       DELE FOR data = mdata2
                        COMMIT
                        UNLOCK
                        RESTSCREEN(00,00,24,79,tela430)
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP

        ENDIF
ENDDO

