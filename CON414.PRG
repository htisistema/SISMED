MEMVAR getlist,nivel_acess,mdata_sis
*********************************************************
**** CON414.PRG: Relatorio -> Duplicatas PAGAS
***  CONTAS A PAGAR
*********************************************************

FUNCTION con414
***************
LOCAL MPRG:='CON414',;
      tela,t_ini,t_fim,tp_mes,td_mes,u_dat,pag,vencer,;
      vencidas,t_vencer,t_vencidas,l_mes,tot,tot_g,tot_din,tot_gin,mquantd,;
      mtit,mtipo,opcao,mtipo_doc,mt_dia,mdia,mtipo_rel,mt_pago:=0,mobs_doc:= ' ',;
      mtipo_con,mcliente,mtip_for,mcod_aux,mbanco:=SPACE(3),mbanco_pg:='   ',;
      mtp_pg:=' ',mmov_cx,mtot_juros:=0,mtip_data:='P'

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        bank,mcod_for,mtipo_conta

IF ! ver_nivel(mprg,'CONTA APAGAR (RELATORIO DOCUMENTO PAGOS)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------------
******************
SELE('forn');ORDSETFOCUS(1)
******************
op_tela(10,10,22,90," Documentos Pagos (CONTAS A PAGAR)")

WHILE .T.
        DEVPOS(00,00);DEVOUT("Cod.Empresa.......:")
        DEVPOS(01,00);DEVOUT("Fornecedor........:")
        DEVPOS(02,00);DEVOUT("Data Inicial......:")
        DEVPOS(03,00);DEVOUT("Data Final........:")
        DEVPOS(04,00);DEVOUT("Tipo Documento....:")
        DEVPOS(05,00);DEVOUT('Tipo Conta........:')
        DEVPOS(06,00);DEVOUT("Resumo/Geral......:")
        DEVPOS(07,00);DEVOUT("Imprimir OBS[S/N].:")
        DEVPOS(08,00);DEVOUT("No.do Banco.......:")
        DEVPOS(09,00);DEVOUT("Banco do Pagamento:")
        DEVPOS(10,00);DEVOUT("Tipo de Pagamento.:")
        DEVPOS(11,00);DEVOUT("Local de Pagamento:")
        DEVPOS(12,00);DEVOUT("Tipo de Pesquisa Data [P]agamento ou [O]peracao:")
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'J'
****************************************************
        mtip_data := 'P'
        mbanco := SPACE(3)
        mtipo_conta := SPACE(4)
        mtipo_rel := 'G'
        mtipo_doc := SPACE(2)
        bank="   "
        mcod_for=0
        t_ini := t_fim := CTOD("  /  /  ")
        mobs_doc := 'S'
        mtit := "DOCUMENTOS PAGOS (Contas a Pagar)"
        @ 01,20 GET mcod_for PICT '9999' VALID v_fornece(mcod_for,01,25)
        @ 02,20 GET t_ini
        @ 03,20 GET t_fim
        @ 04,20 GET mtipo_doc PICT '@!'
        @ 05,20 GET mtipo_conta PICT '@! X.XX' VALID verdesp(mtipo_conta,05,25,1)
        @ 06,20 GET mtipo_rel PICT '@!' VALID  mtipo_rel $ 'R,G'
        @ 07,20 GET mobs_doc PICT '@!' VALID mobs_doc $ 'S,N'
        @ 08,20 GET mbanco PICT '@!'
        @ 09,20 GET mbanco_pg PICT '@!'
        @ 10,20 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
        @ 11,20 GET mmov_cx PICT '@!' WHEN men_get(2,38,'Local de Pagamento [C]caixa e [M]ovimento')
        @ 12,48 GET mtip_data PICT '@!' VALID mtip_data $ 'P,O'         //WHEN men_get(2,38,'Local de Pagamento [C]caixa e [M]ovimento')
        READ
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_for) .AND. mtipo_rel = 'G'
                mtipo_con := mensagem1('Escolha o tipo de consulta [A]NALITICO [S]INTETICO:','A','A,S')
        ELSE
                mtipo_con := 'A'
        ENDIF
        IF t_ini=CTOD("  /  /  ")
                t_ini=CTOD("01/01/90")
        ENDIF
        IF t_fim=CTOD("  /  /  ")
                t_fim=CTOD("31/12/09")
        ENDIF
        td_mes:=tp_mes:=0
        IF mtipo_con = 'A'
                mtit := mtit+' ANALITICO'
                mensagem('Aguarde coletando informacao para o Relatorio....')
                IF mtip_data = 'P'
                        mtipo := 'Data de Pagamento: '+DTOC(t_ini)+' a '+DTOC(t_fim)
                        cComm  := "SELECT * FROM sacdupp WHERE datpag >= "+sr_cdbvalue(t_ini)+" AND datpag <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"
                ELSE
                        mtipo := 'Data de Operacao: '+DTOC(t_ini)+' a '+DTOC(t_fim)
                        cComm  := "SELECT * FROM sacdupp WHERE data_so >= "+sr_cdbvalue(t_ini)+" AND data_so <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"
                ENDIF
                IF ! EMPTY(mbanco_pg)
                        ccomm := ccomm + " AND nbanco = "+sr_cdbvalue(mbanco_pg)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_for,4))
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                ccomm := ccomm + " ORDER BY datpag,tipo,duplicata,fornec"

                dbUseArea( .F.,"SQLRDD",cComm,"q_dupp")
                malias := 'q_dupp'
                SELE('q_dupp')
                DBGOTOP()
                IF EOF()
                        atencao('Nao existe documento neste Periodo...')
                        (malias)->(DBCLOSEAREA())
                        LOOP
                ENDIF
