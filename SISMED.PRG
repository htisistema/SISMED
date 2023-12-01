* TELA PRINCIPAL
*********************
#include "wvwtools.ch"
#include "inkey.ch"              // constantes de codigos das teclas
#include "Fileio.ch"             // funcoes de leitura/gravacao de arquivo
#include "set.ch"                // constantes da funcao SETKEY()
#include "wingdi.ch"
#include "winuser.ch"
#include "common.ch"
#include "setcurs.ch"
#include "getexit.ch"
//SQLRDD***************
#include "sqlrdd.ch"
//#include "pgs.ch"          // Needed if you plan to use native connection to Postgres
//#include "mysql.ch"        // MySQL
//#include "oracle.ch"       // Oracle
#include "firebird.ch"       // Firebird
#include "msg.ch"
***********************
#define COM_CALE

GLOBAL oApp

FUNCTION main(mtc)
******************
LOCAL opcao,sLinhas:='',mArq:=''
PRIVATE dsemana,vcor[8],apre1,apre2
PUBLIC senha_acess,nivel_acess,cod_operado,mmedico,cor,;
       memp_resa,cpf,mversao,mesp,mdata_sis,mrelatorio,impressora,;
       mens,mnum_principal := NIL,mcol_public :=120,mlin_public :=50,sistema,;
       m_cfg:={},m_md5:=' ',m_qp := CHR(13)+CHR(10),ncnn := 0,;
        memp_resa,;
        mcgc_firm,;
        minsc_firm:='',;
        mend_firm,;
        mcid_firm,;
        muf_firm,;
        mfone_firm,;
        mnumero_firm,;
        sis_cidade,;
        m_line := 'ON',;
        mdefcam_imp:=Curdrive()+ ":\" + rtrim(curdir())+ "\",;
        m_set:={}
******* T I P O   D E   S I S T E M A **************
sistema := '.: SISMED - Sistema de Controle Medico :.'
mversao := 'v23.12.01'
****************************************************
cor := SETCOLOR()
mdata_sis := DATE()
************************************************
//mold := 'ÖÄ·º½ÄÓº'      // Molduras das janelas
//mol := '        '      // Molduras das janelas
*************************************************
// MODULO PRA ACESSAR ARQUIVOS .CDX
REQUEST SQLRDD             // SQLRDD should be linked in
REQUEST SR_FIREBIRD        // Needed if you plan to use native connection to Firebird
REQUEST DBFCDX
REQUEST DBFFPT
*************************************************************************************
REQUEST HB_CODEPAGE_PT850
REQUEST HB_NOSTARTUPWINDOW
REQUEST HB_LANG_ES
REQUEST HB_CODEPAGE_ES
REQUEST HB_CODEPAGE_ESMWIN
REQUEST HB_CODEPAGE_ESWIN

*REQUEST HB_CODEPAGE_PTISO

