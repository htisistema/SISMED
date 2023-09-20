*****************************
FUNCTION smeddbf(mop,marquivo,mdbf)
*****************************
LOCAL mprg:='SACDBF',aret,mlinha:='',mcod_bc:='',matriz:={}
PRIVATE cor,f,mtcor:=NIL,tela_dbf,mcaminho,mtip_term,nmaxpsw:=8,mop_tip
mcaminho := SPACE(30)
mop_tip := mop
mtip_term := 'S'
setcor(1)
op_tela(10,10,13,80,' Verificando Tabelas do BANCO DE DADOS, Aguarde um momento..... ')
f := 0
//ATENCAO('OK')
matriz:= 'scod_op CHAR(3) NOT NULL '
matriz:= matriz + ',snome CHAR(30) '
matriz := matriz +',stipo CHAR(1) '
matriz := matriz +',stipo_sis CHAR(1) '
matriz := matriz +',ssenha CHAR(8) '
matriz := matriz +',sdata_cad DATE '
matriz := matriz +',scomissao DECIMAL(6,2) '
matriz := matriz +',scom_praz DECIMAL(6,2) '
matriz := matriz +',scom_oper DECIMAL(6,2) '
matriz := matriz +',scota DECIMAL(12,2) '
matriz := matriz +',sult_ent DATE '
matriz := matriz +',sult_fim DATE '
matriz := matriz +',snivel CHAR(2) '
matriz := matriz +',shora_ini CHAR(8) '
matriz := matriz +',shora_fim CHAR(8) '
matriz := matriz +',sult_e_c DATE '
matriz := matriz +',sh_i_c CHAR(5) '
matriz := matriz +',sexpira DECIMAL(3,0) '
matriz := matriz +',scod_aut CHAR(17) '
matriz := matriz +',sstatus CHAR(1) '
matriz := matriz +',sope CHAR(3) '
matriz := matriz +',scliente CHAR(5) '
matriz := matriz +',sproduto CHAR(5) '
matriz := matriz +',svalor DECIMAL(12,2) '
matriz := matriz +',sbloq CHAR(1) '
matriz := matriz +',smensagem CHAR(150) '
matriz := matriz +',sambiente CHAR(5) '
matriz := matriz +',doc_apagar CHAR(1) '
matriz := matriz +',estoq_min CHAR(1) '
matriz := matriz +',estoq_med DECIMAL(5,0) '
matriz := matriz +',terminal CHAR(15) '
matriz := matriz +',data_acess DATE '
matriz := matriz +',hora_acess CHAR(8) '
matriz := matriz +',email CHAR(60) '
matriz := matriz +',dat_aniv CHAR(1) '
matriz := matriz +',ver_APP... CHAR(1) '
matriz := matriz +',endereco CHAR(40) '
matriz := matriz +',numero CHAR(6) '
matriz := matriz +',complemento CHAR(6) '
matriz := matriz +',bairro CHAR(20) '
matriz := matriz +',cidade CHAR(25) '
matriz := matriz +',uf CHAR(2) '
matriz := matriz +',fone CHAR(10) '
matriz := matriz +',cpf CHAR(11) '
matriz := matriz +',rg CHAR(15) '
matriz := matriz +',scod_med CHAR(5)'
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1) '
setcor(3)
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> INSOPERA')
IF ! SR_EXISTTABLE('insopera')
//IF ! SR_EXISTTABLE('insopera')
        sr_getconnection():exec("CREATE GENERATOR INSOPERA",,.f.)
        sr_getconnection():exec("CREATE TABLE INSOPERA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE INSOPERA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("ALTER TABLE INSOPERA ADD CONSTRAINT INSOPERA_PK PRIMARY KEY (scod_op)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER INSOPERA_SR FOR INSOPERA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( INSOPERA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        //DBCREATE('insopera',matriz,'SQLRDD')
        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
        ADIREG()
        sen-> scod_op := '999'
        sen-> snome := 'HTI Sistemas'
        sen-> ssenha := CRIPTO('0725')
        sen-> sdata_cad := DATE()
        sen-> snivel := '1'
        /*
        ADIREG()
        sen-> scod_op := '111'
        sen-> snome := 'TROCA DE MERCADORIA'
        sen-> ssenha := CRIPTO('TROC')
        sen-> snivel := '2'
        */
        DBCOMMITALL()
        DBUNLOCKALL()
        sen->(DBCLOSEAREA())
ENDIF
//atencao('ok')
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACSETUP')
IF ! SR_EXISTTABLE('SACSETUP')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SACSETUP')
        matriz:={}
        matriz:= 'ver CHAR(10) '
        matriz := matriz + ',impress CHAR(1) '
        matriz := matriz + ',relatorio CHAR(4) '
        matriz := matriz + ',duplicata CHAR(1) '
        matriz := matriz + ',copia_dup DECIMAL(1,0) '
        matriz := matriz + ',dup_imp CHAR(1) '
        matriz := matriz + ',dup_port CHAR(4) '
        matriz := matriz + ',intervalo DECIMAL(3,0) '
        matriz := matriz + ',multa_dup DECIMAL(6,2) '
        matriz := matriz + ',juros_dup DECIMAL(6,2) '
        matriz := matriz + ',roda_dup1 CHAR(60) '
        matriz := matriz + ',roda_dup2 CHAR(60) '
        matriz := matriz + ',ceden_bol CHAR(1) '
        matriz := matriz + ',local_bol CHAR(46) '
        matriz := matriz + ',mens_bol1 CHAR(46) '
        matriz := matriz + ',mens_bol2 CHAR(46) '        //03.03.2002
        matriz := matriz + ',mens_bol3 CHAR(46) '         //03.03.2002
        matriz := matriz + ',mens_bol4 CHAR(46) '         // 14.09.2002
        matriz := matriz + ',mens_bol5 CHAR(46) '
        matriz := matriz + ',fecha_cx CHAR(1) '
        matriz := matriz + ',sysdatlm CHAR(12) '
        matriz := matriz + ',situacao CHAR(1) '
        matriz := matriz + ',medico CHAR(20) '
        matriz := matriz + ',endereco CHAR(35) '
        matriz := matriz + ',numero CHAR(5) '
        matriz := matriz + ',bairro CHAR(25) '
        matriz := matriz + ',cidade CHAR(25) '
        matriz := matriz + ',uf CHAR(2) '
        matriz := matriz + ',cep CHAR(9) '
        matriz := matriz + ',email CHAR(70) '
        matriz := matriz + ',fone CHAR(10) '
        matriz := matriz + ',fone1 CHAR(10) '
        matriz := matriz + ',cnpj CHAR(14) '
        matriz := matriz + ',insc CHAR(19) '
        matriz := matriz + ',cpf CHAR(11) '
        matriz := matriz + ',rg CHAR(15) '
        matriz := matriz + ',cod_acess CHAR(20) '
        matriz := matriz + ',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz + ',sr_deleted CHAR(1) '
        matriz := matriz + ',dia_venc DECIMAL(2,0)'
        matriz := matriz + ',cons_cli CHAR(1) '
        matriz := matriz + ',serie CHAR(20) '
        matriz := matriz + ',complemento CHAR(20) '
        matriz := matriz + ',fone_clinica CHAR(10) '
        matriz := matriz + ',insc_mun CHAR(20) '
        matriz := matriz + ',crm CHAR(20) '
        matriz := matriz + ',especiali CHAR(40) '
        matriz := matriz + ',dataini DATE '
        sr_getconnection():exec("CREATE GENERATOR SACSETUP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACSETUP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACSETUP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACSETUP_SR FOR SACSETUP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACSETUP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SMEDCLI')
IF  ! SR_EXISTTABLE('SMEDCLI')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCLI ')
        matriz :=          'registro CHAR(5)'
        matriz := matriz + ',data DATE'
        matriz := matriz + ',nome CHAR(35)'
        matriz := matriz + ',datans DATE'
        matriz := matriz + ',sexo CHAR(1)'
        matriz := matriz + ',cor CHAR(1)'
        matriz := matriz + ',estcivil CHAR(1)'
        matriz := matriz + ',profissao CHAR(20)'
        matriz := matriz + ',natural1 CHAR(25)'
        matriz := matriz + ',endereco CHAR(35)'
        matriz := matriz + ',cidade CHAR(25)'
        matriz := matriz + ',fone CHAR(15)'
        matriz := matriz + ',est CHAR(2)'
        matriz := matriz + ',cep CHAR(9)'
        matriz := matriz + ',resp CHAR(30)'
        matriz := matriz + ',indica CHAR(30)'
        matriz := matriz + ',datault DATE'
        matriz := matriz + ',codconv CHAR(2)'
        matriz := matriz + ',emp_cli CHAR(20)'
        matriz := matriz + ',bairro CHAR(25)'
        matriz := matriz + ',conjuge CHAR(30)'
        matriz := matriz + ',emp_conj CHAR(20)'
        matriz := matriz + ',prof_conj CHAR(20)'
        matriz := matriz + ',fone_conj CHAR(15)'
        matriz := matriz + ',plano CHAR(25) '
        matriz := matriz + ',empresa CHAR(25) '
        matriz := matriz + ',num_cart CHAR(18)'
        matriz := matriz + ',val_cart DATE '
        matriz := matriz + ',rg CHAR(20)'
        matriz := matriz + ',fuma CHAR(1) '
        matriz := matriz + ',fum_dat1 DATE'
        matriz := matriz + ',fum_dat2 DATE'
        matriz := matriz + ',obs1 CHAR(60)'
        matriz := matriz + ',obs2 CHAR(60)'
        matriz := matriz + ',obs3 CHAR(60)'
        matriz := matriz + ',obs4 CHAR(60)'
        matriz := matriz + ',ult_mest1 DATE'
        matriz := matriz + ',pro_nasc1 DATE'
        matriz := matriz + ',dat_nasc1 DATE'
        matriz := matriz + ',ult_mest2 DATE'
        matriz := matriz + ',pro_nasc2 DATE'
        matriz := matriz + ',dat_nasc2 DATE'
        matriz := matriz + ',ult_mest3 DATE'
        matriz := matriz + ',pro_nasc3 DATE'
        matriz := matriz + ',dat_nasc3 DATE'
        matriz := matriz + ',ult_mest4 DATE'
        matriz := matriz + ',pro_nasc4 DATE'
        matriz := matriz + ',dat_nasc4 DATE'
        matriz := matriz + ',ult_mest5 DATE'
        matriz := matriz + ',pro_nasc5 DATE'
        matriz := matriz + ',dat_nasc5 DATE'
        matriz := matriz + ',ult_mest6 DATE'
        matriz := matriz + ',pro_nasc6 DATE'
        matriz := matriz + ',dat_nasc6 DATE'
        matriz := matriz + ',cpf CHAR(11)'
        matriz := matriz + ',fone1 CHAR(15)'
        matriz := matriz + ',fone2 CHAR(15)'
        matriz := matriz + ',genero CHAR(1)'
        matriz := matriz + ',escolar CHAR(1)'
        matriz := matriz + ',terapeuta CHAR(35)'
        matriz := matriz + ',fone_tera CHAR(15)'
        matriz := matriz + ',medico CHAR(35)'
        matriz := matriz + ',fone_med CHAR(15)'
        matriz := matriz + ',tp_alta CHAR(15)'
        matriz := matriz + ',dat_inter DATE'
        matriz := matriz + ',valor DECIMAL(10,2)'
        matriz := matriz + ',med_inter CHAR(1)'
        matriz := matriz + ',substancia CHAR(1)'
        matriz := matriz + ',tempo_uso CHAR(10)'
        matriz := matriz + ',tempo_abus CHAR(10)'
        matriz := matriz + ',outro_spa CHAR(35)'
        matriz := matriz + ',inter_ant CHAR(35)'
        matriz := matriz + ',comorbidad CHAR(10)'
        matriz := matriz + ',complement CHAR(15)'
        matriz := matriz + ',numero CHAR(5)'
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1)' // NOT NULL '
        matriz := matriz + ',cod_prof CHAR(5)'
        matriz := matriz + ',data_auta DATE'
        matriz := matriz + ',obs_auta CHAR(50)'
        matriz := matriz + ',obs_auta1 CHAR(50)'
        matriz := matriz + ',email CHAR(60)'
        matriz := matriz + ',instagram CHAR(30)'
        */
//atencao( sr_ShowVector( matriz ))
        sr_getconnection():exec("CREATE GENERATOR SMEDCLI",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCLI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCLI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCLI_SR FOR SMEDCLI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCLI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SMEDAGEN  ')
IF ! SR_EXISTTABLE('SMEDAGEN')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDAGEN  ')
        matriz := 'datacomp  DATE '
        matriz := matriz + ',lin1  CHAR(50) '
        matriz := matriz + ',lin2  CHAR(50) '
        matriz := matriz + ',lin3  CHAR(50) '
        matriz := matriz + ',lin4  CHAR(50) '
        matriz := matriz + ',lin5  CHAR(50) '
        matriz := matriz + ',lin6  CHAR(50) '
        matriz := matriz + ',lin7  CHAR(50) '
        matriz := matriz + ',lin8  CHAR(50) '
        matriz := matriz + ',lin9  CHAR(50) '
        matriz := matriz + ',lin10 CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDAGEN",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDAGEN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDAGEN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDAGEN_SR FOR SMEDAGEN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDAGEN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF


DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SMEDDRO  ')
IF ! SR_EXISTTABLE('SMEDDRO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDDRO  ')
        matriz :=          ' cod_med CHAR(5) '
        matriz := matriz + ',uso_med CHAR(7) '
        matriz := matriz + ',nomedroga CHAR(20) '
        matriz := matriz + ',nomecom CHAR(15) '
        matriz := matriz + ',dose_quant CHAR(24) '
        matriz := matriz + ',posologia CHAR(50) '
        matriz := matriz + ',efeito_col CHAR(50) '
        matriz := matriz + ',precaucoes CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDDRO",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDDRO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDDRO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDDRO_SR FOR SMEDDRO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDDRO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF

IF ! SR_EXISTTABLE('SMEDTAB')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDTAB  ')
        matriz := 'valcr      DECIMAL(10,2) '
        matriz := matriz + ',valsr      DECIMAL(10,2) '
        matriz := matriz + ',valch      DECIMAL(10,2) '
        matriz := matriz + ',dataalt  DATE '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDTAB",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDTAB ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDTAB ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDTAB_SR FOR SMEDTAB ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDTAB, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDMOV')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDMOV  ')
        matriz :=          ' datacons  DATE '
        matriz := matriz + ',cadnome    CHAR(35) '
        matriz := matriz + ',registro   CHAR(5) '
        matriz := matriz + ',situacao   CHAR(1) '
        matriz := matriz + ',codconv    CHAR(2) '
        matriz := matriz + ',modalidade CHAR(2) '
        matriz := matriz + ',valor      DECIMAL(10,2) '
        matriz := matriz + ',valor_op   DECIMAL(10,2) '
        matriz := matriz + ',guiano CHAR(16) '
        matriz := matriz + ',recibo CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDMOV",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDMOV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDMOV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDMOV_SR FOR SMEDMOV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDMOV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCONV')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCONV  ')
        matriz :=          ' codconv	CHAR(2)'
        matriz := matriz + ',modalidade	CHAR(2) '
        matriz := matriz + ',tipo	CHAR(1) '
        matriz := matriz + ',fator      DECIMAL(3,1) '
        matriz := matriz + ',rsocial    CHAR(30) '
        matriz := matriz + ',endereco   CHAR(35) '
        matriz := matriz + ',foneconv   CHAR(15) '
        matriz := matriz + ',dataini	DATE'
        matriz := matriz + ',prazo	DECIMAL(10,2) '
        matriz := matriz + ',valor_con	DECIMAL(10,2) '
        matriz := matriz + ',valor_op	DECIMAL(10,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCONV",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCONV ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCONV ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCONV_SR FOR SMEDCONV ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCONV, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDMED')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDMED  ')
        matriz :=          ' cod_espe	CHAR(5) '
        matriz := matriz + ',especialid	CHAR(20) '
        matriz := matriz + ',profission	CHAR(35) '
        matriz := matriz + ',crm	CHAR(15) '
        matriz := matriz + ',fone	CHAR(15) '
        matriz := matriz + ',endereco	CHAR(35) '
        matriz := matriz + ',cep	CHAR(9) '
        matriz := matriz + ',cidade	CHAR(20) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDMED",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDMED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDMED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDMED_SR FOR SMEDMED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDMED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDREC')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDREC  ')
        matriz :=          ' cliente	CHAR(35) '
        matriz := matriz + ',nome	CHAR(35) '
        matriz := matriz + ',profission	CHAR(35) '
        matriz := matriz + ',data	DATE '
        matriz := matriz + ',valor      DECIMAL(13,2) '
        matriz := matriz + ',operador	CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDREC",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDREC ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDREC ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDREC_SR FOR SMEDREC ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDREC, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCLIN')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCLIN  ')
        matriz :=          ' registro	CHAR(5) '
        matriz := matriz + ',data	DATE '
        matriz := matriz + ',nome	CHAR(35) '
        matriz := matriz + ',diagnost	CHAR(20) '
        matriz := matriz + ',medica  	CHAR(20) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCLIN",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCLIN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCLIN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCLIN_SR FOR SMEDCLIN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCLIN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDRECE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDRECE  ')
        matriz :=          ' cod_rece	CHAR(5) '
        matriz := matriz + ',codigo1	CHAR(5) '
        matriz := matriz + ',codigo2	CHAR(5) '
        matriz := matriz + ',codigo3	CHAR(5) '
        matriz := matriz + ',codigo4	CHAR(5) '
        matriz := matriz + ',codigo5	CHAR(5) '
        matriz := matriz + ',codigo6	CHAR(5) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDRECE",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDRECE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDRECE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDRECE_SR FOR SMEDRECE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDRECE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCON')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCON  ')
        matriz :=          ' turno	CHAR(2) '
        matriz := matriz + ',data	DATE '
        matriz := matriz + ',hora   	CHAR(5) '
        matriz := matriz + ',cod_cli	CHAR(5) '
        matriz := matriz + ',nome       CHAR(35) '
        matriz := matriz + ',con_conv   CHAR(2) '
        matriz := matriz + ',datans	DATE '
        matriz := matriz + ',fone   	CHAR(15) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCON",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCON ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCON ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCON_SR FOR SMEDCON ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCON, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCOL')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCOL  ')
        matriz :=          ' nome	CHAR(35) '
        matriz := matriz + ',medico   	CHAR(35) '
        matriz := matriz + ',idade  	CHAR(5) '
        matriz := matriz + ',paridade   CHAR(20) '
        matriz := matriz + ',data	DATE '
        matriz := matriz + ',cod_con   	CHAR(2) '
        matriz := matriz + ',shil      	CHAR(20) '
        matriz := matriz + ',diag      	CHAR(20) '
        matriz := matriz + ',lin1      	CHAR(60) '
        matriz := matriz + ',lin2      	CHAR(60) '
        matriz := matriz + ',lin3      	CHAR(60) '
        matriz := matriz + ',lin4      	CHAR(60) '
        matriz := matriz + ',lin5      	CHAR(60) '
        matriz := matriz + ',lin6      	CHAR(60) '
        matriz := matriz + ',lin7      	CHAR(60) '
        matriz := matriz + ',lin8      	CHAR(60) '
        matriz := matriz + ',lin9      	CHAR(60) '
        matriz := matriz + ',lin10     	CHAR(60) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCOL",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCOL ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCOL ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCOL_SR FOR SMEDCOL ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCOL, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCID')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCID  ')
        matriz :=          ' codigo     CHAR(11) '
        matriz := matriz + ',cod      	CHAR(5) '
        matriz := matriz + ',nome   	CHAR(60) '
        matriz := matriz + ',vlr_us     DECIMAL(8,2) '
        matriz := matriz + ',tipo    	CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCID",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCID ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCID ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCID_SR FOR SMEDCID ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCID, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCAIX')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCAIX  ')
        matriz :=          ' tipo  CHAR(2) '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',nota  CHAR(8) '
        matriz := matriz + ',num_dup  CHAR(12) '
        matriz := matriz + ',num_ban  CHAR(3) '
        matriz := matriz + ',cod_ct  CHAR(3) '
        matriz := matriz + ',documento  CHAR(12) '
        matriz := matriz + ',venci  DATE '
        matriz := matriz + ',valor  DECIMAL(10,2) '
        matriz := matriz + ',tipo_comp  CHAR(2) '
        matriz := matriz + ',coddesp  CHAR(3) '
        matriz := matriz + ',descri1  CHAR(40) '
        matriz := matriz + ',descri2  CHAR(40) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_cli  CHAR(5) '
        matriz := matriz + ',cod_opera  CHAR(3) '
        matriz := matriz + ',sangria  CHAR(1) '
        matriz := matriz + ',op_pg  CHAR(3) '
        matriz := matriz + ',pg  CHAR(1) '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',autoriz  CHAR(3) '
        matriz := matriz + ',valor_com  DECIMAL(10,2) '
        matriz := matriz + ',comissao  DECIMAL(12,6) '
        matriz := matriz + ',tp_desp  CHAR(1) '
        matriz := matriz + ',num_pdv  CHAR(4) '
        matriz := matriz + ',num_cup  CHAR(6) '
        matriz := matriz + ',fechado  CHAR(2) '
        matriz := matriz + ',tp_mov  CHAR(1) '
        matriz := matriz + ',termina  CHAR(10) '
        matriz := matriz + ',c_s  CHAR(1) '
        matriz := matriz + ',obs  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCAIX",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCAIX ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCAIX ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCAIX_SR FOR SMEDCAIX ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCAIX, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDDE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDDE  ')
        matriz :=          ' codigo CHAR(3) '
        matriz := matriz + ',desc1 CHAR(40) '
        matriz := matriz + ',desc2 CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDDE",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDDE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDDE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDDE_SR FOR SMEDDE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDDE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCOMP')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCOMP  ')
        matriz :=          ' codcli CHAR(5) '
        matriz := matriz + ',data   DATE '
        matriz := matriz + ',hc  DECIMAL(7,0) '
        matriz := matriz + ',hb  DECIMAL(7,0) '
        matriz := matriz + ',ht  DECIMAL(7,0) '
        matriz := matriz + ',l   DECIMAL(7,0) '
        matriz := matriz + ',b1  DECIMAL(7,0) '
        matriz := matriz + ',s   DECIMAL(7,0) '
        matriz := matriz + ',b2  DECIMAL(7,0) '
        matriz := matriz + ',e   DECIMAL(7,0) '
        matriz := matriz + ',lt  DECIMAL(7,0) '
        matriz := matriz + ',la  DECIMAL(7,0) '
        matriz := matriz + ',m   DECIMAL(7,0) '
        matriz := matriz + ',pl  DECIMAL(7,0) '
        matriz := matriz + ',g   DECIMAL(7,0) '
        matriz := matriz + ',u   DECIMAL(7,0) '
        matriz := matriz + ',c   DECIMAL(7,0) '
        matriz := matriz + ',ha  DECIMAL(7,0) '
        matriz := matriz + ',k   DECIMAL(7,0) '
        matriz := matriz + ',cl  DECIMAL(7,0) '
        matriz := matriz + ',ra  DECIMAL(7,0) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCOMP",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCOMP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCOMP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCOMP_SR FOR SMEDCOMP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCOMP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDPULM')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDPULM  ')
        matriz :=          ' codcli   CHAR(5) '
        matriz := matriz + ',data_pul DATE '
        matriz := matriz + ',cvf  DECIMAL(7,0) '
        matriz := matriz + ',vef1 DECIMAL(7,0) '
        matriz := matriz + ',it   DECIMAL(7,0) '
        matriz := matriz + ',pfe  DECIMAL(7,0) '
        matriz := matriz + ',fef  DECIMAL(7,0) '
        matriz := matriz + ',vvm  DECIMAL(7,0) '
        matriz := matriz + ',cv   DECIMAL(7,0) '
        matriz := matriz + ',tef  DECIMAL(7,0) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDPULM",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDPULM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDPULM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDPULM_SR FOR SMEDPULM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDPULM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDENDO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDENDO  ')
        matriz :=          ' cod      CHAR(5) '
        matriz := matriz + ',nome  CHAR(40) '
        matriz := matriz + ',data_pul DATE '
        matriz := matriz + ',idade  DECIMAL(7,0) '
        matriz := matriz + ',sexo  CHAR(1) '
        matriz := matriz + ',solicit  CHAR(30) '
        matriz := matriz + ',mot_exa1  CHAR(50) '
        matriz := matriz + ',mot_exa2  CHAR(50) '
        matriz := matriz + ',mot_exa3  CHAR(50) '
        matriz := matriz + ',mot_exa4  CHAR(50) '
        matriz := matriz + ',metodo    CHAR(50) '
        matriz := matriz + ',laringe1  CHAR(50) '
        matriz := matriz + ',laringe2  CHAR(50) '
        matriz := matriz + ',laringe3  CHAR(50) '
        matriz := matriz + ',laringe4  CHAR(50) '
        matriz := matriz + ',carina    CHAR(50) '
        matriz := matriz + ',bronq_d1  CHAR(50) '
        matriz := matriz + ',bronq_d2  CHAR(50) '
        matriz := matriz + ',bronq_d3  CHAR(50) '
        matriz := matriz + ',bronq_d4  CHAR(50) '
        matriz := matriz + ',bronq_d5  CHAR(50) '
        matriz := matriz + ',bronq_e1  CHAR(50) '
        matriz := matriz + ',bronq_e2  CHAR(50) '
        matriz := matriz + ',bronq_e3  CHAR(50) '
        matriz := matriz + ',bronq_e4  CHAR(50) '
        matriz := matriz + ',bronq_e5  CHAR(50) '
        matriz := matriz + ',material1 CHAR(50) '
        matriz := matriz + ',material2 CHAR(50) '
        matriz := matriz + ',material3 CHAR(50) '
        matriz := matriz + ',diag1     CHAR(50) '
        matriz := matriz + ',diag2     CHAR(50) '
        matriz := matriz + ',diag3     CHAR(50) '
        matriz := matriz + ',diag4     CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDENDO",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDENDO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDENDO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDENDO_SR FOR SMEDENDO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDENDO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDPATO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDPATO  ')
        matriz :=          ' patologia CHAR(30) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDPATO",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDPATO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDPATO ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDPATO_SR FOR SMEDPATO ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDPATO, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz :=          ' data     DATE '