/*
                *****************
                SELE('dupp');ORDSETFOCUS(3)
                GO TOP
                *****************
                q_dupp->(DBSEEK(DTOS(t_ini),.T.))
                IF EOF()
                        atencao('Nao existe movimento neste periodo !!!')
                        LOOP
                ENDIF
*/
                IF ! imp_arq('DOC_PAGO.REL','R')
                        (malias)->(DBCLOSEAREA())
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas := ;
                tot := tot_g := tot_din := tot_gin := mt_dia := mt_pago := ;
                mtot_juros := 0
                l_mes=SUBSTR(DTOC(q_dupp->datpag),4,5)
                mdia := q_dupp->datpag
                //WHILE q_dupp->datpag <= t_fim .AND. ! EOF()
                WHILE ! EOF()
                        prog_imp(RECNO(),DTOC(q_dupp->datpag))
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo  Duplicata      Vencim.   D.Pagam   Valor Dup.   Valor Pago Vlr.Juros Dias  Bco  Cheque ST")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                        ENDIF
                        IF mdia <> q_dupp->datpag
                                IF mt_dia > 0
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+1,89);DEVOUT('              --------------')
                                                DEVPOS(PROW()+1,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        ENDIF
                                        mt_dia := mt_pago := 0
                                ENDIF
                                mdia := q_dupp->datpag
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(q_dupp->datpag),4,5) .AND. ! EOF()
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                                        tot_din=0
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                                l_mes=SUBSTR(DTOC(q_dupp->datpag),4,5)
                                tot=0
                        ENDIF
