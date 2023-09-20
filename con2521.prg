MEMVAR getlist,mdata_sis,cod_operado,nivel_acess,memp_resa,mend_firm,mcid_firm,mfone_firm
***************************************************
*** CON252.PRG: Baixa GERAL de CREDITO
***************************************************

FUNCTION con2521()
***************
LOCAL MPRG:='CON2521',;
      tela,lin,mdata1,mdata2,mdatapg,opcao,;
      mquantd_doc:=0,mtotal:=0,mpoint,;
      lci,cci,lba,cba,li,ci,la,ca,i:=0,;
      mnumero,mduplicata,mvalor_dup,mcliente,mtip_cli,mcod_c,;
      memissao,mcod_vend,mnum_ped,mbanco,mcomissao,mobs,mvenc,mcodven:=0,m_parcela:={},;
      mqtd_parc:=0,m_dias:={},mtela_dup,mno_dup,mdata_ini,mtipo_doc:='  ',;
      mobs_dup,mobs_dup1,mobs_dup2,mobs_dup3,;
      mpos_ini:=0,mtot_valor:=0,mTtipo:=SPACE(2),mTnum_banco:=0,mTagencia:=SPACE(8),;
      mTc_c:=SPACE(13),mTduplicata:=SPACE(12),mTemissao,mTvenc:=CTOD("  /  /  "),;
      mTvalor:=0,mTbanco:='C',mTcorrente:=SPACE(35),mTobs,mdesc_cart:=0,;
      mprazo_cart:=0,mcartao:=SPACE(20),mat_dup:={},;
      mobs1

PRIVATE m_dupr:={},m_pos:={},m_pag:={},m_cax:={},mcod_cli,cons_dupr:={}