WITH OBJECT ( oApp := WvW_tApplication():New( CurDrive() + ":\" + CurDir() ) )
        :cImagePath := CurDrive()+ ":\" + Curdir()      //+'\HTILOGO.JPG'
        :Setup()
        :SetTitle( "SISMED - "+mversao )
        :lDevelopment := .T.
END
WvW_SetGet( "RDD"         ,"DBFCDX")
WvW_SetGet( "CODEPAGE"    ,255)
WvW_SetGet( "WIN_ROWS"    ,28)
WvW_SetGet( "WIN_COLS"    ,88)
wvw_SetVertCaret(.F.)
wvw_setmaincoord(.F.)
wvw_enableshortcuts(0,.T.)
wvw_setdeflinespacing(1.5)
wvw_SetPaintRefresh(0)
IF FILE("hti.ico")
        wvw_seticon( , "hti.ico" )
ELSE
        wvw_seticon( , "HTI.ico" )
ENDIF
SET EVENTMASK TO 159
SET CONS OFF
SET WRAP ON
SET DATE BRITI
SET DELE ON
SET EPOCH TO 1930
SET CENTURY on
SETMODE(50,120)
IF ! FILE('saccfg.ini')
        mArq := fcreate("saccfg.ini" )
        sLinhas := '001 C Estacao               ='+NETNAME()                    +m_qp+ ;
                   '002 C Tipo de Terminal      =S'                             +m_qp+ ;
                   '003 C md5                   = '                             +m_qp+ ;
                   '004 C Caminho Banco Dados   =localhost:C:\SISMED\SISMED.FDB'+m_qp+ ;
                   '005 C Versao do Sistema     ='+mversao                      +m_qp+ ;
                   '006 C Tipo de Tela          = '                             +m_qp+ ;
                   '007 C Codigo da Empresa     = '
        fwrite( mArq, @sLinhas, len( sLinhas ) )
        FCLOSE(mArq)
ENDIF
lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,1,,)
linhas := linha := 0
linhas := MLCOUNT(MEMOREAD('saccfg.ini'),110)
m_cfg := {}
FOR linha = 1 TO  linhas
        lin := MEMOLINE(MEMOREAD('saccfg.ini'),110,linha,,)
        IF SUBSTR(lin,5,1) = 'C'
                AADD(m_cfg,ALLTRIM(SUBSTR(lin,30)))
        ELSE
                AADD(m_cfg,VAL(ALLTRIM(SUBSTR(lin,30))))
        ENDIF
NEXT
fclose('saccfg.ini')
IF LEN(m_cfg) = 0
        atencao('Favor verificar o arquivo SACCFG.INI ou entrar em contato com a HTI Sistemas...' )
        RETURN NIL
ENDIF
mcol_public := 100
mlin_public := 33
MYRUN('MD '+curdrive()+':\SISCFG')
IF ! FILE('HTIBKP.INI')
	sacbkp('1')
ENDIF
IF mtc = 'BACKUP'
	WVW_SetMousePos(,00,00)
	op_tela(10,05,24,120,'PROCESSO DE BACKUP',,1)
	setcor(1)
	limpa(00,00,30,200)
	m_bkp := {}
	lin := MEMOLINE(MEMOREAD('HTIBKP.INI'),210,1,,)
	linhas := linha := 0
	linhas := MLCOUNT(MEMOREAD('HTIBKP.INI'),210)
	FOR linha = 1 TO  linhas
	        lin := MEMOLINE(MEMOREAD('HTIBKP.INI'),210,linha,,)
	        IF SUBSTR(lin,5,1) = 'C'
	                AADD(m_bkp,ALLTRIM(SUBSTR(lin,30))+' ')
	        ELSE
	                AADD(m_bkp,VAL(SUBSTR(lin,30)))
	        ENDIF
	NEXT
	fclose('HTIBKP.INI')
	IF LEN(m_bkp) > 0
		**** ROTINA PARA BACKUP *****************
		IF EMPTY(m_bkp[1]) .OR. EMPTY(m_bkp[2]) .OR. EMPTY(m_bkp[3]) .OR. EMPTY(m_bkp[4]) .OR. EMPTY(m_bkp[5])
			atencao('O BACKUP nao estar configurado...')
                        QUIT
		ENDIF
		mnome_arq := ALLTRIM(m_bkp[2])+IF(m_bkp[1]='1','.ARJ','.RAR')
                WHILE SR_PhFile((mnome_arq))
                        IF ferase(mnome_arq) = -1
                                IF 'N' = op_simnao('S',' Nao foi possivel apagar o arquivo: '+mnome_arq+' Deseja continuar tentando:')
                                        atencao('Nao foi feito o BACKUP....')
                                	QUIT
                                ENDIF
                        ENDIF
                ENDDO
		xcop := IF(m_bkp[1]='1','ARJ','RAR')+' A '+mnome_arq+' '+m_bkp[3]
		DEVPOS(00,01);DEVOUT('Aguarde um momento compactanto os Arquivo(s): '+m_bkp[2])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
                //atencao('Aguarde o final do Compactacao.....')
                MYRUN(xcop)
		xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[4])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
		DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[4])
		setcor(31)
		DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
		setcor(1)
		MYRUN(xcop)
		IF m_bkp[5] > 0
			m_aux := DIRECTORY(ALLTRIM(m_bkp[4])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
			d := 0
			FOR d = 1 TO LEN(m_aux)
				IF (DATE() - m_bkp[5]) > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
					xcop := 'DEL '+ALLTRIM(m_bkp[4])+m_aux[d,1]
					MYRUN(xcop)
				ENDIF
			NEXT
		ENDIF
		IF ! EMPTY(m_bkp[6])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[6])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[6]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[7] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[6])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[7] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[6])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[8])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[8])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[8]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[9] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[8])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[9] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[8])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[10])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[10])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[10]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[11] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[10])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[11] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[10])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[12])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[12])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[12]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[13] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[12])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[13] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[12])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		IF ! EMPTY(m_bkp[14])
			xcop := 'COPY '+mnome_arq+' '+ALLTRIM(m_bkp[14])+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)+SUBSTR(DTOC(DATE()),7,2)+IF(m_bkp[1]='1','.ARJ','.RAR')
			DEVPOS(ROW()+1,01);DEVOUT('Aguarde um momento COPIANDO o Arquivo para: '+m_bkp[14]+SPACE(30))
			setcor(31)
			DEVPOS(ROW()+1,01);DEVOUT('COMANDO: '+xcop)
			setcor(1)
			MYRUN(xcop)
			IF m_bkp[15] > 0
				m_aux := DIRECTORY(ALLTRIM(m_bkp[14])+'*'+IF(m_bkp[1]='1','.ARJ','.RAR'),'D')
				d := 0
				FOR d = 1 TO LEN(m_aux)
					IF DATE() - m_bkp[15] > CTOD(SUBSTR(m_aux[d,1],1,2)+'/'+SUBSTR(m_aux[d,1],3,2)+'/'+SUBSTR(m_aux[d,1],5,2))
						xcop := 'DEL '+ALLTRIM(m_bkp[14])+m_aux[d,1]
						MYRUN(xcop)
					ENDIF
				NEXT
			ENDIF
		ENDIF
		***************************************
		DEVPOS(ROW()+1,01);DEVOUT('F I N A L   D O   B A C K U P ...')
		WVW_SetMouseMove(,.T.)
		INKEY(5)
	ELSE
		atencao('O BACKUP nao estar configurado...')
	ENDIF
	QUIT