/*
                        IF (q_dupp->pago <> 'B');
                           .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> q_dupp->tipo);
                           .OR. (! EMPTY(mcod_for) .AND. q_dupp->fornec<>STRZERO(mcod_for,4));
                           .OR. (! EMPTY(mbanco) .AND. mbanco <> q_dupp->numero);
                           .OR. (! EMPTY(mbanco_pg) .AND. mbanco_pg <> q_dupp->nbanco);
                           .OR. (! EMPTY(mtp_pg) .AND. mtp_pg <> q_dupp->tp_pg);
                           .OR. (! EMPTY(mcodemp) .AND. mcodemp <> q_dupp->empresa)
                                SKIP
                                LOOP
                        ENDIF
*/
                        IF ! EMPTY(SUBSTR(mtipo_conta,1,1))
                                IF (SUBSTR(mtipo_conta,1,1) <> SUBSTR(q_dupp->tip_for,1,1));
                                   .OR. (! EMPTY(SUBSTR(mtipo_conta,3)) .AND. SUBSTR(mtipo_conta,3) <> SUBSTR(q_dupp->tip_for,3))
                                        SKIP
                                        LOOP
                                ENDIF
                        ENDIF
                        *&*
                        IF mdia <> q_dupp->datpag
                                IF mt_dia > 0
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+1,89);DEVOUT('              --------------')
                                                DEVPOS(PROW()+1,74);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        ENDIF
                                        mt_dia := mt_pago := 0
                                ENDIF
                                mdia := q_dupp->datpag
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(q_dupp->datpag),4,5) .AND. ! EOF()
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                                        tot_din=0
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        LOOP
                                ENDIF
                                l_mes=SUBSTR(DTOC(q_dupp->datpag),4,5)
                                tot=0
                        ENDIF
                        IF mtipo_rel = 'G'
                                DEVPOS(PROW()+1,00);DEVOUT(q_dupp->fornec)
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(q_dupp->cliente,1,35)+"  "+q_dupp->tip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->tipo+q_dupp->duplicata)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->venc))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->datpag))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->valor,"@E 9,999,999.99"))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->vlpago,"@E 9,999,999.99"))
                                IF q_dupp->vlpago > q_dupp->valor
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->vlpago - q_dupp->valor,"@E 99,999.99"))
                                        mtot_juros := mtot_juros + (q_dupp->vlpago - q_dupp->valor)
                                ELSE
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,"@E 99,999.99"))
                                ENDIF
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->datpag - q_dupp->venc,"9999"))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->nbanco)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->cheque)
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(dupp->tp_pg)
                                IF mobs_doc = 'S'
                                        IF ! EMPTY(q_dupp->obs)
                                                DEVPOS(PROW()+1,00);DEVOUT('OBS. INCLUSAO: '+q_dupp->obs)
                                        ENDIF
                                        IF ! EMPTY(q_dupp->obs_b)
                                                DEVPOS(PROW()+1,00);DEVOUT('OBS. BAIXA...: '+q_dupp->obs_b)
                                        ENDIF
                                ENDIF
                        ENDIF
                        tot ++
                        tot_g ++
                        tot_din=tot_din+q_dupp->vlpago
                        tot_gin=tot_gin+q_dupp->vlpago
                        mt_dia := mt_dia + q_dupp->valor
                        mt_pago := mt_pago + q_dupp->vlpago
                        SKIP
                ENDDO
                ? "Total de Documentos: "+TRANSFORM(tot,"9999")+" - "+ltrim(TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                IF mdia <> q_dupp->datpag .AND. ! EOF()
                        IF mt_dia > 0
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,89);DEVOUT('              --------------')
                                        DEVPOS(PROW()+1,74);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT('Total Data Pagamento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT('Valor Pago:')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_pago,'99,999,999.99'))
                                ENDIF
                                mt_dia := mt_pago := 0
                        ENDIF
                        mdia := q_dupp->datpag
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("***************** R E S U M O   F I N A L  ******************")
                DEVPOS(PROW()+1,00);DEVOUT("Quantidade de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999"))
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo.....: "+TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT("Total Juros Pagos no Periodo.............: "+TRANSFORM(mtot_juros,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ELSEIF mtipo_con = 'S'  //SINTETICO
                mtit := mtit+' SINTETICO'
                mensagem('Aguarde coletando informacao para o Relatorio....')
                cComm  := "SELECT * FROM sacdupp WHERE datpag >= "+sr_cdbvalue(t_ini)+" AND datpag <= "+sr_cdbvalue(t_fim)+" AND pago = 'B'"
                IF ! EMPTY(mbanco_pg)
                        ccomm := ccomm + " AND nbanco = "+sr_cdbvalue(mbanco_pg)
                ENDIF
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_for,4))
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                ccomm := ccomm + " ORDER BY fornec,pago,venc,duplicata"

                dbUseArea( .F.,"SQLRDD",cComm,"q_dupp")
                malias := 'q_dupp'
                SELE('q_dupp')
                DBGOTOP()
                IF EOF()
                        atencao('Nao existe documento neste Periodo...')
                        (malias)->(DBCLOSEAREA())
                        LOOP
                ENDIF
