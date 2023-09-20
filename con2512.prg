MEMVAR getlist,mdata_sis,cod_operado,nivel_acess,memp_resa,mend_firm,mcid_firm,mfone_firm
***************************************************
*** CON252.PRG: Baixa GERAL PARCIAL de DOCUMENTOS (Receber)
***************************************************

FUNCTION con2512()
***************
LOCAL MPRG:='CON2512',;
      tela,lin,mvlpago,mdata1,mdata2,mdatapg,msele,morde,opcao,mbaixa,;
      mdias_atras:=0,mquantd_doc:=0,mtot_multa:=0,mtotal:=0,mpoint,mvlr_pg:=0,mresta:=0,;
      lci,cci,lba,cba,li,ci,la,ca,i:=0,mjuros:=0,mmulta:=0,;
      mtipo,mnumero,mduplicata,mvalor_dup,mcliente,mtip_cli,mcod_c,;
      memissao,mcod_vend,mnum_ped,mbanco,mcomissao,mobs,mvenc,mcodven:=0,m_parcela:={},;
      mqtd_parc:=0,m_dias:={},mtela_dup,mno_dup,mdata_ini,mtipo_doc:='  ',;
      mobs_dup,mobs_dup1,mobs_dup2,mobs_dup3,;
      mpos_ini:=0,mtot_valor:=0,mTtipo:=SPACE(2),mTnum_banco:=0,mTagencia:=SPACE(8),;
      mTc_c:=SPACE(13),mTduplicata:=SPACE(12),mTemissao,mTvenc:=CTOD("  /  /  "),;
      mTvalor:=0,mTbanco:='C',mTcorrente:=SPACE(35),mTobs,mdesc_cart:=0,;
      mprazo_cart:=0,mcartao:=SPACE(20),mat_dup:={},mcod_cartao,mvalor,mcom_juros:='S',;
      mobs1,mforn_desp,mbaix_parc

PRIVATE m_dupr:={},m_pos:={},m_pag:={},m_cax:={},mcod_cli,cons_dupr:={},mcod_forn

