**************************
* INCLUSAO DE MEDICAMENTOS
**************************

FUNCTION smed241
****************

LOCAL lci,cci,lba,cba,opcao,mnomedr,mnomecom,mdose,mposo,mefei,mprec,tela214,mcod,;
      muso,tela2

lci := cci := 0
lba := 21
cba := 77
op_tela(13,05,21,77,'INCLUSAO DE MEDICAMENTO')

WHILE .T.
        *************
        SELE('dro')
        SET ORDER TO 2
        *************
        GO BOTT
        mcod := STRZERO(VAL(cod_med)+1,5)
        muso := SPACE(7)
        opca := SPACE(1)
        opcao := SPACE(1)
        mnomedr := SPACE(20)
        mnomecom := SPACE(15)
        mdose := SPACE(24)
        mposo := SPACE(50)
        mefei := SPACE(50)
        mprec := SPACE(50)

        Mensagem('Preencha os Campos ou Tecle <ESC> P/Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod. Medicamento..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome Comercial....:')
        DEVPOS(lci+2,cci+40);DEVOUT('Uso ...:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nome da Droga.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Quantd.Dose.......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Posologia.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Efeitos Colaterais:')
        DEVPOS(lci+7,cci+2);DEVOUT('Precaucoes........:')

        setcor(3)
        DEVPOS(lci+1,cci+22);DEVOUT(mcod)
        setcor(1)
        @ lci+2,cci+22 GET mnomecom PICT '@!'
        READ
        IF LASTKEY() = 27
                SET ORDER TO 1
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF EMPTY(mnomecom)
                LOOP
        ENDIF

        *****************
        SEEK mnomecom
        *****************

        IF FOUND()
                setcor(3)
                op_tela(15,08,20,48)
                @ 02,0 TO 02,48 DOUBLE
                setcor(1)
                SETCOLOR('w+*/n,x')
                DEVPOS(01,12);DEVOUT('Medicamento Existente no Arquivo !!!')
                setcor(1)
                DEVPOS(03,0);DEVOUT('Nome Comercial:')
                DEVPOS(04,0);DEVOUT('Nome da Droga.:')
                setcor(3)
                DEVPOS(03,16);DEVOUT(nomecom)
                DEVPOS(04,16);DEVOUT(nomedroga)
                setcor(1)
                INKEY(3)
                wvw_lclosewindow()
                LOOP
        ENDIF
        @ lci+2,cci+49 GET muso PICT '@!'
        @ lci+3,cci+22 GET mnomedr PICT '@!'
        @ lci+4,cci+22 GET mdose PICT '@!'
        @ lci+5,cci+22 GET mposo PICT '@!'
        @ lci+6,cci+22 GET mefei PICT '@!'
        @ lci+7,cci+22 GET mprec PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF ADIREG()
                        REPLA cod_med WITH mcod
                        REPLA uso_med WITH muso
                        REPLA nomedroga WITH mnomedr
                        REPLA nomecom WITH mnomecom
                        REPLA dose_quant WITH mdose,posologia WITH mposo
                        REPLA efeito_col WITH mefei,precaucoes WITH mprec
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