ENDIF

/*
IF EMPTY(m_cfg[6])
        //WVW_SetFont(,'Ms Sans Serif',12,,FW_BOLD, PROOF_QUALITY )  // 800X600
        WVW_SetFont(,'lucida console',18,,FW_BOLD)  // 800X600
        //WVW_SetFont(,'lucida console',12,,FW_BOLD, PROOF_QUALITY )  // 800X600
        //WVW_SetFont(,'lucida console',12, 11,FW_BOLD, PROOF_QUALITY )  // 800X600
ELSE
*/
        //WVW_SetFont(,'lucida console',13,10,FW_BOLD, PROOF_QUALITY)  // 1024X768
        WVW_SetFont(,'lucida console',13,11,)  // 800X600

//ENDIF
ncnn := 0
/*
IF ! EMPTY(m_cfg[7])
        m_line = 'ON'
ELSE
        m_line = 'OFF'
ENDIF
*/
//wvw_noclose()
RDDSETDEFAULT('SQLRDD')
SR_SetMultiLang( .t. )
SR_SetBaseLang( LANG_PT_BR )
wvw_maximize(1)
WVW_CenterWindow(,.T.,.T.)
//IF m_line = 'ON'
        op_tela(10,10,13,100,'TENTANDO CONEXAO COM O BANCO DE DADOS')
        DEVPOS(00,01);DEVOUT('Tentando CONEXAO com o 1o. BANCO DE DADOS')
        DEVPOS(01,01);DEVOUT('Caminho: ['+ALLTRIM(m_cfg[4])+'], Aguarde um Momento......')
        IF m_cfg[2] = 'S' .AND. ! File('sismed.gdb')
                //ATENCAO('OK')
                //IF SQL_SUCCESS = FBCreateDB( 'SISMED.GDB','SYSDBA','masterkey',300, 'ISO8859_1')
                IF SQL_SUCCESS = FBCreateDB( 'SISMED.GDB','SYSDBA','masterkey',300, 'NONE')
                        atencao('Banco Criado com SUCESSO')
                        nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                        If nCnn < 0
                                atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                                Quit
                        EndIf
                ELSE
                        atencao('Nao foi possivel criar o BANCO DE DADOS...')
                ENDIF
        ELSE
                nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                //nCnn := SR_AddConnection(CONNECT_FIREBIRD,'FIREBIRD=10.0.0.101:C:\HELIO\SMED\SISMED.FDB;uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                //atencao('FIREBIRD='+ALLTRIM(m_cfg[4])+';uid=SYSDBA;pwd=masterkey;charset=ISO8859_1')
                If nCnn < 0
                        atencao("Nao foi possivel conectar ao BANCO DE DADOS. Verificar o Caminho do Banco de Dados no SACCFG.INI ["+ALLTRIM(m_cfg[4])+"] ou se o FIREBIRD estar Instalado, Caso nao tenha sucesso contactar com o Administrador da REDE")
                        Quit
                EndIf
        ENDIF
        SR_SetActiveConnection(nCnn)
