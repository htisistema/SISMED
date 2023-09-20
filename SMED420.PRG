**************************
* INCLUSAO DA AGENDA
**************************
FUNCTION smed420
****************
LOCAL lci,cci,lba,cba,opcao,mdatac,mlin1,mlin2,mlin3,mlin4,mlin5,mlin6;
      ,mlin7,mlin8,mlin9,mlin10,tela420,tela1,marca,tecla

lci := cci := 0
lba := 20
cba := 73

op_tela(08,06,20,73,'INCLUSAO DA AGENDA DE COMPROMISSO')

*********************************************
CLOSE ALL
abriarq('smedagen','agen')
* * SET INDEX TO agendata
*********************************************

WHILE .T.
        mdatac := CTOD('  /  /  ')
        marca := SPACE(1)
        opcao := SPACE(1)
        mlin1 := SPACE(50)
        mlin2 := SPACE(50)
        mlin3 := SPACE(50)
        mlin4 := SPACE(50)
        mlin5 := SPACE(50)
        mlin6 := SPACE(50)
        mlin7 := SPACE(50)
        mlin8 := SPACE(50)
        mlin9 := SPACE(50)
        mlin10 := SPACE(50)
        Mensagem('Preencha a Data ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data do Compromisso:')
        DEVPOS(lci+2,cci+2);DEVOUT('Compromisso:')

        *************
        SELE('agen')
        *************
        SET INTEN ON

        mdatac = DATE()

        @ lci+1,cci+24 GET mdatac PICT '@!'
        READ

        IF LASTKEY() = 27
                fecha_tela()
                CLOSE ALL
                RETURN NIL
        ENDIF

        IF EMPTY(mdatac)
            LOOP
        ENDIF

        LOCATE FOR datacomp = mdatac
        IF FOUND()
                marca := 'X'
                mlin1 := lin1
                mlin2 := lin2
                mlin3 := lin3
                mlin4 := lin4
                mlin5 := lin5
                mlin6 := lin6
                mlin7 := lin7
                mlin8 := lin8
                mlin9 := lin9
                mlin10 := lin10
        ENDIF

        @ lci+2,cci+16 GET mlin1 PICT '@!'
        @ lci+3,cci+16 GET mlin2 PICT '@!'
        @ lci+4,cci+16 GET mlin3 PICT '@!'
        @ lci+5,cci+16 GET mlin4 PICT '@!'
        @ lci+6,cci+16 GET mlin5 PICT '@!'
        @ lci+7,cci+16 GET mlin6 PICT '@!'
        @ lci+8,cci+16 GET mlin7 PICT '@!'
        @ lci+9,cci+16 GET mlin8 PICT '@!'
        @ lci+10,cci+16 GET mlin9 PICT '@!'
        @ lci+11,cci+16 GET mlin10 PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF marca = ' '
                        IF ADIREG()
                                REPLA datacomp WITH mdatac
                                REPLA lin1 WITH mlin1
                                REPLA lin2 WITH mlin2
                                REPLA lin3 WITH mlin3
                                REPLA lin4 WITH mlin4
                                REPLA lin5 WITH mlin5
                                REPLA lin6 WITH mlin6
                                REPLA lin7 WITH mlin7
                                REPLA lin8 WITH mlin8
                                REPLA lin9 WITH mlin9
                                REPLA lin10 WITH mlin10
                                COMMIT
                                UNLOCK
                                LOOP
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ELSE
                        IF BLOQREG()
                                REPLA datacomp WITH mdatac
                                REPLA lin1 WITH mlin1
                                REPLA lin2 WITH mlin2
                                REPLA lin3 WITH mlin3
                                REPLA lin4 WITH mlin4
                                REPLA lin5 WITH mlin5
                                REPLA lin6 WITH mlin6
                                REPLA lin7 WITH mlin7
                                REPLA lin8 WITH mlin8
                                REPLA lin9 WITH mlin9
                                REPLA lin10 WITH mlin10
                                COMMIT
                                UNLOCK
                                LOOP
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
fecha_tela()
CLOSE ALL
RETURN NIL
