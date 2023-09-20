*************************
* INCLUSAO DE CLIENTE
*************************

FUNCTION sac130()
***************
LOCAL MPRG:='SAC130',;
      tela,opcao,lci,cci,lba,cba,mcod_cli,mrazao,mnome,mdata_cad,mendereco,;
      mbairro,mtel1,mtel2,mfax,mcontato,mspc,maniver,;
      mcomprado,mvendedor,mprazo_pag,marea,mlimite,mobs,mcodvend,mcodoper,;
      mop_hist,mhistorico,li,ci,lb,cb,tela1,mdata_nas,mcomercio,mtipo,memail,;
      mcpf,mcgc,minsc,mrg,morgao,mdat_emi,mbloqueio,matac_vare,;
      mempre_c,mcargo_c,msalario_c,mend_c,mbairro_c,mcidade_c,muf_c,mcep_c,;
      mfone_c1,mfone_c2,mloja1,mtel_loja1,mdesde1,mloja2,mtel_loja2,mdesde2,;
      mnome_r1,mfone_r1,mnome_r2,mfone_r2,mbanco1,mag1,mconta1,mbanco2,mag2,;
      mconta2,mcartao1,mno1,mvenc1,mcartao2,mno2,mvenc2,mpai,mmae,mdesconto,;
      mend_cob,mbairro_cob,mcidade_cob,muf_cob,mcep_cob,mfone_cob,mop_tab,;
      mdia1_ini,mdia1_fim,mvenc1_dup,mdia2_ini,mdia2_fim,mvenc2_dup,mregiao,mp,;
      ml_obs1,ml_obs2,ml_obs3,ml_obs4,ml_obs5,ml_obs6,ml_obs7,ml_obs8,ml_obs9,;
      ml_obs10,ml_obs11,ml_obs12,ml_obs13,ml_obs14,ml_obs15,ml_obs16,ml_obs17,;
      ml_obs18,ml_obs19,ml_obs20,mnome1,mdata_nas1,mnome2,mdata_nas2,mnome3,;
      mdata_nas3,mnome4,mdata_nas4,mnome5,mdata_nas5,aiepict:={},mcod_forn:=0,;
      mrota:=SPACE(50)

MEMVAR nivel_acess,mdata_sis,getlist

PRIVATE mnome_vend,mcom_ven,mcidade,muf,mcep,mcod_cond:=0

IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF

IF ! ver_nivel(mprg,'INCLUSAO DE CLIENTE *** CADASTRO ***','125',nivel_acess)
        RETURN NIL
ENDIF
IF ! AbriArq('regiao','reg');RETURN NIL;ENDIF

lci := 00
cci := 00
lba := 22
cba := 79

li := 01
ci := 00
lb := 22
cb := 79