/*
ELSE
        RDDSETDEFAULT('DBFCDX')
ENDIF
*/
mrelatorio := 'LPT1'
impressora := 'M'
senha_acess := SPACE(8)
nivel_acess := SPACE(1)
cod_operado := SPACE(3)

SET KEY -2 TO f3_conv()
SET KEY -3 TO f4_med()
SET KEY -4 TO agenda()
SET KEY -9 TO ctrl_w()
//SET KEY -40 TO calcu()         // F11 calculadora
SET KEY -41 TO f12_cid()
SET KEY 276 TO alt_data()       // alt + t
SET KEY 294 TO limite_sys       // ALT+L
SET KEY 274 TO limite_erro      // ALT+E
//SET MESSAGE TO 33 CENTER
SET WRAP ON
SET SCOREBOARD OFF
SET DATE BRITI
SET DELE ON
SET INTEN ON
//SET CENTURY ON
SET KEY 287 TO alt_senhaS        // ALT+S
//mnum_principal := wvw_nopenwindow(sistema+' - '+mversao,00,00,38,120)
mnum_principal := op_tela(00,00,50,120,sistema+' - '+mversao,,1)
IF m_cfg[2] = 'S'
        smeddbf()
        smedcdx()
        sac_dbf()
ENDIF
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
sr_getconnection():exec('COMMIT',,.f.)
/*
abriarq('saccfg','cfg')
IF ! abriarq('sacsetup','set');RETURN NIL;ENDIF
                memp_resa := RTRIM(set->medico)
                mcgc_firm := RTRIM(set->cnpj)
                mend_firm := RTRIM(set->endereco)
                mcid_firm := RTRIM(set->cidade)
                muf_firm := set->uf
                mfone_firm := RTRIM(set->fone)
                mnumero_firm := RTRIM(set->numero)
                sis_cidade := RTRIM(set->cidade)
****** NOME A SER COMPILADO ********************
mmedico := ALLTRIM(set->medico)
************************************************
*/
abriarq('saccfg','cfg')
Wvw_SetTitle( ,'.:'+m_set[1,23]+':.'+SPACE(40)+'.: SISMED '+mversao+' :.'+SPACE(40)+'Data:'+DTOC(mdata_sis))
botao(00,00,MAXROW(),MAXCOL())
WVW_DrawImage(,00,00,50,120,ALLTRIM(cfg->cam_banco)+'HTILOGO.JPG',.F.,.F.)
//WVW_DrawImage( ,47,00,50,25,ALLTRIM(m_indiv[1,3])+'xharbour.JPG',.F.,.F.)
WVW_DrawImage( ,28,MAXCOL()-22,43,MAXCOL()-5,ALLTRIM(cfg->cam_banco)+"logohti.JPG",.F.,.F.)
WVW_DrawLabel(,45,MAXCOL()-20,' '+mversao+' ',,,RGB(25,25,112),RGB(255,250,250), 'times',30,15,,,,,)

//WVW_DrawImage( ,34,55,41,115,ALLTRIM(cfg->cam_banco)+"rodape_pinpad.JPG",.F.,.F.)

IF FILE(ALLTRIM(cfg->cam_banco)+'HTIFIRMA.JPG')
        WVW_DrawImage( ,04,04,30,70,ALLTRIM(cfg->cam_banco)+'HTIFIRMA.JPG',.T.,.F.)
ELSEIF FILE(ALLTRIM(cfg->cam_banco)+'HTIFIRMA1.JPG')
        WVW_DrawImage( ,04,04,30,70,ALLTRIM(cfg->cam_banco)+'HTIFIRMA1.JPG',.T.,.F.)
