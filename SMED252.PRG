*************************************
* ALTERACAO DE RECEITAS POR CODIGO DE MEDICAMENTOS
*************************************
FUNCTION smed252
****************
LOCAL opcao,tela,tela1,mcod_rece

PRIVATE mcod1,mcod2,mcod3,mcod4,mcod5,mcod6,muso1,muso2,muso3,muso4,muso5,muso6,;
        mdose1,mdose2,mdose3,mdose4,mdose5,mdose6,mposo1,mposo2,mposo3,mposo4,mposo5,;
        mposo6,mnome1,mnome2,mnome3,mnome4,mnome5,mnome6,lci,cci,lba,cba,traco

traco := REPLI('-',80)

lci := cci := 0
lba := 22
cba := 80
op_tela(03,10,22,90,'ALTERACAO DE RECEITAS')
muso1 := SPACE(7)
muso2 := SPACE(7)
muso3 := SPACE(7)
muso4 := SPACE(7)
muso5 := SPACE(7)
muso6 := SPACE(7)

mcod1 := SPACE(5)
mcod2 := SPACE(5)
mcod3 := SPACE(5)
mcod4 := SPACE(5)
mcod5 := SPACE(5)
mcod6 := SPACE(5)

mnome1 := SPACE(15)
mnome2 := SPACE(15)
mnome3 := SPACE(15)
mnome4 := SPACE(15)
mnome5 := SPACE(15)
mnome6 := SPACE(15)

mdose1 := SPACE(24)
mdose2 := SPACE(24)
mdose3 := SPACE(24)
mdose4 := SPACE(24)
mdose5 := SPACE(24)
mdose6 := SPACE(24)

mposo1 := SPACE(50)
mposo2 := SPACE(50)
mposo3 := SPACE(50)
mposo4 := SPACE(50)
mposo5 := SPACE(50)
mposo6 := SPACE(50)
mcod_rece := SPACE(5)
mdata := CTOD('  /  /  ')
WHILE .T.
        opcao := SPACE(1)
        Mensagem('Preencha os Codigo - <ESC> p/Abandonar')
        setcor(3)
        @ lci+2,cci TO lci+2,cba
        @ lci+5,cci TO lci+5,cba
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Receita:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo')
        DEVPOS(lci+3,cci+11);DEVOUT('Uso')
        DEVPOS(lci+3,cci+20);DEVOUT('Nome Med.')
        DEVPOS(lci+3,cci+40);DEVOUT('Dosagem:')
        DEVPOS(lci+4,cci+10);DEVOUT('Posologia:')
        @ lci+1,cci+21 GET mcod_rece PICT '99999'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_rece)
                LOOP
        ENDIF
        *************
        SELE('rece');ORDSETFOCUS(1)
        GO TOP
        *************

        SEEK mcod_rece

        IF ! FOUND()
                atencao('Receita nao Cadastrada !!!')
                LOOP
        ENDIF
        mcod_rece := rece->cod_rece
        mcod1 := rece->codigo1
        mcod2 := rece->codigo2
        mcod3 := rece->codigo3
        mcod4 := rece->codigo4
        mcod5 := rece->codigo5
        mcod6 := rece->codigo6
        mensagem('Campos Liberados para Alteracao')
        @ lci+7,cci+2 GET mcod1 PICT '99999' VALID med(mcod1,1)
        @ lci+9,cci+2 GET mcod2 PICT '99999' VALID med(mcod2,2) WHEN mcod1 <> ' '
        @ lci+11,cci+2 GET mcod3 PICT '99999' VALID med(mcod3,3) WHEN mcod2 <> ' '
        @ lci+13,cci+2 GET mcod4 PICT '99999' VALID med(mcod4,4) WHEN mcod3 <> ' '
        @ lci+15,cci+2 GET mcod5 PICT '99999' VALID med(mcod5,5) WHEN mcod4 <> ' '
        @ lci+17,cci+2 GET mcod6 PICT '99999' VALID med(mcod6,6) WHEN mcod5 <> ' '
        READ

        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := 'S'
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                BLOQREG()
                REPLA cod_rece WITH mcod_rece
                REPLA codigo1 WITH mcod1
                REPLA codigo2 WITH mcod2
                REPLA codigo3 WITH mcod3
                REPLA codigo4 WITH mcod4
                REPLA codigo5 WITH mcod5
                REPLA codigo6 WITH mcod6
                COMMIT
                UNLOCK
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************** f i m ***********************************

