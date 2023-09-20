***************************
* CONSULTA DE MEDICAMENTOS
**************************

FUNCTION smed340
****************
LOCAL mprg:='SMED340'
LOCAL lci,cci,lba,cba,opcao,mnomedr,mnomecom,mdose,mposo,mefei,mprec,tela340,;
      mcod

lci := cci := 0
lba := 19
cba := 76
tela340 := SAVESCREEN(00,00,24,79)

*********************************************
CLOSE ALL
abriarq('smeddro','dro')
* SET INDEX TO droncom,drocod
*********************************************
op_tela(11,03,19,76,'CONSULTA DE MEDICAMENTO')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        mcod := SPACE(5)
        opca := SPACE(1)
        opcao := 0
        mnomedr := SPACE(20)
        mnomecom := SPACE(15)
        mdose := SPACE(24)
        mposo := SPACE(50)
        mefei := SPACE(50)
        mprec := SPACE(50)
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod. Medicamento..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome Comercial....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nome da Droga.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Quantd.Dose.......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Posologia.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Efeitos Colaterais:')
        DEVPOS(lci+7,cci+2);DEVOUT('Precaucoes........:')

        SET INTEN ON

        @ lci+1,cci+22 GET mcod PICT '99999'
        READ
        IF LASTKEY() = 27
                SET ORDER TO 1
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF ! EMPTY(mcod)
                *****************
                SELE('dro')
                SET ORDER TO 2
                GO TOP
                *****************
                SEEK mcod
                IF ! FOUND()
                        atencao('Medicamento nao Cadastrado no Arquivo !!!')
                        LOOP
                ENDIF

        ELSE
                *****************
                SELE('dro')
                SET ORDER TO 1
                GO TOP
                *****************
                @ lci+2,cci+22 GET mnomecom PICT '@!'
                READ
                IF ! dro->(DBSEEK(RTRIM(mnomecom)))
                        atencao('Medicamento nao Cadastrado no Arquivo !!!')
                        LOOP
                ENDIF
        ENDIF
        Mensagem('Tecle <ESC> P/Retornar - <'+setcim+'> Proximo Registro - <'+setbaix+'> Registro Anterior')

        WHILE .T.
                mcod := cod_med
                mnomecom := nomecom
                mnomedr := nomedroga
                mdose := dose_quant
                mposo := posologia
                mefei := efeito_col
                mprec := precaucoes
                setcor(3)
                DEVPOS(lci+1,cci+22);DEVOUT(mcod)
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
                        EXIT
                ENDIF
        ENDDO
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL

