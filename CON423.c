/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON423.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON423.PRG /q /oC:\HTI\SISMED\CON423.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:32 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON423.PRG"

HB_FUNC( CON423 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( XLSOPEN );
HB_FUNC_EXTERN( XLSWRITE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( XLSCLOSE );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( VALOR_PED );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON423 )
{ "CON423", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON423 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOBRA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAXA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_TPDOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONT_TP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "NXLS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "XLSOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSOPEN )}, NULL },
{ "XLSWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSWRITE )}, NULL },
{ "MCOL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "XLSCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSCLOSE )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AREA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "VALOR_PED", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALOR_PED )}, NULL },
{ "L", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PED_S", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PVLR_FAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON423 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON423
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON423 = hb_vm_SymbolInit_CON423;
   #pragma data_seg()
#endif

HB_FUNC( CON423 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 91, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 19, 0,	/* 19 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '3', 0, 
	HB_P_LOCALNEARSETSTR, 45, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 49,	/* MAREA */
	HB_P_LOCALNEARSETSTR, 51, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 52, 2, 0,	/* MLINHAS 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 53, 2, 0,	/* MOBS_CLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 55,	/* CLI_REC */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_LOCALNEARSETSTR, 57, 2, 0,	/* MOBS_DOC 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 58, 2, 0,	/* MTP_CONS 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 60, 0, 0,	/* MCOD_MERC 0*/
	HB_P_LOCALNEARSETSTR, 61, 1, 0,	/* MIMP_PRODUTO 1*/
	0, 
	HB_P_LOCALNEARSETINT, 62, 0, 0,	/* MTOT_PRODUTO 0*/
	HB_P_LOCALNEARSETINT, 63, 0, 0,	/* MQTD_PRODUTO 0*/
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
	HB_P_LOCALNEARSETINT, 65, 0, 0,	/* CONT_CLI 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_LOCALNEARSETSTR, 70, 2, 0,	/* MASSISTENCIA 2*/
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 71,	/* CONS_ASS */
	HB_P_LOCALNEARSETSTR, 72, 2, 0,	/* MIMP_OBSCLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* CON_CL */
	HB_P_LOCALNEARSETSTR, 74, 2, 0,	/* MHIST_CLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 75,	/* M_HIST_CLI */
	HB_P_LOCALNEARSETSTR, 76, 2, 0,	/* MTIPO_EMI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 77, 2, 0,	/* MOP_CAB 2*/
	'S', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 78,	/* ARET */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 80,	/* M_PARAM */
	HB_P_LOCALNEARSETSTR, 85, 2, 0,	/* MAVA_CONJ 2*/
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_LOCALNEARSETSTR, 88, 1, 0,	/* MIMP_TEL 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 89, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 91,	/* CONS_BAIRRO */
	HB_P_LOCALNEARSETSTR, 92, 1, 0,	/* M_PRINCIPAL 1*/
	0, 
/* 00213 */ HB_P_LINEOFFSET, 5,	/* 24 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 20,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOBRA_FIN */
	HB_P_PUSHSYMNEAR, 3,	/* MTAXA_FIN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* BANK */
	HB_P_PUSHSYMNEAR, 7,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 8,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 9,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 10,	/* MCGC */
	HB_P_PUSHSYMNEAR, 11,	/* MCPF */
	HB_P_PUSHSYMNEAR, 12,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 14,	/* MARQ */
	HB_P_PUSHSYMNEAR, 15,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 16,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 17,	/* CONS_DOC */
	HB_P_PUSHSYMNEAR, 18,	/* CONS_TPDOC */
	HB_P_PUSHSYMNEAR, 19,	/* CONT_TP */
	HB_P_DOSHORT, 18,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_POPVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_POPVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
	HB_P_POPVARIABLE, 13, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
/* 00300 */ HB_P_LINEOFFSET, 7,	/* 26 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 133, 0,	/* 133 (abs: 00439) */
/* 00309 */ HB_P_LINEOFFSET, 8,	/* 27 */
	HB_P_PUSHSYMNEAR, 21,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 22, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00399) */
/* 00394 */ HB_P_LINEOFFSET, 9,	/* 28 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00399 */ HB_P_LINEOFFSET, 11,	/* 30 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00411 */ HB_P_LINEOFFSET, 12,	/* 31 */
	HB_P_LOCALNEARSETSTR, 59, 19, 0,	/* MTITULO 19*/
	'(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ')', 0, 
	HB_P_JUMP, 132, 0,	/* 132 (abs: 00568) */
/* 00439 */ HB_P_LINEOFFSET, 14,	/* 33 */
	HB_P_PUSHSYMNEAR, 21,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 22, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00532) */
/* 00527 */ HB_P_LINEOFFSET, 15,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00532 */ HB_P_LINEOFFSET, 17,	/* 36 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00544 */ HB_P_LINEOFFSET, 18,	/* 37 */
	HB_P_LOCALNEARSETSTR, 59, 18, 0,	/* MTITULO 18*/
	'(', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ')', 0, 
/* 00568 */ HB_P_LINEOFFSET, 22,	/* 41 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00595) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00595 */ HB_P_LINEOFFSET, 23,	/* 42 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00626) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00626 */ HB_P_LINEOFFSET, 24,	/* 43 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00655) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00655 */ HB_P_LINEOFFSET, 25,	/* 44 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00684) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00684 */ HB_P_LINEOFFSET, 26,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00713) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00713 */ HB_P_LINEOFFSET, 27,	/* 46 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00740) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00740 */ HB_P_LINEOFFSET, 28,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00769) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00769 */ HB_P_LINEOFFSET, 31,	/* 50 */
	HB_P_PUSHSYMNEAR, 24,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 25,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00788 */ HB_P_LINEOFFSET, 33,	/* 52 */
	HB_P_PUSHSYMNEAR, 26,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00859 */ HB_P_LINEOFFSET, 34,	/* 53 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00910 */ HB_P_LINEOFFSET, 35,	/* 54 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00950 */ HB_P_LINEOFFSET, 36,	/* 55 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01001 */ HB_P_LINEOFFSET, 37,	/* 56 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01053 */ HB_P_LINEOFFSET, 38,	/* 57 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01105 */ HB_P_LINEOFFSET, 39,	/* 58 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01157 */ HB_P_LINEOFFSET, 40,	/* 59 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01209 */ HB_P_LINEOFFSET, 41,	/* 60 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01261 */ HB_P_LINEOFFSET, 42,	/* 61 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01313 */ HB_P_LINEOFFSET, 43,	/* 62 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', 'o', 'u', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01365 */ HB_P_LINEOFFSET, 44,	/* 63 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01417 */ HB_P_LINEOFFSET, 45,	/* 64 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01469 */ HB_P_LINEOFFSET, 46,	/* 65 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01521 */ HB_P_LINEOFFSET, 47,	/* 66 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01573 */ HB_P_LINEOFFSET, 48,	/* 67 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', '[', 'S', '/', 'C', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01625 */ HB_P_LINEOFFSET, 49,	/* 68 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01677 */ HB_P_LINEOFFSET, 50,	/* 69 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'[', 'A', ']', 'n', 'a', 'l', 'i', 't', '.', ' ', '[', 'S', ']', 'i', 'n', 't', '.', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', '.', 'D', 'o', 'c', ' ', '[', 'R', ']', 'S', 'i', 'n', 't', '.', 'R', 'e', 's', 'u', 'm', 'i', 'd', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01743 */ HB_P_LINEOFFSET, 51,	/* 70 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01795 */ HB_P_LINEOFFSET, 52,	/* 71 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01837 */ HB_P_LINEOFFSET, 53,	/* 72 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'p', '/', 'O', 'b', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01889 */ HB_P_LINEOFFSET, 54,	/* 73 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'O', 'B', 'S', '.', 'D', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01941 */ HB_P_LINEOFFSET, 55,	/* 74 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01993 */ HB_P_LINEOFFSET, 56,	/* 75 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02045 */ HB_P_LINEOFFSET, 57,	/* 76 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', 's', 'o', ' ', 'o', 's', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'S', 'e', 'm', ' ', 'F', 'u', 'n', 'd', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02097 */ HB_P_LINEOFFSET, 58,	/* 77 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'R', 'O', 'C', 'E', 'S', 'S', 'O', 'S', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02149 */ HB_P_LINEOFFSET, 59,	/* 78 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'O', 'B', 'S', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02201 */ HB_P_LINEOFFSET, 60,	/* 79 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'H', 'I', 'S', 'T', 'O', 'R', 'I', 'C', 'O', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02253 */ HB_P_LINEOFFSET, 61,	/* 80 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02305 */ HB_P_LINEOFFSET, 62,	/* 81 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ' ', 'e', ' ', 'C', 'o', 'n', 'j', 'u', 'g', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02357 */ HB_P_LINEOFFSET, 63,	/* 82 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ' ', 'e', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ' ', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02409 */ HB_P_LINEOFFSET, 64,	/* 83 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', ' ', 'P', 'e', 'l', 'a', ' ', 'L', 'e', 't', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'R', 'a', 'z', 'a', 'o', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02461 */ HB_P_LINEOFFSET, 65,	/* 84 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', 'p', 'o', 'r', ' ', 'B', 'A', 'I', 'R', 'R', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02513 */ HB_P_LINEOFFSET, 66,	/* 85 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MTIPO_IMP */
/* 02522 */ HB_P_LINEOFFSET, 68,	/* 87 */
	HB_P_PUSHSYMNEAR, 29,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 02531 */ HB_P_LINEOFFSET, 69,	/* 88 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLHIST */
/* 02538 */ HB_P_LINEOFFSET, 70,	/* 89 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 87,	/* CON_CLAUX */
/* 02545 */ HB_P_LINEOFFSET, 71,	/* 90 */
	HB_P_PUSHSYMNEAR, 30,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02555 */ HB_P_LINEOFFSET, 72,	/* 91 */
	HB_P_PUSHSYMNEAR, 30,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02565 */ HB_P_LINEOFFSET, 73,	/* 92 */
	HB_P_LOCALNEARSETSTR, 31, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 02573 */ HB_P_LINEOFFSET, 74,	/* 93 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* BANK */
/* 02584 */ HB_P_LINEOFFSET, 76,	/* 95 */
	HB_P_LOCALNEARSETINT, 84, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_POPLOCALNEAR, 7,	/* MOD */
/* 02620 */ HB_P_LINEOFFSET, 77,	/* 96 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 02632 */ HB_P_LINEOFFSET, 78,	/* 97 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* T_INI */
/* 02652 */ HB_P_LINEOFFSET, 79,	/* 98 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 6,	/* T_FIM */
/* 02659 */ HB_P_LINEOFFSET, 80,	/* 99 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 33, 0,	/* MNUM_BANCO */
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 02674 */ HB_P_LINEOFFSET, 81,	/* 100 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MOP_DIA 2*/
	'S', 0, 
