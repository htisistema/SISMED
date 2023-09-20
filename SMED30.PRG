*******************************
* RECEBIMENTO DE TP's
*******************************
MEMVAR getlist

FUNCTION smed30(mnum)
***************
LOCAL MPRG:='SAC30',mmodulo:='RECEBIMENTOS DO CAIXA',;
      opcao,mtela2,mtela1,lci,cci,lba,cba,i,msele,morde,point,;
      mopcao,mtela,f,mtipo_comp,mtipo_pag,mbox,;
      mtot_icmf,msaldo_atu,mtot_comissao,mperc_comissao,;
      li,ci,lb,cb,menvelope,mproducao,mprz_med:=0,mdia_med:=0,;
      mdinheiro,mn_banco,mn_cheque,mn_dup,mn_trans,mvencimento,mt_pag,;
      mcod_cart,mn_cupom,mvalor,mn_fin,mtot_ipi,mbox_rece,magencia,mc_c,mcorrente,mcpfcnpj,;
      m_parcela:={},mqtd_parc:=0,m_intevalo:={},mtraco := REPLI('=',60),mtela_aut,;
      mvl_vend,mtot_icm,mtipo_pg,mnome,mextenso,mlinha,lin,mop_ipi:=' ',mop_desc:=' ',mdata_30:=CTOD('  /  /  '),;
      mintevalo:=0

MEMVAR nivel_acess,mdata_sis,cod_operado,mcgc_firm,memp_resa,mend_firm,mfone_firm,;
       mcid_firm,minsc_firm

PRIVATE mlin,mcartao,mprazo_cart,mdesc_cart,mcobra_fin,mtaxa_fin,m_recebe:={},;
        mdesconto,tela,mreceb,mcom_ven,mcom_ap,mbanco,;
        mcod_cli,mcliente,mcgc,mcpf,mdocumento,;
        mnum_ped,minsc,mtp_vend,mtot_desc,mcod_oper,mlib:=' ',;
        mtot_verif:= 0,mdiferenca,mtot_nota,mqtd_doc:=0,;
        mdesc_cx:=0,mdesc_perc:=0,mcom_oper,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_emp:='   '

PRIVATE mtot_limite:=0,mlim_venc:=0,mlim_avenc:=0,mresta,mvlr_pg,mduplicata,;
        mvalor_dup,mtip_cli,mobs

IF ! ver_nivel(mprg,mmodulo,'13456',nivel_acess)
        RETURN NIL
ENDIF

CLEAR GETS

