**************************
* ALTERACAO DE ESPECIALISTA
**************************
FUNCTION smed232
****************
LOCAL mprg:='SMED232'
LOCAL lci,cci,lba,cba,opcao,mprof,mesp,mfone,mend,mcep,mcid,tela223,tela1,mcrm

lci := cci := 0
lba := 20
cba := 77
op_tela(11,24,20,77,'ALTERACAO DE ESPECIALISTA')
WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        mprof := SPACE(35)
        mesp := SPACE(20)
        mend := SPACE(35)
        mcid := SPACE(20)
        mcep := SPACE(9)
        mfone := SPACE(13)
        mcrm  := SPACE(15)
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Profissional.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+4,cci+2);DEVOUT('CRM..........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Fone.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Endereco.....:')
        DEVPOS(lci+7,cci+2);DEVOUT('Cidade.......:')
        DEVPOS(lci+8,cci+2);DEVOUT('CEP..........:')
        mprof := med->profission
        mesp := med->especialid
        mcrm := med->crm
        mfone := med->fone
        mend := med->endereco
        mcid := med->cidade
        mcep := med->cep
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(med->cod_espe)
        setcor(1)
        @ lci+2,cci+18 GET mprof PICT '@!'
        @ lci+3,cci+18 GET mesp PICT '@!'
        @ lci+4,cci+18 GET mcrm
        @ lci+5,cci+18 GET mfone
        @ lci+6,cci+18 GET mend PICT '@!'
        @ lci+7,cci+18 GET mcid PICT '@!'
        @ lci+8,cci+18 GET mcep
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF BLOQREG()
                med-> profission := mprof
                med-> especialid := mesp
                med-> crm := mcrm
                med-> fone := mfone
                med-> endereco := mend
                med-> cep := mcep
                med-> cidade := mcid
                COMMIT
                UNLOCK
                wvw_lclosewindow()
                RETURN NIL
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

