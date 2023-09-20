**************************
* ALTERACAO DE MEDICAMENTOS
**************************

FUNCTION smed242
****************

LOCAL lci,cci,lba,cba,opcao,mnomedr,mnomecom,mdose,mposo,mefei,mprec,tela,;
      tela2,tela1

PRIVATE mcod_med

lci := cci := 0
lba := 22
cba := 77
op_tela(14,04,22,77,'ALTERACAO DE MEDICAMENTOS')

WHILE .T.
        mcod_med := SPACE(5)
        opca := SPACE(1)
        opcao := 0
        mnomedr := SPACE(20)
        mnomecom := SPACE(15)
        mdose := SPACE(24)
        mposo := SPACE(50)
        mefei := SPACE(50)
        mprec := SPACE(50)
        mensagem('Preencha o Campo ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod. Medicamento..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome Comercial....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nome da Droga.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Quantd.Dose.......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Posologia.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Efeitos Colaterais:')
        DEVPOS(lci+7,cci+2);DEVOUT('Precaucoes........:')
/*
        //WHILE .T.

                //Mensagem('<ESC> Retornar - <A> Alterar Reg. - <'+setcim+'> Prox.Reg. - <'+setbaix+'> Reg.Ant.')

                mcod_med := cod_med
                mnomecom := nomecom
                mnomedr := nomedroga
                mdose := dose_quant
                mposo := posologia
                mefei := efeito_col
                mprec := precaucoes
                setcor(3)
                DEVPOS(lci+1,cci+22);DEVOUT(mcod_med)
                DEVPOS(lci+2,cci+22);DEVOUT(mnomecom)
                DEVPOS(lci+3,cci+22);DEVOUT(mnomedr)
                DEVPOS(lci+4,cci+22);DEVOUT(mdose)
                DEVPOS(lci+5,cci+22);DEVOUT(mposo)
                DEVPOS(lci+6,cci+22);DEVOUT(mefei)
                DEVPOS(lci+7,cci+22);DEVOUT(mprec)
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
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF

                IF LASTKEY() = 65 .OR. LASTKEY() = 97
                        SET CURSOR ON
                        EXIT
                ENDIF

        ENDDO
*/
        mcod_med := dro->cod_med
        mnomecom := dro->nomecom
        mnomedr := dro->nomedroga
        mdose := dro->dose_quant
        mposo := dro->posologia
        mefei := dro->efeito_col
        mprec := dro->precaucoes

        Mensagem('Campos Liberados para Alteracoes')
        @ lci+1,cci+22 GET mcod_med PICT '99999'
        @ lci+2,cci+22 GET mnomecom PICT '@!'
        @ lci+3,cci+22 GET mnomedr PICT '@!'
        @ lci+4,cci+22 GET mdose PICT '@!'
        @ lci+5,cci+22 GET mposo PICT '@!'
        @ lci+6,cci+22 GET mefei PICT '@!'
        @ lci+7,cci+22 GET mprec PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF BLOQREG()
                        REPLA cod_med WITH mcod_med
                        REPLA nomedroga WITH mnomedr
                        REPLA nomecom WITH mnomecom
                        REPLA dose_quant WITH mdose,posologia WITH mposo
                        REPLA efeito_col WITH mefei,precaucoes WITH mprec
                        COMMIT
                        UNLOCK
                        EXIT
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        EXIT
                ENDIF
        ELSE
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