/* 02682 */ HB_P_LINEOFFSET, 82,	/* 101 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MCIDADE */
	HB_P_POPLOCALNEAR, 45,	/* MTIP_PG */
/* 02696 */ HB_P_LINEOFFSET, 84,	/* 103 */
	HB_P_LOCALNEARSETSTR, 88, 2, 0,	/* MIMP_TEL 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 88,	/* MIMP_TEL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 85,	/* MAVA_CONJ */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 66,	/* MS_F */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 61,	/* MIMP_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 72,	/* MIMP_OBSCLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 74,	/* MHIST_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 46,	/* MEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_POPLOCALNEAR, 52,	/* MLINHAS */
/* 02735 */ HB_P_LINEOFFSET, 85,	/* 104 */
	HB_P_LOCALNEARSETSTR, 89, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_POPLOCALNEAR, 47,	/* MCAB */
/* 02750 */ HB_P_LINEOFFSET, 86,	/* 105 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 49,	/* MAREA */
/* 02761 */ HB_P_LINEOFFSET, 87,	/* 106 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* MTIP */
/* 02772 */ HB_P_LINEOFFSET, 88,	/* 107 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 90,	/* MBAIRRO */
/* 02783 */ HB_P_LINEOFFSET, 89,	/* 108 */
	HB_P_LOCALNEARSETSTR, 37, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 02791 */ HB_P_LINEOFFSET, 90,	/* 109 */
	HB_P_LOCALNEARSETSTR, 67, 2, 0,	/* MPROCESS 2*/
	'N', 0, 
/* 02799 */ HB_P_LINEOFFSET, 91,	/* 110 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
/* 02806 */ HB_P_LINEOFFSET, 92,	/* 111 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	77, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02844) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02849) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'c', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	77, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02901 */ HB_P_LINEOFFSET, 93,	/* 112 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02939) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02944) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 39,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02995 */ HB_P_LINEOFFSET, 94,	/* 113 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03067 */ HB_P_LINEOFFSET, 95,	/* 114 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 03089 */ HB_P_LINEOFFSET, 96,	/* 115 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 03113) */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 3,
/* 03113 */ HB_P_LINEOFFSET, 97,	/* 116 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03152) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03157) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 171,	/* 171 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 03353) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03370 */ HB_P_LINEOFFSET, 98,	/* 117 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03409) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03414) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 45,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03462) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03487 */ HB_P_LINEOFFSET, 99,	/* 118 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03552 */ HB_P_LINEOFFSET, 100,	/* 119 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03591) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03596) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03624 */ HB_P_LINEOFFSET, 101,	/* 120 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03663) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03668) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03696 */ HB_P_LINEOFFSET, 102,	/* 121 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03735) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03740) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03794 */ HB_P_LINEOFFSET, 103,	/* 122 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MOP_DIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03833) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03838) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'd', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MOP_DIA */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03881) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'q', 'u', 'e', ' ', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', 's', 'e', 'j', 'a', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'D', 'O', '=', '[', 'S', ']', ' ', 'o', 'u', ' ', '[', 'N', ']', 'p', '/', 'n', 'a', 'o', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03973 */ HB_P_LINEOFFSET, 104,	/* 123 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04012) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04017) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04051 */ HB_P_LINEOFFSET, 105,	/* 124 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04090) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04095) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04129 */ HB_P_LINEOFFSET, 106,	/* 125 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	49, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04168) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04173) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04205 */ HB_P_LINEOFFSET, 107,	/* 126 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04244) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04249) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04297) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 83,	/* 83 */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', 'o', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'C', ']', 'o', 'm', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'N', ']', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04397 */ HB_P_LINEOFFSET, 108,	/* 127 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 46,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04479) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04496 */ HB_P_LINEOFFSET, 109,	/* 128 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04535) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04540) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', ',', 'S', ',', 'T', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04589) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 167, 0,	/* 167 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 0,	/* 149 (abs: 04756) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 134,	/* 134 */
	'[', 'A', ']', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', '-', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', '.', ' ', '-', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '-', ' ', '[', 'R', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'i', 'd', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04773 */ HB_P_LINEOFFSET, 110,	/* 129 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04812) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04817) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04882 */ HB_P_LINEOFFSET, 111,	/* 130 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MOBS_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04921) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04926) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'b', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MOBS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* MEND */
	37, 0,	/* MTIPO_CON */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04991) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05008 */ HB_P_LINEOFFSET, 112,	/* 131 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	52, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05047) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05052) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'i', 'n', 'h', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	52, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05120 */ HB_P_LINEOFFSET, 113,	/* 132 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05159) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05164) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'b', 's', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05217 */ HB_P_LINEOFFSET, 114,	/* 133 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05256) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05261) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05318 */ HB_P_LINEOFFSET, 115,	/* 134 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05357) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05362) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05401 */ HB_P_LINEOFFSET, 116,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MS_F */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05440) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05445) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MS_F */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05494 */ HB_P_LINEOFFSET, 117,	/* 136 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MPROCESS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05533) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05538) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'c', 'e', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MPROCESS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05591 */ HB_P_LINEOFFSET, 118,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	72, 0,	/* MIMP_OBSCLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05630) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05635) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'i', 'm', 'p', '_', 'o', 'b', 's', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	72, 0,	/* MIMP_OBSCLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05691 */ HB_P_LINEOFFSET, 119,	/* 138 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	74, 0,	/* MHIST_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05730) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05735) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'h', 'i', 's', 't', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	74, 0,	/* MHIST_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05789 */ HB_P_LINEOFFSET, 120,	/* 139 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	76, 0,	/* MTIPO_EMI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05828) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05833) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'e', 'm', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 97,	/* 97 */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 85,	/* 85 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'T', 'i', 'p', 'o', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'o', 'u', ' ', 'E', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '[', '*', ']', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'D', 'o', 'c', '.', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'o', ' ', '-', ' ', '[', '#', ']', 'S', 'o', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05972 */ HB_P_LINEOFFSET, 121,	/* 140 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	85, 0,	/* MAVA_CONJ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06011) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06016) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'v', 'a', '_', 'c', 'o', 'n', 'j', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	85, 0,	/* MAVA_CONJ */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06070 */ HB_P_LINEOFFSET, 122,	/* 141 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	88, 0,	/* MIMP_TEL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06109) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06114) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 't', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	88, 0,	/* MIMP_TEL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06167 */ HB_P_LINEOFFSET, 123,	/* 142 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	89, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06206) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06211) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'e', 't', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06244 */ HB_P_LINEOFFSET, 124,	/* 143 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	90, 0,	/* MBAIRRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06283) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06288) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06322 */ HB_P_LINEOFFSET, 125,	/* 144 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 06344 */ HB_P_LINEOFFSET, 126,	/* 145 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 06368) */
/* 06356 */ HB_P_LINEOFFSET, 127,	/* 146 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06363 */ HB_P_LINEOFFSET, 128,	/* 147 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06368 */ HB_P_LINEOFFSET, 130,	/* 149 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06414) */
/* 06380 */ HB_P_LINEOFFSET, 131,	/* 150 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMP, 172, 3,	/* 940 (abs: 07351) */
/* 06414 */ HB_P_LINEOFFSET, 132,	/* 151 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06457) */
/* 06426 */ HB_P_LINEOFFSET, 133,	/* 152 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMP, 129, 3,	/* 897 (abs: 07351) */
/* 06457 */ HB_P_LINEOFFSET, 134,	/* 153 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 1,	/* 405 (abs: 06872) */
/* 06470 */ HB_P_LINEOFFSET, 135,	/* 154 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 06498 */ HB_P_LINEOFFSET, 136,	/* 155 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 06509 */ HB_P_LINEOFFSET, 137,	/* 156 */
	HB_P_PUSHSYMNEAR, 26,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'C', 'A', 'R', 'T', 'A', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 06543 */ HB_P_LINEOFFSET, 138,	/* 157 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06588 */ HB_P_LINEOFFSET, 139,	/* 158 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06626) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06631) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 49,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06685) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 70,	/* 70 */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06772 */ HB_P_LINEOFFSET, 140,	/* 159 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 06794 */ HB_P_LINEOFFSET, 141,	/* 160 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06816) */
/* 06806 */ HB_P_LINEOFFSET, 142,	/* 161 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 61, 239,	/* -4291 (abs: 02522) */
/* 06816 */ HB_P_LINEOFFSET, 145,	/* 164 */
	HB_P_PUSHSYMNEAR, 51,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 28,	/* OPCAO */
/* 06850 */ HB_P_LINEOFFSET, 146,	/* 165 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06857 */ HB_P_LINEOFFSET, 147,	/* 166 */
	HB_P_PUSHLOCALNEAR, 28,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 229, 1,	/* 485 (abs: 07351) */
	HB_P_JUMP, 5, 239,	/* -4347 (abs: 02522) */
/* 06872 */ HB_P_LINEOFFSET, 150,	/* 169 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 182, 1,	/* 438 (abs: 07320) */
/* 06885 */ HB_P_LINEOFFSET, 151,	/* 170 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 06919 */ HB_P_LINEOFFSET, 152,	/* 171 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 06930 */ HB_P_LINEOFFSET, 153,	/* 172 */
	HB_P_PUSHSYMNEAR, 26,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 06971 */ HB_P_LINEOFFSET, 154,	/* 173 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07016 */ HB_P_LINEOFFSET, 155,	/* 174 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07054) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07059) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 46, 0,	/* 46 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07102) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 07117) */
	HB_P_PUSHSYMNEAR, 52,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07125) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07217 */ HB_P_LINEOFFSET, 156,	/* 175 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 07239 */ HB_P_LINEOFFSET, 157,	/* 176 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 07261) */
/* 07251 */ HB_P_LINEOFFSET, 158,	/* 177 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 128, 237,	/* -4736 (abs: 02522) */
/* 07261 */ HB_P_LINEOFFSET, 161,	/* 180 */
	HB_P_PUSHSYMNEAR, 51,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 28,	/* OPCAO */
/* 07299 */ HB_P_LINEOFFSET, 162,	/* 181 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07306 */ HB_P_LINEOFFSET, 163,	/* 182 */
	HB_P_PUSHLOCALNEAR, 28,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 07351) */
	HB_P_JUMP, 69, 237,	/* -4795 (abs: 02522) */
/* 07320 */ HB_P_LINEOFFSET, 167,	/* 186 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 07351 */ HB_P_LINEOFFSET, 169,	/* 188 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* TP_MES */
	HB_P_POPLOCALNEAR, 8,	/* TD_MES */
/* 07361 */ HB_P_LINEOFFSET, 170,	/* 189 */
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07404) */
/* 07384 */ HB_P_LINEOFFSET, 171,	/* 190 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '6', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* T_INI */
/* 07404 */ HB_P_LINEOFFSET, 173,	/* 192 */
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07447) */
/* 07427 */ HB_P_LINEOFFSET, 174,	/* 193 */
	HB_P_PUSHSYMNEAR, 31,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* T_FIM */
