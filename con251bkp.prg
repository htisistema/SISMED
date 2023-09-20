***
*** CON251.PRG: Baixa INDIVIDUAL de Duplicatas (Receber)
***             ALTERACAO, ESTORNO E IMPRESSAO
*********************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado,mmens,mcgc_firm,minsc_firm,memp_resa,;
       mend_firm,mcid_firm,mfone_firm

FUNCTION con251(cx,mtp,mtp_)
***************
LOCAL MPRG:='CON251',oWindow,;
      tela,lin,mcheque,mdatpag,mvlpago,mnota,mtipo_comp,;
      mcod_vend,mforn_aux,opcao,mbanco,lc,cc,lb,cb,mcomissao,mnumero,;
      pconta,mtip_cli,mvalor_dup,mcliente,memissao,mvenc,mnum_ped,mvalor_cont,;
      mdias_atras,mjuros,mmulta,mcont_doc,mtotal_doc,m_dupr:={},m_pos:={},m_dup:={},m_po:={},;
      li,ci,la,ca,tela1,point,mqtd_doc,mqtd_dias,mtraco:=REPLI('=',80),;
      mordem:=0,mcod_ven,mnum_banco,magencia,mc_c,mcorrente,mextenso,mlinha,mlin,;
      mtel,mnome_cli := SPACE(40),mtip_pg:='  ',mtela_aut,mtipo_aut,;
      mdoc_tran,mdat_tran,mlimp_cli:=' ',mdescri1:=SPACE(20),mdescri2:=SPACE(20),;
      mmotivo:=SPACE(30),mtel_mot,mlin1,mlin2,mlin3,mlin4,mlin5,;
      lci := 00,cci := 00,lba := 15,cba := 79,mtroco:=0,stop:=' ',cons_cli:={},mtipo_dup:=' '

local nErr, nPos,;
        vEmp := {},aret:={},;
        nCnn,oSql,;
        cComm, apCode,m_param:={}

