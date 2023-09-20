*** CON212.PRG: Alteracao de Duplicatas (a pagar)
*************************************************
MEMVAR getlist,nivel_acess,memp_resa,mend_firm,mcid_firm,muf_firm,mcgc_firm,minsc_firm,;
       cod_operado,lba,cba,mfone_firm

FUNCTION con212(mt_op)
**********************
LOCAL MPRG:='CON212',mtitulo,;
      tela,mduplicata,lfor,last,mvalor,mtipo,mcod_ven,mnum_nf,opcao,mtraco,;
      mobs,mcod_aux,tela242,mextenso,mlinha,mlin,lin,mnum_banco,mc_c,mpago:=' ',;
      li := 06,ci := 29,la := 22,ca := 79,m_dupp:={},m_pos:={},point:=0,tela1,;
      mcont_doc:=0,mtotal_doc := 0,mtp_pg:=' ',mordem:='9'

PRIVATE mcod_forn,mvenc,memissao,mnome_vend,mcom_ven,mfornece,mend,mbairro,mcidade,;
        muf,mcgc,mcpf,minsc,mbanco,mcodconta,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF mt_op = NIL
        mtitulo := 'CONTA APAGAR (ALTERACAO DE DOCUMENTOS)'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ELSE
        mtitulo := 'CONTA APAGAR (EXCLUSAO DE DOCUMENTOS)'
        IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
                RETURN NIL
        ENDIF
ENDIF
lba := 20
cba := 78