/* 07447 */ HB_P_LINEOFFSET, 176,	/* 195 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 07504) */
/* 07458 */ HB_P_LINEOFFSET, 177,	/* 196 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
	HB_P_JUMPNEAR, 85,	/* 85 (abs: 07587) */
/* 07504 */ HB_P_LINEOFFSET, 178,	/* 197 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 07561) */
/* 07515 */ HB_P_LINEOFFSET, 179,	/* 198 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'o', ' ', 'B', 'a', 'i', 'r', 'r', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 07587) */
/* 07561 */ HB_P_LINEOFFSET, 181,	/* 200 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
/* 07587 */ HB_P_LINEOFFSET, 183,	/* 202 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 07618) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07617) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 07889) */
/* 07621 */ HB_P_LINEOFFSET, 184,	/* 203 */
	HB_P_PUSHSYMNEAR, 26,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'O', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 07668 */ HB_P_LINEOFFSET, 185,	/* 204 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'[', '1', ']', '-', '>', 'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '[', '2', ']', '-', '>', 'R', 'a', 'z', 'a', 'o', ' ', 's', 'o', 'c', 'i', 'a', 'l', ' ', ' ', '[', '8', ']', '-', '>', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07742 */ HB_P_LINEOFFSET, 186,	/* 205 */
	HB_P_PUSHSYMNEAR, 34,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 54,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 37,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MTP_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07786) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07791) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'p', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MTP_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', ',', '2', ',', '8', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 38, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07845 */ HB_P_LINEOFFSET, 187,	/* 206 */
	HB_P_PUSHSYMNEAR, 41,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 36, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 36, 0,	/* GETLIST */
/* 07867 */ HB_P_LINEOFFSET, 188,	/* 207 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07874 */ HB_P_LINEOFFSET, 189,	/* 208 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07889) */
	HB_P_JUMP, 12, 235,	/* -5364 (abs: 02522) */
/* 07889 */ HB_P_LINEOFFSET, 193,	/* 212 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 12, 54,	/* 13836 (abs: 21734) */
/* 07901 */ HB_P_LINEOFFSET, 194,	/* 213 */
	HB_P_PUSHSYMNEAR, 55,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07952 */ HB_P_LINEOFFSET, 196,	/* 215 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 07960 */ HB_P_LINEOFFSET, 197,	/* 216 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 08069) */
/* 07968 */ HB_P_LINEOFFSET, 198,	/* 217 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 101,	/* 101 (abs: 08168) */
/* 08069 */ HB_P_LINEOFFSET, 200,	/* 219 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08168 */ HB_P_LINEOFFSET, 203,	/* 222 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 08220) */
/* 08180 */ HB_P_LINEOFFSET, 204,	/* 223 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08220 */ HB_P_LINEOFFSET, 206,	/* 225 */
	HB_P_PUSHLOCALNEAR, 66,	/* MS_F */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08267) */
/* 08231 */ HB_P_LINEOFFSET, 207,	/* 226 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08267 */ HB_P_LINEOFFSET, 209,	/* 228 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 08310) */
/* 08278 */ HB_P_LINEOFFSET, 210,	/* 229 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08310 */ HB_P_LINEOFFSET, 212,	/* 231 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08357) */
/* 08321 */ HB_P_LINEOFFSET, 213,	/* 232 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08357 */ HB_P_LINEOFFSET, 215,	/* 234 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 08411) */
/* 08369 */ HB_P_LINEOFFSET, 216,	/* 235 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08411 */ HB_P_LINEOFFSET, 218,	/* 237 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 08452) */
/* 08422 */ HB_P_LINEOFFSET, 219,	/* 238 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08452 */ HB_P_LINEOFFSET, 221,	/* 240 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08495) */
/* 08463 */ HB_P_LINEOFFSET, 222,	/* 241 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08495 */ HB_P_LINEOFFSET, 224,	/* 243 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 08539) */
/* 08506 */ HB_P_LINEOFFSET, 225,	/* 244 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08539 */ HB_P_LINEOFFSET, 227,	/* 246 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08582) */
/* 08550 */ HB_P_LINEOFFSET, 228,	/* 247 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08582 */ HB_P_LINEOFFSET, 230,	/* 249 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 08634) */
/* 08593 */ HB_P_LINEOFFSET, 231,	/* 250 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08634 */ HB_P_LINEOFFSET, 233,	/* 252 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08678) */
/* 08646 */ HB_P_LINEOFFSET, 234,	/* 253 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08678 */ HB_P_LINEOFFSET, 236,	/* 255 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 08730) */
/* 08689 */ HB_P_LINEOFFSET, 237,	/* 256 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08730 */ HB_P_LINEOFFSET, 240,	/* 259 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08777) */
/* 08741 */ HB_P_LINEOFFSET, 241,	/* 260 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 08864) */
/* 08777 */ HB_P_LINEOFFSET, 242,	/* 261 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 08820) */
/* 08788 */ HB_P_LINEOFFSET, 243,	/* 262 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 08864) */
/* 08820 */ HB_P_LINEOFFSET, 244,	/* 263 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 08864) */
/* 08831 */ HB_P_LINEOFFSET, 245,	/* 264 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08864 */ HB_P_LINEOFFSET, 247,	/* 266 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'v', 'e', 'n', 'c', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'b', 'a', 'n', 'c', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 08911 */ HB_P_LINEOFFSET, 248,	/* 267 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08931 */ HB_P_LINEOFFSET, 249,	/* 268 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08955 */ HB_P_LINEOFFSET, 250,	/* 269 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 09019) */
/* 08969 */ HB_P_LINEOFFSET, 251,	/* 270 */
	HB_P_PUSHSYMNEAR, 61,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 162, 230,	/* -6494 (abs: 02522) */
/* 09019 */ HB_P_LINEOFFSET, 255,	/* 274 */
	HB_P_PUSHSYMNEAR, 62,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 09060) */
	HB_P_JUMP, 121, 230,	/* -6535 (abs: 02522) */
/* 09060 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 54, 5,	/* 1334 (abs: 10403) */
/* 09072 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 63, 0,	/* NXLS */
/* 09081 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 64, 0,	/* F */
/* 09088 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 65,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHVARIABLE, 14, 0,	/* MARQ */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09107 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 66,	/* XLSOPEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 63, 0,	/* NXLS */
/* 09121 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_DOSHORT, 4,
/* 09138 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 64, 0,	/* F */
/* 09148 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_DOSHORT, 4,
/* 09165 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 64, 0,	/* F */
/* 09175 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'D', 'I', 'G', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09199 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 4,
/* 09225 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09253 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_DOSHORT, 4,
/* 09275 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09303 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'i', 'p', 'o', ' ', 'P', 'a', 'g', '.', 0, 
	HB_P_DOSHORT, 4,
/* 09331 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09357 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09386 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 4,
/* 09410 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'i', 'a', 's', ' ', 'A', 't', 'r', 'a', 's', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09440 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'J', 'u', 'r', 'o', 's', 0, 
	HB_P_DOSHORT, 4,
/* 09464 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 4,
/* 09488 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09515 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'T', 'E', 0, 
	HB_P_DOSHORT, 4,
/* 09536 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_POPVARIABLE, 68, 0,	/* MCOL */
/* 09544 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 09603) */
/* 09553 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 09603 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 69, 0,	/* I */
/* 09610 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 228, 2,	/* 740 (abs: 10369) */
/* 09632 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 09658 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 09672 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 09691 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 09760) */
/* 09700 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 09727 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 09760 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 64, 0,	/* F */
/* 09770 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 09795 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 09821 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 09847 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 09873 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 09921 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 09966) */
/* 09941 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'A', 'R', 'T', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 70,	/* 70 (abs: 10034) */
/* 09966 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 10011) */
/* 09986 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'B', 'A', 'N', 'C', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 10034) */
/* 10011 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 4,
/* 10034 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 4,
/* 10065 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 4,
/* 10096 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10138 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10181 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10218 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10266 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10292 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 10335) */
/* 10312 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 23,	/* 23 (abs: 10356) */
/* 10335 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 4,
/* 10356 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_JUMP, 19, 253,	/* -749 (abs: 09617) */
/* 10369 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 67,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 64, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 73,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 4,
/* 10389 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 74,	/* XLSCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* NXLS */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 58, 225,	/* -7878 (abs: 02522) */
/* 10403 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 10424 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_LOCALNEARSETINT, 84, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 10493 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 20,	/* L_MES */
/* 10518 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 10531 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 174, 36,	/* 9390 (abs: 19940) */
/* 10553 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 10579 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 10592 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 10611) */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 120, 1,	/* 376 (abs: 10987) */
/* 10614 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 10632) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 10643) */
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 88, 1,	/* 344 (abs: 10987) */
/* 10646 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 10653 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 10670) */
/* 10662 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10670 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 10686 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10701 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 10766) */
/* 10710 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10766 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'g', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 10928 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10962 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 10987 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 149, 2,	/* 661 (abs: 11664) */
/* 11006 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 110, 2,	/* 622 (abs: 11638) */
/* 11019 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 11040) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 44,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 1,	/* 349 (abs: 11389) */
/* 11043 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11152 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11211 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11256 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11301 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11352 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 0,	/* 252 (abs: 11638) */
/* 11389 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 11638) */
/* 11402 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11460 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11508 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11576 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11638 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 11649 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 11664 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 11702) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 82,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 11934) */
/* 11705 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 11900) */
/* 11715 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 83,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11833 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11867 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* TOT_DIN 0*/
/* 11874 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 11900 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 20,	/* L_MES */
/* 11927 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT 0*/
/* 11934 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 197, 0,	/* 197 (abs: 12141) */
/* 11947 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 84, 0,	/* CONS_PED */
/* 11956 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 12077 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12098 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12123 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12141) */
	HB_P_JUMP, 112, 30,	/* 7792 (abs: 19930) */
/* 12141 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 70,	/* MASSISTENCIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 12316) */
/* 12154 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 71,	/* CONS_ASS */
/* 12162 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'o', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_ASS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12274 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12299 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_ASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12316) */
	HB_P_JUMP, 193, 29,	/* 7617 (abs: 19930) */
/* 12316 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 12484) */
/* 12329 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 91,	/* CONS_BAIRRO */
/* 12337 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 91,	/* CONS_BAIRRO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12442 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12467 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 91,	/* CONS_BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12484) */
	HB_P_JUMP, 25, 29,	/* 7449 (abs: 19930) */
/* 12484 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12543) */
/* 12496 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSE, 237, 28,	/* 7405 (abs: 19930) */
/* 12528 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 85,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12543) */
	HB_P_JUMP, 222, 28,	/* 7390 (abs: 19930) */
