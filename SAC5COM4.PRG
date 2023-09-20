********************
* LISTAGEM MOVIMENTO DE VENDAS P/PRODUTO
********************
FUNCTION sac5com4
**************
LOCAL tela,lci,cci,lba,cba,opcao,i,mdata1,mdata2,mcod_op,mop,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,mgrupo,msubgrupo,mgru_vlr,mgru_quantd,mgru_prunit,m_produto:={},;
      mdia,mlucro,mprg:='SAC5COM4',mc_merc,mc_real

PRIVATE mtraco,telaprint,mtit,mtipo,mpag
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

tela := SAVESCREEN(00,00,MAXROW(),79)

mtraco := REPLI('=',80)

lci := 14
cci := 05
lba := 19
cba := 48
*----------------------------------------------------------------------------
CLOSE ALL
USE sacmerc ALIAS merc SHARED NEW
USE sacmov ALIAS mov SHARED NEW
*----------------------------------------------------------------------------
WHILE .T.
        i := 0
        mgrupo := SPACE(3)
        msubgrupo := SPACE(2)
        mcod_merc := SPACE(5)
        mmerc := SPACE(40)
        mlucro := 0
        mtot_vlr := 0
        mtot_quantd := 0
        mtot_prunit := 0
        mgru_vlr := 0
        mgru_quantd := 0
        mgru_prunit := 0
        mger_vlr := 0
        mger_quantd := 0
        mger_prunit := 0
        mop := 0
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mcod_op := SPACE(2)
        mc_merc := SPACE(1)
        mc_real := SPACE(1)
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial___:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final_____:')
        @ lci+3,cci+1 TO lci+3,cba-1
        DEVPOS(lci+4,cci+2);DEVOUT('Custo REAL: [ ]  Custo MERCADORIA: [ ]')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+15 GET mc_real PICT '@!' VALID mc_real $ 'X, ' .AND. lim_get() WHEN men_get(lci+5,cci+15,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO REAL')
        @ lci+4,cci+38 GET mc_merc PICT '@!' VALID mc_merc $ 'X, ' .AND. lim_get() WHEN mc_real = ' ' .AND. men_get(lci+5,cci+38,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO MERCADORIA')
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                CLOSE ALL
                RETURN
        ENDIF
        IF EMPTY(mc_merc) .AND. EMPTY(mc_real)
                LOOP
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := mdata2 - mdata1
        ENDIF
        mensagem('Aguarde coletando dados')
        ****************
        SELE('mov')
        ORDSETFOCUS(7)
        DBSETFILTER({|| (SUBSTR(documento,1,2) <> 'TR' .AND. ;
                        SUBSTR(documento,1,2) <> 'BL');
                        .AND. ent_sai = 'S' .AND. (data_s_e <= mdata2 .AND. ;
                        data_s_e >= mdata1) .AND. vl_vend > 0 .AND. tipo = '02'})
        GO TOP
        ****************
        opcao := op_simnao('S','Confirma a Impressao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                mensagem('Espere o Final da Impressao OK - [ESC]Abandonar')
                IF ! imp_arq('SMED.REL')
                        LOOP
                ENDIF
                mpag = 1
                IF mc_real = 'X'
                        mtit = 'Relatorio do Resumo das Vendas p/ Produto (CUST REAL)'
                ELSE
                        mtit = 'Relatorio do Resumo das Vendas p/ Produto (CUST MERCADORIA)'
                ENDIF
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(impressora,'C')
                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                DEVPOS(PROW(),93);DEVOUT(' (%)')
                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                DEVPOS(PROW(),132);DEVOUT('part.')

                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                DEVPOS(PROW(),63);DEVOUT('Custo')
                DEVPOS(PROW(),73);DEVOUT('Venda')
                DEVPOS(PROW(),83);DEVOUT('das Venda')
                DEVPOS(PROW(),93);DEVOUT('Vendas')
                DEVPOS(PROW(),104);DEVOUT('p/dia')
                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                imprt(impressora,'N',1)
                DEVPOS(PROW(),00);DEVOUT(mtraco)
                mcod_merc := codigo
                mmerc := produto
                WHILE ! EOF()
                        mger_vlr := mger_vlr + (quantd * vl_vend)
                        mger_quantd := mger_quantd + quantd
                        IF mc_real = 'X'
                                mger_prunit := mger_prunit + (quantd * pr_unit)
                        ELSE
                                mger_prunit := mger_prunit + (quantd * cust_mer)
                        ENDIF
                        SKIP
                ENDDO
                GO TOP
                prt_gru(VAL(SUBSTR(gru_sub,1,3)))
                prt_sgru(VAL(SUBSTR(gru_sub,1,3)),VAL(SUBSTR(gru_sub,4,2)))
                mgrupo := SUBSTR(gru_sub,1,3)
                msubgrupo := SUBSTR(gru_sub,4,2)
                WHILE ! EOF()
                        INKEY(.3)
                        IF LASTKEY() = 27
                                DEVPOS(PROW()+2,00);DEVOUT('Impressao cancelada pelo operador !!!')
                                EXIT
                        ENDIF

                        IF mgrupo <> SUBSTR(gru_sub,1,3)
                                imprt(impressora,'C',1)
                                DEVPOS(PROW(),00);DEVOUT(REPLI('-',137))
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT('*** Total do Grupo em Relacao ao Geral:')
                                DEVPOS(PROW(),47);DEVOUTPICT(mgru_quantd,'999999.99')
                                DEVPOS(PROW(),58);DEVOUTPICT(mgru_prunit/mgru_quantd,'999,999.99')
                                DEVPOS(PROW(),68);DEVOUTPICT(mgru_vlr/mgru_quantd,'999,999.99')
                                DEVPOS(PROW(),79);DEVOUTPICT(mgru_vlr,'99,999,999.99')
                                DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mgru_vlr/mger_vlr) * 100,'999.99'))
                                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mgru_quantd/(mdata2-mdata1)),'99999.999'))
                                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mgru_vlr - mgru_prunit,'999,999.99'))
                                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/mgru_prunit)*100,'999.99'))
                                DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
                                mgru_vlr := 0
                                mgru_quantd := 0
                                mgru_prunit := 0
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF

                                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                prt_gru(VAL(SUBSTR(gru_sub,1,3)))
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                prt_sgru(VAL(SUBSTR(gru_sub,1,3)),VAL(SUBSTR(gru_sub,4,2)))
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                mgrupo := SUBSTR(gru_sub,1,3)
                                msubgrupo := SUBSTR(gru_sub,4,2)
                        ENDIF
                        IF mgrupo+msubgrupo <> gru_sub
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                prt_sgru(VAL(SUBSTR(gru_sub,1,3)),VAL(SUBSTR(gru_sub,4,2)))
                                IF PROW() >= 59
                                        mpag ++
                                        EJECT
                                        cabecalho(mpag,mtit,mtipo,mprg)
                                        imprt(impressora,'C')
                                        DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                        DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                        DEVPOS(PROW(),93);DEVOUT(' (%)')
                                        DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                        DEVPOS(PROW(),132);DEVOUT('part.')

                                        DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                        DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                        DEVPOS(PROW(),63);DEVOUT('Custo')
                                        DEVPOS(PROW(),73);DEVOUT('Venda')
                                        DEVPOS(PROW(),83);DEVOUT('das Venda')
                                        DEVPOS(PROW(),93);DEVOUT('Vendas')
                                        DEVPOS(PROW(),104);DEVOUT('p/dia')
                                        DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                        DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                        DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                        imprt(impressora,'N',1)
                                        DEVPOS(PROW(),00);DEVOUT(mtraco)
                                        imprt(impressora,'C')
                                ENDIF
                                msubgrupo := SUBSTR(gru_sub,4,2)
                        ENDIF

                        WHILE mcod_merc = codigo .AND. ! EOF()
                                mtot_vlr := mtot_vlr + (quantd * vl_vend)
                                mtot_quantd := mtot_quantd + quantd
                                IF mc_real = 'X'
                                        mtot_prunit := mtot_prunit + (quantd * pr_unit)
                                        mgru_prunit := mgru_prunit + (quantd * pr_unit)
                                ELSE
                                        mtot_prunit := mtot_prunit + (quantd * cust_mer)
                                        mgru_prunit := mgru_prunit + (quantd * cust_mer)
                                ENDIF
                                mgru_vlr := mgru_vlr + (quantd * vl_vend)
                                mgru_quantd := mgru_quantd + quantd
                                SKIP
                        ENDDO

                        IF mtot_prunit = 0
                                mlucro := 100
                        ELSE
                                mlucro := ((mtot_vlr-mtot_prunit)/mtot_prunit)*100
                        ENDIF

                        imprt(impressora,'C',1)
                        DEVPOS(PROW(),00);DEVOUT(mcod_merc+'-'+mmerc)
                        DEVPOS(PROW(),47);DEVOUTPICT(mtot_quantd,'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(mtot_prunit/mtot_quantd,'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(mtot_vlr/mtot_quantd,'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(mtot_vlr,'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mtot_vlr/mger_vlr) * 100,'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mtot_quantd/mdia),'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mtot_vlr - mtot_prunit,'999,999.99'))
                        DEVPOS(PROW(),121);DEVOUT(TRANSFORM(mlucro,'9999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mtot_vlr-mtot_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
                        AADD(m_produto,{mcod_merc,mmerc,mtot_quantd,mtot_prunit/mtot_quantd,mtot_vlr/mtot_quantd,;
                                        mtot_vlr,(mtot_vlr/mger_vlr)*100,mtot_quantd/mdia,;
                                        mtot_vlr-mtot_prunit,mlucro,;
                                        ((mtot_vlr-mtot_prunit)/(mger_vlr-mger_prunit))*100})
                        mtot_vlr := 0
                        mtot_quantd := 0
                        mtot_prunit := 0
                        mcod_merc := codigo
                        mmerc := produto
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(impressora,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                imprt(impressora,'N',1)
                                DEVPOS(PROW(),00);DEVOUT(mtraco)
                        ENDIF
                ENDDO
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
                DEVPOS(PROW()+1,00);DEVOUT('*** Total do Grupo em Relacao ao Geral:')
                DEVPOS(PROW(),47);DEVOUTPICT(mgru_quantd,'999999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mgru_prunit/mgru_quantd,'999,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mgru_vlr/mgru_quantd,'999,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mgru_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM((mgru_vlr/mger_vlr) * 100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mgru_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mgru_vlr - mgru_prunit,'999,999.99'))
                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/mgru_prunit)*100,'999.99'))
                DEVPOS(PROW(),131);DEVOUT(TRANSFORM(((mgru_vlr-mgru_prunit)/(mger_vlr-mger_prunit))*100,'999.99'))
                imprt(impressora,'N',1)
                DEVPOS(PROW(),00);DEVOUT(REPLI('-',80))
                mgru_vlr := 0
                mgru_quantd := 0
                mgru_prunit := 0
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                imprt(impressora,'N',2)
                DEVPOS(PROW(),00);DEVOUT(REPLI('-',80))
                imprt(impressora,'C',1)
                DEVPOS(PROW(),00);DEVOUT('T O T A L   G E R A L:')
                DEVPOS(PROW(),47);DEVOUTPICT(mger_quantd,'999999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'999,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'999,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(impressora,'N',1)
                EJECT
                SETPRC(00,00)
                SET PRINT TO
                SET DEVI TO SCREEN
                RESTSCREEN(00,00,MAXROW(),79,tela)
                IF mimp_tipo = 2
                        FCLOSE('HTI.REL')
                        MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                ELSEIF mimp_tipo = 1
                        FCLOSE('HTI.REL')
                        //MYRUN('DOSPRINTER '+IF(m_cfg[79]='2','/SEL2','/SEL')+' /DEL '+ALLTRIM('')+'HTI.REL')
                        MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
**************************** F I M ****************************************************
********************
* LISTAGEM CLASSIFICACAO DOS PRODUTO MAIS VENDIDOS
********************

FUNCTION sac5com5
**************

LOCAL tela,lci,cci,lba,cba,opcao,marq,i,mdata1,mdata2,;
      mcod_merc,mmerc,mtot_vlr,mtot_quantd,mtot_prunit,mger_vlr,mger_quantd,;
      mger_prunit,m_produto:={},mlucro,mdia,mop,mprg:='SAC5COM5',mc_real,mc_merc

PRIVATE mtraco,telaprint,mtit,mtipo,mpag

tela := SAVESCREEN(00,00,MAXROW(),79)

mtraco := REPLI('=',80)

lci := 14
cci := 05
lba := 21
cba := 48
*----------------------------------------------------------------------------
CLOSE ALL
USE sacmerc ALIAS merc SHARED NEW
USE sacmov ALIAS mov SHARED NEW
*----------------------------------------------------------------------------
WHILE .T.
        i := 0
        mcod_merc := SPACE(5)
        mmerc := SPACE(40)
        mlucro := 0
        mtot_vlr := 0
        mtot_quantd := 0
        mtot_prunit := 0
        mger_vlr := 0
        mger_quantd := 0
        mger_prunit := 0
        mop := 0
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mc_real := SPACE(1)
        mc_merc := SPACE(1)
        ASIZE(m_produto)
        mensagem('Preencha os Campos - <ESC>p/Abandonar')
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+5,cci+1 TO lci+5,cba-1
        @ lci+6,cci+1 SAY ' Lucro Geral '
        @ lci+6,cci+15 SAY ' Lucro p/Prod. '
        @ lci+6,cci+31 SAY ' Quantidade '
        setcor(1)
        janela(lci+3,cba,' Tipo de Classificacao ','*')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial___:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final_____:')
        @ lci+3,cci+1 TO lci+3,cba-1
        DEVPOS(lci+4,cci+2);DEVOUT('Custo REAL: [ ]  Custo MERCADORIA: [ ]')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+15 GET mc_real PICT '@!' VALID mc_real $ 'X, ' .AND. lim_get() WHEN men_get(lci+5,cci+15,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO REAL')
        @ lci+4,cci+38 GET mc_merc PICT '@!' VALID mc_merc $ 'X, ' .AND. lim_get() WHEN mc_real = ' ' .AND. men_get(lci+5,cci+38,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO MERCADORIA')
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                CLOSE ALL
                RETURN
        ENDIF
        IF EMPTY(mc_merc) .AND. EMPTY(mc_real)
                LOOP
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := mdata2 - mdata1
        ENDIF
        @ lci+6,cci+1 PROMPT ' Lucro Geral ' MESSAGE '** Classificacao pelo (%) de Lucro referente ao Lucro GERAL **'
        @ lci+6,cci+15 PROMPT ' Lucro p/Prod. ' MESSAGE '** Classificacao pelo (%) do procuto INDIVIDUAL **'
        @ lci+6,cci+31 PROMPT ' Quantidade ' MESSAGE '** Classificacao pela QUANTIDADE VENDIDA de cada produto **'
        SET INTEN ON
        MENU TO mop

        IF LASTKEY() = 27;LOOP;ENDIF
        ****************
        SELE('mov')
        ORDSETFOCUS(7)
        DBSETFILTER({|| (SUBSTR(documento,1,2) <> 'TR' .AND. ;
                        SUBSTR(documento,1,2) <> 'BL');
                        .AND. ent_sai = 'S' .AND. (data_s_e <= mdata2 .AND. ;
                        data_s_e >= mdata1) .AND. vl_vend > 0 .AND. tipo = '02'})
        GO TOP
        ****************
        opcao := op_simnao('S','Confirma a Impressao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                mensagem('Aguarde um momento coletando informacoes...')
                mcod_merc := codigo
                mmerc := produto
                WHILE ! EOF()
                        mger_vlr := mger_vlr + (quantd * vl_vend)
                        mger_quantd := mger_quantd + quantd
                        IF mc_real = 'X'
                                mger_prunit := mger_prunit + (quantd * pr_unit)
                        ELSE
                                mger_prunit := mger_prunit + (quantd * cust_mer)
                        ENDIF
                        SKIP
                ENDDO
                GO TOP
                WHILE ! EOF()
                        WHILE mcod_merc = codigo .AND. ! EOF()
                                mtot_vlr := mtot_vlr + (quantd * vl_vend)
                                mtot_quantd := mtot_quantd + quantd
                                IF mc_real = 'X'
                                        mtot_prunit := mtot_prunit + (quantd * pr_unit)
                                ELSE
                                        mtot_prunit := mtot_prunit + (quantd * cust_mer)
                                ENDIF
                                SKIP
                        ENDDO
                        IF mtot_prunit = 0
                                mlucro := 100
                        ELSE
                                mlucro := ((mtot_vlr-mtot_prunit)/mtot_prunit)*100
                        ENDIF
                        AADD(m_produto,{mcod_merc,mmerc,mtot_quantd,mtot_prunit/mtot_quantd,mtot_vlr/mtot_quantd,;
                                        mtot_vlr,(mtot_vlr/mger_vlr)*100,mtot_quantd/mdia,;
                                        mtot_vlr-mtot_prunit,mlucro,;
                                        ((mtot_vlr-mtot_prunit)/(mger_vlr-mger_prunit))*100})
                        mtot_vlr := 0
                        mtot_quantd := 0
                        mtot_prunit := 0
                        mcod_merc := codigo
                        mmerc := produto
                ENDDO
                IF mc_real = 'X'
                        DO CASE
                                CASE mop = 1
                                        ASORT(m_produto,,,{|x,y| x[11] > y[11]})
                                        mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Geral (CUSTO REAL)'
                                CASE mop = 2
                                        ASORT(m_produto,,,{|x,y| x[10] > y[10]})
                                        mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Individual (CUSTO REAL)'
                                CASE mop = 3
                                        ASORT(m_produto,,,{|x,y| x[3] > y[3]})
                                        mtit = 'CLASSIFICACAO PRODUTO pela quantidade (CUSTO REAL)'
                        ENDCASE
                ELSE
                        DO CASE
                                CASE mop = 1
                                        ASORT(m_produto,,,{|x,y| x[11] > y[11]})
                                        mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Geral (CUSTO MERCADORIA)'
                                CASE mop = 2
                                        ASORT(m_produto,,,{|x,y| x[10] > y[10]})
                                        mtit = 'CLASSIFICACAO PRODUTO pelo Lucro Individual (CUSTO MERCADORIA)'
                                CASE mop = 3
                                        ASORT(m_produto,,,{|x,y| x[3] > y[3]})
                                        mtit = 'CLASSIFICACAO PRODUTO pela quantidade (CUSTO MERCADORIA)'
                        ENDCASE
                ENDIF
                IF ! imp_arq('SMED.REL')
                        LOOP
                ENDIF
                mensagem('Espere o Final da Impressao OK - [ESC]Abandonar')
                mpag = 1
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)+' Intervalo de '+STRZERO(mdia,4)
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(impressora,'C')
                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                DEVPOS(PROW(),93);DEVOUT(' (%)')
                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                DEVPOS(PROW(),132);DEVOUT('part.')

                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                DEVPOS(PROW(),63);DEVOUT('Custo')
                DEVPOS(PROW(),73);DEVOUT('Venda')
                DEVPOS(PROW(),83);DEVOUT('das Venda')
                DEVPOS(PROW(),93);DEVOUT('Vendas')
                DEVPOS(PROW(),104);DEVOUT('p/dia')
                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                imprt(impressora,'N',1)
                DEVPOS(PROW(),00);DEVOUT(mtraco)
                i := 0
                FOR i = 1 TO LEN(m_produto)
                        INKEY(.3)
                        IF LASTKEY() = 27
                                SETPOS(24,00);DISPOUT('Mensagem: A Impressao foi cancelada pelo operador !!!')
                                DEVPOS(PROW()+2,00);DEVOUT('Impressao cancelada pelo operador !!!')
                                EXIT
                        ENDIF
                        imprt(impressora,'C',1)
                        DEVPOS(PROW(),00);DEVOUT(m_produto[i,1]+'-'+m_produto[i,2])
                        DEVPOS(PROW(),47);DEVOUTPICT(m_produto[i,3],'999999.99')
                        DEVPOS(PROW(),58);DEVOUTPICT(m_produto[i,4],'999,999.99')
                        DEVPOS(PROW(),68);DEVOUTPICT(m_produto[i,5],'999,999.99')
                        DEVPOS(PROW(),79);DEVOUTPICT(m_produto[i,6],'99,999,999.99')
                        DEVPOS(PROW(),93);DEVOUT(TRANSFORM(m_produto[i,7],'999.99'))
                        DEVPOS(PROW(),100);DEVOUT(TRANSFORM(m_produto[i,8],'99999.999'))
                        DEVPOS(PROW(),110);DEVOUT(TRANSFORM(m_produto[i,9],'999,999.99'))
                        DEVPOS(PROW(),121);DEVOUT(TRANSFORM(m_produto[i,10],'9999.99'))
                        DEVPOS(PROW(),131);DEVOUT(TRANSFORM(m_produto[i,11],'999.99'))
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(impressora,'C')
                                DEVPOS(PROW()+1,59);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),69);DEVOUT('Vlr.Medio')
                                DEVPOS(PROW(),83);DEVOUT('Vlr.Total')
                                DEVPOS(PROW(),93);DEVOUT(' (%)')
                                DEVPOS(PROW(),102);DEVOUT('Qtd.Med')
                                DEVPOS(PROW(),132);DEVOUT('part.')

                                DEVPOS(PROW()+1,00);DEVOUT('Produto')
                                DEVPOS(PROW(),49);DEVOUT('Quantd.')
                                DEVPOS(PROW(),63);DEVOUT('Custo')
                                DEVPOS(PROW(),73);DEVOUT('Venda')
                                DEVPOS(PROW(),83);DEVOUT('das Venda')
                                DEVPOS(PROW(),93);DEVOUT('Vendas')
                                DEVPOS(PROW(),104);DEVOUT('p/dia')
                                DEVPOS(PROW(),112);DEVOUT('Lucro R$')
                                DEVPOS(PROW(),121);DEVOUT('Lucro %')
                                DEVPOS(PROW(),130);DEVOUT('Lucro %')
                                imprt(impressora,'N',1)
                                DEVPOS(PROW(),00);DEVOUT(mtraco)
                                imprt(impressora,'C')
                        ENDIF
                NEXT
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo,mprg)
                ENDIF
                imprt(impressora,'N',1)
                DEVPOS(PROW(),00);DEVOUT(REPLI('-',80))
                imprt(impressora,'C',1)
                DEVPOS(PROW(),00);DEVOUT('T O T A L   G E R A L:')
                DEVPOS(PROW(),47);DEVOUTPICT(mger_quantd,'999999.99')
                DEVPOS(PROW(),58);DEVOUTPICT(mger_prunit / mger_quantd,'999,999.99')
                DEVPOS(PROW(),68);DEVOUTPICT(mger_vlr / mger_quantd,'999,999.99')
                DEVPOS(PROW(),79);DEVOUTPICT(mger_vlr,'99,999,999.99')
                DEVPOS(PROW(),93);DEVOUT(TRANSFORM(100,'999.99'))
                DEVPOS(PROW(),100);DEVOUT(TRANSFORM((mger_quantd/mdia),'99999.999'))
                DEVPOS(PROW(),110);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'999,999.99'))
                DEVPOS(PROW(),122);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(impressora,'N',1)
                EJECT
                SETPRC(00,00)
                SET PRINT TO
                SET DEVI TO SCREEN
                RESTSCREEN(00,00,MAXROW(),79,tela)
                IF mimp_tipo = 2
                        FCLOSE('HTI.REL')
                        MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                ELSEIF mimp_tipo = 1
                        FCLOSE('HTI.REL')
                        //MYRUN('DOSPRINTER '+IF(m_cfg[79]='2','/SEL2','/SEL')+' /DEL '+ALLTRIM('')+'HTI.REL')
                        MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO

