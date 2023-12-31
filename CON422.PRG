MEMVAR getlist,nivel_acess,mdata_sis
******************************************************
**** CON422.PRG: Relatorio -> Documentos C/BAIXA PARCIAL
******************************************************
FUNCTION con422
****************
LOCAL MPRG:='CON422',;
      tela,t_ini,t_fim,f_ini,f_fim,l_mes,td_mes,tp_mes,u_dat,pag,;
      vencer,vencidas,t_vencer,t_vencidas,tot_dup,tot_jur,tot_des,vlr_dup,;
      vlr_jur,vlr_des,mtot_dup,mtot_jur,mtot_des,mvlr_dup,mvlr_jur,mvlr_des,;
      mquantd,mtit,mtipo,mtip,mdia,mt_dia,bank,mtipo_dup,mtip_pg:='  ',mcod_vend,;
      mloc_pg:=' ',marea:=SPACE(15),mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,lci,cci,lba,cba,;
      mtip_nome,mcod_oper,mponto:=0,i:=0,mtipo_doc,y:=0,mtipo_baixa:=' '
PRIVATE mcliente,mcgc,mcpf,mcod_cli,mnome_vend,mcom_ven,mcod_forn:=0,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtt_dia:=' ',mcodemp:=SPACE(3),cons_doc := {},cons_cli:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (RELATORIO C/BAIXA PARCIAL)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