/*
                *****************
                SELE('dupp');ORDSETFOCUS(9)
                GO TOP
                *****************
*/
                IF ! imp_arq('DOC_PAGO.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas := ;
                tot := tot_g := tot_din := tot_gin := mt_dia := mt_pago := ;
                mtot_juros := 0
                l_mes=SUBSTR(DTOC(q_dupp->datpag),4,5)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
                mdia := q_dupp->datpag
                WHILE ! EOF()
                        prog_imp(RECNO(),DTOC(q_dupp->datpag))
                        mcod_aux := q_dupp->fornec
                        mcliente := q_dupp->cliente
                        mtip_for := q_dupp->tip_for
                        WHILE mcod_aux = q_dupp->fornec .AND. ! EOF()
                                prog_imp(RECNO(),DTOC(q_dupp->datpag))
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo,mprg)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                          Tipo  Duplicata      Vencim.   D.Pagam   Valor Dup.   Valor Pago Vlr.Juros Dias  Bco  Cheque ST")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                ENDIF
/*
                                IF (q_dupp->datpag > t_fim .OR. q_dupp->datpag < t_ini);
                                   .OR. (q_dupp->pago <> 'B');
                                   .OR. (! EMPTY(mtipo_doc) .AND. mtipo_doc <> q_dupp->tipo);
                                   .OR. (! EMPTY(mcod_for) .AND. q_dupp->fornec<>STRZERO(mcod_for,4));
                                   .OR. (! EMPTY(mbanco) .AND. mbanco <> q_dupp->numero);
                                   .OR. (! EMPTY(mbanco_pg) .AND. mbanco_pg <> q_dupp->nbanco);
                                   .OR. (! EMPTY(mtp_pg) .AND. mtp_pg <> q_dupp->tp_pg);
                                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> q_dupp->empresa)
                                        SKIP
                                        mdia := q_dupp->datpag
                                        LOOP
                                ENDIF
*/
                                *&*
                                IF ! EMPTY(SUBSTR(mtipo_conta,1,1))
                                        IF SUBSTR(mtipo_conta,1,1) <> SUBSTR(q_dupp->tip_for,1,1)
                                                SKIP
                                                LOOP
                                        ENDIF
                                        IF ! EMPTY(SUBSTR(mtipo_conta,3)) .AND. SUBSTR(mtipo_conta,3) <> SUBSTR(q_dupp->tip_for,3)
                                                SKIP
                                                LOOP
                                        ENDIF
                                ENDIF
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,00);DEVOUT(q_dupp->fornec)
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(SUBSTR(q_dupp->cliente,1,35)+"  "+q_dupp->tip_for)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->tipo+q_dupp->duplicata)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->venc))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->datpag))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->valor,"@E 9,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->vlpago,"@E 9,999,999.99"))
                                        IF q_dupp->vlpago > q_dupp->valor
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->vlpago - q_dupp->valor,"@E 999,999.99"))
                                                mtot_juros := mtot_juros + (q_dupp->vlpago - q_dupp->valor)
                                        ELSE
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(0,"@E 999,999.99"))
                                        ENDIF
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_dupp->datpag - q_dupp->venc,"9999"))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->nbanco)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->cheque)
                                        DEVPOS(PROW(),PCOL()+3);DEVOUT(dupp->tp_pg)
                                        IF mobs_doc = 'S'
                                                IF ! EMPTY(q_dupp->obs)
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. INCLUSAO: '+q_dupp->obs)
                                                ENDIF
                                                IF ! EMPTY(q_dupp->obs_b)
                                                        DEVPOS(PROW()+1,00);DEVOUT('OBS. BAIXA...: '+q_dupp->obs_b)
                                                ENDIF
                                        ENDIF
                                ENDIF
                                tot ++
                                tot_g ++
                                tot_din=tot_din+q_dupp->vlpago
                                tot_gin=tot_gin+q_dupp->vlpago
                                mt_dia := mt_dia + q_dupp->valor
                                mt_pago := mt_pago + q_dupp->vlpago
                                SKIP
                                IF EOF()
                                        EXIT
                                ENDIF
                        ENDDO
                        SETPOS(16,26);DISPOUT(q_dupp->fornec+'-'+q_dupp->cliente)
                        IF PROW() > 53
                                EJECT
                                pag=pag+1
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                               Tipo Duplicata     Emissao   Vencim            Valor  Dias ST")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                        ENDIF
                        IF mtipo_rel = 'G' .AND. ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                tot := tot_din := 0
                        ELSEIF ! EMPTY(tot)
                                DEVPOS(PROW()+1,00);DEVOUT(mcod_aux)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(mcliente+"  "+mtip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                tot := tot_din := 0
                        ENDIF
                ENDDO
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo,mprg)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("***************** R E S U M O   F I N A L  ******************")
                DEVPOS(PROW()+1,00);DEVOUT("Quantidade de Documentos Pagos no Periodo: "+TRANSFORM(tot_g,"9999"))
                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Pagos no Periodo.....: "+TRANSFORM(tot_gin,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+1,00);DEVOUT("Total Juros Pagos no Periodo.............: "+TRANSFORM(mtot_juros,"@E 999,999,999,999.99"))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        (malias)->(DBCLOSEAREA())
        conf_impressao('DOC_PAGO.REL')
        /*
        IF mimp_tipo = 2
                lertexto('DOC_PAGO.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