tela := SAVESCREEN(00,00,24,79)
CLEAR GETS
SET KEY 281 TO cliprod()
SET KEY -9 TO ctrl_w()
SET KEY -7 TO f8_cep()
mcomercio := 'N'
WHILE .T.
        opcao := 'S'
        IF mcomercio = 'N'
                mcod_cli := SPACE(5)
                mrazao := mnome := SPACE(40)
                mtipo := 'C'
                mdata_nas := CTOD('  /  /  ')
                mdata_cad := mdata_sis
                mendereco := SPACE(35)
                mbairro := mcidade := SPACE(20)
                muf := SPACE(2)
                mcep := SPACE(9)
                mrota := SPACE(50)
                mtel1 := mtel2 := mfax := mcgc := minsc := mrg := SPACE(14)
                mcpf := SPACE(11)
                morgao := SPACE(10)
                mdat_emi := CTOD('  /  /  ')
                mcomprado := mcontato := marea := SPACE(15)
                mprazo_pag := SPACE(9)
                mlimite := mcodvend := mcodoper := mdesconto := msalario_c := ;
                mcod_cond := mcod_forn := 0
                matac_vare:= 'V'
                mobs := SPACE(60)
                mcomercio := 'N'
                IF mcpf = NIL
                        mcpf := SPACE(11)
                ENDIF
                IF mcgc = NIL
                        mcgc := SPACE(14)
                ENDIF
                mspc := 'S'
                mempre_c := SPACE(20)
                mcargo_c := SPACE(15)
                mend_c := SPACE(35)
                mbairro_c := mcidade_c := SPACE(20)
                muf_c := SPACE(2)
                mcep_c := SPACE(9)
                mfone_c1 := mfone_c2 := mtel_loja1 := mtel_loja2 := ;
                mfone_r1 := mfone_r2 := SPACE(13)
                mbanco1 := SPACE(10)
                mag1 := mconta1 := mbanco2 := mag2 := mconta2 := SPACE(10)
                mcartao1 := mcartao2 := SPACE(15)
                mno1 := mno2 := SPACE(17)
                mloja1 := mloja2 := mnome_r1 := mnome_r2 := mpai := ;
                mmae := SPACE(25)
                mend_cob := SPACE(35)
                mbairro_cob := mcidade_cob := SPACE(20)
                muf_cob := SPACE(2)
                mcep_cob := SPACE(9)
                mfone_cob := SPACE(13)
                memail := SPACE(40)
                mop_tab := 'N'
                mdia1_ini := mdia1_fim := mvenc1_dup:= mdia2_ini:=mdia2_fim := ;
                mvenc2_dup:= SPACE(2)
                ml_obs1 := ml_obs2 := ml_obs3 := ml_obs4 := ml_obs5 := ;
                ml_obs6 := ml_obs7 := ml_obs8 := ml_obs9 := ml_obs10  := ;
                ml_obs11 := ml_obs12 := ml_obs13 := ml_obs14 := ml_obs15:= ;
                ml_obs16 := ml_obs17 := ml_obs18 := ml_obs19 := ml_obs20:= SPACE(77)
                mregiao   := SPACE(2)
                mbloqueio := 'S'
                maniver   := SPACE(1)
                mnome1    := mnome2 := mnome3 := mnome4 := mnome5 := SPACE(35)
                mdata_nas1:= mdata_nas2:= mdata_nas3:= mdata_nas4:=;
                mdata_nas5:= mdesde1 := mdesde2 := mvenc1 := mvenc2 := CTOD('  /  /  ')
        ENDIF
        mensagem('Digite o Nome do Cliente a ser Incluido - <ESC> p/Retornar')
        botao(lci,cci,lba,cba,,' Inclusao de CLIENTES ','*')
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo....:')
        DEVPOS(lci+1,cci+21);DEVOUT('Data Cadastro:')
        DEVPOS(lci+2,cci+1);DEVOUT('R.Social..:')
        DEVPOS(lci+2,cci+55);DEVOUT('Data Nasc.:')
        DEVPOS(lci+3,cci+1);DEVOUT('Fantasia..:')
        DEVPOS(lci+3,cci+55);DEVOUT('Tipo Cliente.:')

        @ lci+4,cci+1 TO lci+4,cba-1
        DEVPOS(lci+5,cci+1);DEVOUT('Endereco..:')
        DEVPOS(lci+6,cci+1);DEVOUT('Bairro....:')
        DEVPOS(lci+6,cci+35);DEVOUT('Cidade:')
        DEVPOS(lci+6,cci+65);DEVOUT('UF:')
        DEVPOS(lci+7,cci+1);DEVOUT('CEP.......:')
        DEVPOS(lci+7,cci+24);DEVOUT('e-mail:')
        DEVPOS(lci+8,cci+1);DEVOUT('Rota......:')

        DEVPOS(lci+9,cci+1);DEVOUT('CNPJ:')
        DEVPOS(lci+9,cci+26);DEVOUT('Insc.:')
        DEVPOS(lci+10,cci+1);DEVOUT('CPF:')
        DEVPOS(lci+10,cci+22);DEVOUT('RG:')
        DEVPOS(lci+10,cci+42);DEVOUT('Orgao:')
        DEVPOS(lci+10,cci+61);DEVOUT('Emissao:')

        @ lci+11,cci+1 TO lci+11,cba-1
        DEVPOS(lci+12,cci+1);DEVOUT('Fone:')
        DEVPOS(lci+12,cci+23);DEVOUT('Fone:')
        DEVPOS(lci+12,cci+45);DEVOUT('Fax:')

        @ lci+13,cci+1 TO lci+13,cba-1
        DEVPOS(lci+14,cci+1);DEVOUT('FATURAMENTOS: Dia Inic.:   final:   Venc.1:   - Dia Inic.:   final:   Venc.2:')
        DEVPOS(lci+15,cci+1);DEVOUT('Comprador:')
        DEVPOS(lci+15,cci+28);DEVOUT('Prazo Pag.:')
        DEVPOS(lci+15,cci+49);DEVOUT('Contato:')
        DEVPOS(lci+16,cci+1);DEVOUT('Area:')
        DEVPOS(lci+16,cci+22);DEVOUT('Limite:')
        DEVPOS(lci+16,cci+41);DEVOUT('Desc.Especial:      %')
        DEVPOS(lci+16,cci+64);DEVOUT('Cons.SPC:')
        DEVPOS(lci+17,cci+1);DEVOUT('[V]arejista - [A]tacadista:')
        DEVPOS(lci+17,cci+32);DEVOUT('Cond.Pagamento:')
        DEVPOS(lci+18,cci+1);DEVOUT('Bloqueio Credito:')
        DEVPOS(lci+18,cci+21);DEVOUT('Regiao p/Vendedor:')

        DEVPOS(lci+19,cci+1);DEVOUT('Observacao:')
        DEVPOS(lci+20,cci+1);DEVOUT('Vendedor Resp.:')
        DEVPOS(lci+20,cci+54);DEVOUT('Operador Resp.:')
        DEVPOS(lci+21,cci+1);DEVOUT('Dados Comercial[s/N]:')
        DEVPOS(lci+21,cci+24);DEVOUT('Historico[s/N]:')
        DEVPOS(lci+21,cci+41);DEVOUT('Tab.Prod.[s/N]:')
        DEVPOS(lci+21,cci+58);DEVOUT('Data Anivers.[s/N]:')

        ****************
        SELE('cli');ORDSETFOCUS(1)
        ****************
        SET INTEN ON
        mdata_cad := mdata_sis
        mop_hist := maniver  := 'N'
        @ lci+1,cci+36 GET mdata_cad PICT '99/99/99'
        @ lci+2,cci+13 GET mrazao PICT '@!' VALID IF(EMPTY(mrazao),.F.,.T.)
        @ lci+2,cci+67 GET mdata_nas
        @ lci+3,cci+13 GET mnome PICT '@!'
        @ lci+3,cci+70 GET mtipo PICT '@!' VALID mtipo $ 'A,C,O,R,P,F,U,E' .AND. lim_get() WHEN men_get(lci+4,cci+70,'Informe o Tipo de Cliente: <C>Cliente  <R>Revenda <P>otencial <F>ilial <U>Funcionarios <A>ssociado <O>Outros <E>xcluido')
        @ lci+5,cci+13 GET mendereco PICT '@!'
        @ lci+6,cci+13 GET mbairro PICT '@!'
        READ
        mcidade := SUBSTR(UPPER(set->cidade),1,20)
        mcidade := saccid(,mcidade,,set->uf,@mcep)
        setcor(3)
        @ lci+6,cci+43 SAY mcidade PICT '@!'
        setcor(1)
        @ lci+6,cci+69 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
        @ lci+7,cci+13 GET mcep PICT '@@R 99999-999'
        @ lci+7,cci+32 GET memail
        @ lci+8,cci+13 GET mrota

        @ lci+9,cci+7 GET mcgc PICT '@@R 99.999.999/9999-99' VALID pesq_cgc(mcgc,'cli','*','cli')
