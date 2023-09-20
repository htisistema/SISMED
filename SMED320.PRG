***********************
* CONSULTA DE CONVENIO
***********************

FUNCTION smed320(mcconv)
****************
LOCAL mprg:='SMED320'
LOCAL lci,cci,lba,cba,opcao,mcod

lci := cci := 0
lba := 18
cba := 75
*********************************************
CLOSE ALL
abriarq('smedconv','conv')
*********************************************
IF mcconv = NIL
        mcconv = SPACE(2)
ENDIF
op_tela(09,14,18,75,'CONSULTA DE CONVENIO')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        opcao := 0
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo Convenio.:')
        DEVPOS(lci+1,cci+25);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Razao Social....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Modalidade......:')
        DEVPOS(lci+4,cci+2);DEVOUT('Prazo p/Consulta:')
        DEVPOS(lci+5,cci+2);DEVOUT('Valor Consulta..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Valor Cirurgia..:')
        DEVPOS(lci+7,cci+2);DEVOUT('Endereco........:')
        DEVPOS(lci+8,cci+2);DEVOUT('Fone............:')

        *************
        SELE('conv')
        *************
        SET INTEN ON

        @ lci+1,cci+20 GET mcconv PICT '99'
        READ

        IF LASTKEY() = 27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        IF EMPTY(mcconv)
                LOOP
        ENDIF

        *************
        SEEK mcconv
        *************

        IF ! FOUND()
                atencao('Codigo nao Cadastrado !!!')
                LOOP
        ENDIF
        Mensagem('Tecle <ESC> P/Retornar  - <'+setcim+'> Proximo Registro  - <'+setbaix+'> Registro Anterior')

        WHILE .T.
                setcor(3)
                DEVPOS(lci+1,cci+20);DEVOUT(codconv)
                DEVPOS(lci+1,cci+31);DEVOUT(dataini)
                DEVPOS(lci+2,cci+20);DEVOUT(rsocial)
                DEVPOS(lci+3,cci+20);DEVOUT(modalidade)
                DEVPOS(lci+4,cci+20);DEVOUT(prazo)
                DEVPOS(lci+5,cci+20);DEVOUTPICT(valor_con,'99,999.99')
                DEVPOS(lci+6,cci+20);DEVOUTPICT(valor_op,'999,999.99')
                DEVPOS(lci+7,cci+20);DEVOUT(endereco)
                DEVPOS(lci+8,cci+20);DEVOUTPICT(foneconv,'(999)999-9999')
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
***************************************** f i m ************************************
