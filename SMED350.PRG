*******************************
* EXCLUSAO DE CONSULTAS
*******************************

FUNCTION smed350
****************
LOCAL mprg:='SMED350',;
      lci,cci,lba,cba,opcao,mdata1,mdata2,tdata

lci := cci := 0
lba := 15
cba := 51
*********************************************
CLOSE ALL
abriarq('smedmov','contr')
*********************************************
op_tela(12,26,15,51,'EXCLUSAO DE CONSULTAS')
WHILE .T.
        exibi_prg(mprg)
        opcao := SPACE(1)
        mdata1 := mdata2 := CTOD('  /  /  ')
        tdata := 0
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicio:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final :')

        SET INTEN ON
        @ lci+1,cci+15 GET mdata1 PICT '@D'
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mdata1)
                LOOP
        ENDIF
        *********************
        SELE('contr')
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

        opcao := op_simnao('N','Confima Exclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF BLOQARQ()
                        DELE WHILE mdata2 <> datacons
                        DELE FOR datacons = mdata2
                        COMMIT
                        UNLOCK
                        CLOSE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