*---------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*---------------------------------------------------------------------
lci := cci := 00
lba := 20
cba := 79
mtipo_imp := 'J'
op_tela(05,10,28,89,' Duplicatas com BAIXA PARCIAL ')
WHILE .T.
	mensagem('Preencha os dados que desejar')
	@ lci+1,cci+1 SAY "Codigo da Empresa...............:"
	@ lci+2,cci+1 SAY "Codigo do Cliente...............:"
	@ lci+3,cci+1 SAY "Cod. Forn./Despesa..............:"
	@ lci+4,cci+1 SAY "Data do Inicio..................:"
	@ lci+5,cci+1 SAY "Data do Final...................:"
	@ lci+6,cci+1 SAY "Tipo da Operacao................:"
	@ lci+7,cci+1 SAY "Codigo do Vendedor..............:"
	@ lci+8,cci+1 SAY "Codigo do Operador..............:"
	@ lci+9,cci+1 SAY "Area do Cliente.................:"
	@ lci+10,cci+1 SAY "Totalizar o Dia.................:"
	@ lci+11,cci+1 SAY "Tipo de Documento que Deseja....:"
	@ lci+12,cci+1 SAY "Imp.[N]ome Cliente [C]orrentista:"
	@ lci+13,cci+1 SAY "Tipo de Baixa (Ver Mensagem)....:"
	@ lci+14,cci+1 SAY "Quantidade de Copia.............:"
	@ lci+15,cci+1 SAY "OBS.:"
	mquantd := 1
	t_ini=mdata_sis
	t_fim=mdata_sis+30
	bank=SPACE(1)
	mtip_pg := mtipo_doc := '  '
	mloc_pg := mtipo_baixa:=' '
	mcod_vend := mcod_forn := mcod_oper := mcod_cli := 0
	mtt_dia := 'N'
	mlin1 := mlin2 := mlin3 := mlin4 := mlin5 := mlin6 := SPACE(60)
	mtip_nome := 'N'
	@ lci+2,cci+35 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,lci+2,cci+40)
	@ lci+3,cci+35 GET mcod_forn PICT '9999' VALID v_fornece(mcod_forn,lci+3,cci+40)
	READ
	IF LASTKEY()=27
	        wvw_lclosewindow()
	        RETURN NIL
	ENDIF
	v_fornece(mcod_forn,lci+3,cci+26)
	@ lci+4,cci+35 GET t_ini VALID IF(EMPTY(t_ini),.F.,.T.)
	@ lci+5,cci+35 GET t_fim VALID IF(EMPTY(t_fim),.F.,.T.)
	@ lci+6,cci+35 GET mtip_pg PICT '@!'
	@ lci+7,cci+35 GET mcod_vend pict "999" VALID ven(mcod_vend,lci+7,cci+39) .AND. lim_get() WHEN mcod_cli = 0 .AND. men_get(lci+8,cci+35,'Informe o Vendedor que deseja ou nao informe p/imprimir todos')
	@ lci+8,cci+35 GET mcod_oper pict "999" VALID ven(mcod_oper,lci+8,cci+39) .AND. lim_get() WHEN mcod_cli = 0 .AND. men_get(lci+9,cci+35,'Informe o Vendedor que deseja ou nao informe p/imprimir todos')
	@ lci+9,cci+35 GET marea PICT "@!" VALID lim_get() WHEN men_get(lci+10,cci+35,'Digite a AREA do cliente ou nao informe p/imprimir todos')
	@ lci+10,cci+35 GET mtt_dia PICT "@!" VALID mtt_dia $ 'S,N'
	@ lci+11,cci+35 GET mtipo_doc PICT "@!" VALID ver_tipdc(mtipo_doc,'*')
	@ lci+12,cci+35 GET mtip_nome PICT "@!" VALID mtip_nome $ 'N,C'
	@ lci+13,cci+35 GET mtipo_baixa PICT "@!" VALID mtipo_baixa $ 'P,V,G' .AND. lim_get() WHEN men_get(lci+9,cci+35,'Informe o Tipo de Baixa: [P]Doc.Pagos - [V]encidos/Vencer - [G]eral')
	@ lci+14,cci+35 GET mquantd PICT "9" RANGE 1,5
	@ lci+15,cci+7 GET mlin1
	@ lci+16,cci+7 GET mlin2
	@ lci+17,cci+7 GET mlin3
	@ lci+18,cci+7 GET mlin4
	@ lci+19,cci+7 GET mlin5
	@ lci+20,cci+7 GET mlin6
	READ
	IF LASTKEY()=27
		wvw_lclosewindow()
        	RETURN NIL
	ENDIF
	l_mes=" "
	td_mes := tp_mes := 0    && tot. pagar no mes
	mtit := 'DOCUMENTOS C/BAIXAS PARCIAL (Contas a Receber)'
        IF mtipo_baixa = 'P'
        	mtit := mtit + ' Doc.PAGOS'
        ELSEIF mtipo_baixa = 'V'
        	mtit := mtit + ' Doc.VENCER/VENCIDOS'
        ELSE
        	mtit := mtit + ' Doc. GERAL'
        ENDIF
	cons_doc := {}
        cComm  := "SELECT * FROM sacdupr WHERE baix_parc >= "+sr_cdbvalue(t_ini)+" AND baix_parc <= "+sr_cdbvalue(t_fim)
        IF mtipo_baixa = 'P'
                ccomm := ccomm + +" AND datpag IS NOT NULL"
        ENDIF
        IF mtipo_baixa = 'V'
                ccomm := ccomm + +" AND datpag IS NULL"
        ENDIF
        IF ! EMPTY(mcod_forn)
                ccomm := ccomm + " AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))
        ENDIF
        IF ! EMPTY(mcod_vend)
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(STRZERO(mcod_vend,3))
        ENDIF
        IF ! EMPTY(mtip_pg)
                ccomm := ccomm + " AND tip_pg = "+sr_cdbvalue(mtip_pg)
        ENDIF
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        ENDIF
        IF ! EMPTY(marea)
                ccomm := ccomm + " AND area = "+sr_cdbvalue(marea)
        ENDIF
        IF ! EMPTY(mcod_oper)
                ccomm := ccomm + " AND oper_parc = "+sr_cdbvalue(STRZERO(mcod_oper,3))
        ENDIF
        IF ! EMPTY(mtipo_doc)
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue(mtipo_doc)
        ENDIF
        ccomm := ccomm + " ORDER BY baix_parc,fornec"
        sr_getconnection():exec(ccomm,,.t.,cons_doc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_doc) = 0
                atencao('Nao existe documento neste Periodo...')
                LOOP
        ENDIF
        ************************************************************
	IF ! imp_arq('BAIX_PARC.REL','R')
	        wvw_lclosewindow()
	        RETURN NIL
	ENDIF   	
	SET PRINT on
	i := 0  	
	FOR i = 1 TO mquantd
        	SET DATE brit                                                                                
         	pag := vencer := vencidas := t_vencer := t_vencidas := tot_dup := ;                          
	        tot_jur := tot_des := vlr_dup := vlr_jur := vlr_des := mtot_dup := ;                         
        	mtot_jur := mtot_des := mvlr_dup := mvlr_jur := mvlr_des := mt_dia := 0                      
	        mdia := cons_doc[1,13]                                                                         
        	IF ! EMPTY(mcod_vend)                                                                        
	               	mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)+' - '+STRZERO(mcod_vend,3)+'-'+mnome_vend     
        	ELSE                                                                                         
		      	mtipo := DTOC(t_ini)+' a '+DTOC(t_fim)                                               
         	ENDIF                                                                                        
        	mcliente := SPACE(40)
		y := 0  	
		FOR y = 1 TO LEN(cons_doc)
                	IF pag=0 .OR. PROW()>=57
                        	pag=pag+1
	                        IF pag>1
        	                        EJECT
                	        ENDIF
                        	cabecalho(pag,mtit,mtipo,mprg)
	                        imprt(mtipo_imp,'N')
        	                IF ! EMPTY(mlin1)
                                	DEVPOS(PROW()+1,00);DEVOUT(mlin1)
                		ENDIF
	                        IF ! EMPTY(mlin2)
        	                        DEVPOS(PROW()+1,00);DEVOUT(mlin2)
                	        ENDIF
                        	IF ! EMPTY(mlin3)
	                                DEVPOS(PROW()+1,00);DEVOUT(mlin3)
        	                ENDIF
                	        IF ! EMPTY(mlin4)
	                                DEVPOS(PROW()+1,00);DEVOUT(mlin4)
        	                ENDIF
                	        IF ! EMPTY(mlin5)
	                                DEVPOS(PROW()+1,00);DEVOUT(mlin5)
        	                ENDIF
                	        IF ! EMPTY(mlin6)
                        	        DEVPOS(PROW()+1,00);DEVOUT(mlin6)
	                        ENDIF
        	                imprt(mtipo_imp,'C')
                	        IF ! EMPTY(mlin1)
                        	        ? REPLICATE("-",137)
	                        ENDIF   	
        	                IF mtip_nome = 'N'
                	                ? "Cod.  Cliente                                   Documento    Dat.Venc.  Vlr. Doc.  Fornecedor/Despesa                          Dat.Baixa"
                        	ELSE
                                	? "Cod.  Correntista                               Documento    Dat.Venc.  Vlr. Doc.  Fornecedor/Despesa                          Dat.Baixa"
	                        ENDIF
        	                ? REPLICATE("-",137)
                	ENDIF
			cons_cli := {}
        		cComm  := "SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(cons_doc[y,7])
		        sr_getconnection():exec(ccomm,,.t.,cons_cli)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(cons_cli) = 0
				AADD(cons_cli,{'','','CLIENTE NAO ENCONTRADO'})
		        ENDIF
                	IF ! EMPTY(marea)
			        IF marea <> cons_cli[1,43]
		        	        LOOP
		        	ENDIF
                	ENDIF
                	IF mdia <> cons_doc[y,41] .AND. mtt_dia = 'S'
                        	IF mt_dia > 0
                                	DEVPOS(PROW()+1,89);DEVOUT('Total do dia:')
	                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mt_dia,'99,999,999.99'))
        	                ENDIF
                	        mt_dia := 0
                        	mdia := cons_doc[y,13]
	                ENDIF
        	        IF l_mes<>SUBSTR(DTOC(cons_doc[y,41]),4,5) .AND. mtt_dia = 'S'
                	        l_mes=SUBSTR(DTOC(cons_doc[y,41]),4,5)
                        	?
	                        ? l_mes
        	                ?
                	ENDIF
                	DEVPOS(PROW()+1,00);DEVOUT(cons_doc[y,7])
	                IF mtip_nome = 'N'
        	                DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_cli[1,3]+" ")
                	ELSE
	                        DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_doc[y,48]+"      ")
        	        ENDIF
                	DEVPOS(PROW(),PCOL());DEVOUT(cons_doc[y,2]+cons_doc[y,4]+cons_doc[y,28])
	                DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(cons_doc[y,11]))
        	        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(cons_doc[y,19],"@E 999,999.99"))
                	DEVPOS(PROW(),PCOL()+1);DEVOUT(cons_doc[y,39])
	                v_fornece(VAL(cons_doc[y,39]),PROW(),PCOL()+1)
        	        DEVPOS(PROW(),PCOL()+1);DEVOUT(DTOC(cons_doc[y,41]))
                	tot_dup=tot_dup+1
	                vlr_dup=vlr_dup+cons_doc[y,19]
        	        mtot_dup=mtot_dup+1
                	mvlr_dup=mvlr_dup+cons_doc[y,19]
	                mt_dia := mt_dia + cons_doc[y,19]
                	IF l_mes<>SUBSTR(DTOC(cons_doc[y,41]),4,5) .AND. mtt_dia = 'S'
	                        IF PROW()<57
        	                        ? "** RESUMO DO MES **"
                	                ?
                        	        ? "Total de Juros.....: "+TRANSFORM(tot_jur,"9999")+" - "+TRANSFORM(vlr_jur,"@E 999,999,999,999.99")
                                	? "Total de Descontos.: "+TRANSFORM(tot_des,"9999")+" - "+TRANSFORM(vlr_des,"@E 999,999,999,999.99")
	                                ? "Total de Documentos: "+TRANSFORM(tot_dup,"9999")+" - "+TRANSFORM(vlr_dup,"@E 999,999,999,999.99")
        	                        ?
                	        ELSE
                        	        EJECT
                                	pag=pag+1
	                                cabecalho(pag,mtit,mtipo,mprg)
        	                        ? "Cod. Cliente                                    Documento    Dat.Venc.  Vlr. Doc.  Fornecedor/Despesa                          Dat.Baixa"
                	                imprt(mtipo_imp,'C')
                        	        ? REPLICATE("-",137)
                                	?
	                                ? l_mes
        	                        ? "** RESUMO DO MES **"
                	                ?
                        	        ? "Total de Juros.....: "+TRANSFORM(tot_jur,"9999")+" - "+TRANSFORM(vlr_jur,"@E 999,999,999,999.99")
                                	? "Total de Descontos.: "+TRANSFORM(tot_des,"9999")+" - "+TRANSFORM(vlr_des,"@E 999,999,999,999.99")
	                                ? "Total de Documentos: "+TRANSFORM(tot_dup,"9999")+" - "+TRANSFORM(vlr_dup,"@E 999,999,999,999.99")
        	                ENDIF
                	        tot_dup:=tot_jur:=tot_des:=vlr_dup:=vlr_jur:=vlr_des:=0
	                ENDIF   	
        	NEXT
        	IF PROW() >= 52;pag=pag+1;cabecalho(pag,mtit,mtipo,mprg);ENDIF
	        ?
        	?
	        imprt(mtipo_imp,'N')
        	? "** RESUMO FINAL **"
	        ?
        	? "Total de Juros.....: "+TRANSFORM(mtot_jur,"9999")+" - "+TRANSFORM(mvlr_jur,"@E 999,999,999,999.99")
        	? "Total de Descontos.: "+TRANSFORM(mtot_des,"9999")+" - "+TRANSFORM(mvlr_des,"@E 999,999,999,999.99")
	        ? "Total de Documentos: "+TRANSFORM(mtot_dup,"9999")+" - "+TRANSFORM(mvlr_dup,"@E 999,999,999,999.99")
        	?
	        ? time()	
        	EJECT
	        SETPRC(00,00)
	NEXT    	
	SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('BAIX_PARC.REL')
        /*
	IF mimp_tipo = 2
	        lertexto('BAIX_PARC.REL')
	ELSEIF mtipo_imp = 'D'
	        
        ELSE
                MYRUN('DOSPRINTER /RAW /DEL '+ALLTRIM(m_indiv[1,5])+'HTI.REL')
	ENDIF
	*/
ENDDO	
wvw_lclosewindow()
RETURN NIL