*------------------------------------------------------------------------------------
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
IF ! ver_nivel(mprg+'MV','CONTA A RECEBER (BAIXA PARCIAL GERAL DOCUMENTOS) P/MOVIMENTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(00,05,33,90,'CONTA A RECEBER (BAIXA PARCIAL GERAL DOCUMENTOS) P/MOVIMENTO')

lci := cci := 00
lba := 08
cba := 85

li := 07
ci := 01
la := 32
ca := 82

lin=1
mduplicata := SPACE(12)
*****************
SELE('dupr');ORDSETFOCUS(4)
*****************
msele := SELE()
morde := INDEXORD()
WHILE .T.
        limpa(lci,cci,lba,cba)
        limpa(li,ci,la,ca)
        ASIZE(m_parcela,0)
        ASIZE(m_dias,0)
        ASIZE(m_dupr,0)
        ASIZE(m_pos,0)
        ASIZE(m_pag,0)
        ASIZE(m_cax,0)
        mtipo := mvlr_pg := mresta := mqtd_parc := 0
        mbaixa := 'N'
        mcom_juros := 'S'
        mdata1 := mdata2 := CTOD('  /  /  ')
        mdatapg := mdata_sis
        mobs1:= SPACE(60)
        mcod_cli = 0
        Mensagem('Digite a data da BAIXA GERAL DOS CHEQUES. [ESC] Abandona.')
        DEVPOS(lci+1,cci+1);DEVOUT('Digite o Periodo........:          a')
        DEVPOS(lci+3,cci+1);DEVOUT('Digite o Cod.Cliente....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Digite o Cod.Vendedor...:')
        DEVPOS(lci+5,cci+1);DEVOUT('Com Juros [S/N]..........:')
        @ lci+1,cci+27 GET mdata1       //VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,COL()+3 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ lci+3,cci+27 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,lci+3,cci+33) WHEN men_get(lci+4,cci+27,'Informe o cliente que deseja ou nao informe p/imprimir todos')
        @ lci+4,cci+27 GET mcodven pict "999" VALID lim_get() .AND. ven(mcodven,ci+4,cci+33) WHEN EMPTY(mcod_cli) .AND. men_get(lci+5,cci+27,'Informe o Cod.Vendedor que deseja ou nao informe p/imprimir todos')
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_cli);ver_cli(mcod_cli,lci+3,cci+33);ENDIF
        IF EMPTY(mdata1)
                mdata1 := CTOD('01/01/90')
                mdata2 := mdata_sis+365
                @ lci+1,cci+27 SAY mdata1
                @ lci+1,COL()+3 SAY mdata2
        ENDIF
        op_tela(10,10,14,83,'OPCOES DE DOCUMENTOS','*')
        botao1(01,01,03,12)
        botao1(01,14,03,25)
        botao1(01,27,03,38)
        botao1(01,40,03,53)
        botao1(01,55,03,71)
        @ 02,02 PROMPT '   GERAL  '
        @ 02,15 PROMPT '  CHEQUES '
        @ 02,28 PROMPT ' CARTOES '
        @ 02,41 PROMPT '  DUPLICATA '
        @ 02,56 PROMPT ' FINANCIAMENTO '
        SET INTEN ON
        MENU TO mtipo
        wvw_lclosewindow()
        IF mtipo = 3
                mcod_cartao := 0
                op_tela(12,21,14,60,'CODIGO DO CARTAO')
                DEVPOS(01,00);DEVOUT('Cod.Cartao:')
                @ 01,COL()+1 GET mcod_cartao PICT '999' VALID ver_cartao(mcod_cartao,01,COL()+1)
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        LOOP
                ENDIF
        ENDIF
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mjuros := mmulta := mquantd_doc := mtot_multa := mtotal := 0

        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************
        cComm  := "SELECT * FROM sacdupr WHERE venc >= "+sr_cdbvalue(mdata1)+" AND venc <= "+sr_cdbvalue(mdata2)+ " AND datpag IS NULL"
        ccomm := ccomm + " AND baix_parc IS NULL"
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        ENDIF
        IF ! EMPTY(mcodven)
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(STRZERO(mcodven,3))
        ENDIF
        IF mtipo = 2
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('CH')
        ELSEIF mtipo = 3
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('CT')
                IF ! EMPTY(mcod_cartao)
                       ccomm := ccomm + " AND numero = "+sr_cdbvalue(STRZERO(mcod_cartao,3))
                ENDIF
        ELSEIF mtipo = 4
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('DU')
        ELSEIF mtipo = 5
                ccomm := ccomm + " AND tipo = "+sr_cdbvalue('FI')
        ENDIF
        ccomm := ccomm + " ORDER BY fornec,venc,duplicata"
        aret:={}
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                atencao('Nao existe nenhum Documento a ser baixado')
                LOOP
        ENDIF
        mcod_vend := aret[1,30]
        FOR i = 1 TO LEN(aret)
                mbaixa := 'S'
                mdias_atras := mdatapg-(aret[i,11]+m_set[1,40])
                mjuros := mmulta := 0
                IF mdias_atras > 0 .AND. mcom_juros = 'S'
                        mdias_atras := mdatapg-aret[i,11]
                        mmulta := aret[i,19] * ((m_set[1,9])/100)
                        mjuros := (aret[i,19] * ((mdias_atras*m_set[1,10])/100))
                ENDIF
                mvlpago:=aret[i,19]+mjuros+mmulta
                AADD(m_dupr,aret[i,1]+' '+aret[i,7]+' '+aret[i,28]+' '+aret[i,2]+' '+aret[i,4]+' '+DTOC(aret[i,11])+' '+TRANSFORM(aret[i,19],'999,999.99')+' '+TRANSFORM(mjuros+mmulta,'999,999.99')+' '+TRANSFORM(mvlpago,'999,999.99')+' '+aret[i,28])
                AADD(m_pos,{aret[i,65],' ',aret[i,19],mjuros+mmulta,mvlpago,aret[i,31],aret[i,4],aret[i,11]})
        NEXT
        IF LEN(m_dupr) = 0
                atencao('Nao existe documento neste periodo')
                LOOP
        ENDIF
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        botao(li,ci,la,ca)
        setcor(3)
        DEVPOS(li+1,ci+01);DEVOUT('Emp.')
        DEVPOS(li+1,ci+05);DEVOUT('Client')
        DEVPOS(li+1,ci+14);DEVOUT('Documento')
        DEVPOS(li+1,ci+27);DEVOUT('Vencimen')
        DEVPOS(li+1,ci+41);DEVOUT('Valor')
        DEVPOS(li+1,ci+47);DEVOUT('Juros+Mult')
        DEVPOS(li+1,ci+59);DEVOUT('Vlr.Total')
        @ li+2,ci+1 TO li+2,ca-1
        @ la-2,ci+1 TO la-2,ca-1
        setcor(1)
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Doc.:       Multa/Juros R$:             Total R$:')
        IF EMPTY(mvlr_pg)
                opcao := op_simnao('N','Deseja marcar todas os Documentos: ')
        ENDIF
        IF opcao = 'S' .OR. ! EMPTY(mvlr_pg)
                i := 0
                FOR i = 1 TO LEN(m_dupr)
                        m_dupr[i] := SUBSTR(m_dupr[i],1,70)+' X'
                        m_pos[i,2] := 'X'
                        mquantd_doc ++
                        mtot_multa := mtot_multa + m_pos[i,4]
                        mtotal := mtotal + m_pos[i,5]
                NEXT
        ENDIF
        mpoint := 0
        WHILE .T.
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mquantd_doc,'99999'))
                DEVPOS(la-1,ci+33);DEVOUT(TRANSFORM(mtot_multa,'999,999.99'))
                DEVPOS(la-1,ci+58);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                setcor(1)
                mpoint:=ACHOICE(li+3,ci+1,la-3,ca-1,m_dupr,,,mpoint+1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF m_pos[mpoint,2] = 'X'
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,70)+'  '
                                        m_pos[mpoint,2] := ' '
                                        mquantd_doc --
                                        mtot_multa := mtot_multa - m_pos[mpoint,4]
                                        mtotal := mtotal - m_pos[mpoint,5]
                                ELSE
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,70)+' X'
                                        m_pos[mpoint,2] := 'X'
                                        mquantd_doc ++
                                        mtot_multa := mtot_multa + m_pos[mpoint,4]
                                        mtotal := mtotal + m_pos[mpoint,5]
                                ENDIF
                        CASE LASTKEY() = 27
                                EXIT
                ENDCASE
        ENDDO
        i := 0
        FOR i = 1 TO LEN(m_dupr)
                IF m_pos[i,2] = 'X'
                        EXIT
                ENDIF
        NEXT
        IF i > LEN(m_dupr) .OR. m_pos[i,2] <> 'X'
                atencao('Nao tem nenhum Documento marcado')
                LOOP
        ENDIF

        op_tela(10,10,12,80,'DADOS DA BAIXA PARCIAL')
        WHILE .T.
                mcod_forn  := 0
                mbaix_parc := mdata_sis
                mobs       := SPACE(60)
                DEVPOS(00,00);DEVOUT('Codigo Fornecedor:')
                DEVPOS(01,00);DEVOUT('Data da Baixa....:')
                DEVPOS(02,00);DEVOUT('OBSERVACAO.......:')
                @ 00,19 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,00,25))
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
                v_fornece(mcod_forn,00,25)
                mforn_desp := forn->razao
                @ 00,25 GET mforn_desp PICT '@!' WHEN ! EMPTY(mcod_forn) VALID IF(EMPTY(mforn_desp),.F.,.T.)
                @ 01,19 GET mbaix_parc WHEN ! EMPTY(mcod_forn)  VALID IF(EMPTY(mbaix_parc),.F.,.T.)
                @ 02,19 GET mobs WHEN ! EMPTY(mcod_forn)
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma os DADOS:')
                IF opcao = 'S'
                        EXIT
                ENDIF
        ENDDO
        wvw_lclosewindow()
        opcao := op_simnao('S','Confirma as BAIXAS PARCIAL:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mquantd_doc:=mtot_multa := mtotal := 0
        mensagem('Aguarde o final do processo...')
        i := 0
        FOR i = 1 TO LEN(m_dupr)
                prog_imp(i,aret[i,4])
                IF m_pos[i,2] <> 'X'
                        LOOP
                ENDIF
                sr_getconnection():exec("UPDATE sacdupr SET tip_pg = 'BP'"+;
                        ",cod_forn = " + sr_cdbvalue(STRZERO(mcod_forn,4))  +;
                        ",forn_desp = " + sr_cdbvalue(mforn_desp)  +;
                        ",baix_parc = " + sr_cdbvalue(mbaix_parc)  +;
                        ",oper_parc = " + sr_cdbvalue(cod_operado)  +;
                        ",obs    = " + sr_cdbvalue(mobs)+;
                        " WHERE sr_recno = " + sr_cdbvalue(m_pos[i,1]),,.f.)
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        atencao('Esta operacao foi realizada com SUCESSO.')
        *****************
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        *****************
        DBCOMMITALL()
        RESTSCREEN(00,00,24,79,mtela_dup)
ENDDO
wvw_lclosewindow()
RETURN NIL

********************************* F I M ********************************