/* 12543 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12602) */
/* 12555 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSE, 178, 28,	/* 7346 (abs: 19930) */
/* 12587 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 85,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* AREA */
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12602) */
	HB_P_JUMP, 163, 28,	/* 7331 (abs: 19930) */
/* 12602 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* TOT 1*/
/* 12609 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 12616 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
/* 12634 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 12652 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 12670 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 12684 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 12703 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 12725 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 12754) */
/* 12734 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 12754 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 12909) */
/* 12764 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 12791 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 12824 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 12842 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 12849 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 12856 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 12878 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 12934) */
/* 12887 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 12934) */
/* 12909 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 12927 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 12934 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 12947 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 12960 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 12984 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 43,	/* MT_JUROS */
/* 12997 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13012 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 26,	/* 6905 (abs: 19927) */
/* 13025 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13062 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 30, 0,	/* 30 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13104 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13143 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13182 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13242 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 13295) */
/* 13262 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 13379) */
/* 13295 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 13348) */
/* 13315 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 13379) */
/* 13348 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13379 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13422 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13465 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13526 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13580 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13630 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 13689 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 13725 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 13778) */
/* 13745 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 13809) */
/* 13778 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13809 */ HB_P_LINE, 5, 2,	/* 517 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 13865) */
/* 13829 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 13865 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 154, 0,	/* 154 (abs: 14037) */
/* 13886 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13942 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 46,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 13978 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14037 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 14078) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 'd', '.', ':', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 99, 12,	/* 3171 (abs: 17249) */
/* 14081 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'O', 'B', 'S', '.', ':', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 'e', 's', 0, 
	HB_P_DOSHORT, 1,
/* 14131 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14261) */
/* 14160 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14261 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14391) */
/* 14290 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14391 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14521) */
/* 14420 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14521 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14651) */
/* 14550 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14651 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14781) */
/* 14680 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14781 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14911) */
/* 14810 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14911 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15041) */
/* 14940 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15041 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15171) */
/* 15070 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15171 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 101,	/* 101 (abs: 15298) */
/* 15199 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15298 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15428) */
/* 15327 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15428 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15558) */
/* 15457 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15558 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15688) */
/* 15587 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15688 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15818) */
/* 15717 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15818 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15948) */
/* 15847 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15948 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16078) */
/* 15977 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16078 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16208) */
/* 16107 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16208 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 101,	/* 101 (abs: 16335) */
/* 16236 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16335 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16465) */
/* 16364 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16465 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16595) */
/* 16494 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16595 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16725) */
/* 16624 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16725 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16855) */
/* 16754 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16855 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16985) */
/* 16884 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16985 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 17115) */
/* 17014 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17115 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 236, 1,	/* 492 (abs: 17634) */
/* 17145 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 132, 1,	/* 388 (abs: 17634) */
/* 17249 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 17634) */
/* 17262 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17324) */
/* 17282 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17324 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17386) */
/* 17344 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17386 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17448) */
/* 17406 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17448 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17510) */
/* 17468 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17510 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17572) */
/* 17530 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17572 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17634) */
/* 17592 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17634 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* CON_CL */
/* 17642 */ HB_P_LINE, 108, 2,	/* 620 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ',', 't', 'e', 'l', '1', ',', 't', 'e', 'l', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 17754 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17779 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 72,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 17802) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 17921) */
/* 17804 */ HB_P_LINE, 111, 2,	/* 623 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17843 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17882 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17921 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_PUSHLOCALNEAR, 74,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 0,	/* 192 (abs: 18123) */
/* 17934 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLHIST */
/* 17942 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18014 */ HB_P_LINE, 118, 2,	/* 630 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18039 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 18123) */
/* 18053 */ HB_P_LINE, 120, 2,	/* 632 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 90, 0,	/* L */
/* 18060 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 18123) */
/* 18080 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 18111 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 18067) */
/* 18123 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 85,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18146) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 18359) */
/* 18149 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 87,	/* CON_CLAUX */
/* 18157 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18234 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18259 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 18359) */
/* 18273 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18316 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18359 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 88,	/* MIMP_TEL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18382) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 18475) */
/* 18384 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18475 */ HB_P_LINE, 139, 2,	/* 651 */
	HB_P_PUSHLOCALNEAR, 61,	/* MIMP_PRODUTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 18497) */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSE, 59, 3,	/* 827 (abs: 19324) */
/* 18500 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 144, 1,	/* 400 (abs: 18910) */
/* 18513 */ HB_P_LINE, 141, 2,	/* 653 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 84, 0,	/* CONS_PED */
/* 18522 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18621 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18646 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 153, 2,	/* 665 (abs: 19324) */
/* 18662 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
/* 18669 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_LOCALNEARSETINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 18907) */
/* 18690 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18897 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_LOCALNEARADDINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_JUMP, 28, 255,	/* -228 (abs: 18676) */
	HB_P_JUMP, 161, 1,	/* 417 (abs: 19324) */
/* 18910 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 84, 0,	/* CONS_PED */
/* 18919 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 19054 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19079 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 19324) */
/* 19095 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_PUSHLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_PUSHSYMNEAR, 91,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* PQUANTD */
	HB_P_PUSHSYMNEAR, 91,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 93,	/* PVLR_FAT */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 62,	/* MTOT_PRODUTO */
/* 19112 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_PUSHSYMNEAR, 91,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 63,	/* MQTD_PRODUTO */
/* 19124 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 84, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19324 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHLOCALNEAR, 67,	/* MPROCESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 81, 2,	/* 593 (abs: 19927) */
/* 19337 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
/* 19345 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'p', 'r', 'o', 'c', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 19492 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19517 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 142, 1,	/* 398 (abs: 19927) */
/* 19532 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'P', ' ', 'R', ' ', 'O', ' ', 'C', ' ', 'E', ' ', 'S', ' ', 'S', ' ', 'O', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19598 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'A', 's', 's', 'u', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'o', 'r', 't', 'a', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'r', 'e', 'v', 'i', 's', 'a', 'o', ' ', ' ', 'O', 'p', 'e', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 19728 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 19762 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
/* 19769 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_LOCALNEARSETINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 107,	/* 107 (abs: 19893) */
/* 19788 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19884 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_LOCALNEARADDINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_JUMPNEAR, 141,	/* -115 (abs: 19776) */
/* 19893 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 19927 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_JUMP, 73, 219,	/* -9399 (abs: 10538) */
/* 19940 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 152, 2,	/* 664 (abs: 20623) */
/* 19962 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 110, 2,	/* 622 (abs: 20594) */
/* 19975 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 19996) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 44,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 1,	/* 349 (abs: 20345) */
/* 19999 */ HB_P_LINE, 181, 2,	/* 693 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20108 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20167 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20212 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20257 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20308 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 0,	/* 252 (abs: 20594) */
/* 20345 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 20594) */
/* 20358 */ HB_P_LINE, 188, 2,	/* 700 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20416 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20464 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20532 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20594 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 20605 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 20623 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 83,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20746 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20780 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 20824) */
/* 20793 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 20801 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 20808 */ HB_P_LINE, 202, 2,	/* 714 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 20824 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 20839 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 20884 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21087 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21204 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21356 */ HB_P_LINE, 209, 2,	/* 721 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21435 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21559 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 117,	/* 117 (abs: 21686) */
/* 21571 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21686 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 21713 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 21721 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_PUSHSYMNEAR, 94,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 105, 77,	/* 19817 (abs: 41548) */
/* 21734 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 29,	/* 7659 (abs: 29403) */
/* 21747 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'T', 'I', 'P', 'O', ' ', 'D', 'O', 'C', '.', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 21780 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHSYMNEAR, 55,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 21847 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* CONS_TPDOC */
/* 21856 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_LOCALNEARSETSTR, 79, 23, 0,	/* CCOMM 23*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'i', 'p', 'd', 'c', 0, 
/* 21886 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 21915 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 21936 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21961 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 22034) */
/* 21976 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_PUSHSYMNEAR, 61,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'r', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'd', 'e', 's', 't', 'e', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 179,	/* -19509 (abs: 02522) */
/* 22034 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_PUSHSYMNEAR, 62,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 22073) */
	HB_P_JUMP, 164, 179,	/* -19548 (abs: 02522) */
/* 22073 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_LOCALNEARSETINT, 84, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 22131 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 204, 23,	/* 6092 (abs: 28242) */
/* 22153 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 22162 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 22273) */
/* 22171 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 22373) */
/* 22273 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22373 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* CONS_TPDOC */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22411 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 22465) */
/* 22424 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22465 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 22510) */
/* 22477 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22510 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 22559) */
/* 22522 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22559 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 22615) */
/* 22572 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22615 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 22658) */
/* 22627 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22658 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 22703) */
/* 22670 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22703 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 22749) */
/* 22715 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22749 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 22794) */
/* 22761 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22794 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 22848) */
/* 22806 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22848 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 22894) */
/* 22861 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22894 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 22948) */
/* 22906 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 22948 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 22997) */
/* 22960 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 23088) */
/* 22997 */ HB_P_LINE, 23, 3,	/* 791 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 23042) */
/* 23009 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 23088) */
/* 23042 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 23088) */
/* 23054 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 23088 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 23130 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 23151 */ HB_P_LINE, 30, 3,	/* 798 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23176 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 23194) */
	HB_P_JUMP, 177, 19,	/* 5041 (abs: 28232) */
/* 23194 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 23207 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 23226 */ HB_P_LINE, 37, 3,	/* 805 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 23239 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 23252 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 23261 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 88, 17,	/* 4440 (abs: 27720) */
/* 23283 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* CONS_TPDOC */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 23326 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 23345) */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 150, 1,	/* 406 (abs: 23751) */
/* 23348 */ HB_P_LINE, 43, 3,	/* 811 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 23366) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 23377) */
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 118, 1,	/* 374 (abs: 23751) */
/* 23380 */ HB_P_LINE, 44, 3,	/* 812 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 23387 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 23404) */
/* 23396 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 23404 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 23420 */ HB_P_LINE, 49, 3,	/* 817 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 23435 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 23553) */
/* 23444 */ HB_P_LINE, 51, 3,	/* 819 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23500 */ HB_P_LINE, 52, 3,	/* 820 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23553 */ HB_P_LINE, 54, 3,	/* 822 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 140,	/* 140 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 23717 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 23751 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_PUSHLOCALNEAR, 70,	/* MASSISTENCIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 159, 0,	/* 159 (abs: 23920) */
/* 23764 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 71,	/* CONS_ASS */
/* 23772 */ HB_P_LINE, 61, 3,	/* 829 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'o', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_ASS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 23878 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23903 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_ASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 23920) */
	HB_P_JUMP, 209, 14,	/* 3793 (abs: 27710) */
/* 23920 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 188, 0,	/* 188 (abs: 24118) */
/* 23933 */ HB_P_LINE, 68, 3,	/* 836 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 78,	/* ARET */
/* 23941 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 78, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24046 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24071 */ HB_P_LINE, 71, 3,	/* 839 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 24118) */
/* 24085 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 24100 */ HB_P_LINE, 73, 3,	/* 841 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
	HB_P_JUMP, 11, 14,	/* 3595 (abs: 27710) */
