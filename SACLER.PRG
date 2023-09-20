MEMVAR getlist,nivel_acess
***********************************************
* LER ARQUIVOS DO DOS
***********************************************

FUNCTION sacler(mrel)
******************
LOCAL mprg := 'SACLER'
LOCAL tela,opcao,lci,cci,lba,cba,msele,morde,mno_ped

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtipo_pg,mporta_imp,mquantd

IF ! ver_nivel(mprg,'LER ARQUIVOS DO DOS','1245',nivel_acess)
        RETURN NIL
ENDIF
lci := 10
cci := 03
lba := 12
cba := 78
tela := SAVESCREEN(00,00,24,79)
*---------------------------------------------
CLOSE ALL
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccfg','cfg');RETURN NIL;ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
WHILE .T.
        marq := '\'+CURDIR()+'\'+SPACE(32)
        @ 23,00 CLEAR TO 23,79
        setcor(3)
        botao(lci,cci,lba,cba,,' Ler Arquivos Texto')
        setcor(1)
        DEVPOS(lci+1,cci+1);DEVOUT('Caminho do Arquivo (com extensao)..:')
        @ lci+1,cci+38 GET marq PICT '@S30!'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        marq := RTRIM(marq)
        IF ! FILE((marq))
                atencao('Nao foi possivel encontrar este ARQUIVO')
                LOOP
        ENDIF
        lertexto(marq)
ENDDO
RETURN NIL

