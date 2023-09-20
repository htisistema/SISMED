**********************
* INCLUSAO DE Cirurgia
**********************

FUNCTION smed261
****************

LOCAL lci,cci,lba,cba,opcao,mcod_cirur,mdescricao

lci := 10
cci := 14
lba := 13
cba := 75
tela := SAVESCREEN(00,00,24,79)
WHILE .T.
        opcao := SPACE(1)
        mcod_cirur := 0
        mdescricao := SPACE(30)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo Cirurgia.:')
        DEVPOS(lci+2,cci+2);DEVOUT('Razao Social....:')

        *************
        SELE('cirur')
        ORDSETFOCUS(1)
        *************
        GO BOTT
        mcod_cirur := VAL(cod_cirur) +1
        setcor(3)
        DEVPOS(lci+1,cci+20);DEVOUT(STRZERO(mcod_cirur,3))
        setcor(1)
        SET INTEN ON
        @ lci+2,cci+20 GET mdescricao PICT '@!'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
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
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
RETURN NIL

