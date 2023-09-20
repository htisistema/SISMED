*************************
* MENU Cliente
*** smed310.PRG:  Menu de Clientes
*************************
FUNCTION smed310(mtp)
*****************
LOCAL mprg:='SMED310';
      ,tela1,lci,cci,lba,cba,point,mregistro,mnome,opcao

PRIVATE mprazo:=0,mmod,mfator,mrsoc,mvalor,mdata,mconsulta,mrecib

IF ! ver_nivel(mprg,'CONSULTA DE CLIENTES PELO MEDICO','1',nivel_acess)
        RETURN NIL
ENDIF
lci := cci := 0
lba := 19
cba := 69
tela1 := SAVESCREEN(00,00,24,79)
op_tela(07,08,19,69,' CONSULTA DE CLIENTES PELO MEDICO ')
*****************************************************
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedtab','tab');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
IF ! abriarq('smedmov','contr');RETURN NIL;ENDIF
IF ! abriarq('smeddro','dro');RETURN NIL;ENDIF
IF ! abriarq('smedrec','rec');RETURN NIL;ENDIF
IF ! abriarq('smedclin','clin');RETURN NIL;ENDIF
IF ! abriarq('smedrece','rece');RETURN NIL;ENDIF
IF ! abriarq('smedcomp','com');RETURN NIL;ENDIF
IF ! abriarq('smedpulm','pul');RETURN NIL;ENDIF
IF ! abriarq('smedradio','rad');RETURN NIL;ENDIF
IF ! abriarq('smedhist','hist');RETURN NIL;ENDIF
IF ! abriarq('smedexam','exam');RETURN NIL;ENDIF
IF ! abriarq('smeddiag','diag');RETURN NIL;ENDIF
IF ! abriarq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! abriarq('smedcond','cond');RETURN NIL;ENDIF
*****************************************************
pode=.T.
WHILE .T.
        exibi_prg(mprg)
        IF mtp = NIL
                f7_cli()
        ENDIF
        IF LASTKEY()=27
                EXIT
        ENDIF
        mvalor := 0
        mdata := DATE()
        mregistro := 0
        mnome := SPACE(35)
        mconsulta := SPACE(1)
        point=RECNO()
        mregistro := VAL(cli->registro)
        setcor(1)
        mreg := cli->registro
        mcconv := cli->codconv
        mnome := cli->nome
        vcconv(cli->codconv)
        mvalor := conv->valor_con
        DEVPOS(lci+1,cci+2);DEVOUT('Data Cadastro:')
        DEVPOS(lci+2,cci+2);DEVOUT('Registro.....:')
        DEVPOS(lci+3,cci+2);DEVOUT('Convenio.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data Nascim..:')
        DEVPOS(lci+5,cci+2);DEVOUT('Idade........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Responsavel..:')
        DEVPOS(lci+7,cci+2);DEVOUT('Indicado Por :')
        DEVPOS(lci+8,cci+2);DEVOUT('Profissao ...:')
        DEVPOS(lci+9,cci+2);DEVOUT('Ult.Consulta.:')
        DEVPOS(lci+9,cci+27);DEVOUT('Prox.Consulta:')
        DEVPOS(lci+11,cci+2);DEVOUT('Tipo de Consulta.:')
        setcor(3)
        @ lci+10,cci+1 TO lci+10,cba-1
        setcor(1)
        DEVPOS(lci+12,cci+2);DEVOUT('Data da Consulta.:')
        setcor(3)
        DEVPOS(lci+1,cci+17);DEVOUT(DTOC(cli->data))
        DEVPOS(lci+2,cci+17);DEVOUT(cli->registro)
        DEVPOS(lci+2,COL());DEVOUT('-'+cli->nome)
        DEVPOS(lci+3,cci+17);DEVOUT(mrsoc)
        DEVPOS(lci+4,cci+17);DEVOUT(DTOC(cli->datans))
        DEVPOS(lci+5,cci+17);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(lci+6,cci+17);DEVOUT(cli->resp)
        DEVPOS(lci+7,cci+17);DEVOUT(cli->indica)
        DEVPOS(lci+8,cci+17);DEVOUT(cli->profissao)
        DEVPOS(lci+9,cci+17);DEVOUT(DTOC(cli->datault))
        DEVPOS(lci+9,cci+42);DEVOUT(DTOC(cli->datault+mprazo))
        IF mtp = NIL
                //mensagem("<C>onsulta - <U>so Medico - <ESC>Retorna" )
                opcao := 'U'
                //@ lci+11,cci+21 GET opcao PICT '@!' VALID opcao $ 'C,U'
                //READ
                IF opcao = "C"
                        IF mmod = 'CH' .OR. mmod = 'SR'
                                mrecib = 'N'
                        ENDIF
                        IF mmod = 'CR'
                                mrecib = 'S'
                        ENDIF
                        @ lci+12,cci+21 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                                UNLOCK
                                LOOP
                        ENDIF
                        IF mdata - cli->datault >= mprazo
                                mconsulta := 'C'
                        ELSE
                                mconsulta := 'R'
                        ENDIF
                        smed311()
                ELSEIF opcao="U"
                        smed313()
                ELSEIF LASTKEY()=27
                        EXIT
                ENDIF
        ELSE
                IF mmod = 'CH' .OR. mmod = 'SR'
                        mrecib = 'N'
                ENDIF
                IF mmod = 'CR'
                        mrecib = 'S'
                ENDIF
                @ lci+12,cci+21 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        UNLOCK
                        LOOP
                ENDIF
                IF mdata - cli->datault >= mprazo
                        mconsulta := 'C'
                ELSE
                        mconsulta := 'R'
                ENDIF
                smed311()
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
