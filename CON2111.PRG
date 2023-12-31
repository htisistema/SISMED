*** CON2111.PRG: Inclusao de VARIAS Duplicatas (a pagar)
***
************************************************
MEMVAR getlist,nivel_acess,mdata_sis,cod_operado

FUNCTION con2111
****************
LOCAL MPRG:='CON2111',;
      mtipo,mduplicata,mtraco,opcao,tela,mvalor,;
      mobs,mqtd_parc:=0,mintervalo:=0,mdoc,i,tela1,mtp_pg,;
      lci,cci,lba,cba,li,ci,lb,cb,point := 0

PRIVATE mcod_forn,mvenc,memissao,mnome_vend,mcom_ven,mnome_cli,mend,mbairro,mcidade,;
        muf,mcgc,mcpf,minsc,mbanco,mnum_banco,mtipo_imp,mdesc_cart,mprazo_cart,;
        mcartao,m_dup:={},mcodconta,mfornece,mparcela,m_demo:={},mvalor_parc:=0,mtotal:=0

IF ! ver_nivel(mprg,'CONTA A PAGAR (INCLUSAO DE VARIOS DOCUMENTO)','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF

lci := 00
cci := 00
lba := 15
cba := 79

li := 04
ci := 50
lb := 29
cb := 89

mtraco := REPLI('-',80)
op_tela(02,02,14,77,' INCLUSAO DE VARIOS Documentos A PAGAR ')
WHILE .T.
        ASIZE(m_dup,0)
        ASIZE(m_demo,0)
        exibi_prg(mprg)
        limpa(00,00,33,100)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo da Empresa......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Codigo Fornec./Despesa.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Tipo Documentos........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Tipo de Conta..........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Numero Documentos......:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data de Emissao........:')
        DEVPOS(lci+7,cci+2);DEVOUT('Valor Total R$.........:')
        DEVPOS(lci+7,cci+41);DEVOUT('Valor da Parcela R$:')
        DEVPOS(lci+8,cci+2);DEVOUT('Pag. [C]arteria [B]anco:')
        DEVPOS(lci+9,cci+2);DEVOUT('Tipo de Pagamento......:')
        DEVPOS(lci+10,cci+2);DEVOUT('OBS.:')
        DEVPOS(lci+11,cci+2);DEVOUT('Qtd. de Parcelas:')
        DEVPOS(lci+11,cci+25);DEVOUT('Intervalos:')
        mtipo_imp := 'J'
        *****************
        SELE('dupp');ORDSETFOCUS(1)
        GO TOP
        *****************
        mtp_pg := ' '
        mduplicata := SPACE(10)
        memissao := mdata_sis
        mvenc=CTOD("  /  /  ")
        mvalor := mvalor_parc := mcod_forn := 0
        mtipo := SPACE(2)
        mcodconta := '    '
        mobs := SPACE(60)
        mbanco := ' '
        Mensagem('Complete os Dados.  - <F1> Ajuda do Campo - [ESC] Abandona.')
        @ lci+2,cci+27 GET mcod_forn PICT "9999" VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,lci+2,cci+32))
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF ! EMPTY(mcod_forn);ver_fab(mcod_forn,lci+2,cci+32);ENDIF
        mcodconta := forn->tipo
        mfornece := forn->razao
        @ lci+3,cci+27 GET mtipo PICT '@!' VALID mtipo $ 'PA,DU,FR,CH' .AND. lim_get() WHEN men_get(lci+4,cci+27,'Informe o tipo de documento <DU>duplicata <CH>cheques <FR>frete <PA>pagamentos')
        @ lci+4,cci+27 GET mcodconta PICT '9999' VALID verdesp(mcodconta,lci+4,cci+32) .AND. lim_get() WHEN men_get(lci+5,cci+27,'Identifique o Grupo da Conta preenchendo so o primeiro digito da conta, ou preenchendo todo os espaco p/o tipo de conta <F1>Ajuda')
        READ
        setcor(3)
        DEVPOS(lci+4,cci+27);DEVOUT(mcodconta)
        setcor(1)
        verdesp(mcodconta,lci+4,cci+32)
        @ lci+5,cci+27 GET mduplicata PICT '@!'
        @ lci+6,cci+27 GET memissao
        @ lci+7,cci+27 GET mvalor PICT "9,999,999.99"
        @ lci+7,cci+62 GET mvalor_parc PICT "9,999,999.99" WHEN mvalor = 0
        @ lci+8,cci+27 GET mbanco PICT "@!" VALID mbanco $ 'C,B' .AND. lim_get() WHEN men_get(lci+9,cci+27,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO')
        @ lci+9,cci+27 GET mtp_pg PICT "@!" WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
        @ lci+10,cci+07 GET mobs
        @ lci+11,cci+20 GET mqtd_parc PICT '99'  VALID IF(EMPTY(mqtd_parc),.F.,.T.)
        @ lci+11,cci+37 GET mintervalo PICT '99' VALID IF(EMPTY(mintervalo),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma os Dados ?:')
        IF opcao = "N"
                LOOP
        ENDIF
        IF EMPTY(mvalor) .AND. EMPTY(mvalor_parc)
                LOOP
        ENDIF
        IF mvalor_parc > 0
                mparcela := mvalor_parc
        ELSE
                mparcela := mvalor / mqtd_parc
        ENDIF
        i := 0
        mvenc := mdata_sis
        FOR i = 1 TO mqtd_parc
                mdoc := ALLTRIM(mduplicata)+'/'+STRZERO(i,2)+SPACE(10-LEN(ALLTRIM(mduplicata)+'/'+STRZERO(i,2)))
                mvenc := mvenc + mintervalo
                IF DOW(mvenc) = 1
                        mvenc := mvenc + 1
                ENDIF
                AADD(m_dup,{mparcela,mvenc,mdoc})
                AADD(m_demo,' '+mdoc+'   '+DTOC(mvenc)+'   '+TRANSFORM(mparcela,'999,999.99'))
                mtotal := mtotal + mparcela
        NEXT
        point := 0
        op_tela(li,ci,lb,cb,'INCLUSAO DE VARIOS DOCUMENTOS')
        WHILE .T.
                DEVPOS(1,1);DEVOUT('Documento    Vencimento        Valor')
                @ 2,0 TO 2,100
                DEVPOS(25,1);DEVOUT('Qtd.Parc.:')
                DEVPOS(25,15);DEVOUT('Total:')
                @ 24,0 TO 24,100
                setcor(3)
                DEVPOS(25,11);DEVOUT(TRANSFORM(mqtd_parc,'999'))
                DEVPOS(25,21);DEVOUT(TRANSFORM(mtotal,'999,999.99'))
                setcor(1)
                point := ACHOICE(3,1,23,37,m_demo,,,point)
                DO CASE
                        CASE LASTKEY()=27
                                wvw_lclosewindow()
                                EXIT
                        CASE LASTKEY() = 13
                                op_tela(17,05,21,35,'ALTERACAO DE DOCUMENTO')
                                DEVPOS(01,01);DEVOUT('Documento.:')
                                DEVPOS(02,01);DEVOUT('Vencimento:')
                                DEVPOS(03,01);DEVOUT('Valor R$..:')
                                @ 01,13 GET m_dup[point,3] PICT '@!'
                                @ 02,13 GET m_dup[point,2]
                                @ 03,13 GET m_dup[point,1] PICT '999,999.99'
                                READ
                                m_demo[point] := ' '+m_dup[point,3]+'   '+DTOC(m_dup[point,2])+'   '+TRANSFORM(m_dup[point,1],'999,999.99')
                                i := mtotal := 0
                                FOR i = 1 TO mqtd_parc
                                        mtotal := mtotal + m_dup[point,1]
                                NEXT
                                wvw_lclosewindow()
                ENDCASE
        ENDDO
        opcao := op_simnao('S','Confirma os Dados ?:')
        IF opcao = "N"
                LOOP
        ENDIF
        *****************
        SELE('dupp');ORDSETFOCUS(1)
        GO TOP
        *****************
        i := 0
        FOR i = 1 TO mqtd_parc
                IF ADIREG()
                        dupp-> tipo := mtipo
                        dupp-> duplicata := m_dup[i,3]
                        dupp-> valor_dup := m_dup[i,1]
                        dupp-> tip_for := mcodconta
                        dupp-> fornec := STRZERO(mcod_forn,4)
                        dupp-> cliente := mfornece
                        dupp-> emissao := memissao
                        dupp-> venc := m_dup[i,2]
                        dupp-> valor := m_dup[i,1]
                        dupp-> pago := " "
                        dupp-> vendedor := cod_operado
                        dupp-> banco := mbanco
                        dupp-> obs      := mobs
                        dupp-> operador := cod_operado
                        dupp-> tp_pg := mtp_pg
                ELSE
                        atencao('Nao foi possivel Acessar o Arquivo !!!')
                        LOOP
                ENDIF
        NEXT
        DBUNLOCKALL()
        DBCOMMITALL()
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************** f i m *************************************