/* 24118 */ HB_P_LINE, 77, 3,	/* 845 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 24286) */
/* 24131 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 91,	/* CONS_BAIRRO */
/* 24139 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 91,	/* CONS_BAIRRO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24244 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24269 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 91,	/* CONS_BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 24286) */
	HB_P_JUMP, 99, 13,	/* 3427 (abs: 27710) */
/* 24286 */ HB_P_LINE, 85, 3,	/* 853 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 184, 0,	/* 184 (abs: 24480) */
/* 24299 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 78,	/* ARET */
/* 24307 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 'r', 'e', 'a', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 78, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24408 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24433 */ HB_P_LINE, 89, 3,	/* 857 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 24480) */
/* 24447 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 24462 */ HB_P_LINE, 91, 3,	/* 859 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
	HB_P_JUMP, 161, 12,	/* 3233 (abs: 27710) */
/* 24480 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_PUSHLOCALNEAR, 46,	/* MEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 83, 2,	/* 595 (abs: 25085) */
/* 24493 */ HB_P_LINE, 96, 3,	/* 864 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 248, 1,	/* 504 (abs: 25007) */
/* 24506 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 78,	/* ARET */
/* 24514 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'r', 'a', 'z', 'a', 'o', ',', 'n', 'o', 'm', 'e', ',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ',', 'b', 'a', 'i', 'r', 'r', 'o', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'u', 'f', ',', 't', 'e', 'l', '1', ',', 't', 'e', 'l', '2', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 78, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24660 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24685 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 24939) */
/* 24700 */ HB_P_LINE, 101, 3,	/* 869 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24771 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'T', 'e', 'l', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24939 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 24970 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 25073) */
/* 25007 */ HB_P_LINE, 107, 3,	/* 875 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25038 */ HB_P_LINE, 108, 3,	/* 876 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25073 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
	HB_P_JUMP, 170, 0,	/* 170 (abs: 25252) */
/* 25085 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 82,	/* 82 (abs: 25177) */
/* 25097 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25134 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 25243) */
/* 25177 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25208 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25243 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
/* 25252 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 25267 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25304 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25345 */ HB_P_LINE, 125, 3,	/* 893 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25383 */ HB_P_LINE, 126, 3,	/* 894 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25443 */ HB_P_LINE, 127, 3,	/* 895 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 25496) */
/* 25463 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 25580) */
/* 25496 */ HB_P_LINE, 129, 3,	/* 897 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 25549) */
/* 25516 */ HB_P_LINE, 130, 3,	/* 898 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 25580) */
/* 25549 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25580 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25623 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25666 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25728 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25782 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 25800 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 25807 */ HB_P_LINE, 140, 3,	/* 908 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 25814 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 25828 */ HB_P_LINE, 142, 3,	/* 910 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 25847 */ HB_P_LINE, 143, 3,	/* 911 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 25869 */ HB_P_LINE, 144, 3,	/* 912 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 25898) */
/* 25878 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 25898 */ HB_P_LINE, 147, 3,	/* 915 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 26053) */
/* 25908 */ HB_P_LINE, 148, 3,	/* 916 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 25935 */ HB_P_LINE, 149, 3,	/* 917 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 25968 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 25986 */ HB_P_LINE, 151, 3,	/* 919 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 25993 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 26000 */ HB_P_LINE, 153, 3,	/* 921 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 26022 */ HB_P_LINE, 154, 3,	/* 922 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 26078) */
/* 26031 */ HB_P_LINE, 155, 3,	/* 923 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 26078) */
/* 26053 */ HB_P_LINE, 158, 3,	/* 926 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 26071 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 26078 */ HB_P_LINE, 161, 3,	/* 929 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 26091 */ HB_P_LINE, 162, 3,	/* 930 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 26104 */ HB_P_LINE, 163, 3,	/* 931 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 26128 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 26146 */ HB_P_LINE, 165, 3,	/* 933 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26199 */ HB_P_LINE, 166, 3,	/* 934 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 26256 */ HB_P_LINE, 167, 3,	/* 935 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 26292 */ HB_P_LINE, 168, 3,	/* 936 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 26345) */
/* 26312 */ HB_P_LINE, 169, 3,	/* 937 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 26376) */
/* 26345 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 26376 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 26432) */
/* 26396 */ HB_P_LINE, 174, 3,	/* 942 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 26432 */ HB_P_LINE, 177, 3,	/* 945 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 157, 0,	/* 157 (abs: 26607) */
/* 26453 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26509 */ HB_P_LINE, 179, 3,	/* 947 */
	HB_P_PUSHSYMNEAR, 46,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 26545 */ HB_P_LINE, 180, 3,	/* 948 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26607 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 26992) */
/* 26620 */ HB_P_LINE, 183, 3,	/* 951 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26682) */
/* 26640 */ HB_P_LINE, 184, 3,	/* 952 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26682 */ HB_P_LINE, 186, 3,	/* 954 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26744) */
/* 26702 */ HB_P_LINE, 187, 3,	/* 955 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26744 */ HB_P_LINE, 189, 3,	/* 957 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26806) */
/* 26764 */ HB_P_LINE, 190, 3,	/* 958 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26806 */ HB_P_LINE, 192, 3,	/* 960 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26868) */
/* 26826 */ HB_P_LINE, 193, 3,	/* 961 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26868 */ HB_P_LINE, 195, 3,	/* 963 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26930) */
/* 26888 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26930 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 26992) */
/* 26950 */ HB_P_LINE, 199, 3,	/* 967 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26992 */ HB_P_LINE, 202, 3,	/* 970 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* CON_CL */
/* 27000 */ HB_P_LINE, 203, 3,	/* 971 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27102 */ HB_P_LINE, 204, 3,	/* 972 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27127 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 72,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 27150) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 27269) */
/* 27152 */ HB_P_LINE, 206, 3,	/* 974 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27191 */ HB_P_LINE, 207, 3,	/* 975 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27230 */ HB_P_LINE, 208, 3,	/* 976 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27269 */ HB_P_LINE, 210, 3,	/* 978 */
	HB_P_PUSHLOCALNEAR, 74,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 0,	/* 192 (abs: 27471) */
/* 27282 */ HB_P_LINE, 211, 3,	/* 979 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLHIST */
/* 27290 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27362 */ HB_P_LINE, 213, 3,	/* 981 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27387 */ HB_P_LINE, 214, 3,	/* 982 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 27471) */
/* 27401 */ HB_P_LINE, 215, 3,	/* 983 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 90, 0,	/* L */
/* 27408 */ HB_P_LINE, 216, 3,	/* 984 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 27471) */
/* 27428 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 27459 */ HB_P_LINE, 218, 3,	/* 986 */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 27415) */
/* 27471 */ HB_P_LINE, 221, 3,	/* 989 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 85,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 27494) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 27707) */
/* 27497 */ HB_P_LINE, 222, 3,	/* 990 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 87,	/* CON_CLAUX */
/* 27505 */ HB_P_LINE, 223, 3,	/* 991 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27582 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27607 */ HB_P_LINE, 225, 3,	/* 993 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 27707) */
/* 27621 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27664 */ HB_P_LINE, 227, 3,	/* 995 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27707 */ HB_P_LINE, 230, 3,	/* 998 */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_JUMP, 159, 238,	/* -4449 (abs: 23268) */
/* 27720 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 243, 1,	/* 499 (abs: 28229) */
/* 27733 */ HB_P_LINE, 232, 3,	/* 1000 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 78,	/* ARET */
/* 27741 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'o', 'b', 's', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 78, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27820 */ HB_P_LINE, 234, 3,	/* 1002 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27845 */ HB_P_LINE, 235, 3,	/* 1003 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 27868) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 27908) */
/* 27870 */ HB_P_LINE, 236, 3,	/* 1004 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 78,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27908 */ HB_P_LINE, 238, 3,	/* 1006 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 27988) */
/* 27920 */ HB_P_LINE, 239, 3,	/* 1007 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 27954 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 27988 */ HB_P_LINE, 242, 3,	/* 1010 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28022 */ HB_P_LINE, 243, 3,	/* 1011 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28178 */ HB_P_LINE, 244, 3,	/* 1012 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28212 */ HB_P_LINE, 245, 3,	/* 1013 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 28229 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_JUMP, 43, 232,	/* -6101 (abs: 22138) */
/* 28242 */ HB_P_LINE, 248, 3,	/* 1016 */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 28286) */
/* 28255 */ HB_P_LINE, 249, 3,	/* 1017 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28263 */ HB_P_LINE, 250, 3,	/* 1018 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 28270 */ HB_P_LINE, 251, 3,	/* 1019 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 28286 */ HB_P_LINE, 253, 3,	/* 1021 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 68, 1,	/* 324 (abs: 28620) */
/* 28299 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 28379) */
/* 28311 */ HB_P_LINE, 255, 3,	/* 1023 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28345 */ HB_P_LINE, 0, 4,	/* 1024 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28379 */ HB_P_LINE, 2, 4,	/* 1026 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28413 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28569 */ HB_P_LINE, 4, 4,	/* 1028 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28603 */ HB_P_LINE, 5, 4,	/* 1029 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 28620 */ HB_P_LINE, 7, 4,	/* 1031 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 28635 */ HB_P_LINE, 8, 4,	/* 1032 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 28680 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28883 */ HB_P_LINE, 10, 4,	/* 1034 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29000 */ HB_P_LINE, 11, 4,	/* 1035 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29152 */ HB_P_LINE, 12, 4,	/* 1036 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29231 */ HB_P_LINE, 13, 4,	/* 1037 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29355 */ HB_P_LINE, 14, 4,	/* 1038 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 29382 */ HB_P_LINE, 15, 4,	/* 1039 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 29390 */ HB_P_LINE, 16, 4,	/* 1040 */
	HB_P_PUSHSYMNEAR, 94,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 116, 47,	/* 12148 (abs: 41548) */
/* 29403 */ HB_P_LINE, 17, 4,	/* 1041 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 43, 32,	/* 8235 (abs: 37648) */
/* 29416 */ HB_P_LINE, 18, 4,	/* 1042 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 29423 */ HB_P_LINE, 19, 4,	/* 1043 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 29475) */
/* 29435 */ HB_P_LINE, 20, 4,	/* 1044 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 29562) */
/* 29475 */ HB_P_LINE, 21, 4,	/* 1045 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 29525) */
/* 29487 */ HB_P_LINE, 22, 4,	/* 1046 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 29562) */
/* 29525 */ HB_P_LINE, 24, 4,	/* 1048 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 29562 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_PUSHSYMNEAR, 55,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 29629 */ HB_P_LINE, 28, 4,	/* 1052 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 29638 */ HB_P_LINE, 29, 4,	/* 1053 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 1,	/* 400 (abs: 30048) */
/* 29651 */ HB_P_LINE, 30, 4,	/* 1054 */
	HB_P_LOCALNEARSETSTR, 79, 131, 1,	/* CCOMM 387*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'f', 'o', 'r', 'n', 'e', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'o', 'm', 'e', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'a', 'l', 'o', 'r', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'n', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'o', 'b', 's', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '1', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '2', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '3', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '4', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '5', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ',', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_JUMP, 144, 1,	/* 400 (abs: 30445) */
