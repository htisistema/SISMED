*************************
* CONFIRMACAO CONSULTAS
*************************
FUNCTION smed480
*****************
LOCAL mprg:='SMED480',;
      lci,cci,lba,cba,li,ci,lb,cb,mnome,opcao,mcconv,;
      mtipo_con,mvenci,mobs,mdocumento,mhora,mcons_cons := {},point:=0

PRIVATE mprazo:=0,mmod,mfator,mrsoc,mvalor,mdata,mconsulta,mrecib,mnome_vend,;
        mcom_ven,mcod_esp,mcod_med,mcod_cli,mcons_cli := {}

IF ! ver_nivel(mprg,'CONFIRMACAO CONSULTAS','12',nivel_acess)
        RETURN NIL
ENDIF

li := ci := 0
lb := 19
cb := 78

lci := 07
cci := 08
lba := 19
cba := 69
*****************************************************
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedtab','tab');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
IF ! abriarq('smedmov','contr');RETURN NIL;ENDIF
IF ! abriarq('sacdupr','dupr');RETURN NIL;ENDIF
*****************************************************
pode=.T.
op_tela(07,02,19,78,'CONFIRMACAO CONSULTAS',,1)
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mdata := DATE()
        mcod_cli := mcod_esp := mcod_med := 0
        mnome := SPACE(35)
        mconsulta := SPACE(1)
        mdocumento := SPACE(10)

        mcons_cons := {}
        sr_getconnection():exec("SELECT * FROM smedcon WHERE data = "+sr_cdbvalue(mdata_sis),,.t.,@mcons_cons)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(mcons_cons) > 0
                magenda := {}
                i:=0
                FOR i = 1 TO LEN(mcons_cons)
                                 //          5            1       5                35                  2                    15
                        AADD(magenda,' '+mcons_cons[i,3]+'�'+mcons_cons[i,4]+' '+mcons_cons[i,5]+'�'+mcons_cons[i,6]+'�'+mcons_cons[i,8])
                NEXT
                op_tela(0,0,40,80,'CONSULTAS MARCADAS',,1)
                setcor(3)
                DEVPOS(1,2);DEVOUT('Hora ')
                DEVPOS(1,7);DEVOUT('�')
                DEVPOS(1,9);DEVOUT('Cliente')
                DEVPOS(1,49);DEVOUT('�')
                DEVPOS(1,50);DEVOUT('Cv')
                DEVPOS(1,52);DEVOUT('�')
                DEVPOS(1,53);DEVOUT('Fone')
                @ 2,0 TO 2,80
                setcor(1)
                mensagem("<ESC>Retorna  <ENTER>p/Incluir, Alteracao e Exclusao" )
                point := ACHOICE(3,1,39,79,magenda)
                DO CASE
                        CASE LASTKEY()=27
                                wvw_lclosewindow()
                                EXIT
                        CASE LASTKEY() = 13
                                mcod_cli := VAL(SUBSTR(magenda[point],8,5))
                                IF EMPTY(mcod_cli)
                                        f7_cli1(,SUBSTR(magenda[point],14,35))
                                ENDIF
                                wvw_lclosewindow()
                ENDCASE
        ENDIF
        mvalor := 0
        setcor(1)
        DEVPOS(li+1,ci+1);DEVOUT('Codigo Cliente...:')
        DEVPOS(li+2,ci+1);DEVOUT('Data Ult.Consulta:')
        DEVPOS(li+2,ci+32);DEVOUT('Prox.Consulta:')
        DEVPOS(li+3,ci+1);DEVOUT('Hora de Chegada..:')
        DEVPOS(li+4,ci+1);DEVOUT('Codigo Convenio..:')
        DEVPOS(li+5,ci+1);DEVOUT('Tipo de Consulta.:')
        DEVPOS(li+6,ci+1);DEVOUT('Codigo do Medico.:')
        DEVPOS(li+7,ci+1);DEVOUT('Cod.Especialidade:')
        DEVPOS(li+8,ci+1);DEVOUT('Valor Consulta R$:')
        DEVPOS(li+9,ci+1);DEVOUT('Vencimento.......:')
        DEVPOS(li+10,ci+1);DEVOUT('Documento........:')
        DEVPOS(li+11,ci+1);DEVOUT('Observacao.......:')
        //IF(m_set[1,41]='1',f7_cli1(),f7_cli())
        mensagem('Digite o Codigo ou Nome do Cliente a ser Consultado - <ESC> Retornar')
        @ li+1,ci+20 GET mcod_cli PICT '99999'
        @ li+1,ci+26 GET mnome PICT '@!' WHEN mcod_cli = 0
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! EMPTY(mcod_cli)
                mcons_cli := {}
                sr_getconnection():exec("SELECT * FROM smedcli WHERE registro = "+sr_cdbvalue(STRZERO(mcod_cli,5)),,.t.,@mcons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_cli) = 0
                        mcod_cli := 0
                        atencao('Codigo nao Cadastrado !!!')
                        LOOP
                ENDIF
        ELSEIF ! EMPTY(mnome)
                mcons_cli := {}
                sr_getconnection():exec("SELECT * FROM smedcli WHERE nome = "+sr_cdbvalue(mnome),,.t.,@mcons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_cli) = 0
                        mcod_cli := 0
                        atencao('Codigo nao Cadastrado !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(li+1,ci+20);DEVOUT(STRZERO(mcod_cli,5))
        DEVPOS(li+1,ci+26);DEVOUT(mcons_cli[1,3])
        mcod_med := 1
        mreg := mcons_cli[1,1]
        mcconv := mcons_cli[1,18]
        mnome := mcons_cli[1,3]
        vcconv(mcons_cli[1,18])
        mvalor := conv->valor_con
        setcor(3)
        DEVPOS(li+1,ci+20);DEVOUT(STRZERO(mcod_cli,5))
        DEVPOS(li+1,ci+26);DEVOUT(mcons_cli[1,3])
        DEVPOS(li+2,ci+20);DEVOUT(DTOC(mcons_cli[1,17]))
        DEVPOS(li+2,ci+47);DEVOUT(DTOC(mcons_cli[1,17]+mprazo))
        setcor(1)
        mhora := TIME()
        mvalor := 0
        mvenci := mdata_sis
        mtipo_con := SPACE(1)
        mobs := SPACE(50)
        @ li+3,ci+20 GET mhora PICT '99:99:99'
        @ li+4,ci+20 GET mcconv PICT '99' VALID vcconv(mcconv,li+4,ci+23)
        @ li+5,ci+20 GET mtipo_con PICT '@!' VALID mtipo_con $ 'C,R' .AND. lim_get() WHEN men_get(li+6,ci+20,'Digite [C]onsulta [R]etorno de consulta')
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mtipo_con = 'C'
                mvalor := conv->valor_con
        ELSEIF mtipo_con = 'O'
                mvalor := conv->valor_op
        ELSE
                mvenci := mdata_sis
                mvalor := 0
        ENDIF
        mdocumento := mtipo_con+SUBSTR(DTOC(mdata_sis),1,2)+SUBSTR(DTOC(mdata_sis),4,2)+SUBSTR(DTOC(mdata_sis),9)+' '
        @ li+6,ci+20 GET mcod_med PICT '999' VALID ven(mcod_med,li+6,ci+24)
        @ li+7,ci+20 GET mcod_esp PICT '999' VALID ver_espe(mcod_esp,li+7,ci+24)
        @ li+8,ci+20 GET mvalor PICT '9,999.99' WHEN mtipo_con <> 'R'
        @ li+9,ci+20 GET mvenci WHEN mtipo_con <> 'R'
        @ li+10,ci+20 GET mdocumento PICT '@!'
        @ li+11,ci+20 GET mobs PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Operacao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        *************
        SELE('dupr');ORDSETFOCUS(9)
        *************
        IF dupr->(DBSEEK(STRZERO(mcod_cli,5)+' '+'CO'+STRZERO(mcod_esp,3)+STRZERO(mcod_med,3)))
                opcao := op_simnao('N','Esta Duplicata ja existe deseja Incluir mesmo assim [s/N]:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
        ENDIF
        opcao := ' '
        IF mdata_sis = mvenci
                opcao := op_simnao('S','Deseja Baixar este Pagamento Agora [S/n]:')
        ENDIF
        sr_getconnection():exec('INSERT INTO sacdupr ('+;
                                'tipo     ,'+;
                                'tipo_con ,'+;
                                'conv     ,'+;
                                'cod_esp  ,'+;
                                'cod_med  ,'+;
                                'duplicata,'+;
                                'valor_dup,'+;
                                'fornec   ,'+;
                                'cliente  ,'+;
                                'hora     ,'+;
                                'emissao  ,'+;
                                'venc     ,'+;
                                'valor    ,'+;
                                'operador ,'+;
                                'obs      ,'+;
                                'datpag   ,'+;
                                'vlpago   ,'+;
                                'pago     ,'+;
                                'SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue('CO'               )+','+; //1
                                sr_cdbvalue(mtipo_con          )+','+; //4
                                sr_cdbvalue(mcconv             )+','+; //2
                                sr_cdbvalue(STRZERO(mcod_esp,3))+','+; //5
                                sr_cdbvalue(STRZERO(mcod_med,3))+','+; //6
                                sr_cdbvalue(mdocumento         )+','+; //6
                                sr_cdbvalue(mvalor             )+','+; //6
                                sr_cdbvalue(mreg               )+','+; //1
                                sr_cdbvalue(mnome              )+','+; //4
                                sr_cdbvalue(mhora              )+','+; //2
                                sr_cdbvalue(mdata_sis          )+','+; //5
                                sr_cdbvalue(mvenci             )+','+; //6
                                sr_cdbvalue(mvalor             )+','+; //6
                                sr_cdbvalue(cod_operado        )+','+; //6
                                sr_cdbvalue(mobs               )+','+; //6
                                IF( mvalor = 0 .OR.  opcao = 'S',sr_cdbvalue(mdata_sis),'NULL')+','+; //6
                                IF( mvalor = 0 .OR.  opcao = 'S',sr_cdbvalue(mvalor),0)+','+; //6
                                IF( mvalor = 0 .OR.  opcao = 'S',sr_cdbvalue('*'),sr_cdbvalue(' '))+','+; //6
                                sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)

        /*
        IF ! ADIREG()
                atencao('Nao foi possivel incluir o registro')
                LOOP
        ENDIF
        dupr->tipo     := 'CO'
        dupr->tipo_con := mtipo_con
        dupr->conv     := mcconv
        dupr->cod_esp  := STRZERO(mcod_esp,3)
        dupr->cod_med  := STRZERO(mcod_med,3)
        dupr->duplicata:= mdocumento
        dupr->valor_dup:= mvalor
        dupr->fornec   := mreg
        dupr->cliente  := mnome
        dupr->hora     := mhora
        dupr->emissao  := mdata_sis
        dupr->venc     := mvenci
        dupr->valor    := mvalor
        dupr->operador := cod_operado
        dupr->obs      := mobs
        IF mvalor = 0
             dupr->datpag := mdata_sis
             dupr->vlpago := mvalor
             dupr->pago   := '*'
        ENDIF
        IF mdata_sis = mvenci
                opcao := op_simnao('S','Deseja Baixar este Pagamento Agora [S/n]:')
                IF opcao = 'S'
                        dupr->datpag := mdata_sis
                        dupr->vlpago := mvalor
                        dupr->pago   := '*'
                ENDIF
        ENDIF
        DBCOMMITALL()
        DBUNLOCKALL()
        */
        *************
        SELE('cli');ORDSETFOCUS(1)
        *************
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