*------------------------------------------------------------------------------------
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccaixa','caix');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
mtraco := REPLI('-',80)
*****************
SELE('dupp');ORDSETFOCUS(1)
*****************
setcor(1)
op_tela(00,00,24,79,mtitulo)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'J'
****************************************************
        limpa(0,0,25,120)
        rest scree from tela242
        mcont_doc := mtotal_doc := mcod_ven := mcom_ven := mcod_forn := ;
        mcod_aux  := 0
        mnome_vend := SPACE(30)
        mduplicata:= SPACE(10)
        mtipo := SPACE(2)
        mnum_nf := SPACE(6)
        mbanco := SPACE(1)
        mfornece := mend := SPACE(40)
        mobs := SPACE(60)
        mnum_banco := SPACE(3)
        mc_c := SPACE(10)
        mtp_pg := ' '
        DEVPOS(1,2);DEVOUT('Codigo da Empresa......:')
        DEVPOS(2,2);DEVOUT('Tipo Documento.........:')
        DEVPOS(3,2);DEVOUT('Numero Banco...........:')
        DEVPOS(3,32);DEVOUT('Conta:')
        DEVPOS(4,2);DEVOUT('Numero Documento.......:')
        DEVPOS(5,2);DEVOUT('Codigo do Fornecedor...:')
        DEVPOS(6,2);DEVOUT('Tipo de Conta..........:')
        DEVPOS(7,2);DEVOUT('Data de Emissao........:')
        DEVPOS(8,2);DEVOUT('Data de Vencimento.....:')
        DEVPOS(9,2);DEVOUT('Valor Duplicata R$.....:')
        DEVPOS(10,2);DEVOUT('Pag. [C]arteria [B]anco:')
        DEVPOS(11,2);DEVOUT('Tipo de Pagamento......:')
        DEVPOS(12,2);DEVOUT('Numero da Nota Fiscal..:')
        DEVPOS(13,2);DEVOUT('Observacao:')

        Mensagem("Digite o Numero da Documento. [ESC] Abandona.")
        @ 2,27 GET mtipo PICT '@!' VALID mtipo $ 'CH,DU,FR,PA,  ' .AND. lim_get() WHEN men_get(3,31,'Informe o tipo de documento <DU>duplicata <CH>cheques <FR>Frete e <PA>pagamento')
        @ 4,27 GET mduplicata PICT '@!' VALID IF(EMPTY(mduplicata),.F.,.T.) WHEN ! EMPTY(mtipo)
        @ 5,27 GET mcod_forn PICT "9999" VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,5,32)) .AND. lim_get() WHEN men_get(6,31,'Informe o Cod. do Fornecedor ou <F6>p/pesquisas de Fornecedor')
        READ
        IF LASTKEY()=27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mtipo)
                ASIZE(m_dupp,0)
                ASIZE(m_pos,0)
                mordem := '9'
                mordem := mensagem1('Tipo de Ordem [2] DOCUMENTO - [9] VENCIMENTO:','9','2,9')
                ***************************
                SELE('dupp');ORDSETFOCUS(VAL(mordem))
                GO TOP
                ***************************
                IF dupp->(DBSEEK(STRZERO(mcod_forn,4)))
                        mcliente := dupp->cliente
                        WHILE dupp->fornec = STRZERO(mcod_forn,4) .AND. ! EOF()
                                IF ! EMPTY(dupp->datpag)
                                        SKIP
                                        LOOP
                                ENDIF
                                AADD(m_dupp,' '+dupp->tipo+' '+dupp->duplicata+'   '+dupp->numero+'   '+DTOC(dupp->venc)+'   '+TRANSFORM(dupp->valor,'999,999.99')+' '+dupp->conta)
                                AADD(m_pos,RECNO())
                                mcont_doc ++
                                mtotal_doc := mtotal_doc + dupp->valor
                                SKIP
                        ENDDO
                        IF LEN(m_dupp) = 0
                                atencao('Nao existe nenhum Documento')
                                LOOP
                        ENDIF
                        tela1 := SAVESCREEN(00,00,24,79)
                        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
                        botao(li,ci,la,ca)
                        setcor(3)
                        DEVPOS(li+1,ci+01);DEVOUT('Documento')
                        DEVPOS(li+1,ci+16);DEVOUT('Op')
                        DEVPOS(li+1,ci+19);DEVOUT(' No.')
                        DEVPOS(li+1,ci+25);DEVOUT('Vencimento')
                        DEVPOS(li+1,ci+42);DEVOUT('Valor')
                        @ li+2,ci+1 TO li+2,ca-1
                        @ la-2,ci+1 TO la-2,ca-1
                        DEVPOS(la-1,ci+1);DEVOUT('Quantidade:')
                        DEVPOS(la-1,ci+24);DEVOUT('Total:')
                        setcor(1)
                        DEVPOS(la-1,ci+13);DEVOUT(STRZERO(mcont_doc,4))
                        DEVPOS(la-1,ci+31);DEVOUT(TRANSFORM(mtotal_doc,'9,999,999.99'))
                        point := ACHOICE(li+3,ci+1,la-3,ca-1,m_dupp,,,point)

                        DO CASE
                                CASE LASTKEY()=27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        LOOP
                                CASE LASTKEY() = 13
                                        RESTSCREEN(00,00,24,79,tela1)
                                        GO m_pos[point]
                                        mtipo := dupp->tipo
                                        mduplicata := dupp->duplicata
                        ENDCASE
                ELSE
                        atencao('Nao existe Documentos deste Cliente')
                        LOOP
                ENDIF
        ELSE
                IF ! dupp->(DBSEEK(mtipo+mduplicata+' '+STRZERO(mcod_forn,4)))
                        GO TOP
                        IF ! dupp->(DBSEEK(mtipo+mduplicata+'B'+STRZERO(mcod_forn,4)))
                                atencao('Este Documento nao existe !!!')
                                LOOP
                        ENDIF
                ENDIF
        ENDIF
        IF dupp->pago = 'B'
                mpago := '*'
                atencao('Este Documento ja foi pago !!!')
        ENDIF
        point := RECNO()
        mcod_aux := VAL(dupp->fornec)
        lfor=dupp->fornec
        last=dupp->valor
        memissao=dupp->emissao
        mvenc=dupp->venc
        mvalor=dupp->valor
        mcod_ven := VAL(dupp->vendedor)
        mnum_nf := dupp->num_ped
        mbanco := SUBSTR(dupp->banco,1,1)
        mobs := dupp->obs
        mnum_banco := dupp->numero
        mc_c := dupp->c_c
        IF mcod_forn = mcod_aux
                mfornece :=  dupp->cliente
        ELSE
                mfornece :=  forn->razao
        ENDIF
        mcodconta := dupp->tip_for
        mtp_pg := dupp->tp_pg
        IF mt_op = NIL
                mensagem('Complete os Dados. [ESC] Abandona.')
                @ 2,27 GET mtipo PICT '@!' VALID mtipo $ 'CH,DU,FR,PA,VL,BN,DE' .AND. lim_get() WHEN men_get(3,31,'Informe o tipo de documento <DU>duplicata <CH>cheques <FR>frete e <PA>pagamento <BN>BNB <DE>Descarrego') .AND. mt_op = NIL
                @ 4,27 GET mduplicata PICT '@!' WHEN mt_op = NIL
                @ 5,27 GET mcod_forn PICT "9999" VALID IF(EMPTY(mcod_forn),.F.,v_fornece(mcod_forn,5,32)) .AND. lim_get() WHEN men_get(6,31,'Informe o Cod. do Cliente ou <F7>p/pesquisas do Fornecedores') .AND. mt_op = NIL
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
                @ 3,27 GET mnum_banco PICT '@!' WHEN mtipo = 'CH'
                @ 3,40 GET mc_c PICT '@!' WHEN mtipo = 'CH'
                @ 5,32 GET mfornece PICT "@!"
                @ 6,27 GET mcodconta PICT '9999' VALID IF(LEN(ALLTRIM(mcodconta))<3,.F.,verdesp(mcodconta,6,32)) .AND. lim_get() WHEN men_get(7,27,'Identifique o Grupo da Conta preenchendo so o primeiro digito da conta, ou preenchendo todo os espaco p/o tipo de conta <F1>Ajuda')
                @ 7,27 GET memissao WHEN mpago = ' '
                @ 8,27 GET mvenc VALID IF(EMPTY(mvenc),.F.,.T.) WHEN mpago = ' '
                @ 9,27 GET mvalor PICTure "@E 99,999,999,999.99" VALID mvalor>0 WHEN mpago = ' '
                @ 10,27 GET mbanco PICT "@!" VALID mbanco $ 'C,B, ' .AND. lim_get() WHEN men_get(11,31,'Digite [C] para pagamento em CARTEIRA [B] para pagamento em BANCO"')
                @ 11,27 GET mtp_pg PICT "@!" WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
                @ 12,27 GET mnum_nf PICT "@!"
                @ 13,14 GET mobs
                READ
                IF LASTKEY()=27
                        LOOP
                ENDIF
                opcao := op_simnao('S','confirma os dados da Alteracao:')
                IF mcod_forn = mcod_aux
                        mfornece :=  dupp->cliente
                ELSE
                        mfornece :=  forn->razao
                ENDIF
        ELSE
                v_fornece(mcod_forn,5,32)
                setcor(3)
                @ 2,27 SAY mtipo
                @ 4,27 SAY mduplicata
                @ 5,27 SAY mcod_forn PICT "9999"
                @ 3,27 SAY mnum_banco
                @ 3,40 SAY mc_c
                @ 5,32 SAY mfornece
                @ 6,27 SAY mcodconta PICT '9999'
                @ 7,27 SAY memissao
                @ 8,27 SAY mvenc
                @ 9,27 SAY mvalor PICTure "@E 99,999,999,999.99"
                @ 10,27 SAY mbanco PICT "@!"
                @ 11,27 GET mtp_pg PICT "@!" WHEN men_get(2,38,'Deixar em branco ou preencha com o tipo de pagamento que desajar')
                @ 12,27 SAY mnum_nf PICT "@!"
                @ 13,14 SAY mobs
                setcor(1)
                opcao := op_simnao('N','confirma a EXCLUSAO:')
        ENDIF
        IF opcao = "N"
                LOOP
        ENDIF
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF mt_op = NIL
                IF BLOQREG()
                        dupp-> tipo := mtipo
                        dupp-> numero    := mnum_banco
                        dupp-> c_c       := mc_c
                        dupp-> duplicata := mduplicata
                        dupp-> tip_for := mcodconta
                        dupp-> fornec := STRZERO(mcod_forn,4)
                        dupp-> cliente := mfornece
                        dupp-> emissao := memissao
                        dupp-> venc := mvenc
                        dupp-> valor := mvalor
                        dupp-> vendedor := cod_operado
                        dupp-> banco := mbanco
                        dupp-> tp_pg := mtp_pg
                        dupp-> num_ped := mnum_nf
                        dupp-> operador := cod_operado
                        dupp-> obs      := mobs
                        IF memissao = mvenc
                                opcao := op_simnao('S','Deseja fazer a BAIXA deste documento agora:')
                                IF opcao = 'S'
                                        dupp->datpag := mvenc
                                        dupp->vlpago := mvalor
                                        dupp->pago := "B"
                                        dupp->banco := 'C'
                                ENDIF
                        ENDIF
                        DBCOMMIT()
                        DBUNLOCK()
                ELSE
                        atencao('Nao foi possivel Acessar o Arquivo !!!')
                        LOOP
                ENDIF
                *****************
                SELE('dupp');ORDSETFOCUS(1)
                *****************
                DBUNLOCKALL()
                DBCOMMITALL()
                IF ! imp_arq('ALT_DUPP.REL','R')
                        LOOP
                ENDIF
                //SET DEVI TO PRINT
                //SET PRINT TO (m_indiv[1,17])
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),00);DEVOUT(m_set[1,23])
                imprt(mtipo_imp,'N',1)
                DEVPOS(PROW(),00);DEVOUT(mend_firm)
                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm)
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+mfone_firm)
                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+'   C.G.C.: '+mcgc_firm)
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY ' '
                @ PROW(),00 SAY 'Fornecedor:'
                @ PROW(),PCOL()+1 SAY STRZERO(mcod_forn,4)
                @ PROW(),PCOL()+1 SAY forn->razao
                @ PROW()+1,00 SAY mtraco
                imprt(mtipo_imp,'E',1)
                pitalico(.T.)
                @ PROW(),00 SAY 'DUPLICATA No.: '+mtipo+mduplicata
                pitalico(.F.)
                imprt(mtipo_imp,'N')
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Emissao:'
                @ PROW(),09 SAY memissao
                @ PROW(),38 SAY 'Vencimento:'
                @ PROW(),50 SAY mvenc
                @ PROW()+1,00 SAY 'Fatura No.:_______________'
                @ PROW(),49 SAY 'Cod.:'
                @ PROW(),55 SAY cod_operado
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT(PADC('Valor R$: ('+LTRIM(TRANSFORM(mvalor,'99,999,999.99'))+')',60))
                mextenso:= '('+extenso(mvalor,.T.,'real','reais')+')'