ENDIF
vcor[1] := 'n/w,w/B,,,b/w'          && cor PRINCIPAL
vcor[2] := 'b/w,x'                     && cor para os SAY
vcor[3] := 'b/w,x'                      && cor para os SAY
vcor[4] := 'b/w,x'                      && cor FUNDO
vcor[5] := 'b/w,x'                     && cor ABRINDO ARQUIVO
vcor[6] := 'w+/b+,x'                     && cor LOGOTIPO
vcor[7] := 'b+/w+,x'                     && cor LOGOTIPO
vcor[8] := 'bg+/bg+,bg+/bg+,x'          && cor p/OPCOES
setcor(1)
WHILE .T.
        mdata_sis := DATE()
        mtip_term := m_cfg[2]
        IF VAL(m_set[1,37]) = 0 .AND. ! EMPTY(m_set[1,37])
                sr_getconnection():exec("UPDATE sacsetup SET cod_acess = "+sr_cdbvalue(m_set[1,37]),,.f.)
                sr_getconnection():exec("COMMIT",,.f.)
        ENDIF
        IF EMPTY(m_set[1,42])
                atencao('EMPRESA SEM NUMERO DE SERIE')
                senha('*')
                IF ! incl_firma('*')       // PRG HTIFUN
                        SET CURSOR ON
                        DBUNLOCK()
                        SETCOLOR('W/N,X')
                        DBCOMMITALL()
                        DBCLOSEALL()
                        CLEAR MEMORY
                        INKEY(2)
*                       DeAtivaScrnSave()       // DESATIVA A PROTECAO TELA
                ENDIF
                wvw_lclosewindow()
                fecha_conexaoDB()
                QUIT
        ELSEIF autorizacao(SUBSTR(m_set[1,42],15,6))
                IF ! senha();fim(,'*');ENDIF    // Solicitar senha do sistema
                IF nivel_acess = '1' .OR. ver_serie() = '140200'
                        agenda()
                ENDIF
                wvw_lclosewindow()
                smed0()
                //senha(mtc)
                //SISPINPAD(mtc)
                EXIT
        ELSE
                atencao('Numero de serie nao esta correto, procure a HTI Sistemas')
                SR_BEGINTRANSACTION()
                        sr_getconnection():exec("UPDATE sacsetup SET serie = "+sr_cdbvalue(''),,.f.)
                        sr_committransaction()
                SR_ENDTRANSACTION()
                fecha_conexaoDB()
                QUIT
                //senha()
                //LOOP
        ENDIF
ENDDO
RETURN NIL
/*
WHILE .T.
        IF mmedico = 'VANIA'
                ***** DRA.VANIA LIGIA *************
                memp_resa := 'DRA. VANIA LIGIA ARRUDA DE ARAUJO'
                crm := 'CREMEPE: 3532'
                cpf := 'CPF: 080.783.004/68'
                mesp := 'GINECOLOGIA - OBSTETRICIA'
                cab_med := 'VANIA'
                mmedico := 'VANIA'
                apre1 := 'DRA.'
                apre2 := 'VANIA LIGIA'
        ELSEIF mm81edico = 'MARLI'
                ***** DRA.MARIZETE *************
                memp_resa := 'DRA. MARLIZETE LEOPOLDINA BEZERRA'
                crm := 'CREMEPE: 6285'
                cpf := 'CPF: 016.655.088/41'
                mesp := 'TOCOGINECOLOGIA-PATOLOGIA MAMARIA'
                mmedico := 'MARLI'
                cab_med := 'MARLI'
                apre1 := 'DRA.'
                apre2 := 'MARLIZETE'
        ELSE
                atencao('Nome do medico nao especificado corretamente ')
                QUIT
        ENDIF
        //SETCOLOR('W+/B+,B/w,,,GR+/B')
        IF ! senha();fim(,'*');ENDIF    // Solicitar senha do sistema
        IF nivel_acess = '1' .OR. mmedico = 'VANIA'
                agenda()
        ENDIF
        wvw_lclosewindow()
        smed0()
ENDDO
*/
*************************** f i m *******************************
* CABECALHO DE RECIBOS/RECEITAS
********************************
FUNCTION cabec
**************
LOCAL mtraco
IF ver_serie() = '140200'
        mtraco:=REPLI(CHR(223),80)
        pitalico(.T.)
        IF FILE('hticabe.jpg')
                DEVPOS(0,30);DEVOUT('"hticabe.jpg"')
                @ PROW()+5,00 SAY CHR(18)
                @ PROW(),00 SAY mtraco
        ELSE
                @ PROW()+3,00 SAY CHR(14)+CHR(15)
                @ PROW(),01 SAY m_set[1,23]
                @ PROW()+1,00 SAY CHR(18)
                @ PROW(),00 SAY mtraco
                @ PROW()+1,00 SAY CHR(14)
                @ PROW(),00 SAY m_set[1,47]
        ENDIF
        @ PROW()+1,00 SAY CHR(14)       //+CHR(15)
        @ PROW(),01 SAY m_set[1,46]
        @ PROW()+1,00 SAY CHR(18)
        @ PROW(),00 SAY mtraco
