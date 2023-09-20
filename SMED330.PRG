********************
* MENU DE CONSULTA DE ESPECIALISTA
********************

FUNCTION smed330
****************
LOCAL mprg:='SMED330'
LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 13
cba := 38
opcao := 0

*********************************************
CLOSE ALL
abriarq('smedmed','med')
*********************************************
op_tela(10,18,13,38,'CONSULTA DE ESPECIALISTA')

WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Por Nome          ' 
        @ lci+2,cci+1 PROMPT ' Por Especialidade ' 
        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        smed331()       && POR NOME
                CASE opcao = 2
                        smed332()       && POR ESPECIALIDADE
        ENDCASE
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL



***************************** F I M ****************************************


********************************
* CONSULTA ESPECIALISTA POR NOME
********************************

FUNCTION smed331
****************
LOCAL mprg:='SMED331'
LOCAL lci,cci,lba,cba,opcao,mprof,mesp,mfone,mend,mcep,mcid

lci := cci := 0
lba := 19
cba := 67
op_tela(12,13,19,67,'CONSULTA ESPECIALISTA POR NOME')

WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        opcao := 0
        mprof := SPACE(35)
        mesp := SPACE(20)
        mend := SPACE(35)
        mcid := SPACE(20)
        mcep := SPACE(9)
        mfone := SPACE(13)
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Profissional.:')
        DEVPOS(lci+2,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+3,cci+2);DEVOUT('Fone.........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Endereco.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Cidade.......:')
        DEVPOS(lci+6,cci+2);DEVOUT('CEP..........:')

        *************
        SELE('med');ORDSETFOCUS(2)
        *************
        SET INTEN ON

        @ lci+1,cci+18 GET mprof PICT '@!'
        READ

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF EMPTY(mprof)
                LOOP
        ENDIF
        IF ! med->(DBSEEK(RTRIM(mprof)))
                atencao('Medico nao Cadastrado ou Nome Errado !!!')
                LOOP
        ENDIF
        Mensagem('Tecle <ESC> P/Retornar  - <'+setcim+'> Proximo Registro  - <'+setbaix+'> Registro Anterior')

        WHILE .T.
                mprof := profission
                mesp := especialid
                mfone := fone
                mend := endereco
                mcid := cidade
                mcep := cep

                setcor(3)
                DEVPOS(lci+1,cci+18);DEVOUT(mprof)
                DEVPOS(lci+2,cci+18);DEVOUT(mesp)
                DEVPOS(lci+3,cci+18);DEVOUT(mfone)
                DEVPOS(lci+4,cci+18);DEVOUT(mend)
                DEVPOS(lci+5,cci+18);DEVOUT(mcid)
                DEVPOS(lci+6,cci+18);DEVOUT(mcep)
                setcor(1)
                
                INKEY(0)
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                SKIP -1
                                atencao('Fim do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 27
                        SET CURSOR ON
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL


************************** F I M ******************************

*****************************************
* CONSULTA ESPECIALISTA POR ESPECIALIDADE
*****************************************

FUNCTION smed332
****************
LOCAL mprg:='SMED332'
LOCAL lci,cci,lba,cba,opcao,mprof,mesp,mfone,mend,mcep,mcid

lci := cci := 0
lba := 20
cba := 67
op_tela(13,13,20,67,'CONSULTA ESPECIALISTA POR ESPECIALIDADE')

WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        opcao := 0
        mprof := SPACE(35)
        mesp := SPACE(20)
        mend := SPACE(35)
        mcid := SPACE(20)
        mcep := SPACE(9)
        mfone := SPACE(13)
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+2,cci+2);DEVOUT('Profissional.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Fone.........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Endereco.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Cidade.......:')
        DEVPOS(lci+6,cci+2);DEVOUT('CEP..........:')

        *************
        SELE('med');ORDSETFOCUS(1)
        *************
        @ lci+1,cci+18 GET mesp PICT '@!' VALID IF(EMPTY(mesp),.F.,.T.)
        READ

        IF LASTKEY() = 27
                SET ORDER TO 1
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! med->(DBSEEK(RTRIM(mesp)))
                atencao('Especialidade nao Cadastrada !!!')
                LOOP
        ENDIF
        Mensagem('Tecle <ESC> P/Retornar  - <'+setcim+'> Proximo Registro  - <'+setbaix+'> Registro Anterior')

        WHILE .T.
                mprof := profission
                mesp := especialid
                mfone := fone
                mend := endereco
                mcid := cidade
                mcep := cep

                setcor(3)
                DEVPOS(lci+1,cci+18);DEVOUT(mesp)
                DEVPOS(lci+2,cci+18);DEVOUT(mprof)
                DEVPOS(lci+3,cci+18);DEVOUT(mfone)
                DEVPOS(lci+4,cci+18);DEVOUT(mend)
                DEVPOS(lci+5,cci+18);DEVOUT(mcid)
                DEVPOS(lci+6,cci+18);DEVOUT(mcep)
                setcor(1)

                INKEY(0)
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                SKIP -1
                                atencao('Fim do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = 27
                        SET CURSOR ON
                        SET ORDER TO 1
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL

