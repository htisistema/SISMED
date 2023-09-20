#ifdef __XHARBOUR__
   Static sSOCKET
#ENDIF
#include "sqlrdd.ch"
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
#include "msg.ch"
//#include "EasyTEF.ch"
#include "ecf.ch"
**********************
* INCLUSAO DE CLIENTES
**********************
FUNCTION smed211
****************
LOCAL mprg:='SMED211';
      ,lba,cba,opcao,mdatn,msex,mcor,mestc,mbairro;
      ,mprof,mnatu,mend,mcid,mest,mcep,mfone,mfone1,mfone2,mresp,mind,mguia,tela1,tela2;
      ,mrecib,telahist,opcaohis,mplano,mempresa,mnum_cart,mval_cart,mrg;
      ,mconjuge,mprof_conj,memp_conj,mfone_conj,mtela,tela211,mdatault,memp_cli,;
      mfuma,mfum_dat1,mfum_dat2,mexame,mradiologia,mobs1,mobs2,mobs3,mobs4,;
      tela311,m_hist:={},m_ponto:={},;
      mdata_con,mlin1,mlin2,mlin3,mponto:=0,lb,cb,mescolar := ' ',mgenero:=' ',;
      mterapeuta,mfone_tera,mmedico,mfone_med,mdat_inter,mmed_inter,msubstancia,mtempo_uso,;
      mtempo_abus,moutro_spa,minter_ant,mcomorbidad,mnumero,mcomplement,cons_cli := {},memail,minstagram

PRIVATE mreg,mnome,mvalor,mfator,mmod,mrsoc,mdata,mcconv,mprazo,mcpf

IF ! ver_nivel(mprg,'INCLUSAO DE CLIENTE','12',nivel_acess)
        RETURN NIL
ENDIF
lba := 32
cba := 90

lb := 32
cb := 90
IF ! AbriArq('smedmov','contr');RETURN NIL;ENDIF
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedtab','tab');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
IF ! abriarq('smeddro','dro');RETURN NIL;ENDIF
IF ! abriarq('smedrec','rec');RETURN NIL;ENDIF
IF ! abriarq('smedclin','clin');RETURN NIL;ENDIF
IF ! abriarq('smedrece','rece');RETURN NIL;ENDIF
IF ! abriarq('smedcomp','com');RETURN NIL;ENDIF
IF ! abriarq('smedpulm','pul');RETURN NIL;ENDIF
IF ! abriarq('smedradio','rad');RETURN NIL;ENDIF
op_tela(0,0,50,120,'INCLUSAO DE CLIENTE',,1)

WvW_PBSetFont( NIL, 'times', 25, 7,)
nhist1 := wvw_pbCreate(NIL,01,87,04,105,'[H]istoria Clinica',,{||historico1()},,1,.F.)
nhist2 := wvw_pbCreate(NIL,06,87,09,105,'[E]xame Clinico',,{||historico2()},,1,.F.)
nhist3 := wvw_pbCreate(NIL,11,87,14,105,'Hipotese [D]iagnostico',,{||historico3()},,1,.F.)
nhist4 := wvw_pbCreate(NIL,16,87,19,105,'[C]onduta Medica',,{||historico4()},,1,.F.)
nd_esta := wvw_pbCreate(NIL,21,87,24,105,'Dados Es[T]atisticos',,{||smed710()},,1,.F.)
nrecibo := wvw_pbCreate(NIL,26,87,29,105,'Emitir [R]ecibo',,{||recibo(mnome,mdata_sis,mvalor,mcpf)},,1,.F.)
nreceita := wvw_pbCreate(NIL,31,87,34,105,'Emitir Rece[I]ta',,{||smed540(mnome,mdata_sis,1)},,1,.F.)
nexame := wvw_pbCreate(NIL,36,87,39,105,'Emitir E[X]ames',,{||smedexa(mnome,mdata_sis,1)},,1,.F.)
ncirurgia := wvw_pbCreate(NIL,41,87,44,105,'Cirurgias',,{||smed470(mnome,mdata_sis,1)},,1,.F.)
nfim := wvw_pbCreate(NIL,46,87,49,105,'<ESC> Finalizar Consulta',,{||tecla_esc()},,1,.F.)

