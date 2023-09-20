************************************
* FUNCAO PARA ATUALIZAR OS DBF'S
***********************************
#include "sqlrdd.ch"
#include "firebird.ch"       // Firebird
FUNCTION sac_dbf(mtp)
*********************
LOCAL mprg:='SAC_DBF',;
      mArq:= '',slinhas :='',i:=0

PRIVATE mdata_cli,mdata_dupr,mdata_setup,mdata_cfg,mdata_senha,mdata_cfg,;
        mdata_dupp,mdupr,mdupp,mcli,msetup,mcfg,minsopera,;
        mdata_ver,matual,mtela_bkp,mdata_arq,;
        mdata_ass,mass,mnome_arq:='',mdata_forn,mforn,;
        mdata_tabl,mtabl,mmensagem:='',mpede,mdata_pede,mcid,mdata_cid,;
        aret:={},matriz:={}

IF m_cfg[2] <> 'S'
	RETURN NIL
ENDIF
mdata_forn := CTOD('01/10/2009')
mdata_dupr := CTOD('01/10/2009')
mdata_dupp := CTOD('12/07/2014')
mdata_senha:= CTOD('24/09/2014')
mdata_cli  := CTOD('21/08/2019')
mdata_setup:= CTOD('27/08/2019')
mdata_cfg  := CTOD('16/01/2020')
IF mtp # 'HTI'
        IF mtp = 'arquivo'
	       matualiza := mdupr := mdupp := mcli := msetup := mcfg := minsopera := mforn
        ELSE
	       matualiza := mdupr := mdupp := mcli := msetup := mcfg := minsopera := mforn
	       IF SUBSTR(m_cfg[5],2,1) = '9' .OR. SUBSTR(m_cfg[5],2,1) = '8' .OR. SUBSTR(m_cfg[5],2,1) = '7'
                	mdata_ver := CTOD(SUBSTR(m_cfg[5],7,2)+'/'+SUBSTR(m_cfg[5],4,2)+'/20'+STRZERO(VAL(SUBSTR(m_cfg[5],2,1)),2))
	       ELSE
                	mdata_ver := CTOD(SUBSTR(m_cfg[5],8,2)+'/'+SUBSTR(m_cfg[5],5,2)+'/20'+STRZERO(VAL(SUBSTR(m_cfg[5],2,2)),2))
	       ENDIF
        ENDIF
        IF mdata_ver < mdata_dupr ;matualiza := mdupr := 'X'    ;ENDIF
        IF mdata_ver < mdata_dupp ;matualiza := mdupp := 'X'    ;ENDIF
        IF mdata_ver < mdata_setup;matualiza := msetup:= 'X'    ;ENDIF
        IF mdata_ver < mdata_senha;matualiza := minsopera := 'X';ENDIF
        IF mdata_ver < mdata_forn;matualiza  := mforn := 'X'   ;ENDIF
        IF mdata_ver < mdata_cli;matualiza   := mcli := 'X'   ;ENDIF
        IF mdata_ver < mdata_cfg;matualiza   := mcfg := 'X'   ;ENDIF
ENDIF
//mdata_ver := CTOD(SUBSTR(m_set[1,1],7,2)+'/'+SUBSTR(m_set[1,1],4,2)+'/20'+STRZERO(VAL(SUBSTR(m_set[1,1],2,1)),2))
IF matualiza = 'X'
        alt_tb()
        IF minsopera = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo INSOPERA     I N C L U I R  *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + m_qp+'>>>> SR_RECNO posicao = 46'+m_qp+m_qp
                atencao(mmensagem)
        ENDIF
        IF mcid = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo SACCID    A L T E R A R   *****'+m_qp
                //mmensagem := mmensagem + '<< Nome: COD_CID Tipo: VARCHAR(7)>>'+m_qp+'<< Nome: CIDADE Tipo: VARCHAR(25)>>'
                atencao(mmensagem)
        ENDIF
        IF mcli = 'X'
                mmensagem := '***** Arquivo smedcli     I N C L U I R     *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + m_qp+'>>>> SR_RECNO posicao = 145'+m_qp+m_qp
                //mmensagem := mmensagem + m_qp+'***** Arquivo smedcli     A L T E R A R     *****'+m_qp
                //mmensagem := mmensagem + '<< Nome: CIDADE Tipo: VARCHAR(25)>>'+m_qp+'<< Nome: CIDADE_COB e CIDADE_C tipo: VARCHAR(25)>>'+m_qp+'<< Nome: L_OBS4 para NATURALIDADE tipo: VARCHAR(25)>>'+m_qp+'<< Nome: PAI tipo: VARCHAR(40)>>'+m_qp+'<< Nome: MAE tipo: VARCHAR(40)>>'+m_qp+'<< Nome: EMAIL tipo: VARCHAR(150)>>'
                atencao(mmensagem)
        ENDIF
        IF mdupp = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo SACDUPP     I N C L U I R      *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp+ m_qp
                mmensagem := mmensagem + '>>>> SR_RECNO posicao = 36'+m_qp+m_qp
                mmensagem := mmensagem +'***** Arquivo SACDUPP     A L T E R A R      *****'+m_qp
                //mmensagem := mmensagem + '<< Nome: DESC para DESCONTO>> '+m_qp
                //mmensagem := mmensagem + '<< Nome: DUPLICATA VARCHAR(12)>>'+m_qp
                //mmensagem := mmensagem + '<< Nome: NUM_PED VARCHAR(10)>>'
                atencao(mmensagem)
        ENDIF
        IF mdupr = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo SACDUPR  e  SACCRED     I N C L U I R      *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + m_qp+'***** Arquivo SACDUPR  e  SACCRED     A L T E R A R      *****'+m_qp
                //mmensagem := mmensagem + '<< Nome: DESC para DESCONTO>>'
                atencao(mmensagem)
        ENDIF
        IF mforn = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo SACFORN     I N C L U I R     *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR>>'+m_qp
                mmensagem := mmensagem + m_qp+'>>>> SR_RECNO posicao = 36'+m_qp+m_qp
                //mmensagem := mmensagem + m_qp+'***** Arquivo SACFORN     A L T E R A R      *****'+m_qp
                //mmensagem := mmensagem + '<< Nome: CIDADE Tipo: VARCHAR(25)>>'+m_qp
                // mmensagem := mmensagem + '<< Nome: EMAIL Tipo: VARCHAR(120)>>'+m_qp
                atencao(mmensagem)
        ENDIF
        IF msetup = 'X' .AND. m_cfg[2] = 'S'
                mmensagem := '***** Arquivo SACSETUP     I N C L U I R       *****'+m_qp
                mmensagem := mmensagem + '              << VERIFICAR >>'+m_qp+m_qp
                mmensagem := mmensagem + m_qp+'>>>> SR_RECNO posicao = 38'+m_qp+m_qp
                mmensagem := mmensagem + '              << ALTERAR >>'+m_qp+m_qp
                mmensagem := mmensagem + '<< Nome: SYSDATLM de VCHAR(12) para VCHAR(15) >>'+m_qp
                mmensagem := mmensagem + '<< Nome: CNPJ de VCHAR(15) para VCHAR(20) >>'+m_qp
                mmensagem := mmensagem + '<< Nome: MEDICO de VCHAR(20) para VCHAR(40) >>'+m_qp
                atencao(mmensagem)
        ENDIF