/* 30048 */ HB_P_LINE, 32, 4,	/* 1056 */
	HB_P_LOCALNEARSETSTR, 79, 134, 1,	/* CCOMM 390*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'f', 'o', 'r', 'n', 'e', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'a', 'l', 'o', 'r', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'n', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'o', 'b', 's', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '1', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '2', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '3', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '4', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '5', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ',', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
/* 30445 */ HB_P_LINE, 34, 4,	/* 1058 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30549 */ HB_P_LINE, 35, 4,	/* 1059 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 30601) */
/* 30561 */ HB_P_LINE, 36, 4,	/* 1060 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30601 */ HB_P_LINE, 38, 4,	/* 1062 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 51,	/* 51 (abs: 30663) */
/* 30614 */ HB_P_LINE, 39, 4,	/* 1063 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30663 */ HB_P_LINE, 41, 4,	/* 1065 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 30713) */
/* 30675 */ HB_P_LINE, 42, 4,	/* 1066 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30713 */ HB_P_LINE, 44, 4,	/* 1068 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 30765) */
/* 30725 */ HB_P_LINE, 45, 4,	/* 1069 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30765 */ HB_P_LINE, 47, 4,	/* 1071 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 30824) */
/* 30777 */ HB_P_LINE, 48, 4,	/* 1072 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'r', 'a', 'z', 'a', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30824 */ HB_P_LINE, 50, 4,	/* 1074 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 30877) */
/* 30836 */ HB_P_LINE, 51, 4,	/* 1075 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30877 */ HB_P_LINE, 53, 4,	/* 1077 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 30934) */
/* 30889 */ HB_P_LINE, 54, 4,	/* 1078 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30934 */ HB_P_LINE, 56, 4,	/* 1080 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 30998) */
/* 30947 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 30998 */ HB_P_LINE, 59, 4,	/* 1083 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 31049) */
/* 31010 */ HB_P_LINE, 60, 4,	/* 1084 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31049 */ HB_P_LINE, 62, 4,	/* 1086 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31102) */
/* 31061 */ HB_P_LINE, 63, 4,	/* 1087 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31102 */ HB_P_LINE, 65, 4,	/* 1089 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 31156) */
/* 31114 */ HB_P_LINE, 66, 4,	/* 1090 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31156 */ HB_P_LINE, 68, 4,	/* 1092 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31209) */
/* 31168 */ HB_P_LINE, 69, 4,	/* 1093 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31209 */ HB_P_LINE, 71, 4,	/* 1095 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 31271) */
/* 31221 */ HB_P_LINE, 72, 4,	/* 1096 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31271 */ HB_P_LINE, 74, 4,	/* 1098 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31325) */
/* 31284 */ HB_P_LINE, 75, 4,	/* 1099 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31325 */ HB_P_LINE, 77, 4,	/* 1101 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 31382) */
/* 31337 */ HB_P_LINE, 78, 4,	/* 1102 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 31489) */
/* 31382 */ HB_P_LINE, 79, 4,	/* 1103 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 31435) */
/* 31394 */ HB_P_LINE, 80, 4,	/* 1104 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 56,	/* 56 (abs: 31489) */
/* 31435 */ HB_P_LINE, 81, 4,	/* 1105 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 31489) */
/* 31447 */ HB_P_LINE, 82, 4,	/* 1106 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31489 */ HB_P_LINE, 84, 4,	/* 1108 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 31535) */
/* 31501 */ HB_P_LINE, 85, 4,	/* 1109 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 31633) */
/* 31535 */ HB_P_LINE, 86, 4,	/* 1110 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 31589) */
/* 31547 */ HB_P_LINE, 87, 4,	/* 1111 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 31633) */
/* 31589 */ HB_P_LINE, 88, 4,	/* 1112 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 31633) */
/* 31601 */ HB_P_LINE, 89, 4,	/* 1113 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'n', 'o', 'm', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 31633 */ HB_P_LINE, 92, 4,	/* 1116 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 31654 */ HB_P_LINE, 93, 4,	/* 1117 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 31679 */ HB_P_LINE, 94, 4,	/* 1118 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 31736) */
/* 31694 */ HB_P_LINE, 95, 4,	/* 1119 */
	HB_P_PUSHSYMNEAR, 61,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 229, 141,	/* -29211 (abs: 02522) */
/* 31736 */ HB_P_LINE, 98, 4,	/* 1122 */
	HB_P_PUSHSYMNEAR, 62,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 31775) */
	HB_P_JUMP, 190, 141,	/* -29250 (abs: 02522) */
/* 31775 */ HB_P_LINE, 103, 4,	/* 1127 */
	HB_P_LOCALNEARSETINT, 84, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 31832 */ HB_P_LINE, 117, 4,	/* 1141 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 31845 */ HB_P_LINE, 118, 4,	/* 1142 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 31864 */ HB_P_LINE, 119, 4,	/* 1143 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 31877 */ HB_P_LINE, 120, 4,	/* 1144 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 31890 */ HB_P_LINE, 121, 4,	/* 1145 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 31899 */ HB_P_LINE, 122, 4,	/* 1146 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 143, 12,	/* 3215 (abs: 35133) */
/* 31921 */ HB_P_LINE, 123, 4,	/* 1147 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 31960 */ HB_P_LINE, 125, 4,	/* 1149 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 31979) */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 144, 1,	/* 400 (abs: 32379) */
/* 31982 */ HB_P_LINE, 126, 4,	/* 1150 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 32000) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 32011) */
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 112, 1,	/* 368 (abs: 32379) */
/* 32014 */ HB_P_LINE, 127, 4,	/* 1151 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 32021 */ HB_P_LINE, 128, 4,	/* 1152 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 32038) */
/* 32030 */ HB_P_LINE, 129, 4,	/* 1153 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 32038 */ HB_P_LINE, 131, 4,	/* 1155 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 32054 */ HB_P_LINE, 132, 4,	/* 1156 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 32069 */ HB_P_LINE, 133, 4,	/* 1157 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 32187) */
/* 32078 */ HB_P_LINE, 134, 4,	/* 1158 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32134 */ HB_P_LINE, 135, 4,	/* 1159 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32187 */ HB_P_LINE, 137, 4,	/* 1161 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 134,	/* 134 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 32345 */ HB_P_LINE, 138, 4,	/* 1162 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 32379 */ HB_P_LINE, 142, 4,	/* 1166 */
	HB_P_PUSHLOCALNEAR, 32,	/* MCOD_AUX */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 128, 1,	/* 384 (abs: 32779) */
/* 32398 */ HB_P_LINE, 143, 4,	/* 1167 */
	HB_P_LOCALNEARSETSTR, 47, 1, 0,	/* MCAB 1*/
	0, 
/* 32406 */ HB_P_LINE, 144, 4,	/* 1168 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 32421 */ HB_P_LINE, 145, 4,	/* 1169 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 32455 */ HB_P_LINE, 146, 4,	/* 1170 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32716 */ HB_P_LINE, 147, 4,	/* 1171 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 32750 */ HB_P_LINE, 148, 4,	/* 1172 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 32779 */ HB_P_LINE, 150, 4,	/* 1174 */
	HB_P_PUSHLOCALNEAR, 46,	/* MEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 159, 1,	/* 415 (abs: 33204) */
/* 32792 */ HB_P_LINE, 151, 4,	/* 1175 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 68, 1,	/* 324 (abs: 33126) */
/* 32805 */ HB_P_LINE, 152, 4,	/* 1176 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32880 */ HB_P_LINE, 153, 4,	/* 1177 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 95,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'T', 'e', 'l', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33058 */ HB_P_LINE, 154, 4,	/* 1178 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33089 */ HB_P_LINE, 155, 4,	/* 1179 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 33192) */
/* 33126 */ HB_P_LINE, 157, 4,	/* 1181 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33157 */ HB_P_LINE, 158, 4,	/* 1182 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33192 */ HB_P_LINE, 160, 4,	/* 1184 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
	HB_P_JUMP, 226, 0,	/* 226 (abs: 33427) */
/* 33204 */ HB_P_LINE, 162, 4,	/* 1186 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 33352) */
/* 33217 */ HB_P_LINE, 163, 4,	/* 1187 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33254 */ HB_P_LINE, 164, 4,	/* 1188 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 33309) */
/* 33266 */ HB_P_LINE, 165, 4,	/* 1189 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 111,	/* 111 (abs: 33418) */
/* 33309 */ HB_P_LINE, 167, 4,	/* 1191 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 33418) */
/* 33352 */ HB_P_LINE, 170, 4,	/* 1194 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33383 */ HB_P_LINE, 171, 4,	/* 1195 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33418 */ HB_P_LINE, 173, 4,	/* 1197 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
/* 33427 */ HB_P_LINE, 177, 4,	/* 1201 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33465 */ HB_P_LINE, 178, 4,	/* 1202 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33524 */ HB_P_LINE, 179, 4,	/* 1203 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 33577) */
/* 33544 */ HB_P_LINE, 180, 4,	/* 1204 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 33661) */
/* 33577 */ HB_P_LINE, 181, 4,	/* 1205 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 33630) */
/* 33597 */ HB_P_LINE, 182, 4,	/* 1206 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 33661) */
/* 33630 */ HB_P_LINE, 184, 4,	/* 1208 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33661 */ HB_P_LINE, 186, 4,	/* 1210 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33704 */ HB_P_LINE, 187, 4,	/* 1211 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33747 */ HB_P_LINE, 188, 4,	/* 1212 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33809 */ HB_P_LINE, 189, 4,	/* 1213 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33863 */ HB_P_LINE, 190, 4,	/* 1214 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 33881 */ HB_P_LINE, 191, 4,	/* 1215 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 33888 */ HB_P_LINE, 192, 4,	/* 1216 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 33895 */ HB_P_LINE, 193, 4,	/* 1217 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 33909 */ HB_P_LINE, 194, 4,	/* 1218 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 33928 */ HB_P_LINE, 195, 4,	/* 1219 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 33950 */ HB_P_LINE, 196, 4,	/* 1220 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 33979) */
/* 33959 */ HB_P_LINE, 197, 4,	/* 1221 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 33979 */ HB_P_LINE, 199, 4,	/* 1223 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 34159) */
/* 33989 */ HB_P_LINE, 200, 4,	/* 1224 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 34016 */ HB_P_LINE, 201, 4,	/* 1225 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 34049 */ HB_P_LINE, 202, 4,	/* 1226 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 34067 */ HB_P_LINE, 203, 4,	/* 1227 */
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 84,	/* MTOT_VENC */
/* 34085 */ HB_P_LINE, 204, 4,	/* 1228 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 34092 */ HB_P_LINE, 205, 4,	/* 1229 */
	HB_P_LOCALNEARADDINT, 82, 1, 0,	/* MDOC_VENC 1*/