PRIVATE mcod_cli,mtipo,mduplicata,mfornec,mvalor,mcodemp:=SPACE(3),mcnpjcpf:=SPACE(14),malias,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mobs,mobs1,mtp_tp,cons_dupr := {},cons_ped:={}
*------------------------------------------------------------------------------------
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
setcor(1)
mtp_tp := mtp_
IF mtp_ = NIL
        IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
        IF mtp = NIL
                IF cx <> NIL
                        IF ! ver_nivel(mprg+'CX','CONTA A RECEBAR (BAIXA INDIVIDUAL DOCUMENTOS CAIXA)','135',nivel_acess,,'AMBIE')
                                RETURN NIL
                        ENDIF
                        IF m_set[1,61] = 'S'
                                IF ! cx_fechado()
                                        RETURN NIL
                                ENDIF
                        ENDIF
                ELSE
                        IF ! ver_nivel(mprg+'MV','CONTA A RECEBER (BAIXA INDIVIDUAL DOCUMENTOS MOVIMENTO)','135',nivel_acess,,'AMBIE')
                                RETURN NIL
                        ENDIF
                ENDIF
        ELSEIF mtp = 'S'
                IF ! ver_nivel(mprg+'ES','CONTA A RECEBER (ESTORNO DE DOCUMENTOS RECEBIDO)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'E'
                IF ! ver_nivel(mprg+'EX','CONTA A RECEBER (EXCLUSAO DE DOCUMENTOS A RECEBER)','1',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'A'
                IF ! ver_nivel(mprg+'AL','CONTA A RECEBER (ALTERACAO DE DOCUMENTOS A RECEBER)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'P'
                IF ! ver_nivel(mprg+'PR','CONTA A RECEBER (PROCESSO DE DOCUMENTOS A RECEBER)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'I'
                IF ! ver_nivel(mprg+'IMP','CONTA A RECEBER (IMPRESSAO DE DOCUMENTOS A RECEBER)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ENDIF
        malias := 'dupr'
ELSE
        IF ! AbriArq('saccred','cred');RETURN NIL;ENDIF
        IF mtp = NIL
                IF ! ver_nivel(mprg+'MV'+mtp_,'CREDITO CLIENTE (BAIXA INDIVIDUAL DOCUMENTOS MOVIMENTO)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'S'
                IF ! ver_nivel(mprg+'ES'+mtp_,'CREDITO CLIENTE (ESTORNO DE DOCUMENTOS RECEBIDO)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'E'
                IF ! ver_nivel(mprg+'EX'+mtp_,'CREDITO CLIENTE (EXCLUSAO DE DOCUMENTOS A RECEBER)','1',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ELSEIF mtp = 'A'
                IF ! ver_nivel(mprg+'AL'+mtp_,'CREDITO CLIENTE (ALTERACAO DE DOCUMENTOS A RECEBER)','135',nivel_acess,,'AMBIE')
                        RETURN NIL
                ENDIF
        ENDIF
        malias := 'cred'
ENDIF
lc := 1
cc := 0
lb := 19
cb := 79

li := ci := 0
la := 21
ca := 63

lin=1
mcod_cli := mforn_aux := 0
mduplicata := SPACE(12)
SET KEY 275 TO cons_doc()
IF mtp_ <> NIL
        op_tela(03,10,27,90," CREDITO CLIENTE "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ELSEIF mtp = 'S'
        op_tela(03,10,27,90," Estorno de Documentos INDIVIDUAL "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ELSEIF mtp = 'E'
        op_tela(03,10,23,90," Exclusao de Documentos INDIVIDUAL "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'),'*')
ELSEIF mtp = NIL
        op_tela(03,10,27,90," Baixa de Documentos INDIVIDUAL "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ELSEIF mtp = 'A'
        op_tela(03,10,27,90," Alteracao de Documentos a Receber "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ELSEIF mtp = 'P'
        op_tela(03,10,27,90," PROCESSO de Documentos a Receber "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ELSEIF mtp = 'I'
        op_tela(03,10,27,90," IMPRESSAO de Documentos a Receber "+IF(cx<>NIL,' *** CAIXA ***',' *** MOVIMENTO ***'))
ENDIF
WHILE .T.
******** VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'J'
****************************************************
        exibi_prg(mprg)
        *****************
        SELE(malias);ORDSETFOCUS(1)
        *****************
        limpa(lc,cc,lb,cb)
        DEVPOS(lc,cc+1);DEVOUT('Numero Documento.........:')
        DEVPOS(lc+1,cc+1);DEVOUT('Codigo Cliente...........:')
        DEVPOS(lc+1,cc+35);DEVOUT('CPF/CNPJ: ')
        DEVPOS(lc+2,cc+1);DEVOUT('Tipo do Documento........:')
        DEVPOS(lc+3,cc+1);DEVOUT('Numero...................:')
        //DEVPOS(lc+4,cc+1);DEVOUT('Numero Documento.........:')
        DEVPOS(lc+4,cc+1);DEVOUT('Numero Pedido............:')
        DEVPOS(lc+5,cc+1);DEVOUT('Data Emissao.............:')
        DEVPOS(lc+6,cc+1);DEVOUT('Data Vencimento..........:')
        DEVPOS(lc+6,cc+42);DEVOUT('Venc.Anterior:')
        DEVPOS(lc+7,cc+1);DEVOUT('Dias em Atraso...........:')
        DEVPOS(lc+7,cc+1);DEVOUT('Dias em Atraso...........:')
        DEVPOS(lc+8,cc+1);DEVOUT('Data Pagamento...........:')
        DEVPOS(lc+9,cc+1);DEVOUT('Valor Documento..........:')
        DEVPOS(lc+10,cc+1);DEVOUT('Multa (%) '+TRANSFORM(m_set[1,9],'99.99')+' .......R$:')
        DEVPOS(lc+11,cc+1);DEVOUT('Juros ao dia (%) '+TRANSFORM(m_set[1,10],'99.99')+' R$:')
        DEVPOS(lc+12,cc+1);DEVOUT('Valor a Pagar............:')
        DEVPOS(lc+13,cc+1);DEVOUT('Tipo de Operacao.........:')
        DEVPOS(lc+14,cc+1);DEVOUT('Numero Cheque............:')
        DEVPOS(lc+15,cc+1);DEVOUT('Pag.[B]anco [C]arteira...:')
        DEVPOS(lc+16,cc+1);DEVOUT('Obs.Incl.:')
        DEVPOS(lc+17,cc+1);DEVOUT('Obs.Baixa:')
        IF mtp = 'I'
                DEVPOS(lc+18,cc+1);DEVOUT('Tipo Dup.[S]istema [P]re-Impressa:')
                DEVPOS(lc+19,cc+1);DEVOUT('Quantidade de Copias.............:')
        ENDIF

        Mensagem('Informe o Cod.do CLIENTE - [F1]p/Consultar Cliente - [ALT+R]Consulta de Documentos - [ENTER]p/informa o tipo de DOCUMENTO - <ESC>p/abandonar')
        mnota := SPACE(8)
        mcnpjcpf := SPACE(14)
        mcliente := SPACE(40)
        mtipo_comp := mtipo := SPACE(2)
        mcod_vend := SPACE(3)
        mduplicata := SPACE(12)
        mcheque=SPACE(8)
        mbanco := SPACE(1)
        mnumero := SPACE(3)
        mobs := mobs1:= SPACE(60)
        mmotivo:=SPACE(30)
        pconta := mlimp_cli := ' '
        mdias_atras := mqtd_dias := mqtd_doc := mvalor_dup := mcomissao := 0
        mtip_pg := '  '
        @ lc+1,cc+28 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lc+1,cc+35)
        @ lc+1,cc+45 GET mcnpjcpf PICT '99999999999999' WHEN EMPTY(mcod_cli) VALID v_cnpjcpf(mcnpjcpf)
        READ
        IF ! EMPTY(mcnpjcpf)
                mcod_cli := VAL(cli->cod_cli)
                ver_cli(mcod_cli,lc+1,cc+35)
        ENDIF
        @ lc+2,cc+28 GET mtipo PICT '@!' VALID ver_tipdc(mtipo,'*') WHEN EMPTY(mcod_cli)
        @ lc+3,cc+28 GET mnumero PICT '@!' WHEN mtipo <> 'DU' .AND. ! EMPTY(mtipo) .AND.  EMPTY(mcod_cli)
        @ lc+4,cc+28 GET mduplicata PICT '@!' WHEN ! EMPTY(mtipo) .AND.  EMPTY(mcod_cli)
        READ
        IF LASTKEY()=27         // .OR. mduplicata := SPACE(12)
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_cli)
                setcor(3)
                DEVPOS(lc+1,cc+28);DEVOUT(STRZERO(mcod_cli,5))
                setcor(1)
                ver_cli(mcod_cli,lc+1,cc+35)
                ver_aniv(mcod_cli)
                IF ver_serie()='141237'
                        mordem := '6'
                ELSE
                        mordem := '2'
                        mordem := mensagem1('Tipo de Ordem [2] DOCUMENTO - [6] VENCIMENTO - [3] VALOR:','2','2,6,3')
                ENDIF
                mtotal_doc := mcont_doc := 0
                ASIZE(m_dupr,0)
                ASIZE(m_pos,0)

                mensagem('Aguarde o Coletando dados p/ impressao...')
                ************************************************************
                IF mtp_tp = NIL
                        cComm  := "SELECT * FROM sacdupr WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
                ELSE
                        cComm  := "SELECT * FROM saccred WHERE fornec = "+sr_cdbvalue(STRZERO(mcod_cli,5))
                ENDIF

                IF mtp = 'S'
                        ccomm := ccomm + " AND datpag IS NOT NULL"
                ELSEIF mtp = 'A' .OR. mtp = NIL .OR. mtp = 'P' .OR. mtp = 'E' .OR. mtp = 'I'
                        ccomm := ccomm + " AND datpag IS NULL"
                ENDIF
                IF mordem = '6'
                        ccomm := ccomm + " ORDER BY venc,duplicata"
                ELSEIF mordem = '2'
                        ccomm := ccomm + " ORDER BY tipo,duplicata,venc"
                ELSE
                        ccomm := ccomm + " ORDER BY valor,duplicata"
                ENDIF
                aret:={}
                sr_getconnection():exec(ccomm,,.t.,@aret)
                IF LEN(aret) = 0
                        atencao('Nao existe nenhum Documento a ser baixado')
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(lc+1,cc+28);DEVOUT(STRZERO(mcod_cli,5))
                DEVPOS(lc+1,cc+35);DEVOUT(aret[1,1])
                setcor(1)
                mcliente := aret[1,1]
                FOR i = 1 TO LEN(aret)
                                     //  tipo        duplicata       tip_pg         numero             venc                      valor                             conta                    data_fund                     emp.
                        AADD(m_dupr,' '+aret[i,2]+' '+aret[i,4]+' '+aret[i,26]+'  '+aret[i,3]+'   '+DTOC(aret[i,11])+'   '+TRANSFORM(aret[i,19],'999,999.99')+' '+aret[i,28]+' '+IF(! EMPTY(aret[i,43]),'S/F','   ')+' '+aret[i,1])
                        //AADD(m_pos,aret[i,10])
                        mcont_doc ++
                        mtotal_doc := mtotal_doc + aret[i,19]
                NEXT

                op_tela(li,ci,la+2,ca,'Documentos do Cliente')
                mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                setcor(3)
                DEVPOS(li+1,ci+01);DEVOUT('Documento')
                DEVPOS(li+1,ci+18);DEVOUT('Op')
                DEVPOS(li+1,ci+21);DEVOUT(' No.')
                DEVPOS(li+1,ci+27);DEVOUT('Vencimento')
                DEVPOS(li+1,ci+44);DEVOUT('Valor')
                DEVPOS(li+1,ci+56);DEVOUT('Emp')
                @ li+2,ci+1 TO li+2,ca-1
                @ la-2,ci+1 TO la-2,ca-1
                DEVPOS(la-1,ci+1);DEVOUT('Quantidade:')
                DEVPOS(la-1,ci+24);DEVOUT('Total:')
                setcor(1)
                DEVPOS(la-1,ci+13);DEVOUT(STRZERO(mcont_doc,4))
                DEVPOS(la-1,ci+31);DEVOUT(TRANSFORM(mtotal_doc,'9,999,999.99'))
                point := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupr,,,point)
                wvw_lclosewindow()
                DO CASE
                        CASE LASTKEY()=27
                                LOOP
                        CASE LASTKEY() = 13
                                mjuros := mmulta := 0
                                mdatpag:=mdata_sis
                                mcodemp := aret[point,1]
                                mvlpago:=aret[point,19]
                                mbanco := SUBSTR(aret[point,16],1,1)
                                mcomissao := aret[point,32]
                                mobs := aret[point,46]
                                mobs1 := aret[point,47]
                                IF aret[point,28] = '*'
                                        mdias_atras := mdatpag - aret[point,11]
                                ELSE
                                        mdias_atras := mdatpag - (aret[point,11]+m_set[1,40])
                                ENDIF
                                IF mdias_atras > 0 .AND. mtp_ = NIL
                                        mdias_atras := mdatpag - aret[point,11]
                                        mmulta := iat(aret[point,19] * ((m_set[1,9])/100),2)
                                        mjuros := iat((aret[point,19] * ((mdias_atras*m_set[1,10])/100)),2)
                                ENDIF
                                mvlpago := iat(aret[point,19],2)+mjuros+mmulta
                                mduplicata := aret[point,4]
                                mtipo := aret[point,2]
                                setcor(3)
                                @ lc+1,cc+35 SAY aret[point,8]
                                WVW_DrawLabel(,lc,cc+28,aret[point,4]+aret[point,28],,,,, 'Arial Black',20,20,,,,,)
                                @ lc+2,cc+28 SAY aret[point,2]
                                @ lc+3,cc+28 SAY aret[point,3]
                                //@ lc+4,cc+28 SAY aret[point,4]+aret[point,28]
                                @ lc+4,cc+28 SAY aret[point,31]
                                @ lc+5,cc+28 SAY aret[point,10]
                                @ lc+6,cc+28 SAY aret[point,11]
                                @ lc+6,cc+57 SAY aret[point,12]
                                @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                                @ lc+9,cc+28 SAY aret[point,19] PICT "99,999,999.99"
                                @ lc+10,cc+28 SAY mmulta PICT "99,999,999.99"
                                @ lc+11,cc+28 SAY mjuros PICT "99,999,999.99"
                                setcor(1)
                                IF mtp = NIL
                                        @ lc+8,cc+28 GET mdatpag WHEN cx = NIL
                                        READ
                                        IF LASTKEY()=27
                                                LOOP
                                        ENDIF
                                        IF mdatpag <> mdata_sis
                                                IF ! ver_nivel('DOC_DATA','CONTA A RECEBER (ALTERACAO DATA BAIXA DE DOCUMENTO)','1',nivel_acess,,'AMBIE')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF aret[point,28] = '*'
                                                mdias_atras := mdatpag-aret[point,11]
                                        ELSE
                                                mdias_atras := mdatpag-(aret[point,11]+m_set[1,40])
                                        ENDIF
                                        IF mdias_atras > 0 .AND. mtp_ = NIL
                                                mdias_atras := mdatpag-aret[point,11]
                                                mmulta := iat(aret[point,19] * ((m_set[1,9])/100),2)
                                                mjuros := iat((aret[point,19] * ((mdias_atras*m_set[1,10])/100)),2)
                                        ELSE
                                                mjuros := mmulta := 0
                                        ENDIF
                                        mvlpago=iat(aret[point,19]+mjuros+mmulta,2)
                                        setcor(3)
                                        @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                                        @ lc+10,cc+28 SAY mmulta PICT "99,999,999.99"
                                        //IF mjuros > 0
                                                @ lc+11,cc+28 SAY mjuros PICT "99,999,999.99"
                                        //ENDIF
                                        @ lc+16,cc+12 SAY aret[point,46]
                                        setcor(1)
/*
                                        IF mjuros = 0
                                                @ lc+11,cc+28 GET mjuros PICT "99,999,999.99" VALID IF(mjuros<0,.F.,.T.)
                                                READ
                                                mvlpago := iat(aret[point,19]+mjuros+mmulta,2)
                                        ENDIF
*/
                                        @ lc+12,cc+28 GET mvlpago PICT "99,999,999.99"
                                        @ lc+13,cc+28 GET mtip_pg PICT '@!'
                                        @ lc+14,cc+28 GET mcheque PICT '99999999'
                                        @ lc+15,cc+28 GET mbanco PICT '@!' VALID mbanco $ 'B,C'
                                        @ lc+17,cc+12 GET mobs1
                                        READ
                                        setcor(3)
                                        @ lc+17,cc+12 SAY mobs1
                                        setcor(1)
                                        IF LASTKEY()=27
                                                LOOP
                                        ENDIF
                                        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        pconta = ' '
                                        IF mvlpago < aret[point,19]+mjuros+mmulta .AND. ((aret[point,19]+mjuros+mmulta)-mvlpago) > .10
                                                pconta := op_simnao('S','Este Valor vai ser por CONTA [S/n]:')
                                                IF pconta = 'N'
                                                        IF ! aut_sen('Senha de autorizacao p/dispensa o restante do documento:','LIB_RECE')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                        ENDIF
/*
                                        IF mvlpago > aret[point,19]+mjuros+mmulta
                                                stop:=' '
                                                setcor(3)
                                                op_tela(19,20,24,70,'TROCO','1')
                                                DEVPOS(00,01);DEVOUT(' T R O C O   R$:')
                                                DEVPOS(05,10);DEVOUT('Pressione qualquer tecla p/continuar...')
                                                WVW_DrawLabel(,01,02,TRANSFORM(mvlpago - (aret[point,19]+mjuros+mmulta),ALLTRIM('@E 999,999.99')),,,,, 'arial black',60,45,,,,,)
                                                @ 40,00 GET stop
                                                READ
                                                setcor(1)
                                                mvlpago := aret[point,19]+mjuros+mmulta
                                                wvw_lclosewindow()
                                        ENDIF
*/
                                        ASIZE(m_dup,0)
                                        ASIZE(m_po,0)

                                        IF mtp_tp = NIL
                                                *********** ATUALIZANDO SACDUPR ***********************
                                                ccomm := "UPDATE sacdupr SET datpag = " + sr_cdbvalue(mdatpag)+",datope = " + sr_cdbvalue(mdata_sis)
                                                IF pconta = 'S'
                                                        ccomm := ccomm + ",valor  = " + sr_cdbvalue(mvlpago)
                                                ENDIF
                                                ccomm := ccomm + ",vlpago = " + sr_cdbvalue(mvlpago)  +;
                                                                ",cheque = " + sr_cdbvalue(mcheque)  +;
                                                                ",pago   = " + sr_cdbvalue('B')  +;
                                                                ",tip_pg = " + sr_cdbvalue(mtip_pg)  +;
                                                                ",operador = " + sr_cdbvalue(cod_operado)+;
                                                                ",obs    = " + sr_cdbvalue(mobs)+;
                                                                ",obs1   = " + sr_cdbvalue(mobs1)+;
                                                                ",banco  = " + sr_cdbvalue(IF(cx <> NIL,'C',mbanco))+;
                                                                ",mov_cx = " + sr_cdbvalue(IF(cx <> NIL,'C','M'))+;
                                                                ",conta  = " + sr_cdbvalue(IF(pconta = 'S','*',''))+;
                                                                ",juros  = " + sr_cdbvalue(IF(pconta <> 'S' .AND. mvlpago>=aret[point,19],mvlpago-aret[point,19],0.00))+;
                                                                ",juros_d= " + sr_cdbvalue(IF(pconta <> 'S' .AND. mvlpago>=aret[point,19],(mmulta+mjuros)-(mvlpago-aret[point,19]),0.00))+;
                                                                ",hora_bx  = " + sr_cdbvalue(TIME())+;
                                                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65])
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                **************************************************************
                                                IF pconta = 'S'
                                                        sr_getconnection():exec('INSERT INTO sacdupr (empresa,tipo,numero,'+;
                                                                'duplicata,valor_dup,'+;
                                                                'fornec,cliente,'+;
                                                                'tip_cli,emissao,'+;
                                                                'venc1,venc,valor,vendedor,num_ped,conta,'+;
                                                                'banco,comissao,operador,obs,obs1,agencia,c_c,corrente,'+;
                                                                'doc_tran,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(aret[point,1])+','+; //1
                                                                sr_cdbvalue(aret[point,2])+','+; //2
                                                                sr_cdbvalue(aret[point,3])+','+; //3
                                                                sr_cdbvalue(aret[point,4])+','+; //4
                                                                sr_cdbvalue(aret[point,5])+','+; //5
                                                                sr_cdbvalue(aret[point,7])+','+; //6
                                                                sr_cdbvalue(aret[point,8])+','+; //7
                                                                sr_cdbvalue(aret[point,6])+','+; //8
                                                                sr_cdbvalue(aret[point,10])+','+;//9
                                                                sr_cdbvalue(IF(! EMPTY(aret[point,12]),aret[point,12],aret[point,11]))+','+;//10
                                                                sr_cdbvalue(IF(! EMPTY(mmulta) .OR. ! EMPTY(mjuros),mdatpag,aret[point,11]))+','+; //11
                                                                sr_cdbvalue((aret[point,19]+mmulta+mjuros)-mvlpago)+','+;//12
                                                                sr_cdbvalue(aret[point,30])+','+;//13
                                                                sr_cdbvalue(aret[point,31])+','+;//14
                                                                sr_cdbvalue('*')+','+;//15
                                                                sr_cdbvalue(mbanco)+','+;//16
                                                                sr_cdbvalue(iat(mcomissao,2))+','+;//17
                                                                sr_cdbvalue(cod_operado)+','+;//18
                                                                sr_cdbvalue(mobs)+','+;//19
                                                                sr_cdbvalue(mobs1)+','+;//20
                                                                sr_cdbvalue(aret[point,17])+','+;//21
                                                                sr_cdbvalue(aret[point,18])+','+;//22
                                                                sr_cdbvalue(aret[point,48])+','+;//23
                                                                sr_cdbvalue(aret[point,37])+','+;//24
                                                                sr_cdbvalue(' ')+')',,.f.)

                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ELSE
                                                *********** ATUALIZANDO SACDUPR ***********************
                                                ccomm := "UPDATE saccred SET datpag = " + sr_cdbvalue(mdatpag)+",datope = " + sr_cdbvalue(mdata_sis)
                                                IF pconta = 'S'
                                                        ccomm := ccomm + ",valor  = " + sr_cdbvalue(mvlpago)
                                                ENDIF
                                                ccomm := ccomm + ",vlpago = " + sr_cdbvalue(mvlpago)  +;
                                                                ",cheque = " + sr_cdbvalue(mcheque)  +;
                                                                ",pago   = " + sr_cdbvalue('B')  +;
                                                                ",tip_pg = " + sr_cdbvalue(mtip_pg)  +;
                                                                ",operador = " + sr_cdbvalue(cod_operado)+;
                                                                ",obs    = " + sr_cdbvalue(mobs)+;
                                                                ",obs1   = " + sr_cdbvalue(mobs1)+;
                                                                ",banco  = " + sr_cdbvalue(IF(cx <> NIL,'C',mbanco))+;
                                                                ",mov_cx = " + sr_cdbvalue(IF(cx <> NIL,'C','M'))+;
                                                                ",conta  = " + sr_cdbvalue(IF(pconta = 'S','*',''))+;
                                                                ",juros  = " + sr_cdbvalue(IF(pconta <> 'S' .AND. mvlpago>=aret[point,19],mvlpago-aret[point,19],0.00))+;
                                                                ",juros_d= " + sr_cdbvalue(IF(pconta <> 'S' .AND. mvlpago>=aret[point,19],(mmulta+mjuros)-(mvlpago-aret[point,19]),0.00))+;
                                                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65])
                                                sr_getconnection():exec(ccomm,,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                **************************************************************
                                                IF pconta = 'S'
                                                        sr_getconnection():exec('INSERT INTO saccred (empresa,tipo,numero,'+;
                                                                'duplicata,valor_dup,'+;
                                                                'fornec,cliente,'+;
                                                                'tip_cli,emissao,'+;
                                                                'venc1,venc,valor,vendedor,num_ped,conta,'+;
                                                                'banco,comissao,operador,obs,obs1,agencia,c_c,corrente,'+;
                                                                'doc_tran,SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(aret[point,1])+','+; //1
                                                                sr_cdbvalue(aret[point,2])+','+; //2
                                                                sr_cdbvalue(aret[point,3])+','+; //3
                                                                sr_cdbvalue(aret[point,4])+','+; //4
                                                                sr_cdbvalue(aret[point,5])+','+; //5
                                                                sr_cdbvalue(aret[point,7])+','+; //6
                                                                sr_cdbvalue(aret[point,8])+','+; //7
                                                                sr_cdbvalue(aret[point,6])+','+; //8
                                                                sr_cdbvalue(aret[point,10])+','+;//9
                                                                sr_cdbvalue(IF(! EMPTY(aret[point,12]),aret[point,12],aret[point,11]))+','+;//10
                                                                sr_cdbvalue(IF(! EMPTY(mmulta) .OR. ! EMPTY(mjuros),mdatpag,aret[point,11]))+','+; //11
                                                                sr_cdbvalue((aret[point,19]+mmulta+mjuros)-mvlpago)+','+;//12
                                                                sr_cdbvalue(aret[point,30])+','+;//13
                                                                sr_cdbvalue(aret[point,31])+','+;//14
                                                                sr_cdbvalue('*')+','+;//15
                                                                sr_cdbvalue(mbanco)+','+;//16
                                                                sr_cdbvalue(iat(mcomissao,2))+','+;//17
                                                                sr_cdbvalue(cod_operado)+','+;//18
                                                                sr_cdbvalue(mobs)+','+;//19
                                                                sr_cdbvalue(mobs1)+','+;//20
                                                                sr_cdbvalue(aret[point,17])+','+;//21
                                                                sr_cdbvalue(aret[point,18])+','+;//22
                                                                sr_cdbvalue(aret[point,48])+','+;//23
                                                                sr_cdbvalue(aret[point,37])+','+;//24
                                                                sr_cdbvalue(' ')+')',,.f.)

                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                        AADD(m_dup,aret[point,7]+' '+aret[point,2]+' '+aret[point,4]+' '+DTOC(aret[point,11])+' '+TRANSFORM(aret[point,19],'999,999.99')+' '+TRANSFORM(mjuros+mmulta,'999,999.99')+' '+TRANSFORM(mvlpago,'999,999.99')+' X')
                                        //AADD(m_po,{RECNO(),'X',(malias)->valor,mjuros+mmulta,mvlpago,'X'})

                                        IF cx <> NIL
                                                ******************
                                                SELE('caix');ORDSETFOCUS(3)
                                                GO TOP
                                                *****************
                                                IF mtipo = 'DU'
                                                        IF caix->(DBSEEK(mtipo + mduplicata + STRZERO(mcod_cli,5)))
*                                                               mnota := caix->nota
                                                                mtipo_comp := caix->tipo_comp
                                                                mcod_vend := caix->cod_vend
                                                                mdescri1  := caix->descri1
                                                                mdescri2  := caix->descri2
                                                                IF BLOQREG()
                                                                        caix->op_pg := 'P'
                                                                        DBCOMMIT()
                                                                        DBUNLOCK()
                                                                ENDIF
                                                        ENDIF
                                                ENDIF
                                                IF ADIREG()
                                                        caix-> empresa := aret[point,1]
                                                        caix-> tipo := aret[point,2]
                                                        caix-> nota := 'DOC.PG  '
                                                        caix-> num_dup := aret[point,4]
                                                        caix-> num_ban := aret[point,3]
                                                        caix-> documento := aret[point,4]
                                                        caix-> data := mdatpag
                                                        caix-> descri1:= mdescri1
                                                        caix-> descri2:= mdescri2
                                                        caix-> venci := aret[point,11]
                                                        caix-> valor := mvlpago
                                                        caix-> cod_cli := aret[point,7]
                                                        caix-> cod_vend := mcod_vend
                                                        caix-> cod_opera := cod_operado
                                                        caix-> pg := '*'
                                                        caix-> op_pg := 'P'
                                                        caix-> valor_com := mvlpago
                                                        caix-> comissao := mcomissao
                                                        caix-> hora     := TIME()
                                                        caix-> tp_mov   := 'B'
                                                        DBCOMMIT()
                                                        DBUNLOCK()
                                                ELSE
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        IF m_set[1,149] = 'R' .OR. m_set[1,149] = 'A'
                                                IF  m_set[1,149] = 'R'
                                                        mtipo_aut := 2
                                                ELSE
                                                        mtipo_aut := 1
                                                ENDIF
                                                op_tela(10,35,12,67,' Opcao de Autenticacoes ')
                                                @ 01,01 PROMPT ' Autenticar'
                                                @ 01,15 PROMPT ' Imprimir Recibo '
                                                SET INTEN ON
                                                MENU TO mtipo_aut
                                                wvw_lclosewindow()
                                                IF  mtipo_aut = 2
                                                        rec_dupr(m_dup,aret[point,65],1,mjuros+mmulta,mvlpago,mdatpag,mtp,aret[point,19]) //con252
                                                ELSE
                                                        opcao := 'S'
                                                        WHILE opcao = 'S'
                                                                opcao := op_simnao('S','Insira o Documento na impressora p/AUTENTICAR',' AUTENTICACAO DE DOCUMENTO ')
                                                                IF opcao = 'S'
                                                                        SET DEVI TO PRINT
                                                                        SET PRINT TO (m_indiv[1,20])
                                                                        imprt(m_indiv[1,21],'C')
                                                                        DEVPOS(00,00);DEVOUT(ALLTRIM(SUBSTR(m_set[1,23],1,4))+ALLTRIM(mduplicata)+cod_operado+DTOC(mdatpag)+ALLTRIM(TRANSFORM(mvlpago,'999999.99')))
                                                                        imprt(m_indiv[1,21],'N')
                                                                        SETPRC(00,00)
                                                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                                                ENDIF
                                                        ENDDO
                                                ENDIF
                                        ENDIF
                                        IF mlimp_cli = '*';mcod_cli:=0;ENDIF
                                        opcao := op_simnao('N','Deseja gerar um CREDITO em CONTA CORRENTE [S/n]:')
                                        IF LASTKEY() = 27
                                                *****************
                                                SELE(malias);ORDSETFOCUS(1)
                                                *****************
                                                LOOP
                                        ENDIF
                                        IF opcao = 'S'
                                                sac2cc11(mvlpago,'RECEBIMENTO DA DUPLICATA DE No.: '+mtipo+mduplicata)
                                        ENDIF
                                        LOOP
                                ELSEIF mtp = 'S'
                                        setcor(3)
                                        @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                                        @ lc+8,cc+28 SAY aret[point,13]
                                        @ lc+10,cc+28 SAY "             "
                                        @ lc+11,cc+28 SAY aret[point,23] PICT "99,999,999.99"
                                        @ lc+12,cc+28 SAY aret[point,20] PICT "99,999,999.99"
                                        @ lc+13,cc+28 SAY aret[point,26]
                                        @ lc+14,cc+28 SAY aret[point,29]
                                        @ lc+16,cc+12 SAY aret[point,46]
                                        @ lc+16,cc+12 SAY aret[point,47]
                                        setcor(1)
                                        opcao := op_simnao('S','Confirma os Dados:')
                                        IF opcao = "N"
                                                RESTSCREEN(00,00,24,79,mtel)
                                                LOOP
                                        ENDIF
                                        IF mtp_tp = NIL
                                                ccomm :="UPDATE sacdupr SET datope = NULL,datpag = NULL,vlpago = "+sr_cdbvalue(0)+",pago = NULL,juros = "+sr_cdbvalue(0)+",cheque = "+sr_cdbvalue(SPACE(8))+",operador = "+sr_cdbvalue(cod_operado)+",obs = "+sr_cdbvalue(mobs)+" WHERE SR_RECNO = "+sr_cdbvalue(aret[point,65])
                                        ELSE
                                                ccomm :="UPDATE saccred SET datope = NULL,datpag = NULL,vlpago = "+sr_cdbvalue(0)+",pago = NULL,juros = "+sr_cdbvalue(0)+",cheque = "+sr_cdbvalue(SPACE(8))+",operador = "+sr_cdbvalue(cod_operado)+",obs = "+sr_cdbvalue(mobs)+" WHERE SR_RECNO = "+sr_cdbvalue(aret[point,65])
                                        ENDIF
                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        IF aret[point,2] = 'CH'
                                                IF 'S' = op_simnao('N','Deseja Incluir como CHEQUE DEVOLVIDO:')
                                                        mtel_mot := SAVESCREEN(00,00,24,79)
                                                        WHILE .T.
                                                                botao(12,30,16,78,,' Inclusao de CHQ.DEVOLVIDO ')
                                                                DEVPOS(13,31);DEVOUT('Data....:')
                                                                DEVPOS(14,31);DEVOUT('Operador:')
                                                                DEVPOS(15,31);DEVOUT('Motivo..:')
                                                                setcor(3)
                                                                DEVPOS(13,41);DEVOUT(mdata_sis)
                                                                DEVPOS(14,41);DEVOUT(cod_operado)
                                                                setcor(1)
                                                                @ 15,41 GET mmotivo
                                                                READ
                                                                IF LASTKEY() = 27
                                                                        RESTSCREEN(00,00,24,79,mtel_mot)
                                                                        EXIT
                                                                ENDIF
                                                                IF 'S' = op_simnao('S','Confirma a Inclusao:')
                                                                        ccomm :="UPDATE sacdupr SET data_fund = "+sr_cdbvalue(mdata_sis)+",cod_incl = "+sr_cdbvalue(cod_operado)+",motivo = "+sr_cdbvalue(mmotivo)+" WHERE SR_RECNO = "+sr_cdbvalue(aret[point,65])
                                                                        sr_getconnection():exec(ccomm,,.f.)
                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        RESTSCREEN(00,00,24,79,mtel_mot)
                                                                        sac26(1,aret[point,3],aret[point,4])
                                                                        EXIT
                                                                ELSE
                                                                        LOOP
                                                                ENDIF
                                                        ENDDO
                                                ENDIF
                                        ENDIF
                                        DBUNLOCK()
                                        DBCOMMIT()
                                        IF aret[point,27] = 'C'
                                                ******************
                                                SELE('caix');ORDSETFOCUS(3)
                                                GO TOP
                                                *****************
                                                IF caix->(DBSEEK(aret[point,2] + aret[point,4] + aret[point,7] + '*'))
                                                        BLOQREG()
                                                        DELE
                                                        DBUNLOCK()
                                                        DBCOMMIT()
                                                        sr_getconnection():exec("DELETE FROM saccaixa WHERE SR_DELETED = 'T'",,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                        LOOP
                                ELSEIF mtp = 'E'
                                        setcor(3)
                                        @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                                        @ lc+8,cc+28 SAY aret[point,13]
                                        @ lc+10,cc+28 SAY "             "
                                        @ lc+11,cc+28 SAY aret[point,23] PICT "99,999,999.99"
                                        @ lc+12,cc+28 SAY aret[point,20] PICT "99,999,999.99"
                                        @ lc+13,cc+28 SAY aret[point,26]
                                        @ lc+14,cc+28 SAY aret[point,29]
                                        @ lc+16,cc+12 SAY aret[point,46]
                                        @ lc+16,cc+12 SAY aret[point,47]
                                        setcor(1)
                                        opcao := op_simnao('N','Confirma a EXCLUSAO do Documento:')
                                        IF opcao = "N"
                                                RESTSCREEN(00,00,24,79,mtel)
                                                LOOP
                                        ENDIF
                                        IF mtp_tp = NIL
                                                ccomm :="DELETE FROM sacdupr WHERE SR_RECNO = "+sr_cdbvalue(aret[point,65])
                                        ELSE
                                                ccomm :="DELETE FROM saccred WHERE SR_RECNO = "+sr_cdbvalue(aret[point,65])
                                        ENDIF
                                        sr_getconnection():exec(ccomm,,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        LOOP
                                ELSEIF mtp = 'I'
                                        mqtd_cop := 1
                                        mtipo_dup := 'S'
                                        setcor(1)
                                        @ lc+18,cc+36 GET mtipo_dup PICT "@!" VALID mtipo_dup $ 'S,P'
                                        @ lc+19,cc+36 GET mqtd_cop PICT "9" VALID IF(EMPTY(mqtd_cop),.F.,.T.)
                                        READ
                                        IF LASTKEY() = 27
                                                LOOP
                                        ENDIF
                                        opcao := op_simnao('N','Confirma a IMPRESSAO do Documento:')
                                        IF opcao = "N"
                                                LOOP
                                        ENDIF
                                        IF ! imp_arq('DUPLICATA.REL','D');LOOP;ENDIF
                                        cons_cli:={}
                                        sr_getconnection():exec("SELECT * FROM saccli WHERE cod_cli = "+sr_cdbvalue(aret[point,7]),,.t.,@cons_cli)
                                        IF mtipo_dup = 'P'
                                                IF ver_serie() = '141236' // SOTINTAS
                                                        dup_sot(mdata_sis,VAL(aret[point,30]),aret[point,19],aret[point,4],aret[point,11],cons_cli[1,3],aret[point,7],cons_cli[1,21],;
                                                                cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],aret[point,16])
                                                ELSE
                                                        imprt(mtipo_imp,'C')
                                                        @ PROW()+10,21 SAY aret[point,4]
                                                        DEVPOS(PROW(),40);DEVOUT(TRANSFORM(iat(aret[point,19],2),'99,999,999.99'))
                                                        @ PROW(),60 SAY aret[point,4]
                                                        DEVPOS(PROW(),80);DEVOUT(TRANSFORM(iat(aret[point,19],2),'99,999,999.99'))
                                                        @ PROW(),99 SAY aret[point,11]
                                                        @ PROW()+3,65 SAY STRZERO(aret[point,11]-mdata_sis,3)+' dias'
                                                        @ PROW()+3,60 SAY cons_cli[1,2]
                                                        @ PROW(),PCOL()+1 SAY cons_cli[1,3]
                                                        @ PROW()+1,60 SAY cons_cli[1,21]
                                                        @ PROW()+1,60 SAY RTRIM(cons_cli[1,22])+'-Cidade: '+RTRIM(cons_cli[1,24])
                                                        @ PROW(),110 SAY cons_cli[1,25]
                                                        @ PROW()+1,60 SAY 'Cobranca Bancaria'
                                                        IF cons_cli[1,32] <> SPACE(14)
                                                                DEVPOS(PROW()+1,60);DEVOUTPICT(cons_cli[1,32],'@@R 99.999.999/9999-99')
                                                                DEVPOS(PROW(),100);DEVOUT(cons_cli[1,33])
                                                        ELSEIF cons_cli[1,34] <> SPACE(11)
                                                                DEVPOS(PROW()+1,60);DEVOUTPICT(cons_cli[1,34],'@@R 999.999.999-99')
                                                        ELSE
                                                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                        ENDIF
                                                        mextenso:= '('+RTRIM(extenso(iat(aret[point,19],2),.T.,'real','reais'))+')'
                                                        mlinha := MLCOUNT(mextenso,50)
                                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                                        FOR lin = 1 TO mlinha
                                                                mlin := MEMOLINE(mextenso,50,lin,,10)
                                                                DEVPOS(PROW()+1,60);DEVOUT(PADR(RTRIM(mlin),50))
                                                        NEXT
                                                        imprt(mtipo_imp,'N')
                                                ENDIF
                                        ELSE
                                                FOR i = 1 TO mqtd_cop
                                                        dup_sis(cons_cli[1,2],cons_cli[1,3],cons_cli[1,21],cons_cli[1,22],cons_cli[1,24],cons_cli[1,25],cons_cli[1,26],cons_cli[1,29],;
                                                                cons_cli[1,32],cons_cli[1,33],cons_cli[1,34],cons_cli[1,100],cons_cli[1,101],cons_cli[1,102],cons_cli[1,103],cons_cli[1,104],cons_cli[1,105],;
                                                                aret[point,2],aret[point,4],aret[point,10],aret[point,11],VAL(aret[point,30]),aret[point,19],cons_cli[1,4],'          ',aret[point,19])
                                                NEXT
                                        ENDIF
                                        SETPRC(00,00)
                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                        IF mimp_tipo = 2;lertexto('DUPLICATA.REL');ENDIF
                                        LOOP
                                ELSEIF mtp = 'A' .OR. mtp = 'P'
                                        lci := cci := 00
                                        lba := 22
                                        cba := 79
                                        op_tela(lci,cci,lba,cba," ALTERACAO DE DOCUMENTO (Contas a Receber) ")
                                        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa......:')
                                        DEVPOS(lci+2,cci+2);DEVOUT('Tipo Documentos........:')
                                        DEVPOS(lci+3,cci+2);DEVOUT('No.Banco/Cod.Cartao....:')
                                        DEVPOS(lci+3,cci+32);DEVOUT('Agencia:')
                                        DEVPOS(lci+3,cci+51);DEVOUT('C/C:')
                                        DEVPOS(lci+4,cci+2);DEVOUT('Numero Documentos......:')
                                        DEVPOS(lci+5,cci+2);DEVOUT('Codigo do Cliente......:')
                                        DEVPOS(lci+6,cci+2);DEVOUT('Data de Emissao........:')
                                        DEVPOS(lci+7,cci+2);DEVOUT('Data de Vencimento.....:')
                                        DEVPOS(lci+8,cci+2);DEVOUT('Valor Documento R$.....:')
                                        DEVPOS(lci+9,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
                                        DEVPOS(lci+10,cci+2);DEVOUT('Codigo do Vendedor.....:')
                                        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Pedido/NF....:')
                                        DEVPOS(lci+12,cci+2);DEVOUT('% de Comissao .........:')
                                        DEVPOS(lci+13,cci+2);DEVOUT('Nome do Correntista....:')
                                        DEVPOS(lci+14,cci+2);DEVOUT('Tipo de Operacao.......:')
                                        DEVPOS(lci+15,cci+2);DEVOUT('OBS.:')
                                        DEVPOS(lci+16,cci+2);DEVOUT('Processo:')
                                        mfornec=VAL(aret[point,7])
                                        mcodemp := aret[point,1]
                                        mnome_cli := aret[point,8]
                                        memissao=aret[point,10]
                                        mvenc=aret[point,11]
                                        mvalor=aret[point,19]
                                        mtipo=aret[point,2]
                                        mcod_ven := VAL(aret[point,30])
                                        mnum_ped := VAL(aret[point,31])
                                        mbanco := SUBSTR(aret[point,16],1,1)
                                        mnum_banco := VAL(aret[point,3])
                                        mcomissao := aret[point,32] * 100
                                        magencia := aret[point,17]
                                        mc_c := aret[point,18]
                                        mcorrente := aret[point,48]
                                        mobs := aret[point,46]
                                        mtip_pg := aret[point,26]
                                        mlin1 := aret[point,58]
                                        mlin2 := aret[point,59]
                                        mlin3 := aret[point,60]
                                        mlin4 := aret[point,61]
                                        mlin5 := aret[point,62]
                                        mensagem('Complete os Dados. [ESC] Abandona.')
                                        IF RTRIM(mnome_cli) = 'DIVERSOS'
                                                mnome_cli := aret[point,8]
                                                setcor(3)
                                                DEVPOS(lci+5,cci+32);DEVOUT(mnome_cli)
                                                setcor(1)
                                        ENDIF
                                        @ lci+2,cci+27 GET mtipo PICT '@!' VALID IF(EMPTY(mtipo),.F.,ver_tipdc(mtipo,'*')) WHEN mtp <> 'P'
                                        @ lci+3,cci+27 GET mnum_banco PICT '999' WHEN (mtipo = 'CH' .AND. mtp <> 'P') .OR. ver_serie() = '141235'
                                        @ lci+3,cci+41 GET magencia PICT '@!' WHEN mtipo = 'CH' .AND. mtp <> 'P'
                                        @ lci+3,cci+56 GET mc_c PICT '@!' VALID qtd_chq(mfornec,STRZERO(mnum_banco,3),magencia,mc_c) WHEN mtp <> 'P' .AND. mtipo = 'CH'
                                        @ lci+4,cci+27 GET mduplicata PICT '@!' WHEN mtp <> 'P'
                                        @ lci+5,cci+27 GET mfornec PICT "99999" VALID mcli(mfornec,lci+5,cci+27) WHEN mtp <> 'P'
                                        READ
                                        IF LASTKEY()=27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF

                                        IF RTRIM(mnome_cli) = 'DIVERSOS'
                                                mnome_cli := aret[point,8]
                                                @ lci+5,cci+32 GET mnome_cli PICT '@!' WHEN mtp <> 'P'
                                        ELSE
                                                mnome_cli := cli->razao
                                        ENDIF
                                        @ lci+6,cci+27 GET memissao WHEN mtp <> 'P'
                                        @ lci+7,cci+27 GET mvenc VALID IF(EMPTY(mvenc),.F.,.T.) WHEN mtp <> 'P'
                                        @ lci+8,cci+27 GET mvalor PICT "@E 99,999,999,999.99" VALID mvalor>0 WHEN mtp <> 'P'
                                        @ lci+9,cci+27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+10,cci+31,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
                                        @ lci+10,cci+27 GET mcod_ven PICT "999" VALID ven(mcod_ven,lci+10,cci+31) .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+11,cci+31,'Informe o Cod. do vendedor "CAMPO NAO OBRIGATORIO"')
                                        @ lci+11,cci+27 GET mnum_ped PICT "999999" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+12,cci+31,'Informe o No.do pedido que corresponde a este documento "CAMPO NAO OBRIGATORIO"')
                                        @ lci+12,cci+27 GET mcomissao PICT "999.99" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+13,cci+31,'Informe o percentual de comissao do vendedor para este documento')
                                        @ lci+13,cci+27 GET mcorrente PICT "@!" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+14,cci+31,'Informe o nome do correntista')
                                        @ lci+14,cci+27 GET mtip_pg PICT "@!" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+15,cci+31,'Informe o Tipo de Operacao')
                                        @ lci+15,cci+07 GET mobs WHEN mtp <> 'P'
                                        READ
                                        setcor(3)
                                        @ lc+15,cc+07 SAY mobs
                                        setcor(1)
                                        @ lci+16,cci+11 GET mlin1
                                        @ lci+17,cci+11 GET mlin2
                                        @ lci+18,cci+11 GET mlin3
                                        @ lci+19,cci+11 GET mlin4
                                        @ lci+20,cci+11 GET mlin5
                                        READ
                                        IF LASTKEY()=27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        opcao := op_simnao('S','Confirma os Dados:')
                                        IF opcao = "N"
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF mtp = 'A'
                                                IF mtp_tp = NIL
                                                        sr_getconnection():exec("UPDATE sacdupr SET tipo    = " + sr_cdbvalue(mtipo)+;
                                                                ",numero  = " + sr_cdbvalue(IF((EMPTY(mnum_banco) .OR. mtipo = 'DU') .AND. ver_serie() <> '141235',' ',STRZERO(mnum_banco,3)))+;
                                                                ",agencia = " + sr_cdbvalue(magencia)  +;
                                                                ",c_c = " + sr_cdbvalue(mc_c)  +;
                                                                ",duplicata   = " + sr_cdbvalue(mduplicata)  +;
                                                                ",tip_cli = " + sr_cdbvalue(cli->tipo)  +;
                                                                ",fornec = " + sr_cdbvalue(STRZERO(mfornec,5))+;
                                                                ",cliente  = " + sr_cdbvalue(mnome_cli)+;
                                                                ",emissao   = " + sr_cdbvalue(memissao)+;
                                                                ",venc  = " + sr_cdbvalue(mvenc)+;
                                                                ",valor_dup = " + sr_cdbvalue(mvalor)+;
                                                                ",valor  = " + sr_cdbvalue(mvalor)+;
                                                                ",vendedor  = " + sr_cdbvalue(STRZERO(mcod_ven,3))+;
                                                                ",num_ped= " + sr_cdbvalue(STRZERO(mnum_ped,6))+;
                                                                ",banco= " + sr_cdbvalue(mbanco)+;
                                                                ",comissao= " + sr_cdbvalue(mcomissao/100)+;
                                                                ",corrente= " + sr_cdbvalue(mcorrente)+;
                                                                ",tip_pg= " + sr_cdbvalue(mtip_pg)+;
                                                                ",alt_oper= " + sr_cdbvalue(cod_operado)+;
                                                                ",obs= " + sr_cdbvalue(mobs)+;
                                                                ",lin1= " + sr_cdbvalue(mlin1)+;
                                                                ",lin2= " + sr_cdbvalue(mlin2)+;
                                                                ",lin3= " + sr_cdbvalue(mlin3)+;
                                                                ",lin4= " + sr_cdbvalue(mlin4)+;
                                                                ",lin5= " + sr_cdbvalue(mlin5)+;
                                                                ",operador= " + sr_cdbvalue(cod_operado)+;
                                                                ",mov_cx = " + sr_cdbvalue(IF(cx <> NIL,'C','M'))+;
                                                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ELSE
                                                        sr_getconnection():exec("UPDATE saccred SET empresa = " + sr_cdbvalue(mcodemp)  +;
                                                                ",tipo    = " + sr_cdbvalue(mtipo)+;
                                                                ",numero  = " + sr_cdbvalue(IF((EMPTY(mnum_banco) .OR. mtipo = 'DU') .AND. ver_serie() <> '141235',' ',STRZERO(mnum_banco,3)))+;
                                                                ",agencia = " + sr_cdbvalue(magencia)  +;
                                                                ",c_c = " + sr_cdbvalue(mc_c)  +;
                                                                ",duplicata   = " + sr_cdbvalue(mduplicata)  +;
                                                                ",tip_cli = " + sr_cdbvalue(cli->tipo)  +;
                                                                ",fornec = " + sr_cdbvalue(STRZERO(mfornec,5))+;
                                                                ",cliente  = " + sr_cdbvalue(mnome_cli)+;
                                                                ",emissao   = " + sr_cdbvalue(memissao)+;
                                                                ",venc  = " + sr_cdbvalue(mvenc)+;
                                                                ",valor_dup = " + sr_cdbvalue(mvalor)+;
                                                                ",valor  = " + sr_cdbvalue(mvalor)+;
                                                                ",vendedor  = " + sr_cdbvalue(STRZERO(mcod_ven,3))+;
                                                                ",num_ped= " + sr_cdbvalue(STRZERO(mnum_ped,6))+;
                                                                ",banco= " + sr_cdbvalue(mbanco)+;
                                                                ",comissao= " + sr_cdbvalue(mcomissao/100)+;
                                                                ",corrente= " + sr_cdbvalue(mcorrente)+;
                                                                ",tip_pg= " + sr_cdbvalue(mtip_pg)+;
                                                                ",alt_oper= " + sr_cdbvalue(cod_operado)+;
                                                                ",obs= " + sr_cdbvalue(mobs)+;
                                                                ",lin1= " + sr_cdbvalue(mlin1)+;
                                                                ",lin2= " + sr_cdbvalue(mlin2)+;
                                                                ",lin3= " + sr_cdbvalue(mlin3)+;
                                                                ",lin4= " + sr_cdbvalue(mlin4)+;
                                                                ",lin5= " + sr_cdbvalue(mlin5)+;
                                                                ",operador= " + sr_cdbvalue(cod_operado)+;
                                                                ",mov_cx = " + sr_cdbvalue(IF(cx <> NIL,'C','M'))+;
                                                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ELSEIF mtp = 'P'
                                                sr_getconnection():exec("UPDATE sacdupr SET empresa = " + sr_cdbvalue(mcodemp)  +;
                                                        ",lin1= " + sr_cdbvalue(mlin1)+;
                                                        ",lin2= " + sr_cdbvalue(mlin2)+;
                                                        ",lin3= " + sr_cdbvalue(mlin3)+;
                                                        ",lin4= " + sr_cdbvalue(mlin4)+;
                                                        ",lin5= " + sr_cdbvalue(mlin5)+;
                                                        ",operador= " + sr_cdbvalue(cod_operado)+;
                                                        " WHERE sr_recno = " + sr_cdbvalue(aret[point,65]),,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                        ENDIF
                                        IF memissao = mvenc .AND. mtp = 'A'
                                                opcao := op_simnao('S','Deseja fazer a BAIXA deste documento agora [S/n]:')
                                                IF opcao = 'S'
                                                        sr_getconnection():exec("UPDATE sacdupr SET datope = " + sr_cdbvalue(mdata_sis)  +;
                                                                ",datpag  = " + sr_cdbvalue(mvenc)+;
                                                                ",vlpago= " + sr_cdbvalue(mvalor)+;
                                                                ",banco= " + sr_cdbvalue('C')+;
                                                                ",pago= " + sr_cdbvalue('B')+;
                                                                ",hora_bx  = " + sr_cdbvalue(TIME())+;
                                                                " WHERE sr_recno = " + sr_cdbvalue(aret[point,65]),,.f.)
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                ENDIF
                                        ENDIF
                                        *****************
                                        SELE(malias);ORDSETFOCUS(1)
                                        *****************
                                        DBUNLOCKALL()
                                        DBCOMMITALL()
                                        IF mtp = 'P'
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF ver_serie() = '975976'
                                                opcao := op_simnao('S','Deseja Imprimir o RECIBO [S/n]:')
                                                IF opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                sac63(mnome_cli,mvalor,mvenc)
                                                LOOP
                                        ENDIF
                                        IF ! imp_arq('ALT_DUPR.REL','D')
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF ver_serie() = '141236'
                                                dup_sot(aret[point,10],aret[point,35],aret[point,5],aret[point,4],aret[point,11],;
                                                        aret[point,8],mfornec,cli->endereco,cli->bairro,cli->cidade,;
                                                        cli->uf,cli->cep,cli->cgc,cli->insc,cli->cpf)
                                        ELSE
                                                dup_sis(aret[point,8],mfornec,cli->endereco,cli->bairro,cli->cidade,cli->uf,cli->cep,cli->tel1,;
                                                        cli->cgc,cli->insc,cli->cpf,cli->end_cob,cli->bairro_cob,cli->cidade_cob,cli->uf_cob,cli->cep_cob,cli->fone_cob,;
                                                        mtipo,aret[point,4],aret[point,10],aret[point,11],VAL(aret[point,35]),aret[point,5],cli->nome)
                                        ENDIF
                                        SETPRC(00,00)
                                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                        IF mimp_tipo = 2
                                                lertexto('ALT_DUPR.REL')
                                        ENDIF

                                        wvw_lclosewindow()
                                ENDIF
                ENDCASE
        ELSE
                *****************
                SELE(malias);ORDSETFOCUS(1)
                *****************
                IF mtp = NIL .OR. mtp = 'A' .OR. mtp = 'P' .OR. mtp = 'E'
                        IF ! (malias)->(DBSEEK(mtipo+mnumero+mduplicata+' '))
                                atencao('Documento nao Cadastrado ou PAGO !!!')
                                LOOP
                        ENDIF
                ELSEIF mtp = 'S'
                        IF ! (malias)->(DBSEEK(mtipo+mnumero+mduplicata+'B'))
                                atencao('Documento nao Cadastrado ou NAO FOI PAGO !!!')
                                LOOP
                        ENDIF
                        cons_doc()
                ENDIF
                mlimp_cli := '*'
                mcod_cli := VAL((malias)->fornec)
                mforn_aux := VAL((malias)->fornec)
                Mensagem('Digite o Codigo do cliente ou [F7]p/consultar. [ESC] Abandona.')
                @ lc+1,cc+28 GET mcod_cli PICT '99999'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mcod_cli <> mforn_aux
                        GO TOP
                        IF mtp = 'S'
                                IF ! (malias)->(DBSEEK(mtipo+mnumero+mduplicata+'B'+STRZERO(mcod_cli,5)))
                                        atencao('Documento nao Cadastrado ou NAO FOI PAGO !!!')
                                        LOOP
                                ENDIF
                        ELSE
                                IF ! (malias)->(DBSEEK(mtipo+mnumero+mduplicata+' '+STRZERO(mcod_cli,5)))
                                        atencao('Nao existe esta duplicata ou ja foi PAGA !!!')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                mjuros := mmulta := 0
                mdatpag=mdata_sis
                mcodemp := (malias)->empresa
                mvlpago=(malias)->valor
                mbanco := SUBSTR((malias)->banco,1,1)
                mcomissao := (malias)->comissao
                mobs = (malias)->obs
                mobs1= (malias)->obs1
                IF ver_serie() = '141304'
                        mdias_atras := mdatpag-((malias)->venc+m_set[1,40])
                ELSE
                        mdias_atras := mdatpag-(malias)->venc
                ENDIF
                IF mdias_atras > 0 .AND. mtp_ = NIL
                        mdias_atras := mdatpag-(malias)->venc
                        mmulta := (malias)->valor * ((m_set[1,9])/100)
                        mjuros := ((malias)->valor * ((mdias_atras*m_set[1,10])/100))
                ENDIF
                mvlpago=(malias)->valor+mjuros+mmulta
                setcor(3)
                @ lc+1,cc+28 SAY STRZERO(mcod_cli,5)
                @ lc+1,cc+35 SAY (malias)->cliente
                @ lc+4,cc+28 SAY mduplicata+(malias)->conta
                @ lc+4,cc+57 SAY (malias)->num_ped
                @ lc+5,cc+28 SAY (malias)->emissao
                @ lc+6,cc+28 SAY (malias)->venc
                @ lc+6,cc+57 SAY (malias)->venc1
                @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                @ lc+9,cc+28 SAY (malias)->valor PICT "99,999,999.99"
                @ lc+10,cc+28 SAY mmulta PICT "99,999,999.99"
                @ lc+11,cc+28 SAY mjuros PICT "99,999,999.99"
                setcor(1)
                IF mtp = NIL
                        @ lc+8,cc+28 GET mdatpag WHEN cx = NIL
                        READ
                        IF LASTKEY()=27
                                LOOP
                        ENDIF
                        IF ver_serie() = '141304'
                                mdias_atras := mdatpag-((malias)->venc+m_set[1,40])
                        ELSE
                                mdias_atras := mdatpag-(malias)->venc
                        ENDIF
                        IF mdias_atras > 0 .AND. mtp_ = NIL
                                mdias_atras := mdatpag-(malias)->venc
                                mmulta := (malias)->valor * ((m_set[1,9])/100)
                                mjuros := ((malias)->valor * ((mdias_atras*m_set[1,10])/100))
                        ELSE
                                mjuros := mmulta := 0
                        ENDIF
                        mvlpago=(malias)->valor+mjuros+mmulta
                        setcor(3)
                        @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                        @ lc+10,cc+28 SAY mmulta PICT "99,999,999.99"

                        //IF mjuros > 0
                                @ lc+11,cc+28 SAY mjuros PICT "99,999,999.99"
                        //ENDIF
                        @ lc+11,cc+28 SAY mjuros PICT "99,999,999.99"
                        @ lc+16,cc+12 SAY (malias)->obs
                        setcor(1)
/*
                        IF mjuros = 0
                                @ lc+11,cc+28 GET mjuros PICT "99,999,999.99" VALID IF(mjuros<0,.F.,.T.)
                                READ
                                mvlpago := (malias)->valor+mjuros+mmulta
                        ENDIF
*/
                        @ lc+12,cc+28 GET mvlpago PICT "99,999,999.99"
                        @ lc+13,cc+28 GET mtip_pg PICT '@!'
                        @ lc+14,cc+28 GET mcheque PICT '99999999'
                        @ lc+15,cc+28 GET mbanco PICT '@!' VALID mbanco $ 'B,C'
                        @ lc+17,cc+07 GET mobs1
                        READ
                        setcor(3)
                        @ lc+17,cc+07 SAY mobs1
                        setcor(1)
                        IF LASTKEY()=27
                                LOOP
                        ENDIF
                ELSEIF mtp = 'A' .OR. mtp = 'P'
                        lci := cci := 00
                        lba := 22
                        cba := 79
                        op_tela(lci,cci,lba,cba," Contas a Receber ")
                        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa......:')
                        DEVPOS(lci+2,cci+2);DEVOUT('Tipo Documentos........:')
                        DEVPOS(lci+3,cci+2);DEVOUT('No.Banco/Cod.Cartao....:')
                        DEVPOS(lci+3,cci+32);DEVOUT('Agencia:')
                        DEVPOS(lci+3,cci+51);DEVOUT('C/C:')
                        DEVPOS(lci+4,cci+2);DEVOUT('Numero Documentos......:')
                        DEVPOS(lci+5,cci+2);DEVOUT('Codigo do Cliente......:')
                        DEVPOS(lci+6,cci+2);DEVOUT('Data de Emissao........:')
                        DEVPOS(lci+7,cci+2);DEVOUT('Data de Vencimento.....:')
                        DEVPOS(lci+8,cci+2);DEVOUT('Valor Documento R$.....:')
                        DEVPOS(lci+9,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
                        DEVPOS(lci+10,cci+2);DEVOUT('Codigo do Vendedor.....:')
                        DEVPOS(lci+11,cci+2);DEVOUT('Numero do Pedido/NF....:')
                        DEVPOS(lci+12,cci+2);DEVOUT('% de Comissao .........:')
                        DEVPOS(lci+13,cci+2);DEVOUT('Nome do Correntista....:')
                        DEVPOS(lci+14,cci+2);DEVOUT('Tipo de Operacao.......:')
                        DEVPOS(lci+15,cci+2);DEVOUT('OBS.:')
                        DEVPOS(lci+16,cci+2);DEVOUT('Processo:')
                        point := RECNO()
                        mfornec=VAL((malias)->fornec)
                        mnome_cli := (malias)->cliente
                        memissao=(malias)->emissao
                        mcodemp := (malias)->empresa
                        mvenc=(malias)->venc
                        mvalor=(malias)->valor
                        mtipo=(malias)->tipo
                        mcod_ven := VAL((malias)->vendedor)
                        mnum_ped := VAL((malias)->num_ped)
                        mbanco := SUBSTR((malias)->banco,1,1)
                        mnum_banco := VAL((malias)->numero)
                        mcomissao := (malias)->comissao * 100
                        magencia := (malias)->agencia
                        mc_c := (malias)->c_c
                        mcorrente := (malias)->corrente
                        mobs := (malias)->obs
                        mtip_pg := (malias)->tip_pg
                        mlin1 := (malias)->lin1
                        mlin2 := (malias)->lin2
                        mlin3 := (malias)->lin3
                        mlin4 := (malias)->lin4
                        mlin5 := (malias)->lin5
                        mensagem('Complete os Dados. [ESC] Abandona.')
                        IF RTRIM(mnome_cli) = 'DIVERSOS'
                                mnome_cli := (malias)->cliente
                                setcor(3)
                                DEVPOS(lci+5,cci+32);DEVOUT(mnome_cli)
                                setcor(1)
                        ENDIF
                        @ lci+2,cci+27 GET mtipo PICT '@!' VALID ver_tipdc(mtipo,'*') .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+3,cci+31,mmens)
                        @ lci+3,cci+27 GET mnum_banco PICT '999' VALID lim_get() WHEN mtipo = 'CH' .AND. mtp <> 'P' .AND. men_get(lci+4,cci+31,'Informe o No.do banco')
                        @ lci+3,cci+41 GET magencia PICT '@!' VALID lim_get() WHEN mtipo = 'CH' .AND. mtp <> 'P' .AND. men_get(lci+4,cci+41,'Informe a AGENCIA BANCARIA')
                        @ lci+3,cci+56 GET mc_c PICT '@!' VALID lim_get() .AND. qtd_chq(mfornec,STRZERO(mnum_banco,3),magencia,mc_c) WHEN mtp <> 'P' .AND. mtipo = 'CH' .AND. men_get(lci+4,cci+56,'Informe a C/C BANCARIA')
                        @ lci+4,cci+27 GET mduplicata PICT '@!' VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+5,cci+31,'Informe o No.do documento')
                        @ lci+5,cci+27 GET mfornec PICT "99999" VALID mcli(mfornec,lci+5,cci+27) .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+6,cci+31,'Informe o Cod. do Cliente ou <F7>p/pesquisas de clientes')
                        READ
                        IF LASTKEY()=27
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        mnome_cli := (malias)->cliente
                        IF RTRIM(mnome_cli) = 'DIVERSOS'
                                @ lci+5,cci+32 GET mnome_cli PICT '@!' VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+6,cci+23,'Neste campo voce pode descrever o que deseja')
                        ENDIF
                        @ lci+6,cci+27 GET memissao WHEN mtp <> 'P'
                        @ lci+7,cci+27 GET mvenc VALID IF(EMPTY(mvenc),.F.,.T.) WHEN mtp <> 'P'
                        @ lci+8,cci+27 GET mvalor PICT "@E 99,999,999,999.99" VALID mvalor>0 WHEN mtp <> 'P'   //.AND. spc(mfornec,mvalor-(malias)->valor,,)
                        @ lci+9,cci+27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+10,cci+31,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
                        @ lci+10,cci+27 GET mcod_ven PICT "999" VALID ven(mcod_ven,lci+10,cci+31) .AND. lim_get() WHEN mtp <> 'P' .AND. men_get(lci+11,cci+31,'Informe o Cod. do vendedor "CAMPO NAO OBRIGATORIO"')
                        @ lci+11,cci+27 GET mnum_ped PICT "999999" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+12,cci+31,'Informe o No.do pedido que corresponde a este documento "CAMPO NAO OBRIGATORIO"')
                        @ lci+12,cci+27 GET mcomissao PICT "999.99" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+13,cci+31,'Informe o percentual de comissao do vendedor para este documento')
                        @ lci+13,cci+27 GET mcorrente PICT "@!" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+14,cci+31,'Informe o nome do correntista')
                        @ lci+14,cci+27 GET mtip_pg PICT "@!" VALID lim_get() WHEN mtp <> 'P' .AND. men_get(lci+15,cci+31,'Informe o Tipo de Operacao')
                        @ lci+15,cci+07 GET mobs WHEN mtp <> 'P'
                        READ
                        setcor(3)
                        @ lc+15,cc+07 SAY mobs
                        setcor(1)
                        @ lci+16,cci+11 GET mlin1
                        @ lci+17,cci+11 GET mlin2
                        @ lci+18,cci+11 GET mlin3
                        @ lci+19,cci+11 GET mlin4
                        @ lci+20,cci+11 GET mlin5
                        READ
                        IF LASTKEY()=27
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
                        IF opcao = "N"
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        GO point
                        IF BLOQREG()
                                IF mtp = 'A'
                                        (malias)-> tipo := mtipo
                                        IF EMPTY(mnum_banco) .OR. mtipo = 'DU'
                                                (malias)-> numero := SPACE(3)
                                        ELSE
                                                (malias)-> numero := STRZERO(mnum_banco,3)
                                        ENDIF
                                        (malias)-> agencia := magencia
                                        (malias)-> c_c := mc_c
                                        (malias)-> duplicata := mduplicata
                                        (malias)-> tip_cli := cli->tipo
                                        (malias)-> fornec := STRZERO(mfornec,5)
                                        (malias)-> cliente := mnome_cli
                                        (malias)-> emissao := memissao
                                        (malias)-> venc := mvenc
                                        (malias)-> valor_dup := mvalor
                                        (malias)-> valor := mvalor
                                        (malias)-> vendedor := STRZERO(mcod_ven,3)
                                        (malias)-> num_ped := STRZERO(mnum_ped,6)
                                        (malias)-> banco := mbanco
                                        (malias)-> comissao := mcomissao /100
                                        (malias)-> corrente := mcorrente
                                        (malias)-> tip_pg   := mtip_pg
                                        (malias)-> alt_oper := cod_operado
                                        (malias)-> obs      := mobs
                                ENDIF
                                (malias)-> lin1     := mlin1
                                (malias)-> lin2     := mlin2
                                (malias)-> lin3     := mlin3
                                (malias)-> lin4     := mlin4
                                (malias)-> lin5     := mlin5
                                IF memissao = mvenc .AND. mtp = 'A'
                                        opcao := op_simnao('S','Deseja fazer a BAIXA deste documento agora [S/n]:')
                                        IF opcao = 'N'
                                                wvw_lclosewindow()
                                                LOOP
                                        ELSE
                                                (malias)->datpag := mvenc
                                                (malias)->datope := mdata_sis
                                                (malias)->vlpago := mvalor
                                                (malias)->pago := "B"
                                                (malias)->banco := 'C'
                                                IF cx <> NIL
                                                        (malias)->mov_cx := 'C'
                                                ELSE
                                                        (malias)->mov_cx := 'M'
                                                ENDIF
                                        ENDIF
                                ENDIF
                                (malias)-> operador := cod_operado
                                DBCOMMITALL()
                                DBUNLOCKALL()
                        ELSE
                                atencao('Nao foi possivel Acessar o Arquivo !!!')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        *****************
                        SELE(malias);ORDSETFOCUS(1)
                        *****************
                        DBUNLOCKALL()
                        DBCOMMITALL()
                        IF mtp = 'P'
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        IF ver_serie() = '975976'
                                opcao := op_simnao('S','Deseja Imprimir o RECIBO [S/n]:')
                                IF opcao = 'N'
                                        wvw_lclosewindow()
                                        LOOP
                                ENDIF
                                sac63(mnome_cli,mvalor,mvenc)
                                LOOP
                        ENDIF
                        IF ! imp_arq('ALT_DUPR.REL','D')
                                wvw_lclosewindow()
                                LOOP
                        ENDIF
                        IF mcgc_firm = '16.314.569/0001-61'
                                imprt(m_indiv[1,21],'C')
                                @ PROW()+10,21 SAY mduplicata
                                DEVPOS(PROW(),40);DEVOUT(TRANSFORM(iat(mvalor,2),'99,999,999.99'))
                                @ PROW(),60 SAY mduplicata
                                DEVPOS(PROW(),80);DEVOUT(TRANSFORM(iat(mvalor,2),'99,999,999.99'))
                                @ PROW(),99 SAY mvenc
                                @ PROW()+3,65 SAY STRZERO(mvenc-mdata_sis,3)+' dias'
                                @ PROW()+3,60 SAY STRZERO(mfornec,5)
                                @ PROW(),PCOL()+1 SAY mnome_cli
                                @ PROW()+1,60 SAY cli->endereco
                                @ PROW()+1,60 SAY RTRIM(cli->bairro)+'-Cidade: '+RTRIM(cli->cidade)
                                @ PROW(),110 SAY cli->uf
                                @ PROW()+1,60 SAY 'Cobranca Bancaria'
                                IF cli->cgc <> SPACE(14)
                                        DEVPOS(PROW()+1,60);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                                        DEVPOS(PROW(),100);DEVOUT(cli->insc)
                                ELSEIF cli->cpf <> SPACE(11)
                                        DEVPOS(PROW()+1,60);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                                mextenso:= '('+RTRIM(EXTENSO(iat(mvalor,2),.T.,'real','reais'))+')'
*                                mextenso:= '('+RTRIM(extenso(iat(mvalor,2)))+')'

                                mlinha := MLCOUNT(mextenso,50)
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                FOR lin = 1 TO mlinha
                                        mlin := MEMOLINE(mextenso,50,lin,,10)
                                        DEVPOS(PROW()+1,60);DEVOUT(PADR(RTRIM(mlin),50))
                                NEXT
                                imprt(m_indiv[1,21],'N')
                        ELSEIF ver_serie() = '141236'
                                dup_sot((malias)->emissao,(malias)->operador,(malias)->valor_dup,(malias)->duplicata,(malias)->venc,;
                                        (malias)->cliente,mfornec,cli->endereco,cli->bairro,cli->cidade,;
                                        cli->uf,cli->cep,cli->cgc,cli->insc,cli->cpf)
                        ELSE
                                dup_sis((malias)->cliente,mfornec,cli->endereco,cli->bairro,cli->cidade,cli->uf,cli->cep,cli->tel1,;
                                        cli->cgc,cli->insc,cli->cpf,cli->end_cob,cli->bairro_cob,cli->cidade_cob,cli->uf_cob,cli->cep_cob,cli->fone_cob,;
                                        mtipo,(malias)->duplicata,(malias)->emissao,(malias)->venc,VAL((malias)->operador),(malias)->valor_dup,cli->nome)
                        ENDIF
                        SETPRC(00,00)
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        IF mimp_tipo = 2
                                lertexto('ALT_DUPR.REL')
                        ENDIF

                        wvw_lclosewindow()
                        LOOP
                ELSEIF mtp = 'S' .OR. mtp = 'E'
                        setcor(3)
                        @ lc+7,cc+28 SAY IF(mdias_atras<0,TRANSFORM(0,'9999'),TRANSFORM(mdias_atras,'9999'))
                        @ lc+8,cc+28 SAY (malias)->datpag
                        @ lc+10,cc+28 SAY "             "
                        @ lc+11,cc+28 SAY (malias)->juros PICT "99,999,999.99"
                        @ lc+12,cc+28 SAY (malias)->vlpago PICT "99,999,999.99"
                        @ lc+13,cc+28 SAY (malias)->tip_pg PICT '99999999'
                        @ lc+14,cc+28 SAY (malias)->cheque PICT '99999999'
                        setcor(1)
                ENDIF
        ENDIF
        IF mtp = NIL
                opcao := op_simnao('S','Confirma os Dados ? [S/n]:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                IF mvlpago < (malias)->valor+mjuros+mmulta .AND. ((aret[point,19]+mjuros+mmulta)-mvlpago) > .10
                        pconta := op_simnao('S','Este Valor vai ser por CONTA [S/n]:')
                        IF pconta = 'N'
                                IF ! aut_sen('Senha de autorizacao p/dispensa o restante do documento:','LIB_RECE')
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
/*
                IF mvlpago > aret[point,19]+mjuros+mmulta
                        stop:=' '
                        setcor(3)
                        op_tela(19,20,24,70,'TROCO','1')
                        DEVPOS(00,01);DEVOUT(' T R O C O   R$:')
                        DEVPOS(05,10);DEVOUT('Pressione qualquer tecla p/continuar...')
                        WVW_DrawLabel(,01,02,TRANSFORM(mvlpago - (aret[point,19]+mjuros+mmulta),ALLTRIM('@E 999,999.99')),,,,, 'arial black',60,45,,,,,)
                        @ 40,00 GET stop
                        READ
                        setcor(1)
                        mvlpago := aret[point,19]+mjuros+mmulta
                        wvw_lclosewindow()
                ENDIF
*/
                ASIZE(m_dup,0)
                ASIZE(m_po,0)

                IF BLOQREG()
                        (malias)->datpag := mdatpag
                        (malias)->datope := mdata_sis
                        (malias)->vlpago := mvlpago
                        (malias)->cheque := mcheque
                        mcod_vend := (malias)->vendedor
                        magencia := (malias)->agencia
                        mc_c := (malias)->c_c
                        mnumero := (malias)->numero
                        IF pconta = 'S'
                                pconta := '*'
                                mcodemp := (malias)->empresa
                                mcliente := (malias)->cliente
                                mvalor_dup := (malias)->valor_dup
                                mvalor_cont := ((malias)->valor+mmulta+mjuros)-mvlpago
                                memissao := (malias)->emissao
                                mvenc := (malias)->venc
                                mcomissao := (malias)->comissao
                                mnum_ped := (malias)->num_ped
                                mtip_cli := (malias)->tip_cli
                                mcorrente := (malias)->corrente
                                mdoc_tran := (malias)->doc_tran
                                mdat_tran := (malias)->dat_tran
                                (malias)->valor := mvlpago
                                (malias)->conta := pconta
                                (malias)->obs   := mobs
                                (malias)->obs1  := mobs1
                        ELSE
                                IF mvlpago<(malias)->valor
                                        (malias)->desc := (malias)->valor-mvlpago
                                ELSE
                                        (malias)->juros := mvlpago-(malias)->valor
                                        (malias)->juros_d := (mmulta+mjuros)-(mvlpago-(malias)->valor)
                                ENDIF
                        ENDIF
                        (malias)->pago := "B"
                        (malias)->tip_pg := mtip_pg
                        (malias)->operador := cod_operado
                        (malias)->obs := mobs
                        (malias)->obs1:= mobs1
                        IF cx <> NIL
                                (malias)->banco := 'C'
                                (malias)->mov_cx := 'C'
                        ELSE
                                (malias)->banco := mbanco
                                (malias)->mov_cx := 'M'
                        ENDIF
                        AADD(m_dup,(malias)->fornec+' '+(malias)->tipo+' '+(malias)->duplicata+' '+DTOC((malias)->venc)+' '+TRANSFORM((malias)->valor,'999,999.99')+' '+TRANSFORM(mjuros+mmulta,'999,999.99')+' '+TRANSFORM(mvlpago,'999,999.99')+' X')
                        AADD(m_po,{RECNO(),'X',(malias)->valor,mjuros+mmulta,mvlpago,'X'})
                        DBCOMMITALL()
                        DBUNLOCKALL()
                ENDIF
                IF pconta = '*'
                        IF ADIREG()
                                (malias)-> empresa := mcodemp
                                (malias)-> tipo := mtipo
                                IF mtipo = 'CH'
                                        (malias)-> numero := mnumero
                                ENDIF
                                (malias)-> duplicata := mduplicata
                                (malias)-> numero  := mnumero
                                (malias)-> valor_dup := mvalor_dup
                                (malias)-> fornec := STRZERO(mcod_cli,5)
                                (malias)-> cliente := mcliente
                                (malias)-> tip_cli := mtip_cli
                                (malias)-> emissao := memissao
                                (malias)-> venc1   := mvenc
                                IF ! EMPTY(mmulta) .OR. ! EMPTY(mjuros)
                                        (malias)-> venc := mdatpag
                                ELSE
                                        (malias)-> venc := mvenc
                                ENDIF
                                (malias)-> valor := mvalor_cont
                                (malias)-> pago := " "
                                (malias)-> vendedor := mcod_vend
                                (malias)-> num_ped := mnum_ped
                                (malias)-> conta := pconta
                                (malias)-> banco := mbanco
                                (malias)-> comissao := mcomissao
                                (malias)-> operador := cod_operado
                                (malias)-> obs   := mobs
                                (malias)-> obs1  := mobs1
                                (malias)->agencia  := magencia
                                (malias)->c_c      := mc_c
                                (malias)->corrente := mcorrente
                                (malias)->doc_tran := mdoc_tran
                                (malias)->dat_tran := mdat_tran
                        ENDIF
                ENDIF
                IF cx <> NIL
                        ******************
                        SELE('caix');ORDSETFOCUS(3)
                        GO TOP
                        *****************
*                       IF mtipo = 'DU'
                                IF caix->(DBSEEK(mtipo + mduplicata + STRZERO(mcod_cli,5)))
                                        mnota := caix->nota
                                        mtipo_comp := caix->tipo_comp
                                        mcod_vend := caix->cod_vend
                                        mdescri1  := caix->descri1
                                        mdescri2  := caix->descri2
                                        IF BLOQREG()
                                                caix->op_pg := 'P'
                                                DBCOMMIT()
                                                DBUNLOCK()
                                        ENDIF
                                ENDIF
*                       ENDIF
                        IF ADIREG()
                                caix-> empresa := mcodemp
                                caix-> tipo := mtipo
                                caix-> nota := 'DOC.PG  '
                                caix-> num_dup := mduplicata
                                caix-> num_ban := mnumero
                                caix-> documento := mduplicata
                                caix-> data := mdatpag
                                caix-> descri1:= mdescri1
                                caix-> descri2:= mdescri2
                                caix-> venci := (malias)->venc
                                caix-> valor := mvlpago
                                caix-> cod_cli := (malias)->fornec
                                caix-> cod_vend := mcod_vend
                                caix-> cod_opera := cod_operado
                                caix-> pg := '*'
                                caix-> op_pg := 'P'
                                caix-> valor_com := mvlpago
                                caix-> comissao := mcomissao
                                caix-> hora     := TIME()
                                caix-> tp_mov   := 'B'
                                DBCOMMIT()
                                DBUNLOCK()
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF m_set[1,149] = 'R' .OR. m_set[1,149] = 'A'
                        IF  m_set[1,149] = 'R'
                                mtipo_aut := 2
                        ELSE
                                mtipo_aut := 1
                        ENDIF
                        mtela_aut := SAVESCREEN(00,00,24,79)
                        botao(10,35,12,67,,' Opcao de Autenticacoes ')
                        @ 11,36 PROMPT ' Autenticar'
                        @ 11,50 PROMPT ' Imprimir Recibo '
                        SET INTEN ON
                        MENU TO mtipo_aut
                        RESTSCREEN(00,00,24,79,mtela_aut)
                        IF  mtipo_aut = 2
                                rec_dupr(m_dup,m_po,1,mjuros+mmulta,mvlpago,mdatpag,mtp) //con252
                        ELSE
                                //mtela_aut := SAVESCREEN(00,00,24,79)
                                //WHILE LASTKEY() <> 27
                                opcao := 'S'
                                WHILE opcao = 'S'
                                        //botao(10,10,13,60,,' AUTENTICACAO DE DOCUMENTO ')
                                        //DEVPOS(11,11);DEVOUT('Insira o Documento na impressora p/autenticar')
                                        //DEVPOS(12,11);DEVOUT('  <ENTER> p/Autenticar - <ESC> p/abandonar')
                                        //INKEY(0)
                                        //IF LASTKEY() = 27;EXIT;ENDIF
                                        opcao := op_simnao('S','Insira o Documento na impressora p/AUTENTICAR',' AUTENTICACAO DE DOCUMENTO ')
                                        IF opcao = 'S'
                                                SET DEVI TO PRINT
                                                SET PRINT TO (m_indiv[1,20])
                                                imprt(m_indiv[1,21],'C')
                                                DEVPOS(00,00);DEVOUT(ALLTRIM(SUBSTR(m_set[1,23],1,4))+ALLTRIM(mduplicata)+cod_operado+DTOC(mdatpag)+ALLTRIM(TRANSFORM(mvlpago,'999999.99')))
                                                imprt(m_indiv[1,21],'N')
                                                SETPRC(00,00)
                                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                        ENDIF
                                ENDDO
                                //RESTSCREEN(00,00,24,79,mtela_aut)
                        ENDIF
                ENDIF
                IF mlimp_cli = '*';mcod_cli:=0;ENDIF
                opcao := op_simnao('N','Deseja gerar um CREDITO em CONTA CORRENTE [S/n]:')
                IF LASTKEY() = 27
                        *****************
                        SELE(malias);ORDSETFOCUS(1)
                        *****************
                        LOOP
                ENDIF
                IF opcao = 'S'
                        sac2cc11(mvlpago,'RECEBIMENTO DA DUPLICATA DE No.: '+mtipo+mduplicata)
                ENDIF
        ELSEIF mtp = 'S'
                opcao := op_simnao('S','Confirma o Estorno do DOCUMENTO ? [S/n]:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                IF ! BLOQREG()
                        atencao('Nao foi possivel acessar o registro..')
                        LOOP
                ENDIF
                (malias)->datope := CTOD('  /  /  ')
                (malias)->datpag := CTOD('  /  /  ')
                (malias)->vlpago := 0
                (malias)->pago := ' '
                (malias)->tip_pg := '  '
                (malias)->desc := 0
                (malias)->juros := 0
                (malias)->cheque := SPACE(8)
                (malias)->operador := cod_operado
                (malias)->obs := mobs
                IF (malias)->tipo = 'CH'
                        IF 'S' = op_simnao('N','Deseja Incluir como CHEQUE DEVOLVIDO:')
                                mtel_mot := SAVESCREEN(00,00,24,79)
                                WHILE .T.
                                        botao(12,30,16,78,,' Inclusao de CHQ.DEVOLVIDO ')
                                        DEVPOS(13,31);DEVOUT('Data....:')
                                        DEVPOS(14,31);DEVOUT('Operador:')
                                        DEVPOS(15,31);DEVOUT('Motivo..:')
                                        setcor(3)
                                        DEVPOS(13,41);DEVOUT(mdata_sis)
                                        DEVPOS(14,41);DEVOUT(cod_operado)
                                        setcor(1)
                                        @ 15,41 GET mmotivo
                                        READ
                                        IF LASTKEY() = 27
                                                RESTSCREEN(00,00,24,79,mtel_mot)
                                                EXIT
                                        ENDIF
                                        IF 'S' = op_simnao('S','Confirma a Inclusao:')
                                                (malias)->data_fund := mdata_sis
                                                (malias)->cod_incl  := cod_operado
                                                (malias)->motivo    := mmotivo
                                                RESTSCREEN(00,00,24,79,mtel_mot)
                                                sac26(1,(malias)->numero,(malias)->duplicata)
                                                EXIT
                                        ELSE
                                                LOOP
                                        ENDIF
                                ENDDO
                        ENDIF
                ENDIF
                DBUNLOCK()
                DBCOMMIT()
                IF (malias)->mov_cx = 'C'
                        ******************
                        SELE('caix');ORDSETFOCUS(3)
                        GO TOP
                        *****************
                        IF caix->(DBSEEK(mtipo + mduplicata + STRZERO(mcod_cli,5) + '*'))
                                BLOQREG()
                                DELE
                                DBUNLOCK()
                                DBCOMMIT()
                                sr_getconnection():exec("DELETE FROM saccaixa WHERE SR_DELETED = 'T'",,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                        ENDIF
                ENDIF
        ELSEIF mtp = 'E'
                opcao := op_simnao('S','Confirma a EXCLUSAO do DOCUMENTO ? [S/n]:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                BLOQREG()
                DELE
                DBUNLOCK()
                DBCOMMIT()
        ENDIF
        *****************
        SELE(malias);ORDSETFOCUS(1)
        *****************
        DBCOMMIT()
ENDDO
wvw_lclosewindow()
RETURN NIL