ELSEIF ver_serie() = '140201'
*       pitalico(.T.)
        IF FILE('\'+CURDIR()+'\'+'HTItop.jpg')
                DEVPOS(0,03);DEVOUT('"HTItop.jpg"')
        ELSEIF FILE('hticabe.jpg')
                DEVPOS(0,3);DEVOUT('"hticabe.jpg"')
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(m_set[1,23]),54))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,24])+', '+ALLTRIM(m_set[1,25])),54)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,27])+RTRIM(' - Fone: '+m_set[1,31]),54))
        ENDIF
        @ PROW()+10,00 SAY ' '
ELSE
        IF FILE('hticabe.jpg')
                DEVPOS(0,3);DEVOUT('"hticabe.jpg"')
        ELSE
                DEVPOS(PROW()+1,00);DEVOUT(PADC(ALLTRIM(m_set[1,23]),54))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,24])+', '+ALLTRIM(m_set[1,25])),54)
                DEVPOS(PROW()+1,00);DEVOUT(PADC(RTRIM(m_set[1,27])+RTRIM(' - Fone: '+m_set[1,31]),54))
        ENDIF
ENDIF
RETURN NIL
************************** F I M ***********************************
* FUNCAO PARA O RODAPE
**********************
FUNCTIO rodape(mtp)
**************
LOCAL mtraco
IF ver_serie() = '140200'
        mtraco:=REPLI(CHR(223),80)
        DEVPOS(PROW()+1,00);DEVOUT(PADC(cpf,80))
        //IF mtp = NIL
        //        DEVPOS(56,57);DEVOUT(TIME()+' Hrs.')
        //ENDIF
        pitalico(.F.)
        DEVPOS(57,00);DEVOUT(mtraco)
        pitalico(.T.)
        DEVPOS(58,02);DEVOUT('Av. Eng. Domingos Ferreira, 4371 Sl.204 - Fone: (081)3463.8726/97907.7030')
        DEVPOS(59,02);DEVOUT('CEP.: 51021-040 - Boa Viagem - Recife - Pernambuco.')
        pitalico(.F.)
ELSEIF ver_serie() = '140201'
        IF FILE('\'+CURDIR()+'\'+'HTIroda.jpg')
                DEVPOS(57,03);DEVOUT('"HTIroda.jpg"')
        ENDIF
        RETURN NIL
ELSE
        RETURN NIL
ENDIF
RETURN NIL
************************** f i m ***************************
****
FUNCTION ShowClue( ... )
****
LOCAL xMessage
STATIC lPostP, cMessage := ""
IF ( lPostP = NIL )
        cMessage := ""
ENDIF
FOR EACH xMessage IN HB_aParams()
        lIsArray := .F.
        SWITCH ValType( xMessage )
        CASE "C"
        CASE "M"
                EXIT
        CASE "N"
                xMessage := LTrim( Str( xMessage ) )
                EXIT
        CASE "D"
                xMessage := DToC( xMessage )
                EXIT
        CASE "L"
                xMessage := IF( xMessage, ".T.", ".F." )
                EXIT
        CASE "O"
                xMessage := xMessage:className + " Object"
                EXIT
        CASE "B"
                xMessage := "{||...}"
                EXIT
        CASE "A"
                lPostP := lIsArray := .T.
                EXIT
                DEFAULT
                xMessage := "NIL"
        END
        cMessage += ( "/" + xMessage )
NEXT
WvW_SBsetText( 1, 0, "* " +  cMessage )
lPostP := NIL
RETURN (.T.)