*                mextenso:= '('+RTRIM(extenso(mvalor))+')'
                mlinha := MLCOUNT(mextenso,80)
                FOR lin = 1 TO mlinha
                        mlin := MEMOLINE(mextenso,80,lin,,10)
                        DEVPOS(PROW()+1,00);DEVOUT(PADR(RTRIM(mlin),80))
                NEXT
                @ PROW()+1,00 SAY mtraco
                mextenso:= 'Reconheco(cemos) a exatidao desta DUPLICATA DE VENDA MERCANTIL, na importancia acima que pagarei(emos) a '+m_set[1,129]+', ou a sua ordem na praca e vencimento indicados.'
                mlinha := 0
                mlinha := MLCOUNT(mextenso,80)
                lin := 0
                FOR lin = 1 TO mlinha
                        mlin := MEMOLINE(mextenso,80,lin,,10)
                        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(mlin))
                NEXT
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+1,00);DEVOUT('Obs.: '+mobs)
                @ PROW()+1,00 SAY mtraco
                DEVPOS(PROW()+2,00);DEVOUT(PADC('Em ________/________/________',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('Data do Aceite',80))
                DEVPOS(PROW()+2,00);DEVOUT(PADC('_________________________________           _______________________________',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('     Assinatura do Emitente                      Assinatura do Sacado',80))
                @ PROW()+1,00 SAY mtraco
                EJECT
                SETPRC(00,00)
                SET PRINT TO;SET DEVI TO SCREEN;SET PRINT OFF

                conf_impressao('ALT_DUPP.REL')
        ELSE
                BLOQREG()
                dupp-> operador := cod_operado
                DELE
                DBCOMMIT()
                DBUNLOCK()
                sr_getconnection():exec("DELETE FROM sacdupp WHERE SR_DELETED = 'T'",,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*******************************  F I M  **********************************