ENDIF

FCLOSE('saccfg.ini')
mArq        := FCREATE('saccfg.ini')
sLinhas     := '001 C Estacao               ='+m_cfg[1]+m_qp
sLinhas     := sLinhas + '002 C Tipo de Terminal      ='+m_cfg[2]+m_qp
sLinhas     := sLinhas + '003 C md5                   ='         +m_qp
sLinhas     := sLinhas + '004 C Caminho Banco Dados   ='+m_cfg[4]+m_qp
sLinhas     := sLinhas + '005 C Versao do Sistema     ='+mversao +m_qp
sLinhas     := sLinhas + '006 C Tipo de Tela          ='+m_cfg[6]+m_qp
sLinhas     := sLinhas + '007 C Codigo da Empresa     ='+m_cfg[7]
FWRITE( mArq, @sLinhas, LEN( sLinhas ) )
FCLOSE(mArq)
*/
SR_BEGINTRANSACTION()
TRY
sr_getconnection():exec("UPDATE sacsetup SET ver = "+sr_cdbvalue(mversao),,.f.)
sr_getconnection():exec("COMMIT",,.f.)
sr_committransaction()
CATCH e
SR_ENDTRANSACTION()
END
RETURN NIL
************************************ F I M *******************************************
* FUNCAO PARA ATUALIZAR OS TABELAS
***********************************
FUNCTION alt_tb
***************
IF minsopera = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE insopera ADD SMENSAGEM VARCHAR(150)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE insopera ADD SAMBIENTE VARCHAR(5)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF mcfg = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE saccfg ADD can_fotos VARCHAR(50)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF mcli = 'X'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD COD_PROFI VARCHAR(5)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD NUMERO VARCHAR(6)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD data_auta DATE',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD OBS_AUTA VARCHAR(50)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD OBS_AUTA1 VARCHAR(50)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE smedcli ADD EMAIL VARCHAR(60)',,.f.)
                        sr_getconnection():exec('ALTER TABLE smedcli ADD INSTAGRAM VARCHAR(30)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF mdupp = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE sacdupp ADD data_so DATE',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE sacdupp ADD DAT_RECEB DATE',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF mdupr = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE sacdupr ADD HORA_BX VARCHAR(8)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE sacdupr ADD COM_SEM VARCHAR(1)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF mforn = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE sacforn ADD APP... VARCHAR(1)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE sacforn ADD fantasia VARCHAR(40)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
        sr_endtransaction()
ENDIF
IF msetup = 'X' .AND. m_cfg[2] = 'S'
        sr_begintransaction()
                TRY
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD DIA_VENC DECIMAL(2,0)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD CONS_CLI VARCHAR(1)',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END
                TRY
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD SERIE VARCHAR(20)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD complemento VARCHAR(20)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD fone_clinica VARCHAR(10)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD insc_mun VARCHAR(20)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD CRM VARCHAR(20)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD ESPECIALI VARCHAR(40)',,.f.)
                        sr_getconnection():exec('ALTER TABLE sacsetup ADD dataini DATE',,.f.)
                        sr_committransaction()
                CATCH E
                        tracelog(valtoprg())
                        sr_rollbacktransaction()
                END

        sr_endtransaction()
ENDIF
sr_getconnection():exec('COMMIT',,.f.)
RETURN NIL