*************************************
* MENU DE RECEITAS
*************************************
FUNCTION smed250
****************
LOCAL opcao,tela,mcod_rece,;
      mcod1,mcod2,mcod3,mcod4,mcod5,mcod6,muso1,muso2,muso3,muso4,muso5,muso6,;
      mdose1,mdose2,mdose3,mdose4,mdose5,mdose6,mposo1,mposo2,mposo3,mposo4,mposo5,;
      mposo6,mnome1,mnome2,mnome3,mnome4,mnome5,mnome6,lci,cci,lba,cba,traco

traco := REPLI('-',80)

lci := cci := 0
lba := 22
cba := 80
op_tela(03,10,22,90,'MENU DE RECEITAS')
*********************************************
CLOSE ALL
abriarq('smedrece','rece')
abriarq('smeddro','dro')
*********************************************
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
mdata := DATE()
WHILE .T.
        opcao := SPACE(1)
        setcor(3)
        @ lci+2,cci TO lci+2,cba
        @ lci+5,cci TO lci+5,cba
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod. da Receita:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo')
        DEVPOS(lci+3,cci+11);DEVOUT('Uso')
        DEVPOS(lci+3,cci+20);DEVOUT('Nome Med.')
        DEVPOS(lci+3,cci+40);DEVOUT('Dosagem:')
        DEVPOS(lci+4,cci+10);DEVOUT('Posologia:')
        setcor(3)
        DEVPOS(lci+7,cci+2);DEVOUT(mcod1)
        DEVPOS(lci+9,cci+2);DEVOUT(mcod2)
        DEVPOS(lci+11,cci+2);DEVOUT(mcod3)
        DEVPOS(lci+13,cci+2);DEVOUT(mcod4)
        DEVPOS(lci+15,cci+2);DEVOUT(mcod5)
        DEVPOS(lci+17,cci+2);DEVOUT(mcod6)
        setcor(1)
        mensagem('<I>Inclusao  -  <E>xclusao  -  <A>lteracao  -  <ESC> p/Abandonar')
        INKEY(0)
        IF LASTKEY() = 27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                *************
                SELE('rece');ORDSETFOCUS(1)
                GO BOTT         
                *************
                mcod_rece := STRZERO(VAL(cod_rece)+1,5)
                smed251()
                LOOP
        ELSEIF LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                smed252()
                LOOP
        ELSEIF LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                smed253()
                LOOP
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL