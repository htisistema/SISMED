**************************
* EXCLUSAO DE ESPECIALIDADE
**************************

FUNCTION smed273
****************
LOCAL mprg:='SMED273',;
      lci,cci,lba,cba,opcao,tela223,tela1

lci := cci := 0
lba := 15
cba := 77
op_tela(11,24,15,77,'EXCLUSAO DE ESPECIALIDADE')
WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Descricao....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor R$.....:')
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(espe->cod_espe)
        DEVPOS(lci+2,cci+18);DEVOUT(espe->espe)
        DEVPOS(lci+3,cci+18);DEVOUT(espe->valor)
        opcao := op_simnao('N','Confirma EXCLUSAO [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                EXIT
        ENDIF
        IF BLOQREG()
                DELE
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

