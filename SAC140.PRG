*************************
* INCLUSAO DE FORNECEDOR / CONTA A PAGAR
*************************
FUNCTION sac140(mxml)
***************
LOCAL MPRG:='SAC140',;
      mcod_forn,mfabrica,mendereco,mbairro,mcidade,muf,mcep,mcpostal,mtel1,mtel2,;
      mfax,mcgc,minsc,mprazo_pag,mct_gerente,mct_vendedo,mct_fatura,;
      mct_cobran,mlimite,mobs,mbanco,mcarteira,opcao,li,ci,lb,cb,;
      mcodigo,tela,tela1,tela2,lba,cba,point,pode,memail,mobs1,mobs2,;
      mobs3,mobs4,mobs5,mcpf,mdata_cad,mct_cobranca,mpocket := ' ',mfantasia,aret:={}
MEMVAR nivel_acess,mdata_sis,getlist
PRIVATE mcodconta

IF ! ver_nivel(mprg,'INCLUSAO DE FORNECEDOR/CONTA APAGAR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 22
cba := 90
op_tela(02,10,22,90,' Inclusao de Fornecedor e OUTROS ')
WHILE .T.
        opcao := mpocket := 'S'
        mlimite := 0
        mcarteira := mbanco := SPACE(1)
        muf := SPACE(2)
        mcodigo := mcod_forn := mcodconta := SPACE(4)
        mcpostal := SPACE(6)
        mprazo_pag := SPACE(8)
        mcep := SPACE(9)
        mcpf := SPACE(11)
        mtel1 := mtel2 := mfax := mcgc := minsc := SPACE(14)
        mct_gerente := mct_vendedo := mct_fatura := mct_cobranca := SPACE(15)
        mbairro := mcidade := SPACE(20)
        mendereco := SPACE(35)
        mfabrica := mfantasia := SPACE(40)
        memail := SPACE(120)
        mobs := mobs1:= mobs2:= mobs3:= mobs4:= mobs5:= SPACE(60)
        IF mxml # NIL
                mfabrica  := SUBSTR(mfornece,1,40)
                mfantasia := SUBSTR(mfant_forn,1,40)
                mcgc      := mcnpj_forn
                minsc     := mie_forn
                mendereco := SUBSTR(mend_forn+', '+mnum_forn,1,35)
                mbairro   := SUBSTR(mbairro_forn,1,20)
                mcidade   := SUBSTR(mcid_forn,1,20)
                muf       := muf_forn
                mcep      := mcep_forn
                mtel1     := mfone_forn
        ENDIF
        mensagem('Digite o Nome do Fabricante a ser Cadastrado - <ESC> p/Retornar')
        DEVPOS(0,1);DEVOUT('Codigo....:')
        DEVPOS(0,21);DEVOUT('Data Cadastro:')
        DEVPOS(1,1);DEVOUT('R.Social..:')
        DEVPOS(2,1);DEVOUT('Fantasia..:')
        //DEVPOS(3,1);DEVOUT('Tipo de Conta:')
        DEVPOS(4,1);DEVOUT('CNPJ:')
        DEVPOS(4,26);DEVOUT('Insc.:')

        @ 5,1 TO 5,cba-1
        janela(5,0,' INFORMACOES ','*','*')
        DEVPOS(6,1);DEVOUT('Endereco..:')
        DEVPOS(7,1);DEVOUT('Bairro....:')
        DEVPOS(8,1);DEVOUT('Cidade....:')
        DEVPOS(8,35);DEVOUT('UF...:')
        DEVPOS(8,45);DEVOUT('CEP:')
        DEVPOS(9,1);DEVOUT('Local.....:')
        DEVPOS(9,21);DEVOUT('Email:')

        DEVPOS(10,1);DEVOUT('Fone:')
        DEVPOS(10,23);DEVOUT('Fone:')
        DEVPOS(10,45);DEVOUT('Fax:')

        DEVPOS(11,1);DEVOUT('Banco:')
        DEVPOS(11,11);DEVOUT('Carteira:')
        DEVPOS(11,24);DEVOUT('Prazo Pag.:')
        DEVPOS(11,46);DEVOUT('Limite:')

        DEVPOS(12,1);DEVOUT('Gerente..:')
        DEVPOS(12,32);DEVOUT('Faturamento:')
        DEVPOS(13,1);DEVOUT('Cobranca.:')
        DEVPOS(13,32);DEVOUT('Vendedor...:')
        DEVPOS(14,1);DEVOUT('Enviar p/APP...:')

        DEVPOS(15,1);DEVOUT('Observacao.:')
        aret:={}
        sr_getconnection():exec( "SELECT MAX(cod_forn) FROM sacforn",,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        mcod_forn := STRZERO(VAL(aret[1,1])+1,4)
        setcor(3)
        mdata_cad = mdata_sis
        DEVPOS(0  ,13);DEVOUT(mcod_forn)
        DEVPOS(0  ,36);DEVOUT(mdata_cad)
        setcor(1)
        WVW_DrawBoxGet(,1,13,LEN(mfabrica))
        WVW_DrawBoxGet(,3,16,LEN(mcodconta))
        @ 1,13 GET mfabrica PICT '@!' VALID IF(EMPTY(mfabrica),.F.,.T.)
        @ 2,13 GET mfantasia PICT '@!'
        //@ 3,16 GET mcodconta PICT '@@R 9.9.99' VALID IF(LEN(ALLTRIM(mcodconta))<3,.F.,verdesp(mcodconta,3,22))     //.AND. lim_get() WHEN men_get(4,22,'Informe o Tipo de Conta ou <F1>Ajuda')
        //@ 3,16 GET mcodconta PICT '9999' VALID verdesp(mcodconta,3,22)     //.AND. lim_get() WHEN men_get(4,22,'Informe o Tipo de Conta ou <F1>Ajuda')
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        /*
	IF EMPTY(SUBSTR(mcodconta,3,2)) .AND. ! EMPTY(mcodconta)
                atencao('Tipo de Conta nao e valida...')
                LOOP
        ENDIF
        VerDesp(mcodconta,3,22)
        */
        @ 4,7 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'forn','*','forn')
        @ 4,33 GET minsc PICT '@!'

        @ 6,13 GET mendereco PICT '@!'
        @ 7,13 GET mbairro PICT '@!'
        @ 8,13 GET mcidade PICT '@!'
        @ 8,42 GET muf PICT '@!' 	//VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ 8,50 GET mcep PICT '99999-999'
        @ 9,13 GET mcpostal PICT '999999'
        @ 9,28 GET memail PICT '@S40' VALID lim_get() WHEN men_get(0,0,'Exemplo: sac@HTIsistemas.com.br;teste@hotmail.com (Separa os email por ponto e virgual ";" )')

        @ 10,07 GET mtel1 PICT '@!'
        @ 10,29 GET mtel2 PICT '@!'
        @ 10,50 GET mfax PICT '@!'

        @ 11,8 GET mbanco PICT '@!'
        @ 11,21 GET mcarteira PICT '@!'
        @ 11,36 GET mprazo_pag PICT '@!'
        @ 11,54 GET mlimite PICT '9,999,999.99'

        @ 12,12 GET mct_gerente PICT '@!'
        @ 12,45 GET mct_fatura PICT '@!'
        @ 13,12 GET mct_cobranca PICT '@!'
        @ 13,45 GET mct_vendedo PICT '@!'
        @ 14,19 GET mpocket PICT '@!' VALID mpocket $ 'S,N'

        @ 15,14 GET mobs
        @ 16,14 GET mobs1
        @ 17,14 GET mobs2
        @ 18,14 GET mobs3
        @ 19,14 GET mobs4
        @ 20,14 GET mobs5
        READ
        IF LASTKEY() = 27
                SELE('forn');ORDSETFOCUS(2)
                GO TOP
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do FORNECEDOR:')
        IF opcao = 'N'
                LOOP
        ENDIF
        sr_getconnection():exec('INSERT INTO sacforn ('+;
        'cod_forn  ,'+; //1
        'razao 	   ,'+; //2
        'fantasia  ,'+; //3
        'tipo 	   ,'+; //4
        'data_cad  ,'+; //5
        'endereco  ,'+; //6
        'bairro    ,'+; //7
        'cidade    ,'+; //8
        'uf 	   ,'+; //9
        'cep 	   ,'+; //10
        'cpostal   ,'+; //11
        'email 	   ,'+; //12
        'tel1 	   ,'+; //13
        'tel2 	   ,'+; //14
        'fax 	   ,'+; //15
        'cgc 	   ,'+; //16
        'insc 	   ,'+; //17
        'prazo_pag ,'+; //18
        'ct_gerente,'+; //19
        'ct_fatura ,'+; //20
        'ct_cobran ,'+; //21
        'ct_vendedo,'+; //22
        'limite    ,'+; //23
        'carteira  ,'+; //24
        'banco 	   ,'+; //25
        'obs       ,'+; //26
        'obs1	   ,'+; //27
        'obs2	   ,'+; //28
        'obs3	   ,'+; //20
        'obs4      ,'+;//30
        'obs5	   ,'+; //31
        'APP...	   ,'+; //32
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(mcod_forn                   )+','+; //1
        sr_cdbvalue(mfabrica                    )+','+; //2
        sr_cdbvalue(mfantasia                   )+','+; //3
        sr_cdbvalue(mcodconta                   )+','+; //4
        sr_cdbvalue(mdata_cad                   )+','+; //5
        sr_cdbvalue(mendereco                   )+','+; //6
        sr_cdbvalue(mbairro                     )+','+; //7
        sr_cdbvalue(mcidade                     )+','+; //8
        sr_cdbvalue(muf                         )+','+; //9
        sr_cdbvalue(mcep                        )+','+; //10
        sr_cdbvalue(mcpostal                    )+','+; //11
        sr_cdbvalue(memail                      )+','+; //12
        sr_cdbvalue(mtel1                       )+','+; //13
        sr_cdbvalue(mtel2                       )+','+; //14
        sr_cdbvalue(mfax                        )+','+; //15
        sr_cdbvalue(mcgc                        )+','+; //16
        sr_cdbvalue(minsc                       )+','+; //17
        sr_cdbvalue(mprazo_pag                  )+','+; //18
        sr_cdbvalue(mct_gerente                 )+','+; //19
        sr_cdbvalue(mct_fatura                  )+','+; //20
        sr_cdbvalue(mct_cobranca                )+','+; //21
        sr_cdbvalue(mct_vendedo                 )+','+; //22
        sr_cdbvalue(mlimite     		)+','+; //23
        sr_cdbvalue(mcarteira                   )+','+; //24
        sr_cdbvalue(mbanco                      )+','+; //25
        sr_cdbvalue(mobs                        )+','+; //26
        sr_cdbvalue(mobs1                       )+','+; //27
        sr_cdbvalue(mobs2                       )+','+; //28
        sr_cdbvalue(mobs3                       )+','+; //29
        sr_cdbvalue(mobs4                       )+','+; //30
        sr_cdbvalue(mobs5                       )+','+; //31
        sr_cdbvalue(mpocket                     )+','+; //32
        sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        IF mxml # NIL
                wvw_lclosewindow()
                RETURN mcod_forn
        ENDIF

ENDDO
RETURN NIL
********************************** f i m *******************************