matriz := matriz + ',hora      CHAR(8) '
matriz := matriz + ',codcli    CHAR(5) '
matriz := matriz + ',descricao CHAR(60) '
matriz := matriz + ',operador  CHAR(3) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1) '
IF ! SR_EXISTTABLE('SMEDHIST')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDHIST  ')
        sr_getconnection():exec("CREATE GENERATOR SMEDHIST",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDHIST ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDHIST ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDHIST_SR FOR SMEDHIST ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDHIST, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDEXAM')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDEXAM  ')
        sr_getconnection():exec("CREATE GENERATOR SMEDEXAM",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDEXAM ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDEXAM ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDEXAM_SR FOR SMEDEXAM ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDEXAM, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDDIAG')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDDIAG  ')
        sr_getconnection():exec("CREATE GENERATOR SMEDDIAG",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDDIAG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDDIAG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDDIAG_SR FOR SMEDDIAG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDDIAG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCOND')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCOND  ')
        sr_getconnection():exec("CREATE GENERATOR SMEDCOND",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCOND ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCOND ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCOND_SR FOR SMEDCOND ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCOND, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDRADIO')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDRADIO  ')
        matriz :=          ' codcli   CHAR(5) '
        matriz := matriz + ',data_radio DATE '
        matriz := matriz + ',descricao  CHAR(40) '
        sr_getconnection():exec("CREATE GENERATOR SMEDRADIO",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDRADIO ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDCIRUR')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDCIRUR  ')
        matriz :=          ' cod_cirur   CHAR(3) '
        matriz := matriz + ',descricao  CHAR(30) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDCIRUR",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDCIRUR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDCIRUR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDCIRUR_SR FOR SMEDCIRUR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDCIRUR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SMEDMVCI')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo -> SMEDMVCI  ')
        matriz :=          ' data_cirur DATE '
        matriz := matriz + ',hora_cir   CHAR(5) '
        matriz := matriz + ',hora_int   CHAR(5) '
        matriz := matriz + ',cod_cli    CHAR(5) '
        matriz := matriz + ',cliente    CHAR(35) '
        matriz := matriz + ',cod_cirur  CHAR(3) '
        matriz := matriz + ',cirurgia   CHAR(30) '
        matriz := matriz + ',cod_conv   CHAR(2) '
        matriz := matriz + ',convenio   CHAR(30) '
        matriz := matriz + ',diag1      CHAR(40) '
        matriz := matriz + ',diag2      CHAR(40) '
        matriz := matriz + ',equipe     CHAR(40) '
        matriz := matriz + ',alta       CHAR(40) '
        matriz := matriz + ',hospital   CHAR(40) '
        matriz := matriz + ',vlr_cirur  DECIMAL(12,2) '
        matriz := matriz + ',obs_cirur  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SMEDMVCI",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDMVCI ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDMVCI ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDMVCI_SR FOR SMEDMVCI ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDMVCI, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('sacforn')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACFORN   ')
        matriz:='cod_forn  CHAR(4) NOT NULL '
        matriz := matriz + ',razao  CHAR(40) '
        matriz := matriz + ',tipo  CHAR(4) '
        matriz := matriz + ',data_cad  DATE '
        matriz := matriz + ',ult_comp  DATE '
        matriz := matriz + ',endereco  CHAR(35) '
        matriz := matriz + ',bairro  CHAR(20) '
        matriz := matriz + ',cidade  CHAR(25) '
        matriz := matriz + ',uf  CHAR(2) '
        matriz := matriz + ',cep  CHAR(9) '
        matriz := matriz + ',cpostal  CHAR(6) '
        matriz := matriz + ',email  CHAR(120) '
        matriz := matriz + ',tel1  CHAR(14) '
        matriz := matriz + ',tel2  CHAR(14) '
        matriz := matriz + ',fax  CHAR(14) '
        matriz := matriz + ',cgc  CHAR(14) '
        matriz := matriz + ',insc  CHAR(14) '
        matriz := matriz + ',cpf  CHAR(11) '
        matriz := matriz + ',carteira  CHAR(1) '
        matriz := matriz + ',banco  CHAR(1) '
        matriz := matriz + ',prazo_pag  CHAR(8) '
        matriz := matriz + ',ct_gerente  CHAR(15) '
        matriz := matriz + ',ct_vendedo  CHAR(15) '
        matriz := matriz + ',ct_fatura  CHAR(15) '
        matriz := matriz + ',ct_cobran  CHAR(15) '
        matriz := matriz + ',limite  DECIMAL(10,2) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',obs1  CHAR(60) '
        matriz := matriz + ',obs2  CHAR(60) '
        matriz := matriz + ',obs3  CHAR(60) '
        matriz := matriz + ',obs4  CHAR(60) '
        matriz := matriz + ',obs5  CHAR(60) '
        matriz := matriz + ',local  CHAR(3) '
        matriz := matriz + ',APP...  CHAR(1) '
        matriz := matriz + ',fantasia  CHAR(40) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SACFORN",,.f.)
        sr_getconnection():exec("CREATE TABLE SACFORN ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACFORN ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACFORN_SR FOR SACFORN ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACFORN, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
IF ! SR_EXISTTABLE('sacdesp')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDESP   ')
        matriz:='codigo  CHAR(4) NOT NULL '
        matriz := matriz + ',desc1  CHAR(25) '
        matriz := matriz + ',tipo  CHAR(1) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        //DBCREATE('sacdesp  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDESP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDESP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDESP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDESP_SR FOR SACDESP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDESP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        IF mop = NIL
                IF ! AbriArq('sacdesp','cdesp','E');RETURN NIL;ENDIF
                ADIREG()
                cdesp->codigo := '1.  '
                cdesp->desc1 := 'FORNECEDORES'
                cdesp->tipo  := 'V'
                DBUNLOCK()
                ADIREG()
                cdesp->codigo := '1.01'
                cdesp->desc1 := 'FORNECEDORES'
                cdesp->tipo  := 'V'
                DBUNLOCK()
                CLOSE cdesp
        ENDIF
ENDIF

IF ! SR_EXISTTABLE('sacdupp')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDUPP   ')
        matriz:='empresa  CHAR(3) '
        matriz := matriz + ',tipo  CHAR(2) '
        matriz := matriz + ',numero  CHAR(3) '
        matriz := matriz + ',duplicata  CHAR(12) '
        matriz := matriz + ',valor_dup  DECIMAL(10,2) '
        matriz := matriz + ',tip_for  CHAR(4) '
        matriz := matriz + ',fornec  CHAR(4) '
        matriz := matriz + ',cliente  CHAR(40) '
        matriz := matriz + ',emissao  DATE '
        matriz := matriz + ',venc  DATE '
        matriz := matriz + ',datpag  DATE '
        matriz := matriz + ',tp_pg  CHAR(1) '
        matriz := matriz + ',banco  CHAR(3) '
        matriz := matriz + ',agencia  CHAR(8) '
        matriz := matriz + ',c_c  CHAR(13) '
        matriz := matriz + ',valor  DECIMAL(10,2) '
        matriz := matriz + ',vlpago  DECIMAL(10,2) '
        matriz := matriz + ',desconto  DECIMAL(10,2) '
        matriz := matriz + ',juros  DECIMAL(10,2) '
        matriz := matriz + ',pago  CHAR(1) '
        matriz := matriz + ',conta  CHAR(1) '
        matriz := matriz + ',obs  CHAR(60) '
        matriz := matriz + ',obs_b  CHAR(60) '
        matriz := matriz + ',nbanco  CHAR(3) '
        matriz := matriz + ',cheque  CHAR(6) '
        matriz := matriz + ',conta_c  CHAR(13) '
        matriz := matriz + ',vendedor  CHAR(3) '
        matriz := matriz + ',num_ped  CHAR(10) '
        matriz := matriz + ',operador  CHAR(3) '
        matriz := matriz + ',dataceite  DATE '
        matriz := matriz + ',data_so  DATE '
        matriz := matriz + ',dat_receb  DATE '
        matriz := matriz + ',ope_receb  CHAR(3) '
        matriz := matriz + ',doc_tran  CHAR(14) '
        matriz := matriz + ',dat_tran  DATE '     //12.06.2002
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        //DBCREATE('sacdupp  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDUPP",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDUPP ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDUPP ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDUPP_SR FOR SACDUPP ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDUPP, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
matriz:='empresa CHAR(3) '
matriz := matriz + ',tipo     CHAR(2) '
matriz := matriz + ',numero   CHAR(3) '
matriz := matriz + ',duplicata  CHAR(12) '
matriz := matriz + ',valor_dup  DECIMAL(10,2) '
matriz := matriz + ',tip_cli  CHAR(1) '
matriz := matriz + ',fornec  CHAR(5) '
matriz := matriz + ',cliente CHAR(40) '
matriz := matriz + ',c_cpfcnpj  CHAR(14) '
matriz := matriz + ',emissao DATE '
matriz := matriz + ',venc DATE '
matriz := matriz + ',venc1 DATE '
matriz := matriz + ',datpag     DATE '
matriz := matriz + ',dattra   DATE '
matriz := matriz + ',datope   DATE '
matriz := matriz + ',banco    CHAR(1) '
matriz := matriz + ',agencia  CHAR(8) '
matriz := matriz + ',c_c      CHAR(13) '
matriz := matriz + ',valor    DECIMAL(10,2) '
matriz := matriz + ',vlpago   DECIMAL(10,2) '
matriz := matriz + ',vl_ipi   DECIMAL(10,2) '
matriz := matriz + ',desconto DECIMAL(10,2) '
matriz := matriz + ',juros    DECIMAL(10,2) '
matriz := matriz + ',juros_d  DECIMAL(10,2) '
matriz := matriz + ',pago     CHAR(1) '
matriz := matriz + ',tip_pg   CHAR(2) '
matriz := matriz + ',mov_cx   CHAR(1) '
matriz := matriz + ',conta    CHAR(1) '
matriz := matriz + ',cheque   CHAR(8) '
matriz := matriz + ',vendedor CHAR(3) '
matriz := matriz + ',num_ped  CHAR(6) '
matriz := matriz + ',comissao DECIMAL(12,6) '
matriz := matriz + ',comissao1 DECIMAL(12,6) '    // 01/08/2006
matriz := matriz + ',vlr_tab  DECIMAL(12,2) '      // 01/08/2006
matriz := matriz + ',operador CHAR(3) '
matriz := matriz + ',alt_oper CHAR(3) '
matriz := matriz + ',doc_tran CHAR(14) '
matriz := matriz + ',dat_tran DATE '     //12.06.2002
matriz := matriz + ',cod_forn CHAR(4) '     //27.05.2002
matriz := matriz + ',forn_desp  CHAR(40) '   //11.07.2003
matriz := matriz + ',baix_parc  DATE '    //27.05.2002
matriz := matriz + ',oper_parc  CHAR(3) '    //11.07.2003
matriz := matriz + ',data_fund  DATE '     //09.05.2005
matriz := matriz + ',motivo    CHAR(30) '       //09.05.2005
matriz := matriz + ',cod_incl CHAR(3) '      //09.05.2005
matriz := matriz + ',obs      CHAR(60) '
matriz := matriz + ',obs1     CHAR(60) '
matriz := matriz + ',corrente CHAR(35) '
matriz := matriz + ',cpfcnpj  CHAR(14) '
matriz := matriz + ',datcobra DATE '
matriz := matriz + ',datprev  DATE '
matriz := matriz + ',datproc  DATE '        //03.06.2002
matriz := matriz + ',opeproc  CHAR(3) '        //03.06.2002
matriz := matriz + ',ope_venda  CHAR(3) '        //31.07.2006
matriz := matriz + ',ope_comi DECIMAL(12,6) '        //31.07.2006
matriz := matriz + ',pg_comi  DATE '        //31.07.2006
matriz := matriz + ',ope_pgcom  CHAR(3) '        //31.07.2006
matriz := matriz + ',lin1     CHAR(60) '
matriz := matriz + ',lin2     CHAR(60) '
matriz := matriz + ',lin3     CHAR(60) '
matriz := matriz + ',lin4     CHAR(60) '
matriz := matriz + ',lin5     CHAR(60) '
matriz := matriz + ',hora_bx  CHAR(8) '
matriz := matriz + ',com_sem  CHAR(1) '
matriz := matriz + ',tipo_con     CHAR(1) '
matriz := matriz + ',conv         CHAR(2) '
matriz := matriz + ',cod_esp      CHAR(3) '
matriz := matriz + ',cod_med      CHAR(3) '
matriz := matriz + ',status       CHAR(1) '
matriz := matriz + ',hora         CHAR(8) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1) '
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACDUPR ')
IF ! SR_EXISTTABLE('sacdupr')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACDUPR   ')
        //DBCREATE('sacdupr  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACDUPR",,.f.)
        sr_getconnection():exec("CREATE TABLE SACDUPR ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACDUPR ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACDUPR_SR FOR SACDUPR ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACDUPR, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCRED ')
IF ! SR_EXISTTABLE('saccred')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCRED   ')
        sr_getconnection():exec("CREATE GENERATOR SACCRED",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCRED ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCRED ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCRED_SR FOR SACCRED ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCRED, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
IF ! SR_EXISTTABLE('sacconf')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCONF   ')
        matriz:='modulo  CHAR(20) '
        matriz := matriz + ',descri  CHAR(60) '
        matriz := matriz + ',nivel  CHAR(9) '
        matriz := matriz + ',data_alt  DATE '
        matriz := matriz + ',oper_alt  CHAR(3) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        sr_getconnection():exec("CREATE GENERATOR SACCONF",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCONF ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCONF ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCONF_SR FOR SACCONF ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCONF, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCAIXA')
matriz:='empresa  CHAR(3) '
matriz := matriz + ',tipo  CHAR(2) '
matriz := matriz + ',data  DATE '
matriz := matriz + ',nota  CHAR(8) '
matriz := matriz + ',num_dup  CHAR(12) '
matriz := matriz + ',num_ban  CHAR(3) '
matriz := matriz + ',cod_ct  CHAR(3) '
matriz := matriz + ',documento  CHAR(12) '
matriz := matriz + ',venci  DATE '
matriz := matriz + ',valor  DECIMAL(10,2) '
matriz := matriz + ',tipo_comp  CHAR(2) '
matriz := matriz + ',coddesp  CHAR(3) '
matriz := matriz + ',descri1  CHAR(40) '
matriz := matriz + ',descri2  CHAR(40) '
matriz := matriz + ',cod_vend  CHAR(3) '
matriz := matriz + ',cod_cli  CHAR(5) '
matriz := matriz + ',cod_opera  CHAR(3) '
matriz := matriz + ',sangria  CHAR(1) '
matriz := matriz + ',op_pg  CHAR(3) '
matriz := matriz + ',pg  CHAR(1) '
matriz := matriz + ',hora  CHAR(8) '
matriz := matriz + ',autoriz  CHAR(3) '
matriz := matriz + ',valor_com  DECIMAL(10,2) '
matriz := matriz + ',comissao  DECIMAL(12,6) '
matriz := matriz + ',tp_desp  CHAR(1) '
matriz := matriz + ',num_pdv  CHAR(4) '
matriz := matriz + ',num_cup  CHAR(6) '
matriz := matriz + ',fechado  CHAR(2) '
matriz := matriz + ',tp_mov  CHAR(1) '
matriz := matriz + ',termina  CHAR(10) '
matriz := matriz + ',c_s  CHAR(1) '
matriz := matriz + ',obs  CHAR(40) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1) '
IF ! SR_EXISTTABLE('saccaixa')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCAIXA  ')
        //DBCREATE('saccaixa  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCAIXA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCAIXA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCAIXA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCAIXA_SR FOR SACCAIXA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCAIXA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('saclog')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACLOG   ')
        matriz:='data_sis  DATE '
        matriz := matriz + ',data  DATE '
        matriz := matriz + ',hora  CHAR(8) '
        matriz := matriz + ',tipo  CHAR(10) '
        matriz := matriz + ',aut_oper  CHAR(3) '
        matriz := matriz + ',cod_oper  CHAR(3) '
        matriz := matriz + ',cod_vend  CHAR(3) '
        matriz := matriz + ',cod_cli  CHAR(5) '
        matriz := matriz + ',cod_forn  CHAR(4) '
        matriz := matriz + ',cod_prod  CHAR(5) '
        matriz := matriz + ',documento  CHAR(10) '
        matriz := matriz + ',quantd1  DECIMAL(14,3) '
        matriz := matriz + ',quantd2  DECIMAL(14,3) '
        matriz := matriz + ',valor1  DECIMAL(14,3) '
        matriz := matriz + ',valor2  DECIMAL(14,3) '
        matriz := matriz + ',venc1  DATE '
        matriz := matriz + ',venc2  DATE '
        matriz := matriz + ',modulo  CHAR(20) '
        matriz := matriz + ',descri  CHAR(60) '
        matriz := matriz + ',cod_aut  CHAR(17) '
        matriz := matriz + ',terminal  CHAR(15) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        //DBCREATE('saclog  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACLOG",,.f.)
        sr_getconnection():exec("CREATE TABLE SACLOG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACLOG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACLOG_SR FOR SACLOG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACLOG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
DEVPOS(01,01);DEVOUT(STRZERO(f++,3)+'] Verificando o Arquivo -> SACCARTA')
matriz:='codigo  CHAR(3) '
matriz := matriz + ',cartao  CHAR(20) '
matriz := matriz + ',sigla  CHAR(2) '
matriz := matriz + ',prazo  DECIMAL(3,0) '
matriz := matriz + ',desconto  DECIMAL(5,2) '
matriz := matriz + ',cod_forn  CHAR(4) '
matriz := matriz + ',tipo_conta  CHAR(4) '
matriz := matriz + ',tipo_venda  CHAR(1) '
matriz := matriz + ',tef  CHAR(1) '
matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
matriz := matriz +',sr_deleted CHAR(1) '
IF ! SR_EXISTTABLE('saccarta')
        sr_getconnection():exec("CREATE GENERATOR SACCARTA",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCARTA ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCARTA ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCARTA_SR FOR SACCARTA ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCARTA, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
**********************************************************************************************
IF ! SR_EXISTTABLE('SMEDESPE')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SMEDESPE   ')
        matriz :=          ' data      DATE '
        matriz := matriz + ',cod_espe  CHAR(3) '
        matriz := matriz + ',espe      CHAR(20) '
        matriz := matriz + ',valor     DECIMAL(13,2) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        //DBCREATE('saclog  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SMEDESPE",,.f.)
        sr_getconnection():exec("CREATE TABLE SMEDESPE ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SMEDESPE ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SMEDESPE_SR FOR SMEDESPE ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SMEDESPE, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF ! SR_EXISTTABLE('SACCFG')
        DEVPOS(02,01);DEVOUT(STRZERO(f++,3)+'] Criando o Arquivo ->SACCFG   ')
        matriz :=          ' ver_cfg  CHAR(10) '
        matriz := matriz + ',nome      CHAR(10) '
        matriz := matriz + ',tip_term  CHAR(1) '
        matriz := matriz + ',tip_cor   CHAR(1) '
        matriz := matriz + ',mult_med  CHAR(1) '
        matriz := matriz + ',porta_def DECIMAL(1,0) '
        matriz := matriz + ',cam_print CHAR(30) '
        matriz := matriz + ',cam_banco CHAR(50) '
        matriz := matriz +',sr_recno DECIMAL(15,0) NOT NULL '
        matriz := matriz +',sr_deleted CHAR(1) '
        matriz := matriz + ',cam_fotos CHAR(50) '
        //DBCREATE('saclog  matriz,'SQLRDD')
        sr_getconnection():exec("CREATE GENERATOR SACCFG",,.f.)
        sr_getconnection():exec("CREATE TABLE SACCFG ("+matriz+" )",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
        sr_getconnection():exec("ALTER TABLE SACCFG ADD UNIQUE (SR_RECNO)",,.f.)
        sr_getconnection():exec("CREATE TRIGGER SACCFG_SR FOR SACCFG ACTIVE BEFORE INSERT POSITION 0 as begin If (new.SR_RECNO is null) then new.SR_RECNO = gen_id( SACCFG, 1); end",,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
setcor(1)
CLOSE ALL
*********************************************
wvw_lclosewindow()
RETURN NIL
***************************************** F I M *****************************************