IF ! ver_nivel(mprg,'CONTA A RECEBER (BAIXA GERAL CREDITO)','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(00,05,33,90,' Baixa de Documentos GERAL (CREDITO)')

lci := cci := 00
lba := 08
cba := 85

li := 07
ci := 01
la := 32
ca := 82

lin=1
mduplicata := SPACE(12)
WHILE .T.
        limpa(lci,cci,lba,cba)
        limpa(li,ci,la,ca)
        ASIZE(m_parcela,0)
        ASIZE(m_dias,0)
        ASIZE(m_pag,0)
        ASIZE(m_cax,0)
        mqtd_parc := 0
        mdata1 := mdata2 := CTOD('  /  /  ')
        mdatapg := mdata_sis
        mobs1:= SPACE(60)
        mcod_cli = 0
        Mensagem('Digite a data da BAIXA GERAL DOS CHEQUES. [ESC] Abandona.')
        DEVPOS(lci+2,cci+1);DEVOUT('Digite a Data Baixa.....:')
        @ lci+6,cci TO lci+6,cba
        DEVPOS(lci+1,cci+1);DEVOUT('Digite o Periodo........:          a')
        DEVPOS(lci+3,cci+1);DEVOUT('Digite o Cod.Cliente....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Digite o Cod.Vendedor...:')
        @ lci+1,cci+27 GET mdata1       //VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+1,COL()+3 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ lci+2,cci+27 GET mdatapg VALID IF(mdatapg < mdata1,.F.,.T.)
        @ lci+3,cci+27 GET mcod_cli pict "99999" VALID ver_cli(mcod_cli,lci+3,cci+33)  // WHEN men_get(lci+4,cci+27,'Informe o cliente que deseja ou nao informe p/imprimir todos')
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
        mquantd_doc := mtotal := 0

        mensagem('Aguarde o Coletando dados p/ impressao...')
        ************************************************************
        cComm  := "SELECT * FROM saccred WHERE venc >= "+sr_cdbvalue(mdata1)+" AND venc <= "+sr_cdbvalue(mdata2)+ " AND datpag IS NULL"
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        ENDIF
        IF ! EMPTY(mcodven)
                ccomm := ccomm + " AND vendedor = "+sr_cdbvalue(STRZERO(mcodven,3))
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
        ASIZE(m_dupr,0)
        ASIZE(m_pos,0)
        i:=0
        FOR i = 1 TO LEN(aret)
                AADD(m_dupr,aret[i,1]+' '+aret[i,7]+' '+aret[i,28]+' '+aret[i,2]+' '+aret[i,4]+' '+DTOC(aret[i,11])+' '+TRANSFORM(aret[i,19],'999,999.99')+'                                 ')
                AADD(m_pos,{aret[i,65],' ',aret[i,19],0,0,aret[i,31],aret[i,4],aret[i,11]})
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
        @ li+2,ci+1 TO li+2,ca-1
        @ la-2,ci+1 TO la-2,ca-1
        setcor(1)
        DEVPOS(la-1,ci+1);DEVOUT('Qtd.Doc.:                                   Total R$:')
        opcao := op_simnao('N','Deseja marcar todas os Documentos: ')
        IF opcao = 'S'
                i := 0
                FOR i = 1 TO LEN(m_dupr)
                        m_dupr[i] := SUBSTR(m_dupr[i],1,76)+' X'
                        m_pos[i,2] := 'X'
                        mquantd_doc ++
                        mtotal := mtotal + m_pos[i,3]
                NEXT
        ENDIF
        mpoint := 0
        WHILE .T.
                setcor(3)
                DEVPOS(la-1,ci+11);DEVOUT(TRANSFORM(mquantd_doc,'99999'))
                DEVPOS(la-1,ci+58);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                setcor(1)
                mpoint:=ACHOICE(li+3,ci+1,la-3,ca-1,m_dupr,,,mpoint+1)
                DO CASE
                        CASE LASTKEY() = 13
                                IF m_pos[mpoint,2] = 'X'
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,76)+'  '
                                        m_pos[mpoint,2] := ' '
                                        mquantd_doc --
                                        mtotal := mtotal - m_pos[mpoint,3]
                                ELSE
                                        m_dupr[mpoint] := SUBSTR(m_dupr[mpoint],1,76)+' X'
                                        m_pos[mpoint,2] := 'X'
                                        mquantd_doc ++
                                        mtotal := mtotal + m_pos[mpoint,3]
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

        opcao := op_simnao('S','Confirma os DADOS ? [S/n]:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mquantd_doc:= mtotal := 0
        mensagem('Aguarde o final do processo...')
        i := 0
        FOR i = 1 TO LEN(m_dupr)
                prog_imp(i,aret[i,4])
                IF m_pos[i,2] <> 'X'
                        LOOP
                ENDIF
                AADD(m_pag,aret[i,7]+' '+aret[i,2]+aret[i,4]+' '+DTOC(aret[i,10])+' '+DTOC(aret[i,11])+' '+TRANSFORM(aret[i,19],'99,999.99')+' '+TRANSFORM(0,'9999.99')+' '+TRANSFORM(aret[i,19],'99,999.99')+'  '+aret[i,16]+' *')
                AADD(m_cax,{aret[i,7],aret[i,2],aret[i,4],aret[i,11],aret[i,19],aret[i,19],aret[i,32],aret[i,30]})
                sr_getconnection():exec("UPDATE saccred SET datpag = " + sr_cdbvalue(mdata_sis)  +;
                        ",tip_pg = " + sr_cdbvalue('  ')+;
                        ",vlpago = " + sr_cdbvalue(aret[i,19])  +;
                        ",pago   = " + sr_cdbvalue('B')  +;
                        ",operador = " + sr_cdbvalue(cod_operado)+;
                        ",conta    = " + sr_cdbvalue('*')+;
                        ",mov_cx   = " + sr_cdbvalue('M')+;
                        ",hora_bx  = " + sr_cdbvalue(TIME())+;
                        ",obs1 = " + sr_cdbvalue(mobs1)+;
                        " WHERE sr_recno = " + sr_cdbvalue(m_pos[i,1]),,.f.)
                mquantd_doc ++
                mtotal := mtotal + aret[i,19]

                mnumero     := aret[i,3]
                mduplicata  := aret[i,4]
                mvalor_dup  := aret[i,5]
                mcod_c      := aret[i,7]
                mcliente    := aret[i,8]
                mtip_cli    := aret[i,6]
                memissao    := aret[i,10]
                mcod_vend   := aret[i,30]
                mnum_ped    := aret[i,31]
                mbanco      := aret[i,16]
                mcomissao   := aret[i,32]
                mobs        := aret[i,46]
                mvenc       := aret[i,11]

                mquantd_doc ++
                mtotal := mtotal + m_pos[i,5]
        NEXT
        sr_getconnection():exec("COMMIT",,.f.)
        atencao('Esta operacao foi realizada com SUCESSO.')
        RESTSCREEN(00,00,24,79,mtela_dup)
ENDDO
wvw_lclosewindow()
RETURN NIL

********************************* F I M ********************************