/* 34099 */ HB_P_LINE, 206, 4,	/* 1230 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 34106 */ HB_P_LINE, 207, 4,	/* 1231 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 34128 */ HB_P_LINE, 208, 4,	/* 1232 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 34209) */
/* 34137 */ HB_P_LINE, 209, 4,	/* 1233 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 52,	/* 52 (abs: 34209) */
/* 34159 */ HB_P_LINE, 212, 4,	/* 1236 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 34177 */ HB_P_LINE, 213, 4,	/* 1237 */
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENCER */
/* 34195 */ HB_P_LINE, 214, 4,	/* 1238 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 34202 */ HB_P_LINE, 215, 4,	/* 1239 */
	HB_P_LOCALNEARADDINT, 81, 1, 0,	/* MDOC_VENCER 1*/
/* 34209 */ HB_P_LINE, 217, 4,	/* 1241 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 34222 */ HB_P_LINE, 218, 4,	/* 1242 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 34235 */ HB_P_LINE, 219, 4,	/* 1243 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 34259 */ HB_P_LINE, 220, 4,	/* 1244 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 34277 */ HB_P_LINE, 221, 4,	/* 1245 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34327 */ HB_P_LINE, 222, 4,	/* 1246 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 34384 */ HB_P_LINE, 223, 4,	/* 1247 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 34420 */ HB_P_LINE, 225, 4,	/* 1249 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 34473) */
/* 34440 */ HB_P_LINE, 226, 4,	/* 1250 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 34504) */
/* 34473 */ HB_P_LINE, 228, 4,	/* 1252 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 34504 */ HB_P_LINE, 230, 4,	/* 1254 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 34560) */
/* 34524 */ HB_P_LINE, 231, 4,	/* 1255 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 34560 */ HB_P_LINE, 233, 4,	/* 1257 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 157, 0,	/* 157 (abs: 34735) */
/* 34581 */ HB_P_LINE, 234, 4,	/* 1258 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34637 */ HB_P_LINE, 235, 4,	/* 1259 */
	HB_P_PUSHSYMNEAR, 46,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 34673 */ HB_P_LINE, 236, 4,	/* 1260 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 81,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34735 */ HB_P_LINE, 238, 4,	/* 1262 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 35120) */
/* 34748 */ HB_P_LINE, 239, 4,	/* 1263 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 34810) */
/* 34768 */ HB_P_LINE, 240, 4,	/* 1264 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34810 */ HB_P_LINE, 242, 4,	/* 1266 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 34872) */
/* 34830 */ HB_P_LINE, 243, 4,	/* 1267 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34872 */ HB_P_LINE, 245, 4,	/* 1269 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 34934) */
/* 34892 */ HB_P_LINE, 246, 4,	/* 1270 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34934 */ HB_P_LINE, 248, 4,	/* 1272 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 34996) */
/* 34954 */ HB_P_LINE, 249, 4,	/* 1273 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34996 */ HB_P_LINE, 251, 4,	/* 1275 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35058) */
/* 35016 */ HB_P_LINE, 252, 4,	/* 1276 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35058 */ HB_P_LINE, 254, 4,	/* 1278 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35120) */
/* 35078 */ HB_P_LINE, 255, 4,	/* 1279 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35120 */ HB_P_LINE, 2, 5,	/* 1282 */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_JUMP, 104, 243,	/* -3224 (abs: 31906) */
/* 35133 */ HB_P_LINE, 3, 5,	/* 1283 */
	HB_P_PUSHLOCALNEAR, 72,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 28, 1,	/* 284 (abs: 35427) */
/* 35146 */ HB_P_LINE, 4, 5,	/* 1284 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* CON_CL */
/* 35154 */ HB_P_LINE, 5, 5,	/* 1285 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 35254 */ HB_P_LINE, 6, 5,	/* 1286 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35279 */ HB_P_LINE, 7, 5,	/* 1287 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 35308) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 35427) */
/* 35310 */ HB_P_LINE, 8, 5,	/* 1288 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35349 */ HB_P_LINE, 9, 5,	/* 1289 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35388 */ HB_P_LINE, 10, 5,	/* 1290 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35427 */ HB_P_LINE, 13, 5,	/* 1293 */
	HB_P_PUSHLOCALNEAR, 74,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 194, 0,	/* 194 (abs: 35631) */
/* 35440 */ HB_P_LINE, 14, 5,	/* 1294 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLHIST */
/* 35448 */ HB_P_LINE, 15, 5,	/* 1295 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 35522 */ HB_P_LINE, 16, 5,	/* 1296 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35547 */ HB_P_LINE, 17, 5,	/* 1297 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 35631) */
/* 35561 */ HB_P_LINE, 18, 5,	/* 1298 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 90, 0,	/* L */
/* 35568 */ HB_P_LINE, 19, 5,	/* 1299 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 35631) */
/* 35588 */ HB_P_LINE, 20, 5,	/* 1300 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 35619 */ HB_P_LINE, 21, 5,	/* 1301 */
	HB_P_PUSHVARIABLE, 90, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 90, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 35575) */
/* 35631 */ HB_P_LINE, 24, 5,	/* 1304 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 85,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 35654) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 35867) */
/* 35657 */ HB_P_LINE, 25, 5,	/* 1305 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 87,	/* CON_CLAUX */
/* 35665 */ HB_P_LINE, 26, 5,	/* 1306 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 35742 */ HB_P_LINE, 27, 5,	/* 1307 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35767 */ HB_P_LINE, 28, 5,	/* 1308 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 35867) */
/* 35781 */ HB_P_LINE, 29, 5,	/* 1309 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35824 */ HB_P_LINE, 30, 5,	/* 1310 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35867 */ HB_P_LINE, 33, 5,	/* 1313 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 237, 1,	/* 493 (abs: 36370) */
/* 35880 */ HB_P_LINE, 34, 5,	/* 1314 */
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 35932) */
/* 35892 */ HB_P_LINE, 35, 5,	/* 1315 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35932 */ HB_P_LINE, 37, 5,	/* 1317 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 36012) */
/* 35944 */ HB_P_LINE, 38, 5,	/* 1318 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 35978 */ HB_P_LINE, 39, 5,	/* 1319 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36012 */ HB_P_LINE, 41, 5,	/* 1321 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36046 */ HB_P_LINE, 42, 5,	/* 1322 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36307 */ HB_P_LINE, 43, 5,	/* 1323 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36341 */ HB_P_LINE, 44, 5,	/* 1324 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 36370 */ HB_P_LINE, 47, 5,	/* 1327 */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 36414) */
/* 36383 */ HB_P_LINE, 48, 5,	/* 1328 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 36391 */ HB_P_LINE, 49, 5,	/* 1329 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 36398 */ HB_P_LINE, 50, 5,	/* 1330 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 36414 */ HB_P_LINE, 52, 5,	/* 1332 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 185, 1,	/* 441 (abs: 36865) */
/* 36427 */ HB_P_LINE, 53, 5,	/* 1333 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 36507) */
/* 36439 */ HB_P_LINE, 54, 5,	/* 1334 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36473 */ HB_P_LINE, 55, 5,	/* 1335 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36507 */ HB_P_LINE, 57, 5,	/* 1337 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36541 */ HB_P_LINE, 58, 5,	/* 1338 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36802 */ HB_P_LINE, 59, 5,	/* 1339 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36836 */ HB_P_LINE, 60, 5,	/* 1340 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 84,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 36865 */ HB_P_LINE, 62, 5,	/* 1342 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 36880 */ HB_P_LINE, 63, 5,	/* 1343 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 36925 */ HB_P_LINE, 64, 5,	/* 1344 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37128 */ HB_P_LINE, 65, 5,	/* 1345 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37245 */ HB_P_LINE, 66, 5,	/* 1346 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37397 */ HB_P_LINE, 67, 5,	/* 1347 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37476 */ HB_P_LINE, 68, 5,	/* 1348 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37600 */ HB_P_LINE, 69, 5,	/* 1349 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 37627 */ HB_P_LINE, 70, 5,	/* 1350 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 37635 */ HB_P_LINE, 71, 5,	/* 1351 */
	HB_P_PUSHSYMNEAR, 94,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 63, 15,	/* 3903 (abs: 41548) */
/* 37648 */ HB_P_LINE, 72, 5,	/* 1352 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 50, 15,	/* 3890 (abs: 41548) */
/* 37661 */ HB_P_LINE, 73, 5,	/* 1353 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 37668 */ HB_P_LINE, 74, 5,	/* 1354 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 37720) */
/* 37680 */ HB_P_LINE, 75, 5,	/* 1355 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 37807) */
/* 37720 */ HB_P_LINE, 76, 5,	/* 1356 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 37770) */
/* 37732 */ HB_P_LINE, 77, 5,	/* 1357 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 37807) */
/* 37770 */ HB_P_LINE, 79, 5,	/* 1359 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 37807 */ HB_P_LINE, 81, 5,	/* 1361 */
	HB_P_PUSHSYMNEAR, 55,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 37874 */ HB_P_LINE, 83, 5,	/* 1363 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* CONS_CLI */
/* 37882 */ HB_P_LINE, 84, 5,	/* 1364 */
	HB_P_LOCALNEARSETSTR, 79, 47, 0,	/* CCOMM 47*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 37936 */ HB_P_LINE, 85, 5,	/* 1365 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 37981) */
/* 37948 */ HB_P_LINE, 86, 5,	/* 1366 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 37981 */ HB_P_LINE, 88, 5,	/* 1368 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 38036) */
/* 37994 */ HB_P_LINE, 89, 5,	/* 1369 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38036 */ HB_P_LINE, 91, 5,	/* 1371 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 38079) */
/* 38048 */ HB_P_LINE, 92, 5,	/* 1372 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38079 */ HB_P_LINE, 94, 5,	/* 1374 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 38124) */
/* 38091 */ HB_P_LINE, 95, 5,	/* 1375 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38124 */ HB_P_LINE, 97, 5,	/* 1377 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 38176) */
/* 38136 */ HB_P_LINE, 98, 5,	/* 1378 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38176 */ HB_P_LINE, 100, 5,	/* 1380 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 38218) */
/* 38188 */ HB_P_LINE, 101, 5,	/* 1381 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 38299) */
/* 38218 */ HB_P_LINE, 102, 5,	/* 1382 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 38266) */
/* 38230 */ HB_P_LINE, 103, 5,	/* 1383 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 38299) */
/* 38266 */ HB_P_LINE, 105, 5,	/* 1385 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38299 */ HB_P_LINE, 107, 5,	/* 1387 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 38319 */ HB_P_LINE, 108, 5,	/* 1388 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38344 */ HB_P_LINE, 109, 5,	/* 1389 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 38401) */
/* 38358 */ HB_P_LINE, 110, 5,	/* 1390 */
	HB_P_PUSHSYMNEAR, 61,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPFAR, 221, 115, 255,	/* -35875 (abs: 00002522) */
