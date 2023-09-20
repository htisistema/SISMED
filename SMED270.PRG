**************************
* ALTERACAO DE TABELA PRECO
**************************

FUNCTION smed270
****************
LOCAL mprg:='SMED270'
LOCAL lci,cci,lba,cba,opcao,mvlcr,mvlch,mdata,tela226,tela1

lci := cci := 0
lba := 18
cba := 60
*********************************************
CLOSE ALL
abriarq('smedtab','stab')
*********************************************
op_tela(14,24,18,60,'TABELA DE PRECO')

WHILE .T.
        exibi_prg(mprg)
        *************
        SELE('stab')
        *************
        GO BOTT

        mvlcr := mvlch := 0
        mdata = CTOD('  /  /  ')
        opcao := ' '
        Mensagem('Tecle <ESC> Retornar  ou Altere os Campos')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data da Alteracao :')
        DEVPOS(lci+2,cci+2);DEVOUT('Valor c/Honorario.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor c/Recibo....:')

        SET INTEN ON
        mdata := DATE()
        mvlch := stab->valch
        mvlcr := stab->valcr

        @ lci+1,cci+22 GET mdata PICT '  /  /  '
        @ lci+2,cci+22 GET mvlch PICT '999.99'
        @ lci+3,cci+22 GET mvlcr PICT '9,999,999.99'
        READ

        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                *************
                SELE('stab')
                *************
                IF ADIREG()
                        stab-> valcr := mvlcr
                        stab-> valsr := mvlcr
                        stab-> valch := mvlch
                        stab-> dataalt := mdata
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
wvw_lclosewindow()
RETURN NIL