mreceb := 'R'
lci = 00
cci = 00
lba = 23
cba = 75
tela = SAVESCREEN(00,00,24,79)
*----------------------------------------------------
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
IF ! AbriArq('saccfg','cfg');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*---------------------------------------------
atencao(' Operador:'+cod_operado+'-'+RTRIM(sen->snome),2)
mlib := ' '
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := cfg->imp_rel
****************************************************
        SET INTEN ON
        mcom_ven := mcom_ap := mtot_nota := mdesconto := mperc := mcod_cli :=;
        mvl_vend := mcod_vend := mcod_oper := mperc_comissao := mtot_comissao := ;
        mprazo_cart := mdesc_cart := mtot_icm := mdinheiro := mcod_cart := ;
        mvalor := mtot_desc := mtot_verif := mtot_ipi := mdiferenca := ;
        i := f := mqtd_doc := mqtd_dias := mtot_verif := 0

        mlib := mtipo_pag := mt_pag := SPACE(1)
        mtp_vend := SPACE(2)
        mn_dup := mn_trans := mn_cupom := mn_cred  := SPACE(8)
        menvelope := SPACE(10)
        mcpf := SPACE(11)
        mcgc := minsc := SPACE(14)
        mcliente = SPACE(40)
        opcao = 'S'
        mbanco := 'C'
        mtipo_comp := 'AV'
        mvencimento := CTOD(' /  /  ')
        i = 1
        mbox := SAVESCREEN(01,00,24,79)
        ASIZE(m_recebe,0)
        ASIZE(m_parcela,0)
        li := 00
        ci := 00
        lb := 22
        cb := 79
        mensagem('Preencha os Campos - <F1> Ajuda - <ESC> p/Retornar ')
        botao(li,ci,lb,cb,,mmodulo,'*')
        DEVPOS(li+1,ci+1);DEVOUT('Cliente:')
        DEVPOS(li+1,ci+61);DEVOUT('CPF:')
        DEVPOS(li+2,ci+1);DEVOUT('CNPJ:')
        DEVPOS(li+2,ci+31);DEVOUT('Cond.Pag.:')
        @ li+4,ci+1 TO li+4,cb-1
        DEVPOS(li+8,ci+1);DEVOUT('Total da COMPRA.....R$:')
        @ li+9,ci+1 TO li+9,cb-1
        DEVPOS(li+10,ci+1);DEVOUT('Total RECEBIDO......R$:')
        DEVPOS(li+10,ci+40);DEVOUT('a RECEBER R$:')
        @ li+11,ci+1 TO li+11,cb-1
        SETCOLOR('n+/w')
        SUB_BANNER(16,14,'CAIXA LIVRE')


        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RELEASE m_codigo:={},m_desc:={},mtot_nota,mdesconto,;
                        tela,mreceb,mcom_ven,mbanco,mcod_cli,mcliente,;
                        mnome_vend,mperc,mcgc,mcpf,mcod_vend,mdocumento,;
                        mnum_ped,minsc,mcond_vezes,mcod_oper,;
                        mcond_intev,mtp_vend,mtot_desc
                RETURN NIL
        ENDIF
        *---------------------------------------------
        IF ! AbriArq('smedcli','cli');RETURN NIL;ENDIF
        ***************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ***************
        @ li+1,ci+09 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,li+1,ci+15)
        @ li+1,ci+65 GET mcpf PICT '@@R 999.999.999-99' VALID IF(mcpf = SPACE(11),.T.,ver_cpf(mcpf)) WHEN mcod_cli = 0          //.AND. mnum = NIL
        @ li+2,ci+06 GET mcgc PICT '@@R 99.999.999/9999-99' VALID IF(mcgc = SPACE(14),.T.,ver_cgc(mcgc)) WHEN mcod_cli = 0 .AND. mcpf = SPACE(11)       //.AND. mnum = NIL
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        ver_cli(mcod_cli,li+1,ci+15)
        setcor(3)
        DEVPOS(li+1,ci+09);DEVOUT(STRZERO(mcod_cli,5))
        DEVPOS(li+1,ci+15);DEVOUT(mcliente)
        DEVPOS(li+1,ci+65);DEVOUTPICT(mcpf,'@@R 999.999.999-99')
        DEVPOS(li+2,ci+06);DEVOUTPICT(mcgc,'@@R 99.999.999/9999-99')
        setcor(1)






        SUB_BANNER(li+5,ci+30,TRANSFORM(mtot_nota,'999,999.99'))
        mn_banco := SPACE(3)
        magencia := SPACE(8)
        mc_c := SPACE(13)
        mcorrente := SPACE(35)
        mcpfcnpj := SPACE(14)
        mtipo_pg := 0
        WHILE .T.
                mensagem("Escolha a opcao que deseja fazer o Recebimento  -  <ESC> Retorna" )
                mn_cheque := SPACE(6)
                mvencimento := CTOD('  /  /  ')
                mn_dup := mn_trans := mn_fin := mn_cred  := SPACE(8)
                mt_pag   := 'C'
                mdinheiro := mcod_cart := mvalor := 0
                mn_cupom := SPACE(7)
                mopcao := SPACE(1)
                botao(li+12,ci+1,li+14,ci+12)
                botao(li+12,ci+13,li+14,ci+22)
                botao(li+12,ci+23,li+14,ci+35)
                botao(li+12,ci+36,li+14,ci+49)
                botao(li+12,ci+50,li+14,ci+59)
                setcor(9)
                @ li+13,ci+2 PROMPT '^1-Dinheiro'
                @ li+13,ci+14 PROMPT '^2-Cheque'
                @ li+13,ci+24 PROMPT '^3-Duplicata'
                @ li+13,ci+37 PROMPT '^4-Convenio'
                @ li+13,ci+51 PROMPT '^5-Cartao'
                SET INTEN ON
                MENU TO mtipo_pg
                setcor(1)

                IF LASTKEY() = 27
                        RESTSCREEN(01,00,24,79,mbox)
                        EXIT
                ENDIF
                mbox_rece := SAVESCREEN(00,00,24,79)
                //DINHEIRO
                IF mtipo_pg = 1
                        setcor(4)
                        @ li+13,ci+2 SAY '1-Dinheiro'
                        setcor(1)
                        @ li+13,ci+14 SAY '2-Cheque'
                        @ li+13,ci+24 SAY '3-Duplicata'
                        @ li+13,ci+37 SAY '4-Financeira'
                        @ li+13,ci+51 SAY '5-Cartao'
                        @ li+13,ci+61 SAY '6-Convenio'
                        @ li+13,ci+72 SAY '7-Cred.'

                        botao(li+16,ci+1,li+18,ci+40,,' DINHEIRO ')

                        DEVPOS(li+17,ci+2);DEVOUT('Dinheiro............R$:')
                        @ li+17,ci+25 GET mdinheiro PICT '999,999,999.99'
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                ELSEIF mtipo_pg = 2             // CHEQUES
                        IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
                        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
                        *---------------------------------------------
                        mt_pag := 'B'
                        botao(li+15,ci+02,li+23,ci+77,,' CHEQUES ')
                        setcor(1)
                        DEVPOS(li+16,ci+03);DEVOUT('No.Banco...:')
                        DEVPOS(li+17,ci+03);DEVOUT('Agencia....:')
                        DEVPOS(li+18,ci+03);DEVOUT('C/C........:')
                        DEVPOS(li+19,ci+03);DEVOUT('No.Cheque..:')
                        DEVPOS(li+20,ci+03);DEVOUT('Vencimento.:')
                        DEVPOS(li+21,ci+03);DEVOUT('Valor......:')
                        DEVPOS(li+22,ci+03);DEVOUT('Correntista:')
                        DEVPOS(li+22,ci+53);DEVOUT('CPF/CNPJ:')
                        mvencimento := mdata_sis
                        @ li+16,ci+16 GET mn_banco PICT '9999'
                        @ li+17,ci+16 GET magencia PICT '@!'
                        @ li+18,ci+16 GET mc_c PICT '@!' VALID qtd_chq(mcod_cli,mn_banco,magencia,mc_c)
                        @ li+19,ci+16 GET mn_cheque PICT '99999999' VALID IF(! EMPTY(mn_banco) .AND. EMPTY(mn_cheque),.F.,.T.)
                        @ li+20,ci+16 GET mvencimento VALID IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                        @ li+21,ci+16 GET mvalor PICT '9,999,999.99' WHEN ! EMPTY(mn_banco)
                        @ li+22,ci+16 GET mcorrente PICT '@!'
                        @ li+22,ci+62 GET mcpfcnpj PICT '@!' VALID chq_corre(mcpfcnpj)
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mn_banco)
                               RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                        IF mvencimento > mdata_sis
                                mtipo_comp = 'AP'
                        ENDIF
               ELSEIF mtipo_pg = 3              // DUPLICATA
                        mvencimento := mdata_sis
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,3,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,6,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,9,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,12,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,15,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,18,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,21,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,24,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,27,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,30,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,33,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,36,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,39,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,42,3)))
                        AADD(m_intevalo,VAL(SUBSTR(mcond_intev,45,3)))
                        botao(li+16,ci+27,li+21,ci+56,,' DUPLICATAS ')
                        mqtd_parc := 0
                        mn_dup := SPACE(6)
                        DEVPOS(li+17,ci+28);DEVOUT('No.Duplicata.:')
                        DEVPOS(li+18,ci+28);DEVOUT('Vencimento...:')
                        DEVPOS(li+19,ci+28);DEVOUT('C>art. B>anco:')
                        DEVPOS(li+20,ci+28);DEVOUT('Quant. Parcelas..:')
                        @ li+17,ci+43 GET mn_dup PICT '@!' VALID IF(EMPTY(mn_dup),.F.,.T.)
                        @ li+18,ci+43 GET mvencimento   //VALID vencim(mvencimento,,,mdata_30,mintevalo)      //IF(EMPTY(mvencimento) .OR. mvencimento < mdata_sis,.F.,.T.)
                        READ
                        IF LASTKEY() = 27
                               RESTSCREEN(00,00,24,79,mbox_rece)
                               LOOP
                        ENDIF
                        @ li+19,ci+43 GET mt_pag PICT '@!' VALID mt_pag $ 'C,B'
                        @ li+20,ci+47 GET mqtd_parc PICT '99'
                        READ
                        botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        i := 0
                        ASIZE(m_parcela,0)
                        FOR i = 1 TO 15
                                IF i <= mqtd_parc
                                        AADD(m_parcela,{ALLTRIM(mn_dup)+'/'+STRZERO(i,2)+SPACE(7-LEN(ALLTRIM(mn_dup)+'/'+STRZERO(i,2))),mvencimento+(30*i),mqtd_parc})
                                ELSE
                                        AADD(m_parcela,{SPACE(9),CTOD('  /  /  '),0})
                                ENDIF
                        NEXT
                        mtipo_comp = 'AP'
                ELSEIF mtipo_pg = 4             //CONVENIOS
                        IF ! AbriArq('smedconv','conv');RETURN NIL;ENDIF
                        *---------------------------------------------
                        ASIZE(m_parcela,0)
                        mqtd_parc := 0
                        mn_fin := SPACE(6)

                        botao(li+16,ci+12,li+20,ci+74,,' CONVENIOS ')

                        DEVPOS(li+17,ci+13);DEVOUT('Cod.Convenio.....:')
                        DEVPOS(li+18,ci+13);DEVOUT('No.Convenio......:')
                        DEVPOS(li+19,ci+13);DEVOUT('Valor............:')
                        @ li+17,ci+32 GET mcod_cart PICT '999' VALID ver_finan(mcod_cart,li+17,ci+36)
                        @ li+18,ci+32 GET mn_fin PICT '@!'
                        READ
                        mtipo_comp = 'AP'
               ELSEIF mtipo_pg = 5      //CARTAO
                        IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
                        IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
                        IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
                        IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
                        mt_pag := 'B'
                        ASIZE(m_parcela,0)
                        mqtd_parc := 0
                        botao(li+16,ci+40,li+21,ci+79,,' CARTAO ')
                        DEVPOS(li+17,ci+41);DEVOUT('Cod.Cartao:')
                        DEVPOS(li+18,ci+41);DEVOUT('No.Cupom..:')
                        DEVPOS(li+18,ci+59);DEVOUT('/99')
                        DEVPOS(li+19,ci+41);DEVOUT('No.Parcelas:')
                        @ li+17,ci+53 GET mcod_cart PICT '999' VALID ver_cartao(mcod_cart,li+17,ci+55)
                        mvencimento := mdata_sis
                        @ li+18,ci+53 GET mn_cupom PICT '@!' VALID IF(EMPTY(mn_cupom),.F.,.T.)
                        @ li+19,ci+54 GET mqtd_parc PICT '99'
                        READ
                        botao(li+13,ci+1,li+22,ci+78,,' Documento  Vencimento       Valor      Documento  Vencimento       Valor','*')
                        i := 0
                        FOR i = 1 TO 15
                                IF i <= mqtd_parc
                                        mvencimento := mvencimento + car->prazo
                                        AADD(m_parcela,{ALLTRIM(mn_cupom)+'/'+STRZERO(i,2),mvencimento,mdiferenca/mqtd_parc,car->cod_forn,car->tipo_conta})
                                ELSE
                                        AADD(m_parcela,{SPACE(9),CTOD('  /  /  '),0})
                                ENDIF
                                AADD(m_intevalo,0)
                        NEXT
                        IF car->tipo_venda = 'A' .OR. car->prazo = 0
                                mtipo_comp = 'AV'
                        ELSE
                                mtipo_comp = 'AP'
                        ENDIF
                ELSE
                        LOOP
                ENDIF
                IF mtipo_pg = 3 .OR. mtipo_pg = 4 .OR. mtipo_pg = 5
                        @ li+14,ci+4 GET m_parcela[1,1] PICT '@!'
                        @ li+14,COL()+2 GET m_parcela[1,2] VALID vencim(m_parcela[1,2],,,mdata_30,m_intevalo[1],m_parcela[1,1])
                        @ li+14,COL()+2 GET m_parcela[1,3] PICT '999,999.99'
                        @ li+15,ci+4 GET m_parcela[2,1] PICT '@!'
                        @ li+15,COL()+2 GET m_parcela[2,2] VALID vencim(m_parcela[2,2],,,mdata_30,m_intevalo[2],m_parcela[2,1])
                        @ li+15,COL()+2 GET m_parcela[2,3] PICT '999,999.99'
                        @ li+16,ci+4 GET m_parcela[3,1] PICT '@!'
                        @ li+16,COL()+2 GET m_parcela[3,2] VALID vencim(m_parcela[3,2],,,mdata_30,m_intevalo[3],m_parcela[3,1])
                        @ li+16,COL()+2 GET m_parcela[3,3] PICT '999,999.99'
                        @ li+17,ci+4 GET m_parcela[4,1] PICT '@!'
                        @ li+17,COL()+2 GET m_parcela[4,2] VALID vencim(m_parcela[4,2],,,mdata_30,m_intevalo[4],m_parcela[4,1])
                        @ li+17,COL()+2 GET m_parcela[4,3] PICT '999,999.99'
                        @ li+18,ci+4 GET m_parcela[5,1] PICT '@!'
                        @ li+18,COL()+2 GET m_parcela[5,2] VALID vencim(m_parcela[5,2],,,mdata_30,m_intevalo[5],m_parcela[5,1])
                        @ li+18,COL()+2 GET m_parcela[5,3] PICT '999,999.99'
                        @ li+19,ci+4 GET m_parcela[6,1] PICT '@!'
                        @ li+19,COL()+2 GET m_parcela[6,2] VALID vencim(m_parcela[6,2],,,mdata_30,m_intevalo[6],m_parcela[6,1])
                        @ li+19,COL()+2 GET m_parcela[6,3] PICT '999,999.99'
                        @ li+20,ci+4 GET m_parcela[7,1] PICT '@!'
                        @ li+20,COL()+2 GET m_parcela[7,2] VALID vencim(m_parcela[7,2],,,mdata_30,m_intevalo[7],m_parcela[7,1])
                        @ li+20,COL()+2 GET m_parcela[7,3] PICT '999,999.99'
                        @ li+21,ci+4 GET m_parcela[8,1] PICT '@!'
                        @ li+21,COL()+2 GET m_parcela[8,2] VALID vencim(m_parcela[8,2],,,mdata_30,m_intevalo[8],m_parcela[8,1])
                        @ li+21,COL()+2 GET m_parcela[8,3] PICT '999,999.99'

                        @ li+14,ci+43 GET m_parcela[9,1] PICT '@!'
                        @ li+14,COL()+2 GET m_parcela[9,2] VALID vencim(m_parcela[9,2],,,mdata_30,m_intevalo[9],m_parcela[9,1])
                        @ li+14,COL()+2 GET m_parcela[9,3] PICT '999,999.99'
                        @ li+15,ci+43 GET m_parcela[10,1] PICT '@!'
                        @ li+15,COL()+2 GET m_parcela[10,2] VALID vencim(m_parcela[10,2],,,mdata_30,m_intevalo[10],m_parcela[10,1])
                        @ li+15,COL()+2 GET m_parcela[10,3] PICT '999,999.99'
                        @ li+16,ci+43 GET m_parcela[11,1] PICT '@!'
                        @ li+16,COL()+2 GET m_parcela[11,2] VALID vencim(m_parcela[11,2],,,mdata_30,m_intevalo[11],m_parcela[11,1])
                        @ li+16,COL()+2 GET m_parcela[11,3] PICT '999,999.99'
                        @ li+17,ci+43 GET m_parcela[12,1] PICT '@!'
                        @ li+17,COL()+2 GET m_parcela[12,2] VALID vencim(m_parcela[12,2],,,mdata_30,m_intevalo[12],m_parcela[12,1])
                        @ li+17,COL()+2 GET m_parcela[12,3] PICT '999,999.99'
                        @ li+18,ci+43 GET m_parcela[13,1] PICT '@!'
                        @ li+18,COL()+2 GET m_parcela[13,2] VALID vencim(m_parcela[13,2],,,mdata_30,m_intevalo[13],m_parcela[13,1])
                        @ li+18,COL()+2 GET m_parcela[13,3] PICT '999,999.99'
                        @ li+19,ci+43 GET m_parcela[14,1] PICT '@!'
                        @ li+19,COL()+2 GET m_parcela[14,2] VALID vencim(m_parcela[14,2],,,mdata_30,m_intevalo[14],m_parcela[14,1])
                        @ li+19,COL()+2 GET m_parcela[14,3] PICT '999,999.99'
                        @ li+20,ci+43 GET m_parcela[15,1] PICT '@!'
                        @ li+20,COL()+2 GET m_parcela[15,2] VALID vencim(m_parcela[15,2],,,mdata_30,m_intevalo[15],m_parcela[15,1])
                        @ li+20,COL()+2 GET m_parcela[15,3] PICT '999,999.99'
                        READ
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mbox_rece)
                                LOOP
                        ENDIF
                        i := 0
                        FOR i = 1 TO 15
                                mvalor := mvalor + m_parcela[i,3]
                        NEXT
                ENDIF
                IF EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. EMPTY(mn_dup) .AND. EMPTY(mn_fin) .AND.;
                   EMPTY(mcod_cart) .AND. EMPTY(mn_trans) .AND. EMPTY(mn_cred) .AND. mvalor+mdinheiro > 0 .AND. LEN(m_parcela) = 0
                        RESTSCREEN(00,00,24,79,mbox_rece)
                        LOOP
                ENDIF
                mopcao := op_simnao('S','Confirma a Inclusao [S/N]:')
                RESTSCREEN(00,00,24,79,mbox_rece)
                IF LASTKEY() = 27 .OR. mopcao = 'N'
                        LOOP
                ENDIF
                IF mopcao = 'S'
                        IF ! (EMPTY(mdinheiro) .AND. EMPTY(mn_banco) .AND. ;
                             EMPTY(mn_dup) .AND. EMPTY(mcod_cart) .AND. LEN(m_parcela) = 0);
                              .OR. mdinheiro = mtot_nota

                                IF ! EMPTY(mdinheiro) .OR. mdinheiro = mtot_nota
                                        IF mdinheiro + mtot_verif > mtot_nota
                                                mbox_rece := SAVESCREEN(00,00,24,79)
                                                mvalor := mtot_nota - mtot_verif
                                                botao(li+15,ci+10,lb-1,cb-2,,' T R O C O ','*')
                                                setcor(3)
                                                SUB_BANNER(li+17,ci+30,TRANSFORM(mdinheiro+mtot_verif - mtot_nota,'999,999.99'))
                                                setcor(1)
                                                DEVPOS(lb-1,ci+25);DEVOUT('Pressione Qualquer tecla para Continuar...')
                                                INKEY(0)
                                                RESTSCREEN(00,00,24,79,mbox_rece)
                                                IF LASTKEY() = 27
                                                        LOOP
                                                ENDIF
                                        ELSE
                                                mvalor := mdinheiro
                                        ENDIF
                                        AADD(m_alt,'DINHEIRO.....: Valor: '+TRANSFORM(mdinheiro,'999,999.99'))
                                        AADD(m_recebe,{'DN','AV',SPACE(3),SPACE(6),'99999999',mdata_sis,'C',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                ELSE
                                        IF ! EMPTY(mn_cheque)
                                                AADD(m_alt,'CHEQUE.......: Bco.: '+mn_banco+' No.: '+mn_cheque+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                                IF mvencimento > mdata_sis
*                                                                        1    2      3         4       5        6       7         8                 9      10     11     12       13     14      15        16   17  18
                                                        AADD(m_recebe,{'CH','AP',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' '})
                                                        mqtd_doc ++
                                                        mqtd_dias := mqtd_dias + (mvencimento - mdata_sis)
                                                ELSE
                                                        AADD(m_recebe,{'CH','AV',mn_banco,mn_cheque,mn_dup,mvencimento,'B',STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,magencia,mc_c,mcorrente,mcpfcnpj,' ',' '})
                                                ENDIF
                                        ELSEIF ! EMPTY(mn_dup)
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        AADD(m_alt,'DUPLICATA....: No.: '+m_parcela[i,1]+' Venc.: '+DTOC(m_parcela[i,2])+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                        IF m_parcela[i,2] > mdata_sis
                                                                AADD(m_recebe,{'DU','AP',SPACE(3),SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                                                mqtd_doc ++
                                                                mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                        ELSE
                                                                AADD(m_recebe,{'DU','AV',SPACE(3),SPACE(6),m_parcela[i,1],m_parcela[i,2],mt_pag,STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                                        ENDIF
                                                NEXT
                                        ELSEIF ! EMPTY(mn_cupom)
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        AADD(m_alt,'CARTAO.......: '+STRZERO(mcod_cart,3)+' Cupom No.: '+m_parcela[i,1]+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                        IF m_parcela[i,2] > mdata_sis

                                                                AADD(m_recebe,{'CT','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5]})
                                                                mqtd_doc ++
                                                                mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                        ELSE

                                                                AADD(m_recebe,{'CT','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),m_parcela[i,1],m_parcela[i,3],mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,mdesc_cart,m_parcela[i,4],m_parcela[i,5]})
                                                        ENDIF
                                                NEXT
                                        ELSEIF ! EMPTY(mn_fin)  // .OR. LEN(m_parcela) > 0
                                                i := 0
                                                FOR i = 1 TO LEN(m_parcela)
                                                        IF EMPTY(m_parcela[i,1])
                                                                LOOP
                                                        ENDIF
                                                        AADD(m_alt,'FINANCIAMENTO: '+m_parcela[i,1]+' Venc.: '+DTOC(m_parcela[i,2])+' Valor: '+TRANSFORM(m_parcela[i,3],'999,999.99'))
                                                        IF m_parcela[i,2] > mdata_sis
                                                                AADD(m_recebe,{'FI','AP',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                                                mqtd_doc ++
                                                                mqtd_dias := mqtd_dias + (m_parcela[i,2] - mdata_sis)
                                                        ELSE
                                                                AADD(m_recebe,{'FI','AV',SPACE(3),SPACE(6),mn_dup,m_parcela[i,2],'B',STRZERO(mcod_cart,3),mn_cupom,m_parcela[i,3],m_parcela[i,1],mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                                        ENDIF
                                                NEXT
                                        ELSEIF ! EMPTY(mn_trans)
                                                AADD(m_alt,'TRANSFERENCIA: '+mn_trans+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                                AADD(m_recebe,{'TR','AP',SPACE(3),SPACE(6),mn_trans,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                        ELSEIF ! EMPTY(mn_cred)
                                                AADD(m_alt,'CREDITO......: '+mn_cred+' Venc.: '+DTOC(mvencimento)+' Valor: '+TRANSFORM(mvalor,'999,999.99'))
                                                AADD(m_recebe,{'CR','AP',SPACE(3),SPACE(6),mn_cred,mvencimento,mt_pag,STRZERO(mcod_cart,3),mn_cupom,mvalor,mn_fin,mcartao,SPACE(8),SPACE(13),mcorrente,' ',' ',' '})
                                        ENDIF
                                ENDIF
                        ENDIF
                        DEVPOS(11,cci+37);DEVOUT(TRANSFORM(mqtd_dias/mqtd_doc,'9999')+' ')
                        mtot_verif = mtot_verif + mvalor
                        mdiferenca := aredonda(ROUND(mtot_nota - mtot_verif,2),2)
                        setcor(3)
                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                        limpa(li+15,ci+1,lb-1,cb-1)
                        f := 1
                        i := 0
                        FOR i = 1 TO LEN(m_alt)
                                DEVPOS(li+14+f,ci+1);DEVOUT(m_alt[i])
                                IF i > 4
                                        SCROLL(li+15,ci+1,lb-1,cb-1,1)
                                ELSE
                                        f++
                                ENDIF
                        NEXT
                        setcor(1)
                        IF mdiferenca <= 0       //.OR. mdiferenca <= mtot_ipi
                                WHILE mtot_verif <> ROUND(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                        atencao(TRANSFORM(mdiferenca,'9,999,999.999999'))
                                        mopcao := mensagem1('Total RECEBIDO: '+TRANSFORM(mtot_verif,'9,999,999.999999')+' e maior que A RECEBER: '+TRANSFORM(mtot_nota-mtot_ipi,'9,999,999.99999')+', Deseja tentar Alterar os Recebimentos: ','S','S,N')
                                        IF mopcao = 'S'
                                                alt_caixa()     // prgs SACROT1.PRG
                                                setcor(3)
                                                DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                                DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                                                limpa(li+15,ci+1,lb-1,cb-1)
                                                f := 1
                                                i := 0
                                                FOR i = 1 TO LEN(m_recebe)
                                                        DEVPOS(li+14+f,ci+1);DEVOUT(m_alt[i])
                                                        IF i > 4
                                                                SCROLL(li+15,ci+1,lb-1,cb-1,1)
                                                        ELSE
                                                                f++
                                                        ENDIF
                                                NEXT
                                                setcor(1)
                                                LOOP
                                        ELSE
                                                EXIT
                                        ENDIF
                                ENDDO
                                IF mtot_verif <> ROUND(mtot_nota,2) .AND. ! EMPTY(mdiferenca)
                                        ASIZE(m_alt,0)
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        mdiferenca := aredonda(ROUND(mtot_nota - mtot_verif,2),2)
                                        setcor(3)
                                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota - mtot_verif,'9,999,999.99')
                                        setcor(1)
                                        limpa(li+17,ci+1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                mensagem('Todas informacoes "OK", Confirma Dados Preenchido [S/n]:')
                                mopcao := 'S'
                                @ 23,COL()+1 GET mopcao PICT '@!' VALID mopcao $ 'S,N' WHEN cfg->autocaixa <> 'T'
                                READ
                                IF LASTKEY() = 27 .OR. mopcao = 'N'
                                        ASIZE(m_alt,0)
                                        ASIZE(m_recebe,0)
                                        mtot_verif := 0
                                        mdiferenca := aredonda(ROUND(mtot_nota - mtot_verif,2),2)
                                        setcor(3)
                                        DEVPOS(li+10,ci+25);DEVOUTPICT(mtot_verif,'9,999,999.99')
                                        DEVPOS(li+10,ci+54);DEVOUTPICT(mtot_nota,'9,999,999.99')
                                        setcor(1)
                                        limpa(li+15,ci+1,lb-1,cb-1)
                                        LOOP
                                ENDIF
                                IF mopcao = 'S'
                                        EXIT
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! EMPTY(mcod_cli)
                ****************
                SELE('cli');ORDSETFOCUS(1)
                GO TOP
                ****************
                SEEK STRZERO(mcod_cli,5)
                IF ! BLOQREG()
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ELSE
                        cli->ant_ped  := cli->num_ped
                        cli->dat_ant  := cli->ult_comp
                        cli->vlr_ant  := cli->vlr_comp
                        cli->num_ped  := STRZERO(mnum_ped,6)
                        cli->ult_comp := mdata_sis
                        cli->vlr_comp := mtot_nota
                        IF mtot_nota > cli->vlrcomp_m
                                cli->numped_m  := STRZERO(mnum_ped,6)
                                cli->ultcomp_m := mdata_sis
                                cli->vlrcomp_m := mtot_nota
                        ENDIF
                        cli->tot_comp := cli->tot_comp + mtot_nota
                        DBUNLOCKALL()
                ENDIF
*               DBCOMMITALL()
        ENDIF
        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
        **************
        SELE('dupr')
        **************
        c := 0
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1])
                        LOOP
                ENDIF
                IF ADIREG()
                        dupr-> empresa := mcod_emp
                        dupr-> emissao := mdata_sis
                        dupr-> tipo := m_recebe[i,1]
                        dupr-> tip_cli := cli->tipo
                        dupr-> fornec := STRZERO(mcod_cli,5)
                        dupr-> cliente := mcliente
                        dupr-> venc := m_recebe[i,6]
                        dupr-> venc1:= m_recebe[i,6]
                        dupr-> comissao := mperc_comissao
                        dupr-> operador := cod_operado
                        dupr-> vendedor := STRZERO(mcod_vend,3)
                        dupr-> num_ped := STRZERO(mnum_ped,6)
                        dupr-> banco := m_recebe[i,7]
                        IF m_recebe[i,1] = 'DN'
                                dupr-> c_cpfcnpj := IF(! EMPTY(cli->cgc),cli->cgc,cli->cpf)
                                dupr-> numero := m_recebe[i,3]
                                dupr-> duplicata := STRZERO(mnum_ped,6)  //m_recebe[i,4]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10]
                                dupr-> agencia := m_recebe[i,13]
                                dupr-> c_c := m_recebe[i,14]
                                dupr->datpag := m_recebe[i,6]
                                dupr->vlpago := m_recebe[i,10]
                                dupr->pago := "B"
                                dupr->banco := 'C'
                                dupr->mov_cx := 'C'
                        ELSEIF m_recebe[i,1] = 'CH'
                                dupr-> numero := m_recebe[i,3]
                                dupr-> duplicata := m_recebe[i,4]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10]
                                dupr-> agencia := m_recebe[i,13]
                                dupr-> c_c := m_recebe[i,14]
                                dupr-> corrente := m_recebe[i,15]
                                dupr-> cpfcnpj  := m_recebe[i,16]
                                dupr->banco := 'C'
                                IF m_recebe[i,6] <= mdata_sis
                                        dupr->datpag := m_recebe[i,6]
                                        dupr->vlpago := m_recebe[i,10]
                                        dupr->pago := "B"
                                        dupr->banco := 'C'
                                        dupr->mov_cx := 'C'
                                ENDIF
                        ELSEIF m_recebe[i,1] = 'DU'
                                dupr-> numero := m_recebe[i,3]
                                dupr-> duplicata := m_recebe[i,5]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10]
                                IF set->dup_imp = 'C'
                                        opcao := op_simnao('S','Deseja imprimir a DUPLICATA de No. '+m_recebe[i,5]+' [s/N]:')
                                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                                LOOP
                                        ENDIF
                                        SET DEVICE TO PRINT
                                        SET PRINT TO (cfg->prt_dup)
                                        IF cfg->tipfrmped = 'F'
                                                imprt(cfg->imp_dup,'N')
                                                IF set->cabecalho = 'S'
                                                        DEVPOS(PROW(),00);DEVOUT(m_set[1,23])
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mend_firm)+' - '+RTRIM(mcid_firm)+' - Fone: '+mfone_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                                                        @ PROW()+1,00 SAY mtraco
                                                        @ PROW()+1,00 SAY ' '
                                                ENDIF
                                                IF mcod_cli > 0
                                                        @ PROW(),00 SAY 'Cliente:'
                                                        @ PROW(),PCOL()+1 SAY cli->cod_cli
                                                        @ PROW(),PCOL()+1 SAY cli->razao
                                                        IF mcgc <> SPACE(14)
                                                                @ PROW(),PCOL()+2 SAY 'CGC:'
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cli->insc)
                                                        ELSEIF mcpf <> SPACE(11)
                                                                @ PROW(),PCOL()+2 SAY 'CPF:'
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                                                        ENDIF
                                                        @ PROW()+1,00 SAY 'End.: '+cli->endereco
                                                        @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cli->bairro)+' - Cidade: '+RTRIM(cli->cidade)+' - '+cli->uf+' - CEP.:'+cli->cep
                                                        @ PROW()+1,00 SAY mtraco
                                                ELSEIF mnome <> SPACE(30)
                                                        @ PROW(),00 SAY 'Cliente:'
                                                        @ PROW(),PCOL()+1 SAY mnome
                                                        @ PROW()+1,00 SAY mtraco
                                                ENDIF
                                                imprt(cfg->imp_dup,'E',1)
                                                @ PROW(),00 SAY 'DUPLICATA No.: '+m_recebe[i,1]+m_recebe[i,5]
                                                imprt(cfg->imp_dup,'N',1)
                                                @ PROW(),00 SAY 'Emissao:'
                                                @ PROW(),10 SAY mdata_sis
                                                @ PROW(),PCOL()+2 SAY 'Vencimento: '+DTOC(m_recebe[i,6])
                                                @ PROW(),PCOL()+2 SAY 'Cod.: '+STRZERO(mcod_vend,3)
                                                @ PROW(),PCOL()+2 SAY 'Fatura No.:_______________'
                                                @ PROW()+1,00 SAY mtraco
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(ROUND(m_recebe[i,10],2),'99,999,999.99'))+')',80))
                                                mextenso:= '('+RTRIM(EXT(ROUND(m_recebe[i,10],2)))+')'
                                                mlinha := MLCOUNT(mextenso,80)
                                                FOR lin = 1 TO mlinha
                                                        mlin := MEMOLINE(mextenso,80,lin,,10)
                                                        DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),80))
                                                NEXT
                                                @ PROW()+1,00 SAY mtraco
                                                mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,23]+', ou a sua ordem na praca e vencimento indicados.'
                                                mlinha := 0
                                                mlinha := MLCOUNT(mextenso,80)
                                                lin := 0
                                                FOR lin = 1 TO mlinha
                                                        mlin := MEMOLINE(mextenso,80,lin,,10)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                                                NEXT
                                                @ PROW()+1,00 SAY mtraco
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('Data do Aceite em ________/________/________',80))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('________________________________________     ________________________________________',80))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('        Assinatura do Emitente                       Assinatura do Sacado            ',80))
                                                @ PROW()+1,00 SAY mtraco
                                                @ PROW()+2,00 SAY '-------------------------------- Corte aqui --------------------------'
                                                @ PROW()+2,00 SAY ' '
                                                c ++
                                                IF c = 2
                                                        EJECT
                                                        c:= 0
                                                ENDIF
                                        ELSEIF cfg->tipfrmped = 'B'
                                                IF set->cabecalho = 'S'
                                                        DEVPOS(PROW(),00);DEVOUT(CHR(18))
                                                        DEVPOS(PROW(),00);DEVOUT(m_set[1,23])
                                                        DEVPOS(PROW()+1,00);DEVOUT(CHR(15))
                                                        DEVPOS(PROW(),00);DEVOUT(mend_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                                                        DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                                                        @ PROW()+1,00 SAY mtraco
                                                        @ PROW()+1,00 SAY ' '
                                                ENDIF
                                                IF mcod_cli > 0
                                                        @ PROW(),00 SAY 'Cliente:'
                                                        @ PROW(),09 SAY cli->cod_cli
                                                        @ PROW(),15 SAY cli->razao
                                                        @ PROW()+1,00 SAY 'End.: '+cli->endereco
                                                        @ PROW()+1,00 SAY 'Bairro: '+RTRIM(cli->bairro)+'-Cidade: '+RTRIM(cli->cidade)+'-'+cli->uf+'- CEP:'+cli->cep
                                                        @ PROW()+1,00 SAY 'Fone: '+cli->tel1
                                                        IF mcgc <> SPACE(14)
                                                                @ PROW()+1,00 SAY 'CGC:'
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Insc.: '+cli->insc)
                                                        ELSEIF mcpf <> SPACE(11)
                                                                @ PROW()+1,00 SAY 'CPF:'
                                                                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                                                        ENDIF
                                                        @ PROW()+1,00 SAY mtraco
                                                ELSEIF mnome <> SPACE(30)
                                                        @ PROW(),00 SAY 'Cliente:'
                                                        @ PROW(),PCOL()+1 SAY mnome
                                                        @ PROW()+1,00 SAY mtraco
                                                ENDIF
                                                @ PROW()+1,00 SAY CHR(18)
                                                @ PROW(),00 SAY 'DUPLICATA No.:'
                                                @ PROW(),15 SAY m_recebe[i,5]
                                                @ PROW()+1,00 SAY CHR(15)
                                                @ PROW(),00 SAY 'Emissao:'
                                                @ PROW(),10 SAY mdata_sis
                                                @ PROW(),25 SAY 'Vencimento: '+DTOC(m_recebe[i,6])
                                                @ PROW(),49 SAY 'Cod.: '+STRZERO(mcod_vend,3)
                                                @ PROW()+1,00 SAY mtraco
                                                @ PROW()+1,00 SAY 'Fatura No.:               '
                                                @ PROW(),30 SAY 'No.Duplicata:'
                                                @ PROW()+1,00 SAY mtraco
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(ROUND(m_recebe[i,10],2),'99,999,999.99'))+')',60))
                                                mextenso:= '('+RTRIM(EXT(ROUND(m_recebe[i,10],2),10))+')'
                                                mlinha := MLCOUNT(mextenso,60)
                                                FOR lin = 1 TO mlinha
                                                        mlin := MEMOLINE(mextenso,60,lin,,10)
                                                        DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),60))
                                                NEXT
                                                @ PROW()+1,00 SAY mtraco
                                                mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,23]+', ou a sua ordem na praca e vencimento indicados.'
                                                mlinha := 0
                                                mlinha := MLCOUNT(mextenso,60)
                                                lin := 0
                                                FOR lin = 1 TO mlinha
                                                        mlin := MEMOLINE(mextenso,60,lin,,10)
                                                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                                                NEXT
                                                @ PROW()+1,00 SAY mtraco
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Emitente',60))
                                                DEVPOS(PROW()+2,00);DEVOUT(PADC('Em         /        /        ',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',60))
                                                DEVPOS(PROW()+3,00);DEVOUT(PADC('---------------------------------------------',60))
                                                DEVPOS(PROW()+1,00);DEVOUT(PADC('Assinatura do Sacado',60))
                                                @ PROW()+1,00 SAY mtraco
                                                IF ! EMPTY(set->roda_dup1)
                                                        @ PROW()+1,00 SAY PADC(RTRIM(set->roda_dup1),80)
                                                        @ PROW()+1,00 SAY PADC(RTRIM(set->roda_dup2),80)
                                                        @ PROW()+1,00 SAY mtraco
                                                ENDIF
                                                DEVPOS(PROW()+cfg->qtdlinped,00);DEVOUT(CHR(18))
                                        ENDIF
                                        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
                                ENDIF
                        ELSEIF m_recebe[i,1] = 'FI'
                                dupr-> numero := m_recebe[i,8]
                                dupr-> duplicata := m_recebe[i,11]
                                dupr-> valor := m_recebe[i,10]
                        ELSEIF m_recebe[i,1] = 'CT'
                                dupr-> numero := m_recebe[i,8]
                                dupr-> duplicata := m_recebe[i,9]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10] - (m_recebe[i,10] * (m_recebe[i,16] / 100))
                        ELSEIF m_recebe[i,1] = 'TR'
                                dupr-> numero := m_recebe[i,3]
                                dupr-> duplicata := m_recebe[i,5]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10]
                        ELSEIF m_recebe[i,1] = 'CR'
                                dupr-> numero := m_recebe[i,3]
                                dupr-> duplicata := m_recebe[i,5]
                                dupr-> valor_dup := m_recebe[i,10]
                                dupr-> valor := m_recebe[i,10]
                        ENDIF
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        NEXT
*       DBCOMMITALL()
        DBUNLOCKALL()
        mdocumento = 'PD'+STRZERO(mnum_ped,6)
        i = 0
        IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
        *************
        SELE('caix')
        *************
        i = 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1])
                        LOOP
                ENDIF
                IF ADIREG()
                        caix-> empresa := mcod_emp
                        caix-> data := mdata_sis
                        caix-> tipo := m_recebe[i,1]
                        caix-> tipo_comp := m_recebe[i,2]
                        caix-> nota := 'PD'+STRZERO(mnum_ped,6)
                        caix-> cod_cli := STRZERO(mcod_cli,5)
                        caix-> cod_vend := STRZERO(mcod_vend,3)
                        caix-> cod_opera := cod_operado
                        caix-> hora := TIME()
                        caix-> valor_com := m_recebe[i,10]
                        caix-> comissao := mperc_comissao
                        caix-> venci := m_recebe[i,6]
                        caix-> valor := m_recebe[i,10]
                        caix-> num_ban := m_recebe[i,3]
                        caix-> cod_ct := m_recebe[i,8]
                        IF m_recebe[i,1] = 'DN'
                                caix-> num_dup := STRZERO(mnum_ped,6)   //m_recebe[i,5]
                                caix-> documento := '99999999'
                        ELSEIF m_recebe[i,1] = 'CH'
                                caix-> num_dup := m_recebe[i,5]
                                caix-> documento := m_recebe[i,4]
                        ELSEIF m_recebe[i,1] = 'DU'
                                caix-> num_dup := m_recebe[i,5]
                                caix-> documento := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'FI'
                                caix-> num_dup := m_recebe[i,11]
                                caix-> documento := m_recebe[i,11]
                        ELSEIF m_recebe[i,1] = 'CT'
                                caix-> num_dup := m_recebe[i,5]
                                caix-> documento := m_recebe[i,9]
                                caix-> descri2 := m_recebe[i,12]
                        ELSEIF m_recebe[i,1] = 'TR'
                                caix-> num_dup := m_recebe[i,5]
                                caix-> documento := m_recebe[i,5]
                        ELSEIF m_recebe[i,1] = 'CR'
                                caix-> num_dup := m_recebe[i,5]
                                caix-> documento := m_recebe[i,5]
                        ENDIF
                ENDIF
        NEXT
        DBUNLOCKALL()
        IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
        i := 0
        FOR i = 1 TO LEN(m_codigo)
                *************
                SELE('mov')
                *************
                IF ADIREG()
                        mov-> empresa := mcod_emp
                        mov-> num_ped := STRZERO(mnum_ped,6)
                        mov-> documento := mdocumento
                        mov-> codigo := STRZERO(m_codigo[i],5)
                        mov-> gru_sub := m_desc[i,1]
                        mov-> produto := m_desc[i,2]
                        mov-> especie := m_desc[i,19]
                        mov-> cod_fab := m_desc[i,3]
                        mov-> fabrica := m_desc[i,4]
                        mov-> data_s_e := mdata_sis
                        mov-> ent_sai := 'S'
                        mov-> quantd := m_desc[i,5]
                        mov-> pr_venda1:= m_desc[i,23]
                        mov-> pr_venda := m_desc[i,6]
                        mov-> vl_vend := m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0)
                        mov-> vl_fatura := m_desc[i,7] - IF(! EMPTY(mdesc_cx),m_desc[i,7]*mdesc_perc,0)
                        mov-> cod_vend := STRZERO(mcod_vend,3)
                        mov-> cod_oper := STRZERO(mcod_oper,3)
                        mov-> cod_cli := STRZERO(mcod_cli,5)
                        mov-> cliente := mcliente
                        mov-> tipo := '02'
                        mov-> pr_unit := m_desc[i,12]
                        mov-> cust_mer := m_desc[i,17]
                        mov-> isento := m_desc[i,14]
                        IF mtipo_comp = 'AV'
                                ven(mcod_vend,,,'*')
                                mov-> comissao := m_desc[i,16] + sen->scomissao - IF(! EMPTY(set->d_comtele) .AND. STRZERO(mcod_oper,3) <> STRZERO(mcod_vend,3) .AND. m_desc[i,16] + sen->scomissao > 0,set->d_comtele,0)
                                IF ! EMPTY(VAL(m_desc[i,21]))
                                        mov-> montador := m_desc[i,20]
                                        mov-> montador1:= m_desc[i,21]
                                        ven(VAL(m_desc[i,20]),,,'*')
                                        mov->com_monta := (sen->scomissao+m_desc[i,22]) /2
                                        ven(VAL(m_desc[i,21]),,,'*')
                                        mov->com_monta1:= (sen->scomissao+m_desc[i,22]) /2
                                ELSE
                                        mov-> montador := m_desc[i,20]
                                        ven(VAL(m_desc[i,20]),,,'*')
                                        mov->com_monta := sen->scomissao+m_desc[i,22]
                                ENDIF
                        ELSE
                                ven(mcod_vend,,,'*')
                                mov-> comissao := m_desc[i,16] + sen->scom_praz - IF(! EMPTY(set->d_comtele) .AND. STRZERO(mcod_oper,3) <> STRZERO(mcod_vend,3) .AND. m_desc[i,16] + sen->scom_praz > 0,set->d_comtele,0)
                                IF ! EMPTY(VAL(m_desc[i,21]))
                                        mov-> montador := m_desc[i,20]
                                        mov-> montador1:= m_desc[i,21]
                                        ven(VAL(m_desc[i,20]),,,'*')
                                        mov->com_monta := (sen->scom_praz+m_desc[i,22]) /2
                                        ven(VAL(m_desc[i,21]),,,'*')
                                        mov->com_monta1:= (sen->scom_praz+m_desc[i,22]) /2
                                ELSE
                                        mov-> montador := m_desc[i,20]
                                        ven(VAL(m_desc[i,20]),,,'*')
                                        mov->com_monta := sen->scom_praz+m_desc[i,22]
                                ENDIF
                        ENDIF
                        mov-> com_oper := IF(STRZERO(mcod_oper,3) <> STRZERO(mcod_vend,3),mcom_oper,0)
                        mov-> tp_venda := mtipo_comp
                        mov-> cond_vezes := mcond_vezes
                        mov-> cond_intev := mcond_intev
                        mov-> producao   := mproducao
                        DBUNLOCKALL()
                ENDIF
        NEXT
        IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
        **************
        SELE('dupp')
        **************
        c := 0
        i := 0
        FOR i = 1 TO LEN(m_recebe)
                IF EMPTY(m_recebe[i,1]) .OR. EMPTY(m_recebe[i,17])
                        LOOP
                ENDIF
                IF ADIREG()
                        IF v_fornece(VAL(m_recebe[i,17]))
                                mcliente := forn->razao
                        ELSE
                                mcliente := 'DESCONTO DO CARTAO DE CREDITO'
                        ENDIF
                        dupp-> empresa := mcod_emp
                        dupp-> tipo      := 'PA'
                        dupp-> numero    := m_recebe[i,8]
                        dupp-> duplicata := m_recebe[i,9]
                        dupp-> valor_dup := (m_recebe[i,10] * (m_recebe[i,16] / 100))
                        dupp-> tip_for   := m_recebe[i,18]
                        dupp-> fornec    := m_recebe[i,17]
                        dupp-> cliente   := mcliente
                        dupp-> emissao   := mdata_sis
                        dupp-> venc      := mdata_sis
                        dupp-> datpag    := mdata_sis
                        dupp-> valor     := (m_recebe[i,10] * (m_recebe[i,16] / 100))
                        dupp-> vlpago    := (m_recebe[i,10] * (m_recebe[i,16] / 100))
                        dupp-> banco     := 'C'
                        dupp-> pago      := 'B'
                        dupp-> operador  := cod_operado
                        dupp-> num_ped   := STRZERO(mnum_ped,6)
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        NEXT
        DBCOMMITALL()
        DBUNLOCKALL()
        ASIZE(m_recebe,0)
        ASIZE(m_desc,0)
        CLEAR GETS
        RESTSCREEN(01,00,24,79,mbox)
        RESTSCREEN(01,00,24,79,mtela)
        RELEASE mlin,mcartao,mprazo_cart,mdesc_cart
        IF mnum <> NIL
                RESTSCREEN(00,00,24,79,tela)
                RELEASE m_codigo:={},m_desc:={},mtot_nota,mdesconto,;
                        tela,mreceb,mcom_ven,mbanco,mcod_cli,mcliente,;
                        mnome_vend,mperc,mcgc,mcpf,mcod_vend,mdocumento,;
                        mnum_ped,minsc,mcond_vezes,;
                        mcond_intev,mtp_vend,mtot_desc
                RETURN .T.
        ENDIF
        limpa(19,20,22,46)
ENDDO
RETURN NIL

