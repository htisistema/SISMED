*************************************
* EMITE radiologias
*************************************

FUNCTION smedradi


LOCAL opcao,tela1,mdata,mdescricao,machou


PRIVATE traco

lci := 04
cci := 02
lba := 20
cba := 79

tela1 := SAVESCREEN(00,00,24,79)

WHILE .T.
        SET INTEN ON
        opcao := SPACE(1)

        apaga(24,00,24,79)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        machou := ' '
        mdata := DATE()
        mdescricao := SPACE(40)
        setcor(3)
        botao(lci,cci,lba,cba)
        botao(21,02,23,79)
        DEVPOS(21,04);DEVOUT('Data')
        DEVPOS(21,14);DEVOUT('Descricao')
        janela(lci,cba,' Radiologias ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data')
        DEVPOS(lci+1,cci+14);DEVOUT('Descricao')
        setcor(3)
        @ lci+2,cci+1 TO lci+2,cba-1
        setcor(1)
        *************
        SELE('rad')
        SET ORDER TO 1
        *************
        SETPOS(lci+2,cci+1)
        IF rad->(DBSEEK(mreg))
                WHILE cod_cli = mreg .AND. ROW() <= 16
                        setcor(3)
                        DEVPOS(ROW()+1,cci+02);DEVOUT(data_radio)
                        DEVPOS(ROW(),cci+14);DEVOUT(descricao)
                        setcor(1)
                        SKIP
                ENDDO
        ENDIF
        @ 22,04 GET mdata
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ENDIF
        IF rad->(DBSEEK(mreg+(DESCEND(DTOS(mdata)))))
                machou := '*'
                mdescricao := descricao
        ENDIF
        @ 22,14 GET mdescricao PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF machou = ' '
                opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        ELSEIF machou = '*'
                opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        ENDIF
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                ****************
                SELE('rad')
                SET ORDER TO 1
                ****************
                IF machou = ' '
                        IF ! ADIREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ELSEIF machou = '*'
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ENDIF
                rad->cod_cli := mreg
                rad->data_radio := mdata
                rad->descricao := mdescricao
                DBUNLOCK()
                DBCOMMIT()
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ELSE
                LOOP
        ENDIF
ENDDO
******************************* F I M  *************************************************

