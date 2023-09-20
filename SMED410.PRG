**************************
* CONSULTA DA AGENDA
**************************
FUNCTION smed410
****************
LOCAL lci,cci,lba,cba,mdatac,tela410,tecla,mlin1,mlin2,mlin4,mlin5,mlin6,mlin7;
      ,mlin8,mlin9,mlin10

lci := cci := 0
lba := 20
cba := 73

op_tela(08,06,20,73,'CONSULTA DA AGENDA DE COMPRISSO')

*********************************************
CLOSE ALL
abriarq('smedagen','agen')
*********************************************

WHILE .T.
        mdatac := CTOD('  /  /  ')
        mlin1 = SPACE(50)
        mlin2 = SPACE(50)
        mlin3 = SPACE(50)
        mlin4 = SPACE(50)
        mlin5 = SPACE(50)
        mlin6 = SPACE(50)
        mlin7 = SPACE(50)
        mlin8 = SPACE(50)
        mlin9 = SPACE(50)
        mlin10 = SPACE(50)
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
        LOCATE FOR datacomp = mdatac
        IF ! FOUND()
                SETCOLOR('w*+/n,x')
                DEVPOS(15,22);DEVOUT('Data Sem Compromisso !!!')
                INKEY(2)
                setcor(1)
                mdatac := CTOD('  /  /  ')
                @ 15,30 CLEAR TO 15,69
                LOOP
        ENDIF
        Mensagem('Tecle <ESC> p/Retornar - <'+setcim+'> Proximo Data - <'+setbaix+'> Data Anterior')
        DO WHILE .T.
                mdatac := DTOC(datacomp)
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
                setcor(3)
                DEVPOS(lci+1,cci+24);DEVOUT(mdatac)
                DEVPOS(lci+2,cci+16);DEVOUT(mlin1)
                DEVPOS(lci+3,cci+16);DEVOUT(mlin2)
                DEVPOS(lci+4,cci+16);DEVOUT(mlin3)
                DEVPOS(lci+5,cci+16);DEVOUT(mlin4)
                DEVPOS(lci+6,cci+16);DEVOUT(mlin5)
                DEVPOS(lci+7,cci+16);DEVOUT(mlin6)
                DEVPOS(lci+8,cci+16);DEVOUT(mlin7)
                DEVPOS(lci+9,cci+16);DEVOUT(mlin8)
                DEVPOS(lci+10,cci+16);DEVOUT(mlin9)
                DEVPOS(lci+11,cci+16);DEVOUT(mlin10)
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
                        EXIT
                ENDIF
        ENDDO
ENDDO
fecha_tela()
CLOSE ALL
RETURN NIL

