* EXCLUSAO DE CLIENTES
**********************
FUNCTION smed213
****************
LOCAL mprg:='SMED213',opcao:=' '

IF ! ver_nivel(mprg,'EXCLUSAO DE CLIENTES','12',nivel_acess)
        RETURN NIL
ENDIF
op_tela(11,24,18,77,'EXCLUSAO DE CLIENTES')
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        DEVPOS(1,2);DEVOUT('Nome ......:')
        DEVPOS(2,2);DEVOUT('Registro ..:')
        DEVPOS(3,2);DEVOUT('Data Inicio:')
        DEVPOS(4,2);DEVOUT('Data Nasc..:')
        DEVPOS(4,24);DEVOUT('Idade:')
        DEVPOS(5,2);DEVOUT('Responsavel:')
        DEVPOS(6,2);DEVOUT('Indicado Por:')
        Mensagem('<ESC> Retornar')
        setcor(3)
        DEVPOS(1,15);DEVOUT(cli->nome)
        DEVPOS(2,15);DEVOUT(cli->registro)
        DEVPOS(3,15);DEVOUT(DTOC(cli->data))
        DEVPOS(4,15);DEVOUT(DTOC(cli->datans))
        DEVPOS(4,31);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(5,15);DEVOUT(cli->resp)
        DEVPOS(6,18);DEVOUT(cli->indica)
        setcor(1)
        opcao := op_simnao('N','Confirma EXCLUSAO DO CLIENTE [s/N]:')
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF opcao = 'S'
                sr_getconnection():exec("DELETE FROM smedcli WHERE registro = "+sr_cdbvalue(cli->registro),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('Cliente foi Excluida OK ')
                EXIT
        ELSE
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
