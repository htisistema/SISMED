* DESPROTEGER E VERIFICA O COMPUTADOR
***************************************
MEMVAR mcaminho

FUNCTION smedcdx(indexar,mfile)
************
LOCAL mprg:='SMEDCDX'
PRIVATE lci:=0,lba:=25,cba:=120,;
        cor,matriz :={},i:=0,opcao:=' ',mcont:=0,mcont1:=0,malias,;
        mreindex,mqtd_ind:=0
RGB(240,249,144)
op_tela(10,01,13,80,' I N D E X A C A O    D O S    A R Q U I V O S ','1','*')
mqtd_ind := 0
DEVPOS(lci,1);DEVOUT('01> INSOPERA =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('insopera') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'insopera'
        IF ! AbriArq('insopera','sen','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON sen->snome TAG senha TO ('insopera')
        INDEX ON sen->scod_op TAG codop TO ('insopera')
        sen->(DBCLOSEAREA())
ENDIF
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('02> SMEDCLI   =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcli') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcli'
        //IF ! AbriArq('SACMOV','mov','E');RETURN NIL;wvw_lclosewindow();ENDIF
        USE 'smedcli' ALIAS 'cli' EXCLUSIVE NEW VIA 'SQLRDD'
        //atencao('ok')
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cli->nome TAG cadnome TO ('smedcli')
        INDEX ON cli->registro TAG cadreg TO ('smedcli')
        cli->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('03> SMEDAGEN  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedagen') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedagen'
        //IF ! AbriArq('SACMOV','mov','E');RETURN NIL;wvw_lclosewindow();ENDIF
        USE 'smedagen' ALIAS 'agen' EXCLUSIVE NEW VIA 'SQLRDD'
        //atencao('ok')
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(agen->datacomp) TAG datcomp TO ('smedagen')
        agen->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('04> SMEDDRO  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smeddro') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smeddro'
        //IF ! AbriArq('SACMOV','mov','E');RETURN NIL;wvw_lclosewindow();ENDIF
        USE 'smeddro' ALIAS 'dro' EXCLUSIVE NEW VIA 'SQLRDD'
        //atencao('ok')
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON dro->nomecom TAG dronome TO ('smeddro')
        INDEX ON dro->cod_med + dro->nomecom TAG codnome TO ('smeddro')
        dro->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('06> SMEDCONV =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedconv') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedconv'
        USE 'smedconv' ALIAS 'conv' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON conv->codconv TAG codc TO ('smedconv')
        conv->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('07> SMEDMED =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedmed') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedmed'
        USE 'smedmed' ALIAS 'med' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON med->especialid+med->profission TAG espe TO ('smedmed')
        INDEX ON med->profission TAG prof TO ('smedmed')
        INDEX ON med->cod_espe TAG cod TO ('smedmed')
        INDEX ON med->crm TAG cr TO ('smedmed')
        med->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('08> SMEDREC =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedrec') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedrec'
        USE 'smedrec' ALIAS 'rec' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(rec->data)+rec->nome TAG dat TO ('smedrec')
        rec->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('09> SMEDCLIN =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedclin') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedclin'
        USE 'smedclin' ALIAS 'clin' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(clin->data)+clin->nome TAG dat TO ('smedclin')
        clin->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('10> SMEDRECE =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedrece') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedrece'
        USE 'smedrece' ALIAS 'rece' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON rece->cod_rece TAG codrece TO ('smedrece')
        rece->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('11> SMEDCON =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcon') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcon'
        USE 'smedcon' ALIAS 'cons' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(cons->data)+cons->hora+cons->nome TAG datacon TO ('smedcon')
        INDEX ON cons->hora+DTOS(cons->data)+cons->turno TAG hora TO ('smedcon')
        INDEX ON cons->nome+DTOS(cons->data)+cons->hora TAG nome TO ('smedcon')
        INDEX ON DTOS(cons->data)+cons->turno+cons->hora TAG dattur TO ('smedcon')
        INDEX ON DTOS(cons->data)+cons->nome+cons->hora TAG datnome TO ('smedcon')
        cons->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('12> SMEDCOL =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcol') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcol'
        USE 'smedcol' ALIAS 'col' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON col->nome TAG nome TO ('smedcol')
        col->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('13> SMEDCID =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcid') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcid'
        USE 'smedcid' ALIAS 'cid' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cid->tipo + cid->nome TAG tip TO ('smedcid')
        INDEX ON cid->tipo + cid->codigo TAG tipcod TO ('smedcid')
        cid->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDCAIX =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcaix') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcid'
        USE 'smedcaix' ALIAS 'caix' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(caix->data) + caix->nota + caix->tipo + caix->documento TAG dat TO smedcaix
        INDEX ON caix->cod_cli TAG codcli TO smedcaix
        INDEX ON caix->tipo + caix->num_dup TAG tip TO smedcaix
        INDEX ON caix->descri1 + DTOS(caix->data) + caix->tipo TAG descri TO smedcaix
        INDEX ON caix->num_ban + caix->documento + STR(caix->valor,2) TAG num TO smedcaix
        INDEX ON caix->nota TAG not TO smedcaix
        caix->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDDE =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedde') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedde'
        USE 'smedde' ALIAS 'desp' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON desp->codigo TAG codigo TO smedde
        desp->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDCOMP =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcomp') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcomp'
        USE 'smedcomp' ALIAS 'com' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON com->codcli+DESCEND(DTOS(com->data)) TAG cod TO smedcomp
        com->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDENDO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedendo') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedendo'
        USE 'smedendo' ALIAS 'endo' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON STR(endo->idade)+endo->sexo TAG id TO smedendo
        INDEX ON endo->sexo+STR(endo->idade) TAG sx TO smedendo
        INDEX ON endo->mot_exa1+endo->sexo+STR(endo->idade) TAG mt TO smedendo
        INDEX ON endo->diag1+endo->sexo+STR(endo->idade) TAG di TO smedendo
        INDEX ON endo->cod+endo->nome TAG cod TO smedendo
        endo->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDPATO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedpato') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedpato'
        USE 'smedpato' ALIAS 'pato' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON pato->patologia TAG pato TO smedpato
        pato->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDHIST =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedhist') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedhist'
        USE 'smedhist' ALIAS 'hist' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON hist->codcli+DTOS(hist->data)+hist->hora TAG hiscod TO smedhist
        hist->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDEXAM =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedexam') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedexam'
        USE 'smedexam' ALIAS 'exam' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON exam->codcli+DTOS(exam->data)+exam->hora TAG exacod TO smedexam
        exam->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDDIAG =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smeddiag') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smeddiag'
        USE 'smeddiag' ALIAS 'diag' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON diag->codcli+DTOS(diag->data)+diag->hora TAG exacod TO smeddiag
        diag->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SMEDCOND =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcond') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcond'
        USE 'smedcond' ALIAS 'cond' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cond->codcli+DTOS(cond->data)+cond->hora TAG exacod TO smedcond
        cond->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('03> SMEDCIRUR =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedcirur') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedcirur'
        USE 'smedcirur' ALIAS 'cirur' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cirur->cod_cirur TAG cod_ci TO smedcirur
        cirur->(DBCLOSEAREA())
ENDIF
/*
DEVPOS(lci,1);DEVOUT('03> SMEDMOVCI =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('smedmvci') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'smedmvci'
        USE 'smedmvci' ALIAS 'mvci' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON DTOS(mvci->dat_cirur)+mvci->cod_cli+mvci->cod_cirur+mvci->cod_conv TAG datar TO smedmvci
        INDEX ON mvci->cod_cli+mvci->cod_cirur+mvci->cod_conv+DTOS(mvci->dat_cirur) TAG cod TO smedmvci
        mvci->(DBCLOSEAREA())
ENDIF
DEVPOS(lci,1);DEVOUT('03> SACCEP =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('saccep') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'saccep'
        USE 'saccep' ALIAS 'cep' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cep->nome+cep->local+cep->bairro1+cep->tipo TAG nome TO saccep
        INDEX ON cep->cep8+cep->tipo TAG cep TO saccep
        cep->(DBCLOSEAREA())
ENDIF

DEVPOS(lci,1);DEVOUT('03> SACCEPLO =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacceplo') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacceplo'
        USE 'sacceplo' ALIAS 'ceplo' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON ceplo->nome+ceplo->uf+ceplo->tipo TAG nome TO sacceplo
        INDEX ON ceplo->cep8 TAG cep TO sacceplo
        ceplo->(DBCLOSEAREA())
ENDIF
*/

DEVPOS(lci,1);DEVOUT('03> SACFORN =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacforn') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacforn'
        USE 'sacforn' ALIAS 'forn' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON forn->cod_forn TAG cod TO sacforn
        INDEX ON forn->razao TAG raz TO sacforn
        INDEX ON forn->cgc TAG cgc TO sacforn
        CLOSE forn
ENDIF

DEVPOS(lci,1);DEVOUT('03> SACDESP =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX('sacdesp') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacforn'
        USE 'sacdesp' ALIAS 'cdesp' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON cdesp->codigo TAG codigo TO sacdesp
        INDEX ON cdesp->desc1 TAG desc TO sacdesp
        CLOSE cdesp
ENDIF
DEVPOS(lci,1);DEVOUT('06> SACDUPR  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdupr") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacdupr'
        IF ! AbriArq('sacdupr','dupr','E');RETURN NIL;wvw_lclosewindow();ENDIF
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON dupr->tipo+dupr->numero+dupr->duplicata+dupr->pago+dupr->fornec+STR(dupr->valor) TAG tipo TO ('sacdupr') // EVAL dbprogress('TIPO/NUMEROATA',,lci,35,mqtd_ind*1,17,0)
        INDEX ON dupr->fornec+dupr->pago+dupr->duplicata TAG fornec TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(dupr->datpag)+dupr->tipo+dupr->duplicata+dupr->fornec TAG datapg TO ('sacdupr') // EVAL dbprogress('DATA PAGAMENTO',,lci,35,mqtd_ind*3,17,0)
        INDEX ON DTOS(dupr->venc)+dupr->fornec+dupr->banco+dupr->duplicata TAG vend TO ('sacdupr') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*4,17,0)
        INDEX ON DTOS(dupr->emissao)+dupr->fornec+dupr->banco+dupr->duplicata TAG emi TO ('sacdupr') // EVAL dbprogress('DATA EMISSAO',,lci,35,mqtd_ind*5,17,0)
        INDEX ON dupr->fornec+dupr->pago+DTOS(dupr->venc)+dupr->duplicata TAG fornpg TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE/PAGO',,lci,35,mqtd_ind*6,17,0)
        INDEX ON dupr->num_ped+dupr->pago+dupr->vendedor TAG numped TO ('sacdupr') // EVAL dbprogress('No.PEDIDO',,lci,35,mqtd_ind*7,17,0)
        INDEX ON dupr->cliente+dupr->pago+DTOS(dupr->venc) TAG forcli TO ('sacdupr') // EVAL dbprogress('NOME CLIENTE',,lci,35,mqtd_ind*8,17,0)
        INDEX ON dupr->fornec+dupr->pago+dupr->tipo+dupr->numero+dupr->agencia+dupr->c_c TAG fornch TO ('sacdupr') // EVAL dbprogress('COD.CLIENTE/PAGO/TIPO',,lci,35,mqtd_ind*9,17,0)
        INDEX ON dupr->duplicata+dupr->tipo+dupr->fornec TAG dup TO ('sacdupr') // EVAL dbprogress('No.DOCUMENTO',,lci,35,mqtd_ind*10,17,0)
        INDEX ON DTOS(dupr->baix_parc)+DTOS(dupr->venc)+dupr->cod_forn TAG baix TO ('sacdupr') // EVAL dbprogress('DATA BAIXA P',,lci,35,mqtd_ind*11,17,0)
        INDEX ON DTOS(dupr->dat_tran)+dupr->doc_tran+dupr->tipo+dupr->duplicata TAG tran TO ('sacdupr') // EVAL dbprogress('DATA TRANSFERENCA',,lci,35,mqtd_ind*12,17,0)
        INDEX ON dupr->doc_tran+dupr->tipo+dupr->duplicata TAG doctran TO ('sacdupr') // EVAL dbprogress('No.DOC.TRANSFORM',,lci,35,mqtd_ind*13,17,0)
        INDEX ON DTOS(dupr->datope)+dupr->cod_forn TAG datope TO ('sacdupr') // EVAL dbprogress('DATA OPERACAO',,lci,35,mqtd_ind*14,17,0)
        INDEX ON DTOS(dupr->pg_comi)+dupr->vendedor+dupr->fornec+DTOS(dupr->venc) TAG pgcomi TO ('sacdupr') // EVAL dbprogress('DATA OPERACAO',,lci,35,mqtd_ind*15,17,0)
        dupr->(DBCLOSEAREA())
ENDIF
limpa(lci,0,lba,cba)
**********************************************************************************************
DEVPOS(lci,1);DEVOUT('07> SACDUPP  =>'+SPACE(90));DEVPOS(1,1);DEVOUT(SPACE(105))
IF ! SR_EXISTINDEX("sacdupp") .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacdupp'
        IF ! AbriArq('SACDUPP','dupp','E');RETURN NIL;wvw_lclosewindow();ENDIF
        INDEX ON dupp->tipo+dupp->duplicata+dupp->pago+dupp->fornec+DTOS(dupp->venc) TAG dup TO ('sacdupp') // EVAL dbprogress('TIPO DUPLICATA',,lci,35,mqtd_ind*1,17,0)
        INDEX ON dupp->fornec+dupp->pago+dupp->duplicata TAG fornec TO ('sacdupp') // EVAL dbprogress('COD.FORNECEDOR',,lci,35,mqtd_ind*2,17,0)
        INDEX ON DTOS(dupp->datpag)+dupp->tipo+dupp->duplicata+dupp->fornec TAG datapg TO ('sacdupp') // EVAL dbprogress('DATA PAGAMENTO',,lci,35,mqtd_ind*3,17,0)
        INDEX ON DTOS(dupp->venc)+dupp->fornec+dupp->banco+dupp->duplicata TAG venc TO ('sacdupp') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*4,17,0)
        INDEX ON DTOS(dupp->emissao) TAG emissao TO ('sacdupp') // EVAL dbprogress('DATA EMISSAO',,lci,35,mqtd_ind*5,17,0)
        INDEX ON dupp->cliente+dupp->fornec+dupp->pago+DTOS(dupp->venc) TAG cli TO ('sacdupp') // EVAL dbprogress('NOME FORNECEDOR',,lci,35,mqtd_ind*6,17,0)
        INDEX ON dupp->num_ped+dupp->fornec TAG ped TO ('sacdupp') // EVAL dbprogress('No. PEDIDO',,lci,35,mqtd_ind*7,17,0)
        INDEX ON dupp->duplicata+dupp->tipo TAG num TO ('sacdupp') // EVAL dbprogress('No. DOCUMENTO',,lci,35,mqtd_ind*8,17,0)
        INDEX ON dupp->fornec+dupp->pago+DTOS(dupp->venc)+dupp->duplicata TAG forven TO ('sacdupp') // EVAL dbprogress('COD.FORNECEDOR+PAG.',,lci,35,mqtd_ind*9,17,0)
        INDEX ON DTOS(dupp->venc)+dupp->cliente TAG venccli TO ('sacdupp') // EVAL dbprogress('DATA VENCIMENTO',,lci,35,mqtd_ind*10,17,0)
        dupp->(DBCLOSEAREA())
ENDIF

IF ! SR_EXISTINDEX('sacconf') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacconf'
        USE 'sacconf' ALIAS 'conf' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON conf->descri TAG desc TO sacconf
        INDEX ON conf->modulo TAG modu TO sacconf
        CLOSE conf
ENDIF

IF ! SR_EXISTINDEX('smedespe') .OR. (indexar <> NIL .AND. mfile = NIL) .OR. mfile = 'sacconf'
        USE 'smedespe' ALIAS 'espe' EXCLUSIVE NEW VIA 'SQLRDD'
        DEVPOS(lci,17);DEVOUT('                                                                 ')
        INDEX ON espe->cod_espe TAG cod TO smedespe
        INDEX ON espe->espe+espe->cod_espe TAG esp TO smedespe
        CLOSE espe
ENDIF
**********************************************************************************************
CLOSE ALL
wvw_lclosewindow()
RETURN .T.
