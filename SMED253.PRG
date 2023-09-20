*************************************
* EXCLUSAO DE RECEITAS POR CODIGO
*************************************

FUNCTION smed253
****************


LOCAL opcao,tela,tela1,mcod_rece

PRIVATE mcod1,mcod2,mcod3,mcod4,mcod5,mcod6,muso1,muso2,muso3,muso4,muso5,muso6,;
        mdose1,mdose2,mdose3,mdose4,mdose5,mdose6,mposo1,mposo2,mposo3,mposo4,mposo5,;
        mposo6,mnome1,mnome2,mnome3,mnome4,mnome5,mnome6,lci,cci,lba,cba,traco

traco := REPLI('-',80)

lci := 03
cci := 02
lba := 22
cba := 77
tela := SAVESCREEN(00,00,24,79)
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
        *************
        SELE('rece')
        *************
        opcao := SPACE(1)
        Mensagem('Preencha os Codigo - <ESC> p/Abandonar')
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+2,cci+1 TO lci+2,cba-1
        @ lci+5,cci+1 TO lci+5,cba-1
        setcor(1)
        tela1 := SAVESCREEN(lci+6,cci+1,lba-1,cba-1)

        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Receita:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo')
        DEVPOS(lci+3,cci+11);DEVOUT('Uso')
        DEVPOS(lci+3,cci+20);DEVOUT('Nome Med.')
        DEVPOS(lci+3,cci+40);DEVOUT('Dosagem:')
        DEVPOS(lci+4,cci+10);DEVOUT('Posologia:')
        @ lci+1,cci+21 GET mcod_rece PICT '99999'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_rece)
                LOOP
        ENDIF

        SEEK mcod_rece

        IF ! FOUND()
                atencao('Receita nao Cadastrada !!!')
                LOOP
        ENDIF
        Mensagem('Tecle <E> p/Exclusao - <'+setcim+'> Prox.Reg.- <'+setbaix+'> Reg.Ant. - <ESC> bandonar')
        WHILE .T.
                mcod_rece := cod_rece
                mcod1 := codigo1
                mcod2 := codigo2
                mcod3 := codigo3
                mcod4 := codigo4
                mcod5 := codigo5
                mcod6 := codigo6
                setcor(3)
                DEVPOS(lci+1,cci+21);DEVOUT(mcod_rece)
                DEVPOS(lci+7,cci+2);DEVOUT(mcod1)
                DEVPOS(lci+9,cci+2);DEVOUT(mcod2)
                DEVPOS(lci+11,cci+2);DEVOUT(mcod3)
                DEVPOS(lci+13,cci+2);DEVOUT(mcod4)
                DEVPOS(lci+15,cci+2);DEVOUT(mcod5)
                DEVPOS(lci+17,cci+2);DEVOUT(mcod6)
                setcor(1)
                med(mcod1,1)
                med(mcod2,2)
                med(mcod3,3)
                med(mcod4,4)
                med(mcod5,5)
                med(mcod6,6)
                INKEY(0)
                RESTSCREEN(lci+6,cci+1,lba-1,cba-1,tela1)
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

                IF LASTKEY() = 69 .OR. LASTKEY() = 101
*                       SET CURSOR ON
                        EXIT
                ENDIF
                IF LASTKEY() = 27
                        SET CURSOR ON
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL
                ENDIF
        ENDDO
        opcao := 'S'
        opcao := op_simnao('S','Confirma Exclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF

        IF opcao = 'S'
                IF BLOQREG()
                        DELE
                        COMMIT
                        UNLOCK
                        atencao('Receita Excluida OK ')
                        INKEY(1)
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO

********************** f i m ***********************************

