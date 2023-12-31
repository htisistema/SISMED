MEMVAR getlist,nivel_acess,mdata_sis
******* CON421.PRG: Relatorio analitico do clientes
FUNCTION con421()
*****************
LOCAL MPRG:='CON421',;
      op42,mcod_cli,mtp,opcao,i,quantd,;
      pag,mtipo,mtit,mTGvencer,mTGvenci,mTGpagas,mTVvencer,mTVvenci,mTVpagas,;
      mCTvence,mCTvenci,mCTpagas,mCVvence,mCVvenci,mCVpagas,mtraco,mquantd,;
      mtot_ind,mvlr_ind,msub_ind,mjuros_ind,mtipo_con,mmulta,mjuros,;
      mdias_atras,mtot_juros,mCTvencer := 0,mCVvencer := 0,mdata1,mdata2,cComm,q_dupr := {}

PRIVATE mcliente,mcpf,mcgc,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'CONTA A RECEBER (RELATORIO ANALITICO DE CLIENTE)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',80)
*----------------------------------------------------------------------
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*----------------------------------------------------------------------
op_tela(10,10,19,80)
WHILE .T.
        mtipo_imp := 'J'
        mtipo := '  '
        mcod_cli := 0
*       mdata1 := mdata2 := CTOD('  /  /  ')
        mensagem('Digite Cod.cliente ou <ENTER>p/todos - <ESC> Retornar')
        DEVPOS(1,1);DEVOUT('Cod.Cliente:')
        @ 2,1 TO 2,70
*       DEVPOS(2,1);DEVOUT('Data Incial:            Data Final:')
        @ 1,14 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,1,21)
