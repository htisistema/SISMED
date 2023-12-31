MEMVAR getlist,nivel_acess,mdata_sis
**** CON413.PRG: Relatorio -> Duplicatas Vencer/Vencidas
***  CONTAS A PAGAR
*********************************************************
FUNCTION con413
***************
LOCAL MPRG:='CON413',;
      tela,t_ini,t_fim,tp_mes,td_mes,u_dat,pag,vencer,;
      vencidas,t_vencer,t_vencidas,l_mes,tot,tot_g,tot_din,tot_gin,mquantd,;
      mtit,mtipo,opcao,mtipo_doc,mt_dia,mdia,mtipo_rel,mod,;
      mtipo_con,mcliente,mtip_for,mtp_ct,mcod_aux,mnf,mbanco:=SPACE(3),mimp_tot:=' ',;
      mtp_pg := ' ',mord:='C'

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),;
        bank,mcod_forn,mtipo_conta

IF ! ver_nivel(mprg,'CONTA APAGAR (RELATORIO DOCUMENTOS VENCER/VENCIDAS)','15',nivel_acess,,'AMBIE')
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
op_tela(10,10,23,89," DOCUMENTOS APAGAR - Vencer/Vencidas ")
WHILE .T.
        limpa(00,00,30,80)
        DEVPOS(00,00);DEVOUT("Cod.Empresa:")
        DEVPOS(01,00);DEVOUT("Fornecedor.:")
        DEVPOS(02,00);DEVOUT("Inicio.....:")
        DEVPOS(03,00);DEVOUT("Final......:")
        DEVPOS(04,00);DEVOUT("Tipo Doc...:")
        DEVPOS(07,00);DEVOUT('Resumo/Geral:')
        DEVPOS(08,00);DEVOUT('So Doc.Ent..:')
        DEVPOS(09,00);DEVOUT('No.Banco....:')
        DEVPOS(10,00);DEVOUT('Tip.Pagam...:')
        DEVPOS(11,00);DEVOUT('Imprimir total p/ dia e Vencimento [S/n]:')
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'J'
****************************************************
        mtipo_conta := mtp_ct := SPACE(4)
        mtipo_con   := 'A'
        mtipo_rel := 'G'
        mtipo_doc := SPACE(2)
        bank := mbanco := SPACE(3)
        mcod_forn := mod := 0
        t_ini := t_fim := CTOD("  /  /  ")
        mnf := 'N'
        mtit := "DOCUMENTOS APAGAR (Contas a Pagar)"
        mimp_tot := 'S'
        mtp_pg := ' '
        @ 01,13 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,01,16)
        READ
        v_fornece(mcod_forn,01,14)
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        @ 02,13 GET t_ini 
        @ 03,13 GET t_fim 
        @ 04,13 GET mtipo_doc PICT '@!' 
        @ 07,13 GET mtipo_rel PICT '@!' VALID mtipo_rel $ 'R,G'
        @ 08,13 GET mnf PICT '@!' VALID mnf $ 'S,N'
        @ 09,13 GET mbanco PICT '@!'
        @ 10,13 GET mtp_pg PICT '@!' WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
        @ 11,42 GET mimp_tot PICT '@!' VALID mimp_tot $ 'S,N'
        READ
        IF LASTKEY()=27
                LOOP
        ENDIF
        IF EMPTY(mcod_forn) .AND. mtipo_rel = 'G'
                mtipo_con := mensagem1('Escolha o tipo de consulta [A]NALITICO [S]INTETICO:','A','A,S')
        ELSE
                mtipo_con := 'A'
        ENDIF
        IF t_ini=CTOD("  /  /  ")
                t_ini=CTOD("01/01/50")
        ENDIF
        IF t_fim=CTOD("  /  /  ")
                t_fim=CTOD("31/12/10")
        ENDIF
        td_mes := tp_mes := 0    && tot. pagar no mes
        IF mtipo_con = 'A'
                mord := mensagem1('Tipo de ordem para impressao [A]lfabetica  [C]odigo:','A','A,C',18)
                mtit := mtit+' ANALITICO'
                ************************************************************
                mensagem('Aguarde coletando informacao para o Relatorio....')
                cComm  := "SELECT * FROM sacdupp WHERE venc >= "+sr_cdbvalue(t_ini)+" AND venc <= "+sr_cdbvalue(t_fim)+" AND (pago IS NULL OR pago = '') AND datpag IS NULL"
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mtp_ct)
                        ccomm := ccomm + " AND NOT tip_for = "+sr_cdbvalue(mtp_ct)
                ENDIF
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF mnf = 'S'
                        ccomm := ccomm + " AND num_ped IS NOT NUL"
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                IF mord = 'A'
                        ccomm := ccomm + " ORDER BY venc,cliente"
                ELSE
                        ccomm := ccomm + " ORDER BY venc,fornec,banco,duplicata"
                ENDIF
                dbUseArea( .F.,"SQLRDD",cComm,"q_dupp")
                malias := 'q_dupp'
                SELE('q_dupp')
                DBGOTOP()
                IF EOF()
                        atencao('Nao existe documento neste Periodo...')
                        (malias)->(DBCLOSEAREA())
                        LOOP
                ENDIF
                IF ! imp_arq('DOC_APAG.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas :=;
                tot := tot_g := tot_din := tot_gin := mt_dia := 0
                l_mes=SUBSTR(DTOC(q_dupp->venc),4,5)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
                mdia := q_dupp->venc
                WHILE ! EOF()
                        IF pag=0 .OR. PROW()>=59
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        prog_imp(RECNO(),DTOC(q_dupp->venc))
                        IF mdia <> q_dupp->venc .AND. mimp_tot = 'S'
                                IF ! EMPTY(mt_dia)
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+1,77);DEVOUT('              --------------')
                                                DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                                IF pag=0 .OR. PROW()>=59
                                                        pag=pag+1
                                                        IF pag>1;EJECT;ENDIF
                                                        cabecalho(pag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        ENDIF
                                ENDIF
                                mt_dia := 0
                                mdia := q_dupp->venc
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(q_dupp->venc),4,5) .AND. ! EOF() .AND. ! EMPTY(tot_din) .AND. mimp_tot = 'S'
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999.99")))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        IF pag=0 .OR. PROW()>=59
                                                pag=pag+1
                                                IF pag>1;EJECT;ENDIF
                                                cabecalho(pag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        ENDIF
                                ENDIF
                                tot := tot_din := 0
                                l_mes=SUBSTR(DTOC(q_dupp->venc),4,5)
                        ENDIF
                        IF mdia <> q_dupp->venc .AND. mimp_tot = 'S'
                                IF ! EMPTY(mt_dia)
                                        IF mtipo_rel = 'G'
                                                DEVPOS(PROW()+1,77);DEVOUT('              --------------')
                                                DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                                IF pag=0 .OR. PROW()>=59
                                                        pag=pag+1
                                                        IF pag>1;EJECT;ENDIF
                                                        cabecalho(pag,mtit,mtipo)
                                                        imprt(mtipo_imp,'C')
                                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                ENDIF
                                        ELSE
                                                DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        ENDIF
                                ENDIF
                                mt_dia := 0
                                mdia := q_dupp->venc
                        ENDIF
                        IF l_mes<>SUBSTR(DTOC(q_dupp->venc),4,5) .AND. ! EOF() .AND. ! EMPTY(tot_din) .AND. mimp_tot = 'S'
                                IF tot_din > 0
                                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                                tot := tot_din := 0
                                l_mes=SUBSTR(DTOC(q_dupp->venc),4,5)
                                LOOP
                        ENDIF
                        IF mtipo_rel = 'G'
                                DEVPOS(PROW()+1,00);DEVOUT(q_dupp->fornec)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->cliente+"  "+q_dupp->tip_for)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->tipo+q_dupp->duplicata)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->numero)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->emissao))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->venc))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupp->valor,"@E 99,999,999.99"))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupp->venc-mdata_sis,"9999"))
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->banco)
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(q_dupp->tp_pg)
                                IF PROW()>=59
                                        pag=pag+1
                                        IF pag>1
                                                EJECT
                                        ENDIF
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                                IF ! EMPTY(q_dupp->obs)
                                        DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+q_dupp->obs)
                                ENDIF
                        ENDIF
                        tot ++
                        tot_g ++
                        tot_din=tot_din+q_dupp->valor
                        tot_gin=tot_gin+q_dupp->valor
                        mt_dia := mt_dia + q_dupp->valor
                        SKIP
                ENDDO
                IF ! EMPTY(mt_dia)
                        IF mtipo_rel = 'G'
                                DEVPOS(PROW()+1,77);DEVOUT('              --------------')
                                DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1;EJECT;ENDIF
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                        ENDIF
                ENDIF
                ? "Total de Documentos: "+TRANSFORM(tot,"9999")+" - "+ltrim(TRANSFORM(tot_din,"@E 999,999,999,999.99"))
                IF mdia <> q_dupp->venc .AND. ! EOF() .AND. mimp_tot = 'S'
                        IF ! EMPTY(mt_dia)
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,77);DEVOUT('              --------------')
                                        DEVPOS(PROW()+1,62);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        IF pag=0 .OR. PROW()>=59
                                                pag=pag+1
                                                IF pag>1;EJECT;ENDIF
                                                cabecalho(pag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT('Total do Vencimento '+DTOC(mdia)+':')
                                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
                                ENDIF
                        ENDIF
                        mt_dia := 0
                        mdia := q_dupp->venc
                ENDIF
                IF mimp_tot = 'S'
                        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                        DEVPOS(PROW(),00);DEVOUT("Total de Documentos no mes de "+l_mes+": "+transform(tot,"9999")+" - "+ltrim(transform(tot_din,"@E 999,999,999,999.99")))
                ENDIF
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                        IF mod=2
                                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos Vencidas no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos a Vencer no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(time())
                ELSE
                        imprt(mtipo_imp,'N',1)
                        DEVPOS(PROW()+1,00);DEVOUT("*** RESUMO FINAL ***")
                        IF mod=2
                                DEVPOS(PROW()+2,00);DEVOUT("Total de Documentos Vencidas no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                        ELSE
                                DEVPOS(PROW()+2,00);DEVOUT("Total de Documentos a Vencer no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(time())
                ENDIF
        ELSEIF mtipo_con = 'S'  //SINTETICO
                mtit := mtit+' SINTETICO'
                ************************************************************
                mensagem('Aguarde coletando informacao para o Relatorio....')
                cComm  := "SELECT * FROM sacdupp WHERE venc >= "+sr_cdbvalue(t_ini)+" AND venc <= "+sr_cdbvalue(t_fim)+" AND (pago IS NULL OR pago = '') AND datpag IS NULL"
                IF ! EMPTY(mtipo_doc)
                        ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
                ENDIF
                IF ! EMPTY(mtp_ct)
                        ccomm := ccomm + " AND tip_for = "+sr_cdbvalue(mtp_ct)
                ENDIF
                IF ! EMPTY(mcod_forn)
                        ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ENDIF
                IF mnf = 'S'
                        ccomm := ccomm + " AND num_ped IS NOT NUL"
                ENDIF
                IF ! EMPTY(mbanco)
                        ccomm := ccomm + " AND numero = "+sr_cdbvalue(mbanco)
                ENDIF
                IF ! EMPTY(mtp_pg)
                        ccomm := ccomm + " AND tp_pg = "+sr_cdbvalue(mtp_pg)
                ENDIF
                ccomm := ccomm + " ORDER BY cliente,fornec,pago,venc"

                dbUseArea( .F.,"SQLRDD",cComm,"q_dupp")
                malias := 'q_dupp'
                SELE('q_dupp')
                DBGOTOP()
                IF EOF()
                        atencao('Nao existe documento neste Periodo...')
                        (malias)->(DBCLOSEAREA())
                        LOOP
                ENDIF
                IF ! imp_arq('DOC_APAG.REL','R')
                        LOOP
                ENDIF
                pag := vencer := vencidas := t_vencer := t_vencidas :=;
                tot := tot_g := tot_din := tot_gin := mt_dia := 0
                l_mes=SUBSTR(DTOC(q_dupp->venc),4,5)
                mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)
                mdia := q_dupp->venc
                WHILE ! EOF()
                        mcod_aux := q_dupp->fornec
                        mcliente := q_dupp->cliente
                        mtip_for := q_dupp->tip_for
                        WHILE mcod_aux = q_dupp->fornec .AND. ! EOF()
                                prog_imp(RECNO(),DTOC(q_dupp->venc))

                                IF pag=0 .OR. PROW()>=59
                                        pag=pag+1
                                        IF pag>1;EJECT;ENDIF
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                ENDIF

                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,00);DEVOUT(q_dupp->fornec)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->cliente+"  "+q_dupp->tip_for)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->tipo+q_dupp->duplicata)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->numero)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->emissao))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupp->venc))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupp->valor,"@E 99,999,999.99"))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupp->venc-mdata_sis,"9999"))
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupp->banco)
                                        DEVPOS(PROW(),PCOL()+3);DEVOUT(q_dupp->tp_pg)
                                        IF ! EMPTY(q_dupp->obs)
                                                DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+q_dupp->obs)
                                        ENDIF
                                        IF pag=0 .OR. PROW()>=59
                                                pag=pag+1
                                                IF pag>1;EJECT;ENDIF
                                                cabecalho(pag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                        ENDIF
                                ENDIF
                                tot ++
                                tot_g ++
                                tot_din=tot_din+q_dupp->valor
                                tot_gin=tot_gin+q_dupp->valor
                                mt_dia := mt_dia + q_dupp->valor
                                SKIP
                                IF EOF()
                                        EXIT
                                ENDIF
                        ENDDO
                        IF ! EMPTY(tot_din)
                                IF PROW() > 53
                                        EJECT
                                        pag=pag+1
                                        cabecalho(pag,mtit,mtipo)
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                ENDIF
                                IF mtipo_rel = 'G'
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("-",137))
                                        tot := tot_din := 0
                                        IF pag=0 .OR. PROW()>=59
                                                pag=pag+1
                                                IF pag>1;EJECT;ENDIF
                                                cabecalho(pag,mtit,mtipo)
                                                imprt(mtipo_imp,'C')
                                                DEVPOS(PROW()+1,00);DEVOUT("Cod.  Fornecedor                                Tipo Documento      No.   Emissao   Vencim           Valor  Dias  Cob TP")
                                                DEVPOS(PROW()+1,00);DEVOUT(REPLICATE("=",137))
                                        ENDIF
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT(mcod_aux)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT(mcliente+"  "+mtip_for)
                                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Total de Documentos: '+STRZERO(tot,6)+' - Valor Total:'+TRANSFORM(tot_din,'9,999,999.99'))
                                        tot := tot_din := 0
                                ENDIF
                        ENDIF
                ENDDO
                IF PROW() > 53
                        EJECT
                        pag=pag+1
                        cabecalho(pag,mtit,mtipo)
                ENDIF
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+2,00);DEVOUT("*** RESUMO FINAL ***")
                DEVPOS(PROW()+2,00);DEVOUT("Total de Documentos APAGAR no Periodo: "+TRANSFORM(tot_g,"9999")+" - "+ltrim(TRANSFORM(tot_gin,"@E 999,999,999,999.99")))
                DEVPOS(PROW()+2,00);DEVOUT(time())
        ENDIF
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_APAG.REL')
        /*
        IF mimp_tipo = 2
                lertexto('DOC_APAG.REL')
        ELSEIF mtipo_imp = 'D'
                
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
        ENDIF
        */
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M ***************************