*       @ lci+9,cci+32 GET minsc PICT aIePict[ AScan( aIePict, {|nI| muf == nI[ 1 ]} ) ][ 2 ] VALID IF( TestaIe( minsc, muf ),.T.,.F.) WHEN ! EMPTY(mcgc)
        @ lci+9,cci+33 GET minsc PICT '@!' VALID IF( TestaIe( minsc, muf ),.T.,.F.)             //WHEN ! EMPTY(mcgc)
        @ lci+10,cci+6 GET mcpf PICT '@@R 999.999.999-99' VALID pesq_cpf(mcpf,'cli','*')
        @ lci+10,cci+26 GET mrg PICT '@!'       //WHEN EMPTY(mcgc)
        @ lci+10,cci+49 GET morgao PICT '@!'    //WHEN EMPTY(mcgc)
        @ lci+10,cci+70 GET mdat_emi            //WHEN EMPTY(mcgc)


        @ lci+12,cci+07 GET mtel1
        @ lci+12,cci+29 GET mtel2
        @ lci+12,cci+50 GET mfax
        @ lci+14,cci+25 GET mdia1_ini PICT '99'
        @ lci+14,cci+34 GET mdia1_fim PICT '99'
        @ lci+14,cci+44 GET mvenc1_dup PICT '99'
        @ lci+14,cci+59 GET mdia2_ini PICT '99'
        @ lci+14,cci+68 GET mdia2_fim PICT '99'
        @ lci+14,cci+78 GET mvenc2_dup PICT '99'
        @ lci+15,cci+12 GET mcomprado PICT '@!'
        @ lci+15,cci+40 GET mprazo_pag PICT '@R 99-99-99'
        @ lci+15,cci+58 GET mcontato PICT '@!'
        @ lci+16,cci+6 GET marea PICT '@!'
        @ lci+16,cci+29 GET mlimite PICT '999,999.99'
        @ lci+16,cci+55 GET mdesconto PICT '999.99'
        @ lci+16,cci+73 GET mspc PICT '@!' WHEN ver_nivel(mprg+'SPC','INCLUSAO DE CLIENTE *** VERIFICAR O SPC INTERNO ***','15',nivel_acess,'*')  VALID mspc $ 'S,N'
        @ lci+17,cci+29 GET matac_vare PICT '@!' VALID matac_vare $ 'A,V'
        @ lci+17,cci+48 GET mcod_cond PICT '999' VALID ver_cond(mcod_cond,lci+17,cci+52)
        READ
        ver_cond(mcod_cond,lci+17,cci+52)

        @ lci+18,cci+19 GET mbloqueio PICT '@!' WHEN ver_nivel(mprg+'BLOQ','INCLUSAO DE CLIENTE *** BLOQUEIO DE CREDITO DO CLIENTE ***','15',nivel_acess,'*') VALID mbloqueio $ 'S,N'
        @ lci+18,cci+40 GET mregiao PICT '99' VALID ver_regi(mregiao,lci+18,cci+43,,2)

        @ lci+19,cci+13 GET mobs
        @ lci+20,cci+17 GET mcodvend PICT '999' VALID IF(EMPTY(mcodvend),.F.,ven(mcodvend,lci+20,cci+22))
        @ lci+20,cci+69 GET mcodoper PICT '999' VALID ven(mcodoper)
        @ lci+21,cci+22 GET mcomercio PICT '@!' VALID mcomercio $ 'S,N'
        @ lci+21,cci+39 GET mop_hist PICT '@!' VALID mop_hist $ 'S,N'
        @ lci+21,cci+56 GET mop_tab PICT '@!' VALID mop_tab $ 'S,N'
        @ lci+21,cci+77 GET maniver PICT '@!' VALID maniver $ 'S,N'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RELEASE ALL
                RETURN NIL
        ENDIF
        IF mnome == SPACE(30)
                mnome := mrazao
                setcor(3)
                DEVPOS(lci+3,13);DEVOUT(mnome)
                setcor(1)
        ENDIF
        IF mtipo = 'U'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(15,05,18,75,,'Cod.Correspondente o CONTAS A PAGAR')
                setcor(1)
                opcao := 'S'
                DEVPOS(16,06);DEVOUT('Codigo:')
                DEVPOS(17,06);DEVOUT('Confirma [S/n]:')
                @ 16,14 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,16,19)
                @ 17,22 GET opcao PICT '@!' VALID opcao $ 'S,N'
                READ
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        mcod_forn := 0
                ENDIF
                RESTSCREEN(01,00,24,79,tela1)
        ENDIF

        IF mcomercio = 'S'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(li,ci,lb,cb,,' DADOS COMERCIAL ')
                setcor(1)
                DEVPOS(li+1,ci+01);DEVOUT('Endereco p/Cobranca:')
                DEVPOS(li+2,ci+01);DEVOUT('Bairro.....:')
                DEVPOS(li+2,ci+36);DEVOUT('Cidade:')
                DEVPOS(li+3,ci+01);DEVOUT('UF.........:')
                DEVPOS(li+3,ci+17);DEVOUT('CEP:')
                DEVPOS(li+3,ci+33);DEVOUT('Fone:')

                DEVPOS(li+4,ci+01);DEVOUT('Empresa....:')
                DEVPOS(li+4,ci+36);DEVOUT('Cargo:')
                DEVPOS(li+5,ci+01);DEVOUT('Salario....:')
                DEVPOS(li+6,ci+01);DEVOUT('Endereco...:')
                DEVPOS(li+7,ci+01);DEVOUT('Bairro.....:')
                DEVPOS(li+8,ci+01);DEVOUT('Cidade.....:')
                DEVPOS(li+8,ci+36);DEVOUT('UF...:')
                DEVPOS(li+8,ci+47);DEVOUT('CEP:')
                DEVPOS(li+9,ci+01);DEVOUT('Fone.......:')
                DEVPOS(li+9,ci+30);DEVOUT('Fax:')

                DEVPOS(li+10,ci+01);DEVOUT('Filiacao...:')
                DEVPOS(li+10,ci+41);DEVOUT('e')

                DEVPOS(li+11,ci+01);DEVOUT('Ref.Pessoal:')
                DEVPOS(li+11,ci+43);DEVOUT('Fone:')
                DEVPOS(li+12,ci+01);DEVOUT('Ref.Pessoal:')
                DEVPOS(li+12,ci+43);DEVOUT('Fone:')
                DEVPOS(li+13,ci+01);DEVOUT('Loja.......:')
                DEVPOS(li+13,ci+43);DEVOUT('Desde:')
                DEVPOS(li+14,ci+01);DEVOUT('Loja.......:')
                DEVPOS(li+14,ci+43);DEVOUT('Desde:')
                DEVPOS(li+15,ci+01);DEVOUT('Banco......:')
                DEVPOS(li+15,ci+27);DEVOUT('Agencia:')
                DEVPOS(li+15,ci+48);DEVOUT('C/C:')
                DEVPOS(li+16,ci+01);DEVOUT('Banco......:')
                DEVPOS(li+16,ci+27);DEVOUT('Agencia:')
                DEVPOS(li+16,ci+48);DEVOUT('C/C:')
                DEVPOS(li+17,ci+01);DEVOUT('Cartao.....:')
                DEVPOS(li+17,ci+32);DEVOUT('No.:')
                DEVPOS(li+17,ci+57);DEVOUT('Venc.:')
                DEVPOS(li+18,ci+01);DEVOUT('Cartao.....:')
                DEVPOS(li+18,ci+32);DEVOUT('No.:')
                DEVPOS(li+18,ci+57);DEVOUT('Venc.:')
                @ li+1,ci+22 GET mend_cob PICT '@!'
                @ li+2,ci+14 GET mbairro_cob PICT '@!'
                @ li+2,ci+44 GET mcidade_cob PICT '@!'
                @ li+3,ci+14 GET muf_cob PICT '@!'
                @ li+3,ci+22 GET mcep_cob PICT '@@R 99999-999'
                @ li+3,ci+39 GET mfone_cob PICT '@!'

                @ li+4,ci+14 GET mempre_c PICT '@!'
                @ li+4,ci+43 GET mcargo_c PICT '@!'
                @ li+5,ci+14 GET msalario_c PICT '999,999.99'
                @ li+6,ci+14 GET mend_c PICT '@!'
                @ li+7,ci+14 GET mbairro_c PICT '@!'
                @ li+8,ci+14 GET mcidade_c PICT '@!'
                @ li+8,ci+43 GET muf_c PICT '@!'
                @ li+8,ci+52 GET mcep_c PICT '@@R 99999-999'
                @ li+9,ci+14 GET mfone_c1 PICT '@!'
                @ li+9,ci+35 GET mfone_c2 PICT '@!'
                @ li+10,ci+14 GET mpai PICT '@!'
                @ li+10,ci+43 GET mmae PICT '@!'
                @ li+11,ci+14 GET mnome_r1 PICT '@!'
                @ li+11,ci+49 GET mfone_r1 PICT '@!'
                @ li+12,ci+14 GET mnome_r2 PICT '@!'
                @ li+12,ci+49 GET mfone_r2 PICT '@!'
                @ li+13,ci+14 GET mloja1 PICT '@!'
                @ li+13,ci+50 GET mdesde1 PICT '@!'
                @ li+14,ci+14 GET mloja2 PICT '@!'
                @ li+14,ci+50 GET mdesde2 PICT '@!'
                @ li+15,ci+14 GET mbanco1 PICT '@!'
                @ li+15,ci+35 GET mag1 PICT '@!'
                @ li+15,ci+52 GET mconta1 PICT '@!'
                @ li+16,ci+14 GET mbanco2 PICT '@!'
                @ li+16,ci+35 GET mag2 PICT '@!'
                @ li+16,ci+52 GET mconta2 PICT '@!'
                @ li+17,ci+14 GET mcartao1 PICT '@!'
                @ li+17,ci+36 GET mno1 PICT '@!'
                @ li+17,ci+63 GET mvenc1 PICT '@!'
                @ li+18,ci+14 GET mcartao2 PICT '@!'
                @ li+18,ci+36 GET mno2 PICT '@!'
                @ li+18,ci+63 GET mvenc2 PICT '@!'
                READ
                IF LASTKEY() = 27
                        LOOP
                        RESTSCREEN(01,00,24,79,tela1)
                ENDIF
                RESTSCREEN(01,00,24,79,tela1)
        ENDIF
        IF mop_hist = 'S'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(li,ci,lb,cb,,' Historico do Cliente: '+mrazao)
                setcor(1)
                @ li+1,ci+1 GET ml_obs1
                @ li+2,ci+1 GET ml_obs2
                @ li+3,ci+1 GET ml_obs3
                @ li+4,ci+1 GET ml_obs4
                @ li+5,ci+1 GET ml_obs5
                @ li+6,ci+1 GET ml_obs6
                @ li+7,ci+1 GET ml_obs7
                @ li+8,ci+1 GET ml_obs8
                @ li+9,ci+1 GET ml_obs9
                @ li+10,ci+1 GET ml_obs10
                @ li+11,ci+1 GET ml_obs11
                @ li+12,ci+1 GET ml_obs12
                @ li+13,ci+1 GET ml_obs13
                @ li+14,ci+1 GET ml_obs14
                @ li+15,ci+1 GET ml_obs15
                @ li+16,ci+1 GET ml_obs16
                @ li+17,ci+1 GET ml_obs17
                @ li+18,ci+1 GET ml_obs18
                @ li+19,ci+1 GET ml_obs19
                @ li+20,ci+1 GET ml_obs20
                READ
                RESTSCREEN(01,00,24,79,tela1)
                SET KEY -9 TO
        ENDIF
        IF maniver = 'S'
                tela1 := SAVESCREEN(01,00,24,79)
                botao(li,ci,lb,cb,,' DATAS DE ANIVERSARIOS ')
                setcor(1)
                DEVPOS(li+1,ci+01);DEVOUT('Nome:')
                DEVPOS(li+1,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+2,ci+01);DEVOUT('Nome:')
                DEVPOS(li+2,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+3,ci+01);DEVOUT('Nome:')
                DEVPOS(li+3,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+4,ci+01);DEVOUT('Nome:')
                DEVPOS(li+4,ci+49);DEVOUT('Data Nascimento:')
                DEVPOS(li+5,ci+01);DEVOUT('Nome:')
                DEVPOS(li+5,ci+49);DEVOUT('Data Nascimento:')
                @ li+1,ci+7 GET mnome1 PICT '@!'
                @ li+1,ci+66 GET mdata_nas1
                @ li+2,ci+7 GET mnome2 PICT '@!'
                @ li+2,ci+66 GET mdata_nas2
                @ li+3,ci+7 GET mnome3 PICT '@!'
                @ li+3,ci+66 GET mdata_nas3
                @ li+4,ci+7 GET mnome4 PICT '@!'
                @ li+4,ci+66 GET mdata_nas4
                @ li+5,ci+7 GET mnome5 PICT '@!'
                @ li+5,ci+66 GET mdata_nas5
                READ
                IF LASTKEY() = 27
                        LOOP
                        RESTSCREEN(01,00,24,79,tela1)
                ENDIF
                RESTSCREEN(01,00,24,79,tela1)
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao do Cliente [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ELSE
                IF EMPTY(muf)
                        mensagem('Nao foi preenchido a campo do Estado, Campo Obrigatorio !!!')
                        @ lci+9,cci+42 GET muf PICT '@!' VALID IF(EMPTY(muf),.F.,v_uf(muf))
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ENDIF
                ****************
                SELE('cli');ORDSETFOCUS(1)
                ****************
                IF BLOQARQ()
                        GO BOTT
                        mcod_cli := STRZERO(VAL(cli->cod_cli)+1,5)
                        ADIREG()
                        cli-> cod_cli := mcod_cli
                        cli-> razao := mrazao
                        cli-> nome := mnome
                        cli-> data_cad := mdata_cad
                        cli-> data_atu := mdata_cad
                        cli-> tipo := mtipo
                        cli-> nascimento:= mdata_nas
                        cli-> endereco := mendereco
                        cli-> bairro := mbairro
                        cli-> cidade := mcidade
                        cli-> uf := muf
                        cli-> cep := mcep
                        cli-> rota    := mrota
                        cli-> email   := memail
                        cli-> tel1 := mtel1
                        cli-> tel2 := mtel2
                        cli-> fax := mfax
                        cli-> cgc := mcgc
                        cli-> insc := minsc
                        cli-> cpf := mcpf
                        cli-> rg := mrg
                        cli-> orgao := morgao
                        cli-> dat_emi := mdat_emi
                        cli-> comprado := mcomprado
                        cli-> contato := mcontato
                        cli-> area := marea
                        cli-> limite := mlimite
                        cli-> atac_vare := matac_vare
                        cli-> spc    := mspc
                        cli-> obs := mobs
                        cli-> prazo_pag := mprazo_pag
                        cli-> bloqueio  := mbloqueio
                        cli-> desconto := mdesconto
                        cli-> codvend := STRZERO(mcodvend,3)
                        cli-> codoper := STRZERO(mcodoper,3)
                        cli-> dia1_ini := STRZERO(VAL(mdia1_ini),2)
                        cli-> dia1_fim := STRZERO(VAL(mdia1_fim),2)
                        cli-> venc1_dup:= STRZERO(VAL(mvenc1_dup),2)
                        cli-> dia2_ini := STRZERO(VAL(mdia2_ini),2)
                        cli-> dia2_fim := STRZERO(VAL(mdia2_fim),2)
                        cli-> venc2_dup:= STRZERO(VAL(mvenc2_dup),2)
                        cli-> nome1    := mnome1
                        cli-> data_nas1:= mdata_nas1
                        cli-> nome2    := mnome2
                        cli-> data_nas2:= mdata_nas2
                        cli-> nome3    := mnome3
                        cli-> data_nas3:= mdata_nas3
                        cli-> nome4    := mnome4
                        cli-> data_nas4:= mdata_nas4
                        cli-> nome5    := mnome5
                        cli-> data_nas5:= mdata_nas5
                        cli-> empre_c  := mempre_c
                        cli-> cargo_c  := mcargo_c
                        cli-> salario_c:= msalario_c
                        cli-> end_c    := mend_c
                        cli-> bairro_c := mbairro_c
                        cli-> cidade_c := mcidade_c
                        cli-> uf_c     := muf_c
                        cli-> cep_c    := mcep_c
                        cli-> fone_c1  := mfone_c1
                        cli-> fone_c2  := mfone_c2
                        cli-> loja1    := mloja1
                        cli-> tel_loja1:= mtel_loja1
                        cli-> desde1   := mdesde1
                        cli-> loja2    := mloja2
                        cli-> tel_loja2:= mtel_loja2
                        cli-> desde2   := mdesde2
                        cli-> nome_r1  := mnome_r1
                        cli-> fone_r1  := mfone_r1
                        cli-> nome_r2  := mnome_r2
                        cli-> fone_r2  := mfone_r2
                        cli-> banco1   := mbanco1
                        cli-> ag1      := mag1
                        cli-> conta1   := mconta1
                        cli-> banco2   := mbanco2
                        cli-> ag2      := mag2
                        cli-> conta2   := mconta2
                        cli-> cartao1  := mcartao1
                        cli-> no1      := mno1
                        cli-> venc1    := mvenc1
                        cli-> cartao2  := mcartao2
                        cli-> no2      := mno2
                        cli-> venc2    := mvenc2
                        cli-> pai      := mpai
                        cli-> mae      := mmae
                        IF ! EMPTY(mend_cob)
                                cli-> end_cob    := mend_cob
                                cli-> bairro_cob := mbairro_cob
                                cli-> cidade_cob := mcidade_cob
                                cli-> uf_cob     := muf_cob
                                cli-> cep_cob    := mcep_cob
                                cli-> fone_cob   := mfone_cob
                        ELSE
                                cli-> end_cob    := mendereco
                                cli-> bairro_cob := mbairro
                                cli-> cidade_cob := mcidade
                                cli-> uf_cob     := muf
                                cli-> cep_cob    := mcep
                                cli-> fone_cob   := mtel1
                        ENDIF
                        cli->regiao     := mregiao
                        cli->codforn    := STRZERO(mcod_forn,4)
                        cli->l_obs1     := ml_obs1
                        cli->l_obs2     := ml_obs2
                        cli->l_obs3     := ml_obs3
                        cli->l_obs4     := ml_obs4
                        cli->l_obs5     := ml_obs5
                        cli->l_obs6     := ml_obs6
                        cli->l_obs7     := ml_obs7
                        cli->l_obs8     := ml_obs8
                        cli->l_obs9     := ml_obs9
                        cli->l_obs10    := ml_obs10
                        cli->l_obs11    := ml_obs11
                        cli->l_obs12    := ml_obs12
                        cli->l_obs13    := ml_obs13
                        cli->l_obs14    := ml_obs14
                        cli->l_obs15    := ml_obs15
                        cli->l_obs16    := ml_obs16
                        cli->l_obs17    := ml_obs17
                        cli->l_obs18    := ml_obs18
                        cli->l_obs19    := ml_obs19
                        cli->l_obs20    := ml_obs20
                        cli->cod_cond   := STRZERO(mcod_cond,3)
                        DBCOMMIT()
                        DBUNLOCK()
                        setcor(3)
                        DEVPOS(lci+1,cci+13);DEVOUT(mcod_cli)
                        setcor(1)
                        INKEY(2)
                        IF mop_tab = 'S'
                                tabcliprod()
                        ENDIF
                        RESTSCREEN(00,00,24,79,tela)
                        SET KEY -9 TO fecha_tp
                        CLEAR GETS
                        mp := '*'
                        opcao := op_simnao('N','Deseja imprimir o cadastro do cliente [S/n]:')
                        IF opcao = 'S'
                                sac5cad1(mcod_cli)
                        ENDIF
                        ORDSETFOCUS(2)
                        RETURN mp
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        ENDIF
ENDDO
RETURN NIL
*********************** f i m ************************************