*       @ 2,14 GET mdata1
*       @ 2,37 GET mdata2 WHEN ! EMPTY(mdata1)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        @ 3,1 PROMPT " Documentos Pagos        "  //MESSAGE '** Relatorio de Documentos PAGOS do Cliente - <ESC>abandonar **'
        @ 4,1 PROMPT " Documentos A Vencer     "  //MESSAGE '** Relatorio de Documentos A VENCER do Cliente - <ESC> Abandonar'
        @ 5,1 PROMPT " Documentos Vencidos     "  //MESSAGE '** Relatorio de Documentos VENCIDAS do Cliente - <ESC> Abandonar'
        @ 6,1 PROMPT " A Vencer e Vencidas     "  //MESSAGE '** Relatorio de Documentos A VENCER/VENCIDAS do Cliente - <ESC> Abandonar'
        @ 7,1 PROMPT " A Vencer/Vencidas/Pagas "  //MESSAGE '** Relatorio de Documetnos A VENCER/VENCIDAS/PAGAS do Cliente - <ESC> Abandonar'
        MENU TO op42
        DO CASE
                CASE op42=0
                        LOOP
                CASE op42=1
                        mtp := 'PG'
                        mtipo := 'Duplicatas PAGAS (Contas a Receber)'
                CASE op42=2
                        mtp := 'AV'
                        mtipo := 'Duplicatas A VENCER (Contas a Receber)'
                CASE op42=3
                        mtp := 'VE'
                        mtipo := 'Duplicatas VENCIDAS (Contas a Receber)'
                CASE op42=4
                        mtp := 'VV'
                        mtipo := 'A VENCER E VENCIDAS (Contas a Receber)'
                CASE op42=5
                        mtp := 'VP'
                        mtipo := 'VENCER, VENCIDAS E PAGAS (Contas a Receber)'
        ENDCASE
        mensagem('Aguarde o Coletando dados p/ impressao - [ESC] Abandona.')
        ************************************************************
        cComm  := "SELECT  * FROM sacdupr WHERE  fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        IF mtp <> 'VP'
                IF mtp = 'PG'
                        ccomm := ccomm + " AND  pago = 'B'"
                ELSEIF mtp = 'AV'
                        ccomm := ccomm + " AND  venc >="+sr_cdbvalue(mdata_sis)+" AND  pago IS NULL"
                ELSEIF mtp = 'VE'
                        ccomm := ccomm + " AND  venc < "+sr_cdbvalue(mdata_sis)+" AND  pago IS NULL"
                ELSEIF mtp = 'VV'
                        ccomm := ccomm + " AND  pago IS NULL"
                ENDIF
        ENDIF
        ccomm := ccomm + " ORDER BY  cliente, pago, venc"
        q_dupr := {}
        sr_getconnection():exec(ccomm,,.t.,@q_dupr)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(q_dupr) = 0
                atencao('Nao existe documento a receber deste cliente')
                RETURN NIL
        ENDIF
        ************************************************************
        IF ! imp_arq('DOC_VENCE.REL','R')
                LOOP
        ENDIF
        mcod_cli := VAL(q_dupr[1,7])
        pag=0
        mTGvencer := mTGvenci := mTGpagas := mTVvencer := mTVvenci := ;
        mTVpagas := mCTvencer := mCTvenci := mCTpagas := mCVvencer := ;
        mCVvenci := mCVpagas := mtot_juros := mtot_ind := mvlr_ind := ;
        msub_ind := mjuros_ind := 0
        mtit := 'DUPLICATAS A RECEBER P/CLIENTE'
        pag=1
        cabecalho(pag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('Documento    ')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Pedido')
        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Emissao')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('  Vencim')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('     Valor')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.+Juros')
        DEVPOS(PROW(),PCOl()+2);DEVOUT('Dta.Pag.')
        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Pg.')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Juros')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desconto')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Dias')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Situacao')
        DEVPOS(PROW(),PCOL()+2);DEVOUT('Ven')
        imprt(mtipo_imp,'N')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        pitalico(.T.)
        DEVPOS(PROW()+1,00);DEVOUT(q_dupr[1,7])
        DEVPOS(PROW(),07);DEVOUT(q_dupr[1,8])
        pitalico()
        i:=0
        FOR i = 1 TO LEN(q_dupr)
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C',1)
                        DEVPOS(PROW(),00);DEVOUT('Documento    ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Pedido')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Emissao')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('  Vencim')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('     Valor')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.+Juros')
                        DEVPOS(PROW(),PCOl()+2);DEVOUT('Dta.Pag.')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Pg.')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('   Juros')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Desconto')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Dias')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Situacao')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Ven')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF STRZERO(mcod_cli,5) <> q_dupr[i,7]
                        IF pag=0 .OR. PROW()>55
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C',1)
                                DEVPOS(PROW(),00);DEVOUT('Documento    ')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Pedido')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Emissao')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('  Vencim')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('     Valor')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.+Juros')
                                DEVPOS(PROW(),PCOl()+2);DEVOUT('Dta.Pag.')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Pg.')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('   Juros')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Desconto')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Dias')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Situacao')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Ven')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('******************************************************** RESUMO DO CLIENTE **********************************************************')
                        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos A VENCER :')
                        DEVPOS(PROW(),31);DEVOUT(TRANSFORM(mCTvencer,'999999'))
                        DEVPOS(PROW(),37);DEVOUT(' - '+TRANSFORM(mCVvencer,'999,999,999.99'))
                        DEVPOS(PROW(),57);DEVOUT('VENCIDAS:')
                        DEVPOS(PROW(),67);DEVOUT(TRANSFORM(mCTvenci,'999999'))
                        DEVPOS(PROW(),73);DEVOUT(' - '+TRANSFORM(mCVvenci,'999,999,999.99'))
                        DEVPOS(PROW(),92);DEVOUT('Total A RECEBER:')
                        DEVPOS(PROW(),109);DEVOUT(TRANSFORM(mCTvencer+mCTvenci,'999999'))
                        DEVPOS(PROW(),115);DEVOUT(' - '+TRANSFORM(mCVvencer+mCVvenci,'999,999,999.99'))

                        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos VENCIDOS + JUROS:')
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mCVvenci,'999,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Juros+Multas:'+TRANSFORM(mjuros_ind,'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Total Geral:'+TRANSFORM(mCVvenci + mjuros_ind,'999,999,999.99'))

                        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos RECEBIDOS:')
                        DEVPOS(PROW(),30);DEVOUT(TRANSFORM(mCTpagas,'999999'))
                        DEVPOS(PROW(),37);DEVOUT(' - '+TRANSFORM(mCVpagas,'999,999,999.99'))
                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                        IF pag=0 .OR. PROW()>57
                                pag=pag+1
                                IF pag>1
                                        EJECT
                                ENDIF
                                cabecalho(pag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C',1)
                                DEVPOS(PROW(),00);DEVOUT('Documento    ')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Pedido')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Emissao')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('  Vencim')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('     Valor')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Vlr.+Juros')
                                DEVPOS(PROW(),PCOl()+2);DEVOUT('Dta.Pag.')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(' Valor Pg.')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('   Juros')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Desconto')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Dias')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Situacao')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Ven')
                                imprt(mtipo_imp,'N')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        imprt(mtipo_imp,'N')
                        pitalico(.T.)
                        DEVPOS(PROW()+1,00);DEVOUT(q_dupr[i,7])
                        DEVPOS(PROW(),05);DEVOUT(q_dupr[i,8])
                        pitalico()
                        mcliente := SPACE(40)
                        mcod_cli := VAL(q_dupr[i,7])
                        mCTpagas := mCVpagas := mCTvencer := mCVvencer := ;
                        mCTvenci := mCVvenci := mjuros_ind := 0
                ENDIF
                mmulta := mjuros := 0
                mdias_atras := mdata_sis-q_dupr[i,11]
                IF mdias_atras > 0
                        mmulta := q_dupr[i,19] * ((m_set[1,9])/100)
                        mjuros := mjuros + (q_dupr[i,19] * ((mdias_atras*m_set[1,10])/100))
                ENDIF
                mtot_juros := mtot_juros + mmulta+mjuros
                mjuros_ind := mjuros_ind + mmulta+mjuros
                mvlr_ind := mvlr_ind + q_dupr[i,19]+mmulta+mjuros
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT(q_dupr[i,2]+q_dupr[i,4]+q_dupr[i,28])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupr[i,31])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupr[i,10]))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(q_dupr[i,11]))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupr[i,19],"@E 999,999.99"))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupr[i,19]+mmulta+mjuros,"@E 999,999.99"))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(q_dupr[i,13])
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupr[i,20],"999,999.99"))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupr[i,23],"9,999.99"))
                DEVPOS(PROW(),PCOl()+2);DEVOUT(TRANSFORM(q_dupr[i,22],"9,999.99"))
                IF q_dupr[i,11]>=mdata_sis .AND. q_dupr[i,25] = ' '
                        DEVPOS(PROW(),PCOl()+2);DEVOUT(TRANSFORM(q_dupr[i,11]-mdata_sis,"9999"))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('A Vencer')
                        mTGvencer ++
                        mTVvencer := mTVvencer + q_dupr[i,19]
                        mCTvencer ++
                        mCVvencer := mCVvencer + q_dupr[i,19]
                ELSEIF q_dupr[i,11] < mdata_sis .AND. q_dupr[i,25] = ' '
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(q_dupr[i,11]-mdata_sis,"9999"))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Vencida ')
                        mTGvenci ++
                        mTVvenci := mTVvenci + q_dupr[i,19]
                        mCTvenci ++
                        mCVvenci := mCVvenci + q_dupr[i,19]
                ELSEIF q_dupr[i,25] = 'B'
                        DEVPOS(PROW(),PCOl()+2);DEVOUT(TRANSFORM(q_dupr[i,13] - q_dupr[i,11],"9999"))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Pagas   ')
                        mTGpagas ++
                        mTVpagas := mTVpagas + q_dupr[i,19]
                        mCTpagas ++
                        mCVpagas := mCVpagas + q_dupr[i,19]
                ENDIF
                DEVPOS(PROW(),PCOl()+2);DEVOUT(q_dupr[i,30])
        NEXT
        IF PROW()>55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
                ?
                ?
        ENDIF
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT('******************************************************** RESUMO DO CLIENTE **********************************************************')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos A VENCER :')
        DEVPOS(PROW(),31);DEVOUT(TRANSFORM(mCTvencer,'999999'))
        DEVPOS(PROW(),37);DEVOUT(' - '+TRANSFORM(mCVvencer,'999,999,999.99'))
        DEVPOS(PROW(),57);DEVOUT('VENCIDAS:')
        DEVPOS(PROW(),67);DEVOUT(TRANSFORM(mCTvenci,'999999'))
        DEVPOS(PROW(),73);DEVOUT(' - '+TRANSFORM(mCVvenci,'999,999,999.99'))
        DEVPOS(PROW(),92);DEVOUT('Total A RECEBER:')
        DEVPOS(PROW(),109);DEVOUT(TRANSFORM(mCTvencer+mCTvenci,'999999'))
        DEVPOS(PROW(),115);DEVOUT(' - '+TRANSFORM(mCVvencer+mCVvenci,'999,999,999.99'))

        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos VENCIDOS + JUROS:')
        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mCVvenci,'999,999,999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Juros+Multas:'+TRANSFORM(mjuros_ind,'9,999,999.99'))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Total Geral:'+TRANSFORM(mCVvenci + mjuros_ind,'999,999,999.99'))

        DEVPOS(PROW()+1,00);DEVOUT('Total de Documentos RECEBIDOS:')
        DEVPOS(PROW(),30);DEVOUT(TRANSFORM(mCTpagas,'999999'))
        DEVPOS(PROW(),37);DEVOUT(' - '+TRANSFORM(mCVpagas,'999,999,999.99'))
        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
        IF PROW()>55
                EJECT
                pag=pag+1
                cabecalho(pag,mtit,mtipo,mprg)
                ?
                ?
        ELSE
                ?
                ?
        ENDIF
        imprt(mtipo_imp,'N')
        imprt(mtipo_imp,'E')
        DEVPOS(PROW()+2,00);DEVOUT('RESUMO GERAL')
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos VENCIDOS....: "+TRANSFORM(mTGvenci,"9999")+" - "+TRANSFORM(mTVvenci,"@E 999,999,999.99"))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(" - Total de Juros: "+TRANSFORM(mtot_juros,"@E 999,999,999.99"))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(" - Total Geral: "+TRANSFORM(mTVvenci+mtot_juros,"@E 999,999,999.99"))
        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos a VENCER....: "+TRANSFORM(mTGvencer,"9999")+" - "+TRANSFORM(mTVvencer,"@E 999,999,999.99"))
        DEVPOS(PROW()+1,00);DEVOUT("Total Geral Documentos A RECEBER: "+TRANSFORM(mTGvencer+mTGvenci,"9999")+" - "+TRANSFORM(mTVvencer+mTVvenci,"@E 999,999,999.99"))
        DEVPOS(PROW(),00);DEVOUT("Total Geral Documentos A RECEBER: "+TRANSFORM(mTGvencer+mTGvenci,"9999")+" - "+TRANSFORM(mTVvencer+mTVvenci,"@E 999,999,999.99"))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(" - Total de JUROS: "+TRANSFORM(mtot_juros,"@E 999,999,999.99"))
        DEVPOS(PROW(),PCOL()+1);DEVOUT(" - Total de GERAL: "+TRANSFORM(mTVvencer+mTVvenci+mtot_juros,"@E 999,999,999.99"))
        DEVPOS(PROW()+1,00);DEVOUT("Total de Documentos RECEBIDOS...: "+TRANSFORM(mTGpagas,"9999")+" - "+TRANSFORM(mTVpagas,"@E 999,999,999.99"))
        DEVPOS(PROW(),00);DEVOUT("Total de Documentos RECEBIDOS...: "+TRANSFORM(mTGpagas,"9999")+" - "+TRANSFORM(mTVpagas,"@E 999,999,999.99"))
        ?
        ? time()
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('DOC_VENCE.REL')
ENDDO
RETURN NIL
*********************** f i m ********************************
