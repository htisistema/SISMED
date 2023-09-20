* FECHAMENTO DO DIA
*************************
FUNCTION smed483
*****************
LOCAL mprg:='SMED481',opcao,mdata,mtot_vlr :=0, mtot_qtd := 0
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),mtraco := REPLI('-',80),;
        mcod_cli:='',cons_cli := {},cons_conv := {},cons_dupr := {}

IF ! ver_nivel(mprg,'CONFIRMACAO DE DIARIA','12',nivel_acess)
        RETURN NIL
ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
*****************************************************
op_tela(01,10,3,70,'CONFIRMACAO DE DIARIA')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'R'
****************************************************
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mtot_vlr := mtot_qtd := 0
        opcao:= ' '
        mdata := DATE()
        IF(m_set[1,41]='1',f7_cli1('C'),f7_cli('C'))
        IF LASTKEY() = 27
                EXIT
        ENDIF
        //@ 1,20 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        //READ
        //IF LASTKEY() = 27
        //        EXIT
        //ENDIF
        cons_cli := {}
        sr_getconnection():exec("SELECT * FROM smedcli WHERE registro = "+sr_cdbvalue(mcod_cli),,.t.,@cons_cli)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_cli) = 0
                atencao('CLIENTE nao cadastrado...')
                LOOP
        ENDIF
        DEVPOS(1,1);DEVOUT('CLIENTE..........: '+cons_cli[1,1]+' - '+cons_cli[1,3])
        DEVPOS(2,1);DEVOUT('Data Fechamento..: '+DTOC(DATE()))
        opcao := op_simnao('S','Confirma Processo [S/N]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        cons_conv := {}
        sr_getconnection():exec("SELECT * FROM smedconv WHERE codconv = "+sr_cdbvalue(cons_cli[1,18]),,.t.,@cons_conv)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_conv) = 0
                atencao('Convenio nao cadastrado...')
                LOOP
        ENDIF
        IF cons_conv[1,2] = 'IT'
                atencao('Convenio com a MODALIDADE INTEGRAL...')
                LOOP
        ENDIF
        mdupl := SUBSTR(DTOC(mdata),1,2)+SUBSTR(DTOC(mdata),4,2)+SUBSTR(DTOC(mdata),7)
        cons_dupr := {}
        sr_getconnection():exec("SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(cons_cli[1,1])+" AND duplicata = "+sr_cdbvalue(mdupl) ,,.t.,@cons_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_dupr) > 0
                atencao('Este Documento ja foi processado...')
                LOOP
        ENDIF
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                'conv,'+;
                'tipo,'+;
                'duplicata,'+;
                'valor_dup,'+;
                'fornec,'+;
                'cliente,'+;
                'emissao,'+;
                'venc,'+;
                'valor,'+;
                'operador,'+;
                'datope,'+;
                'c_cpfcnpj,'+;
                'SR_DELETED )'+;
                ' VALUES ('+;
                sr_cdbvalue(cons_cli[1,18])+','+; //1
                sr_cdbvalue('DI')+','+; //2
                sr_cdbvalue(mdupl)+','+; //4
                sr_cdbvalue(cons_cli[1,66])+','+; //5
                sr_cdbvalue(cons_cli[1,1])+','+; //6
                sr_cdbvalue(cons_cli[1,3])+','+; //7
                sr_cdbvalue(mdata)+','+;//9
                sr_cdbvalue(mdata)+','+;//10
                sr_cdbvalue(cons_cli[1,66])+','+;//12
                sr_cdbvalue(cod_operado)+','+;//18
                sr_cdbvalue(DATE())+','+;//18
                sr_cdbvalue(cons_cli[1,55])+','+;//18
                sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDDO
wvw_lclosewindow()
RETURN NIL