WVW_PBEnable( NIL, nhist1, .f. )
WVW_PBEnable( NIL, nhist2, .f. )
WVW_PBEnable( NIL, nhist3, .f. )
WVW_PBEnable( NIL, nhist4, .f. )
WVW_PBEnable( NIL, nd_esta, .f. )
WVW_PBEnable( NIL, nrecibo, .f. )
WVW_PBEnable( NIL, nreceita, .f. )
WVW_PBEnable( NIL, nexame, .f. )
WVW_PBEnable( NIL, ncirurgia, .f. )

WHILE .T.
        CLEAR GETS
        //SET CENTURY ON
        exibi_prg(mprg)
        mexame := mradiologia := SPACE(1)
        mreg := opcaohis := mvalor := mfator := 0
        mrsoc := SPACE(30)
        mrecib := opcao := SPACE(1)
        mmod := mcconv := SPACE(2)
        mdata := DATE()
        mnome := mterapeuta := mmedico := SPACE(35)
        mdatn := mdatault := mval_cart := mfum_dat1 := mfum_dat2 := CTOD('  /  /  ')
        msex := mcor := mestc := SPACE(1)
        memp_cli := mprof := SPACE(20)
        mbairro := mcid := mnatu := mplano := mempresa := SPACE(25)
        mend := moutro_spa := minter_ant := SPACE(35)
        mest := SPACE(2)
        mcep := SPACE(9)
        mtempo_uso := mtempo_abus := mcomorbidad := SPACE(10)
        mconjuge := SPACE(30)
        mprof_conj := memp_conj := SPACE(20)
        mfone_conj := mfone := mfone1 := mfone2 := mfone_tera := mfone_med := mcomplement := SPACE(15)
        mresp := mind := SPACE(30)
        mguia := SPACE(16)
        mnum_cart := SPACE(18)
        mrg := SPACE(20)
        mprazo := 0
        mfuma := SPACE(1)
        mobs1 := mobs2 := mobs3 := mobs4 := SPACE(60)
        mcpf := SPACE(11)
        mescolar := mgenero:=' '
        mdat_inter := DATE()
        msubstancia:=mmed_inter:=SPACE(4)
        mnumero := SPACE(5)
        memail := SPACE(60)
        minstagram := SPACE(30)
        *****************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        *****************
        limpa(00,00,30,90)
        @ 00,85 TO 50,85
        setcor(1)
        Mensagem('Preencha os Campos - <ESC> p/Abandonar - <F3> p/Consultar Convenio')
        DEVPOS(0,1 );DEVOUT('Data Cadastro.....:')
        DEVPOS(1,1 );DEVOUT('Registro..........:')
        DEVPOS(2,1 );DEVOUT('Nome CLIENTE......:')
        DEVPOS(3 ,1);DEVOUT('Endereco..........:')
        DEVPOS(4 ,1);DEVOUT('Numero............:')
        DEVPOS(4 ,28);DEVOUT('Complemento:')
        DEVPOS(5 ,1);DEVOUT('Bairro............:')
        DEVPOS(6 ,1);DEVOUT('Cidade............:')
        DEVPOS(6 ,48);DEVOUT('UF:')
        DEVPOS(7 ,1);DEVOUT('CEP...............:')
        DEVPOS(8 ,1);DEVOUT('Fone..............:')
        DEVPOS(9 ,1);DEVOUT('Fone 1............:')
        DEVPOS(10,1);DEVOUT('EMAIL.............:')
        DEVPOS(11,1);DEVOUT('INSTAGRAM.........:')
        DEVPOS(12,1);DEVOUT('Estado Civil......:')
                DrawLabel(12,23,'[S]olteiro [C]asado [D]ivorciado [V]iuvo Se[P]arado',210,, 'Arial',15,7)
        DEVPOS(13,1);DEVOUT('Natural...........:')
        DEVPOS(14,1);DEVOUT('CPF...............:')
        DEVPOS(15,1);DEVOUT('R.G...............:')
        DEVPOS(16,1);DEVOUT('Data Nascimento...:')
        DEVPOS(16,37);DEVOUT('Idade:')
        DEVPOS(17,1);DEVOUT('Sexo..............:')
                DrawLabel(17,23,'[M]asculino [F]eminino',210,, 'Arial',15,8)
        DEVPOS(18,1);DEVOUT('Raca/Cor..........:')
                DrawLabel(18,23,'[P]reta [B]ranca Pra[D]a [O]utra',210,, 'Arial',15,7)
        DEVPOS(19,1);DEVOUT('Escolaridade......:')
                DrawLabel(19,23,'[1]Nunca estudou - [2]Alfabetizacao/1o.ano - [3]Fund.incompleto',210,, 'Arial',15,6)
                DrawLabel(20,23,'[4]Fund.completo - [5]Medio incompleto - [6]Medio completo',210,, 'Arial',15,6)
                DrawLabel(21,23,'[7]Superior incompleto - [8]Superior completo',210,,'Arial',15,6)
        DEVPOS(22,1);DEVOUT('Empresa Trabalho..:')
        DEVPOS(23,1);DEVOUT('Profissao.........:')
        DEVPOS(24,1);DEVOUT('Responsavel.......:')
        DEVPOS(25,1);DEVOUT('Fone Responsavel..:')
        DEVPOS(26,1);DEVOUT('Indicado Por......:')
        DEVPOS(27,1);DEVOUT('Conjuge...........:')
        DEVPOS(28,1);DEVOUT('Trabalho Conjuge..:')
        DEVPOS(29,1);DEVOUT('Profissao.........:')
        DEVPOS(30,1);DEVOUT('Fone..............:')
        DEVPOS(31,1);DEVOUT('Codigo Convenio...:')
        DEVPOS(32,1);DEVOUT('Plano.............:')
        DEVPOS(33,1);DEVOUT('No.do Cartao......:')
        DEVPOS(34,1);DEVOUT('Validade..........:')
        DEVPOS(35,1);DEVOUT('Data Ult.Consulta.:')
        DEVPOS(36,1);DEVOUT('Data Prox.Consulta:')
        DEVPOS(37,1);DEVOUT('E fumante [S/N/E].:')
        DEVPOS(38,1);DEVOUT('Data Inicial......:')
        DEVPOS(39,1);DEVOUT('Data Final........:')
        DEVPOS(40,1);DEVOUT('Observacao........:')
        mdatault := mdata
        @ 0,21 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        @ 2,21 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF cli->(DBSEEK(mnome))
                tela2 := SAVESCREEN(00,00,24,79)
                setcor(3)
                botao(11,24,17,74)
                @ 15,25 TO 15,73 DOUBLE
                setcor(1)
                SETCOLOR('w+*/n,x')
                DEVPOS(12,26);DEVOUT('Nome ja Existente no Arquivo !!!')
                setcor(1)
                DEVPOS(13,26);DEVOUT('Nome:')
                DEVPOS(14,26);DEVOUT('Data Nasc.:')
                DEVPOS(14,48);DEVOUT('Dat.Inic.:')
                setcor(3)
                DEVPOS(13,32);DEVOUT(nome)
                DEVPOS(14,38);DEVOUT(datans)
                DEVPOS(14,59);DEVOUT(data)
                setcor(1)
                DEVPOS(16,26);DEVOUT('Cadastra Novamente [S/N]:')
                SET INTEN ON
                @ 16,53 GET opcao PICT '@!' VALID opcao $ 'S,N'
                READ
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        RESTSCREEN(00,00,24,79,tela211)
                        LOOP
                        opcao := SPACE(1)
                ENDIF
                RESTSCREEN(00,00,24,79,tela211)
                opcao := SPACE(1)
        ENDIF
        @ 3,21 GET mend PICT '@!'
        @ 4,21 GET mnumero PICT '@!'
        @ 4,42 GET mcomplement PICT '@!'
        @ 5,21 GET mbairro PICT '@!'
        @ 6,21 GET mcid PICT '@!'
        @ 6,52 GET mest PICT '@!'
        @ 7,21 GET mcep PICT '99999-999'
        @ 8,21 GET mfone
        @ 9,21 GET mfone1
        @ 10,21 GET memail
        @ 11,21 GET minstagram
        @ 12,21 GET mestc PICT '@!' VALID mestc $ 'S,C,D,V,P'
        @ 13,21 GET mnatu PICT '@!'
        @ 14,21 GET mcpf PICT '@!@R 999.999.999-99'
        @ 15,21 GET mrg PICT '@!'
        @ 16,21 GET mdatn VALID calc_nasc(mdatn,16,44,1)
        @ 17,21 GET msex PICT '@!' VALID msex $ 'F,M'
        @ 18,21 GET mcor PICT '@!' VALID mcor $ 'P,B,D,O'
        @ 19,21 GET mescolar VALID mescolar $ '1,2,3,4,5,6,7,8'

        @ 22,21 GET memp_cli PICT '@!'
        @ 23,21 GET mprof PICT '@!'
        @ 24,21 GET mresp PICT '@!'
        @ 25,21 GET mfone2
        @ 26,21 GET mind PICT '@!'

        @ 27,21 GET mconjuge PICT '@!'
        @ 28,21 GET memp_conj PICT '@!'
        @ 29,21 GET mprof_conj PICT '@!'
        @ 30,21 GET mfone_conj

        @ 31,21 GET mcconv PICT '99' VALID ver_conv(mcconv,31,24)
        @ 32,21 GET mplano PICT '@!'
        @ 33,21 GET mempresa PICT '@!'
        @ 34,21 GET mval_cart
        @ 35,21 GET mdatault
        @ 37,21 GET mfuma PICT '@!' VALID mfuma $ 'S,N,E, '
        @ 38,21 GET mfum_dat1 WHEN mfuma <> 'N' .AND. mfuma <> ' '
        @ 39,21 GET mfum_dat2 WHEN mfuma <> 'N' .AND. mfuma <> ' '
        @ 41,1 GET mobs1
        @ 42,1 GET mobs3
        @ 43,1 GET mobs2
        @ 44,1 GET mobs4
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(36,21);DEVOUT(mdatault+mprazo)
        setcor(1)
        IF mmod = 'CH' .OR. mmod = 'SR'
                mrecib = 'N'
        ENDIF
        IF mmod = 'CR'
                mrecib = 'S'
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/N]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF opcao = 'S'
                cons_cli := {}
                sr_getconnection():exec("SELECT MAX(registro) FROM smedcli",,.t.,@cons_cli)
                sr_getconnection():exec('COMMIT',,.f.)
                mreg := VAL(cons_cli[1,1]) + 1
                sr_getconnection():exec('INSERT INTO smedcli ('+;
                                        'registro   ,'+;
                                        'data       ,'+;
                                        'codconv    ,'+;
                                        'nome       ,'+;
                                        'datans     ,'+;
                                        'sexo       ,'+;
                                        'cor        ,'+;
                                        'estcivil   ,'+;
                                        'profissao  ,'+;
                                        'natural1   ,'+;
                                        'endereco   ,'+;
                                        'cidade     ,'+;
                                        'bairro     ,'+;
                                        'est        ,'+;
                                        'cep        ,'+;
                                        'fone       ,'+;
                                        'fone1      ,'+;
                                        'fone2      ,'+;
                                        'resp       ,'+;
                                        'indica     ,'+;
                                        'emp_cli    ,'+;
                                        'conjuge    ,'+;
                                        'emp_conj   ,'+;
                                        'prof_conj  ,'+;
                                        'fone_conj  ,'+;
                                        'plano      ,'+;
                                        'empresa    ,'+;
                                        'num_cart   ,'+;
                                        'val_cart   ,'+;
                                        'rg         ,'+;
                                        'fuma       ,'+;
                                        'fum_dat1   ,'+;
                                        'fum_dat2   ,'+;
                                        'obs1       ,'+;
                                        'obs2       ,'+;
                                        'obs3       ,'+;
                                        'obs4       ,'+;
                                        'cpf        ,'+;
                                        'escolar    ,'+;
                                        'email      ,'+;
                                        'instagram  ,'+;
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(STRZERO(mreg,5,0))+','+; //1
                                        sr_cdbvalue(mdata)+','+; //4
                                        sr_cdbvalue(mcconv)+','+; //2
                                        sr_cdbvalue(mnome)+','+; //5
                                        IF(! EMPTY(mdatn),sr_cdbvalue(mdatn),'NULL')+','+; //6
                                        sr_cdbvalue(msex)+','+; //6
                                        sr_cdbvalue(mcor)+','+; //6
                                        sr_cdbvalue(mestc)+','+; //6
                                        sr_cdbvalue(mprof)+','+; //1
                                        sr_cdbvalue(mnatu)+','+; //4
                                        sr_cdbvalue(mend)+','+; //2
                                        sr_cdbvalue(mcid)+','+; //5
                                        sr_cdbvalue(mbairro)+','+; //6
                                        sr_cdbvalue(mest)+','+; //6
                                        sr_cdbvalue(mcep)+','+; //6
                                        sr_cdbvalue(mfone)+','+; //6
                                        sr_cdbvalue(mfone1)+','+; //1
                                        sr_cdbvalue(mfone2)+','+; //4
                                        sr_cdbvalue(mresp)+','+; //2
                                        sr_cdbvalue(mind)+','+; //5
                                        sr_cdbvalue(memp_cli)+','+; //6
                                        sr_cdbvalue(mconjuge)+','+; //6
                                        sr_cdbvalue(memp_conj)+','+; //6
                                        sr_cdbvalue(mprof_conj)+','+; //6
                                        sr_cdbvalue(mfone_conj)+','+; //6
                                        sr_cdbvalue(mplano)+','+; //6
                                        sr_cdbvalue(mempresa)+','+; //1
                                        sr_cdbvalue(mnum_cart)+','+; //4
                                        IF(! EMPTY(mval_cart),sr_cdbvalue(mval_cart),'NULL')+','+; //6
                                        sr_cdbvalue(mrg)+','+; //5
                                        sr_cdbvalue(mfuma)+','+; //5
                                        IF(! EMPTY(mfum_dat1),sr_cdbvalue(mfum_dat1),'NULL')+','+; //6
                                        IF(! EMPTY(mfum_dat2),sr_cdbvalue(mfum_dat2),'NULL')+','+; //6
                                        sr_cdbvalue(mobs1)+','+; //6
                                        sr_cdbvalue(mobs2)+','+; //6
                                        sr_cdbvalue(mobs3)+','+; //6
                                        sr_cdbvalue(mobs4)+','+; //6
                                        sr_cdbvalue(mcpf)+','+; //5
                                        sr_cdbvalue(mescolar)+','+; //6
                                        sr_cdbvalue(memail)+','+; //6
                                        sr_cdbvalue(minstagram)+','+; //6
                                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                atencao('CODIGO GERADO: '+STRZERO(mreg,5)+m_qp+m_qp+'Cliente: '+mnome)
                /*
                IF nivel_acess = '3' .OR. nivel_acess = '4'
                        EXIT
                ENDIF
                IF ! ver_nivel('HIST_CLI','HISTORICO CLINICO DO CLIENTE','',nivel_acess)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                mreg := cli->registro
                opcao := 'S'
                SET ESCAPE OFF
                opcao := op_simnao('S','Historia Clinica  [S/n]:')
                SET INTEN ON
                SET ESCAPE ON
                IF opcao = 'N' .OR. LASTKEY() = 27
                        EXIT
                ENDIF
                sr_getconnection():exec("UPDATE smedcli SET datault = "+sr_cdbvalue(mdatault)+" WHERE registro = "+sr_cdbvalue(cli->registro),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)

                sr_getconnection():exec('INSERT INTO smedmov ('+;
                                        'datacons,'+;
                                        'cadnome,'+;
                                        'registro,'+;
                                        'situacao,'+;
                                        'codconv,'+;
                                        'modalidade,'+;
                                        'valor,'+;
                                        'recibo,'+;
                                        'SR_DELETED )'+;
                                        ' VALUES ('+;
                                        sr_cdbvalue(mdata)+','+; //1
                                        sr_cdbvalue(mnome)+','+; //4
                                        sr_cdbvalue(mreg)+','+; //2
                                        sr_cdbvalue('CO')+','+; //5
                                        sr_cdbvalue(mcconv)+','+; //6
                                        sr_cdbvalue(conv->modalidade)+','+; //6
                                        sr_cdbvalue(conv->valor_con)+','+; //6
                                        sr_cdbvalue(mrecib)+','+; //6
                                        sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
                */

        ENDIF
        EXIT
ENDDO
CLEAR GETS
WVW_PBDestroy( NIL, nhist1)
WVW_PBDestroy( NIL, nhist2)
WVW_PBDestroy( NIL, nhist3)
WVW_PBDestroy( NIL, nhist4)
WVW_PBDestroy( NIL, nd_esta)
WVW_PBDestroy( NIL, nrecibo)
WVW_PBDestroy( NIL, nreceita)
WVW_PBDestroy( NIL, nexame)
wvw_lclosewindow()
mpesquisa := STRZERO(mreg,5)
RETURN NIL
******************************* F I M ******************
* FUNCAO CALCULAR IDADE
**************************
FUNCTION calc_nasc(idade,l,c,mflag)
IF EMPTY(idade)
        RETURN .T.
ENDIF
IF l # NIL
        setcor(3)
        DEVPOS(l,c);DEVOUT(STR(INT((DATE() - idade)/365),3))
        setcor(1)
ENDIF
IF mflag # NIL
        RETURN .T.
ELSE
        RETURN STR(INT((DATE() - idade)/365),3)
ENDIF