/* 38401 */ HB_P_LINE, 113, 5,	/* 1393 */
	HB_P_PUSHSYMNEAR, 62,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 6,	/* 6 (abs: 38441) */
	HB_P_JUMPFAR, 181, 115, 255,	/* -35915 (abs: 00002522) */
/* 38441 */ HB_P_LINE, 117, 5,	/* 1397 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 38484 */ HB_P_LINE, 118, 5,	/* 1398 */
	HB_P_LOCALNEARSETINT, 65, 1, 0,	/* CONT_CLI 1*/
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 175, 8,	/* 2223 (abs: 40724) */
/* 38504 */ HB_P_LINE, 119, 5,	/* 1399 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 38539 */ HB_P_LINE, 120, 5,	/* 1400 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 38548 */ HB_P_LINE, 121, 5,	/* 1401 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 38659) */
/* 38557 */ HB_P_LINE, 122, 5,	/* 1402 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 38759) */
/* 38659 */ HB_P_LINE, 124, 5,	/* 1404 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38759 */ HB_P_LINE, 126, 5,	/* 1406 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38798 */ HB_P_LINE, 127, 5,	/* 1407 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 38843) */
/* 38810 */ HB_P_LINE, 128, 5,	/* 1408 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38843 */ HB_P_LINE, 130, 5,	/* 1410 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 38892) */
/* 38855 */ HB_P_LINE, 131, 5,	/* 1411 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38892 */ HB_P_LINE, 133, 5,	/* 1413 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 38948) */
/* 38905 */ HB_P_LINE, 134, 5,	/* 1414 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38948 */ HB_P_LINE, 136, 5,	/* 1416 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 38991) */
/* 38960 */ HB_P_LINE, 137, 5,	/* 1417 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 38991 */ HB_P_LINE, 139, 5,	/* 1419 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39036) */
/* 39003 */ HB_P_LINE, 140, 5,	/* 1420 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39036 */ HB_P_LINE, 142, 5,	/* 1422 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 39082) */
/* 39048 */ HB_P_LINE, 143, 5,	/* 1423 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39082 */ HB_P_LINE, 145, 5,	/* 1425 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39127) */
/* 39094 */ HB_P_LINE, 146, 5,	/* 1426 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39127 */ HB_P_LINE, 148, 5,	/* 1428 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 39181) */
/* 39139 */ HB_P_LINE, 149, 5,	/* 1429 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39181 */ HB_P_LINE, 151, 5,	/* 1431 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39227) */
/* 39194 */ HB_P_LINE, 152, 5,	/* 1432 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39227 */ HB_P_LINE, 154, 5,	/* 1434 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 39276) */
/* 39239 */ HB_P_LINE, 155, 5,	/* 1435 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 39367) */
/* 39276 */ HB_P_LINE, 156, 5,	/* 1436 */
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 39321) */
/* 39288 */ HB_P_LINE, 157, 5,	/* 1437 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 39367) */
/* 39321 */ HB_P_LINE, 158, 5,	/* 1438 */
	HB_P_PUSHSYMNEAR, 42,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 39367) */
/* 39333 */ HB_P_LINE, 159, 5,	/* 1439 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39367 */ HB_P_LINE, 162, 5,	/* 1442 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 39428) */
/* 39379 */ HB_P_LINE, 163, 5,	/* 1443 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 't', 'i', 'p', 'o', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 39476) */
/* 39428 */ HB_P_LINE, 165, 5,	/* 1445 */
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 't', 'i', 'p', 'o', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 79,	/* CCOMM */
/* 39476 */ HB_P_LINE, 167, 5,	/* 1447 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 79,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 39497 */ HB_P_LINE, 168, 5,	/* 1448 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39522 */ HB_P_LINE, 169, 5,	/* 1449 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 39540) */
	HB_P_JUMP, 156, 4,	/* 1180 (abs: 40717) */
/* 39540 */ HB_P_LINE, 173, 5,	/* 1453 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 39553 */ HB_P_LINE, 174, 5,	/* 1454 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 39572 */ HB_P_LINE, 175, 5,	/* 1455 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 39585 */ HB_P_LINE, 176, 5,	/* 1456 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 39598 */ HB_P_LINE, 177, 5,	/* 1457 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 39607 */ HB_P_LINE, 178, 5,	/* 1458 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 135, 1,	/* 391 (abs: 40017) */
/* 39629 */ HB_P_LINE, 179, 5,	/* 1459 */
	HB_P_PUSHSYMNEAR, 70,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_DOSHORT, 1,
/* 39640 */ HB_P_LINE, 180, 5,	/* 1460 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 39658 */ HB_P_LINE, 181, 5,	/* 1461 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 39665 */ HB_P_LINE, 182, 5,	/* 1462 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 39672 */ HB_P_LINE, 183, 5,	/* 1463 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 39686 */ HB_P_LINE, 184, 5,	/* 1464 */
	HB_P_PUSHMEMVAR, 32, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 39705 */ HB_P_LINE, 185, 5,	/* 1465 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 39727 */ HB_P_LINE, 186, 5,	/* 1466 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 39756) */
/* 39736 */ HB_P_LINE, 187, 5,	/* 1467 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 39756 */ HB_P_LINE, 189, 5,	/* 1469 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 39911) */
/* 39766 */ HB_P_LINE, 190, 5,	/* 1470 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 39793 */ HB_P_LINE, 191, 5,	/* 1471 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 71, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 39826 */ HB_P_LINE, 192, 5,	/* 1472 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 39844 */ HB_P_LINE, 193, 5,	/* 1473 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 39851 */ HB_P_LINE, 194, 5,	/* 1474 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 39858 */ HB_P_LINE, 195, 5,	/* 1475 */
	HB_P_PUSHSYMNEAR, 88,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 39880 */ HB_P_LINE, 196, 5,	/* 1476 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 39936) */
/* 39889 */ HB_P_LINE, 197, 5,	/* 1477 */
	HB_P_PUSHSYMNEAR, 35,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 39936) */
/* 39911 */ HB_P_LINE, 200, 5,	/* 1480 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 39929 */ HB_P_LINE, 201, 5,	/* 1481 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 39936 */ HB_P_LINE, 203, 5,	/* 1483 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 39949 */ HB_P_LINE, 204, 5,	/* 1484 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 39962 */ HB_P_LINE, 205, 5,	/* 1485 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 39986 */ HB_P_LINE, 206, 5,	/* 1486 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 40004 */ HB_P_LINE, 207, 5,	/* 1487 */
	HB_P_PUSHVARIABLE, 69, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* I */
	HB_P_JUMP, 112, 254,	/* -400 (abs: 39614) */
/* 40017 */ HB_P_LINE, 208, 5,	/* 1488 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 40036) */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 103, 1,	/* 359 (abs: 40395) */
/* 40039 */ HB_P_LINE, 209, 5,	/* 1489 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 40057) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 40068) */
	HB_P_PUSHLOCALNEAR, 77,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 71, 1,	/* 327 (abs: 40395) */
/* 40071 */ HB_P_LINE, 210, 5,	/* 1490 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 40078 */ HB_P_LINE, 211, 5,	/* 1491 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 40095) */
/* 40087 */ HB_P_LINE, 212, 5,	/* 1492 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 40095 */ HB_P_LINE, 214, 5,	/* 1494 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 40111 */ HB_P_LINE, 215, 5,	/* 1495 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 40126 */ HB_P_LINE, 216, 5,	/* 1496 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 40244) */
/* 40135 */ HB_P_LINE, 217, 5,	/* 1497 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40191 */ HB_P_LINE, 218, 5,	/* 1498 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40244 */ HB_P_LINE, 220, 5,	/* 1500 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'Q', 't', 'd', '.', 'D', 'o', 'c', '.', ' ', ' ', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ' ', 'J', 'u', 'r', 'o', 's', '/', 'M', 'u', 'l', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 40361 */ HB_P_LINE, 221, 5,	/* 1501 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 40395 */ HB_P_LINE, 225, 5,	/* 1505 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 0,	/* 149 (abs: 40554) */
/* 40408 */ HB_P_LINE, 226, 5,	/* 1506 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 146, 0,	/* 146 (abs: 40697) */
/* 40554 */ HB_P_LINE, 228, 5,	/* 1508 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40697 */ HB_P_LINE, 230, 5,	/* 1510 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 40714 */ HB_P_LINE, 231, 5,	/* 1511 */
	HB_P_LOCALNEARADDINT, 65, 1, 0,	/* CONT_CLI 1*/
	HB_P_JUMP, 74, 247,	/* -2230 (abs: 38491) */
/* 40724 */ HB_P_LINE, 232, 5,	/* 1512 */
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 40768) */
/* 40737 */ HB_P_LINE, 233, 5,	/* 1513 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 40745 */ HB_P_LINE, 234, 5,	/* 1514 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 40752 */ HB_P_LINE, 235, 5,	/* 1515 */
	HB_P_PUSHSYMNEAR, 78,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 40768 */ HB_P_LINE, 237, 5,	/* 1517 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 40783 */ HB_P_LINE, 238, 5,	/* 1518 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 40828 */ HB_P_LINE, 239, 5,	/* 1519 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41031 */ HB_P_LINE, 240, 5,	/* 1520 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41148 */ HB_P_LINE, 241, 5,	/* 1521 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41300 */ HB_P_LINE, 242, 5,	/* 1522 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41379 */ HB_P_LINE, 243, 5,	/* 1523 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41503 */ HB_P_LINE, 244, 5,	/* 1524 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 41530 */ HB_P_LINE, 245, 5,	/* 1525 */
	HB_P_PUSHSYMNEAR, 77,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 41538 */ HB_P_LINE, 246, 5,	/* 1526 */
	HB_P_PUSHSYMNEAR, 94,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 41548 */ HB_P_LINE, 248, 5,	/* 1528 */
	HB_P_PUSHSYMNEAR, 79,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', '6', 0, 
	HB_P_DOSHORT, 2,
/* 41564 */ HB_P_LINE, 249, 5,	/* 1529 */
	HB_P_PUSHSYMNEAR, 96,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 96,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 96,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 41606 */ HB_P_LINE, 250, 5,	/* 1530 */
	HB_P_PUSHSYMNEAR, 97,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 41630 */ HB_P_LINE, 253, 5,	/* 1533 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 41638 */ HB_P_LINE, 254, 5,	/* 1534 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 41644 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

