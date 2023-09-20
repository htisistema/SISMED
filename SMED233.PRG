**************************
* EXCLUSAO DE MEDICO
**************************

FUNCTION smed233
****************
LOCAL mprg:='SMED233'
LOCAL lci,cci,lba,cba,opcao,mprof,mesp,mfone,mend,mcep,mcid,tela223,tela1

lci := cci := 0
lba := 18
cba := 77
op_tela(13,24,18,77,'EXCLUSAO DE ESPECIALISTA')
WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        mprof := SPACE(35)
        mesp := SPACE(20)
        mend := SPACE(35)
        mcid := SPACE(20)
        mcep := SPACE(9)
        mfone := SPACE(13)
        Mensagem('Preencha o Campos ou Tecle <ESC> P/Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Profissional.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+4,cci+2);DEVOUT('Fone.........:')
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(med->cod_espe)
        DEVPOS(lci+2,cci+18);DEVOUT(med->profission)
        DEVPOS(lci+3,cci+18);DEVOUT(med->especialid)
        DEVPOS(lci+4,cci+18);DEVOUT(med->fone)
        setcor(1)
        opcao := 'S'
        opcao := op_simnao('S','Confirma Exclusao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF opcao = 'S'
                IF BLOQREG()
                        DELE
                        COMMIT
                        UNLOCK
                        wvw_lclosewindow()
                        RETURN NIL
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************** f i m ***********************************

