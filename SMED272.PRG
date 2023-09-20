**************************
* ALTERACAO DE ESPECIALIDADE
**************************

FUNCTION smed272
****************
LOCAL mprg:='SMED272',;
      lci,cci,lba,cba,opcao,mcod_espe,mespe,mvlr,tela223,tela1

lci := cci := 0
lba := 15
cba := 77
op_tela(11,24,15,77,'ALTERACAO DE ESPECIALIDADES')
WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Descricao....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor R$.....:')
        mespe := espe->espe
        mvlr := espe->valor
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(espe->cod_espe)
        setcor(1)
        @ lci+2,cci+18 GET mespe PICT '@!'
        @ lci+3,cci+18 GET mvlr PICT '999,999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF BLOQREG()
                espe-> espe  := mespe
                espe-> valor := mvlr
                COMMIT
                UNLOCK
                EXIT
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

