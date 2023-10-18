/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON424.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON424.PRG /q /oC:\HTI\SISMED\CON424.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:23 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON424.PRG"

HB_FUNC( CON424 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON424 )
{ "CON424", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON424 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "AREA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "Q_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON424 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON424
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON424 = hb_vm_SymbolInit_CON424;
   #pragma data_seg()
#endif

HB_FUNC( CON424 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 70, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '4', 0, 
	HB_P_LOCALNEARSETSTR, 37, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 39, 2, 0,	/* MLOC_PG 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 40,	/* MAREA */
	HB_P_LOCALNEARSETINT, 41, 0, 0,	/* MCOD_OPER 0*/
	HB_P_LOCALNEARSETINT, 42, 0, 0,	/* MJUROS_D 0*/
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MJUR_TOT 0*/
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MTIP_JURO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 45, 2, 0,	/* MEMI_VENC 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MDOC_DESC 2*/
	'N', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
	HB_P_LOCALNEARSETINT, 48, 0, 0,	/* MT_PG 0*/
	HB_P_LOCALNEARSETINT, 49, 0, 0,	/* MT_DES 0*/
	HB_P_LOCALNEARSETINT, 50, 0, 0,	/* MT_JUR 0*/
	HB_P_LOCALNEARSETINT, 52, 0, 0,	/* MTOT_DOC 0*/
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_LOCALNEARSETINT, 54, 0, 0,	/* MQTD_DIAS 0*/
	HB_P_LOCALNEARSETINT, 55, 0, 0,	/* LCI 0*/
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* CCI 0*/
	HB_P_LOCALNEARSETINT, 57, 16, 0,	/* LBA 16*/
	HB_P_LOCALNEARSETINT, 58, 78, 0,	/* CBA 78*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 63,	/* VEMP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 64,	/* ARET */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* M_PARAM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 71,	/* CONS_DUPR */
/* 00143 */ HB_P_LINEOFFSET, 3,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MCPF */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 7,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 8,	/* MALI */
	HB_P_PUSHSYMNEAR, 9,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ */
	HB_P_PUSHSYMNEAR, 12,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 13,	/* MALIAS */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 11, 0,	/* MARQ */
	HB_P_POPVARIABLE, 10, 0,	/* MIMP_TIPO */
/* 00198 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_424 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 120,	/* 120 (abs: 00324) */
/* 00206 */ HB_P_LINEOFFSET, 6,	/* 20 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00285) */
/* 00280 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00285 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MALIAS */
/* 00297 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_LOCALNEARSETSTR, 51, 19, 0,	/* MTITULO 19*/
	'(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ')', 0, 
	HB_P_JUMPNEAR, 120,	/* 120 (abs: 00442) */
/* 00324 */ HB_P_LINEOFFSET, 12,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_424 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00406) */
/* 00401 */ HB_P_LINEOFFSET, 13,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00406 */ HB_P_LINEOFFSET, 15,	/* 29 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MALIAS */
/* 00418 */ HB_P_LINEOFFSET, 16,	/* 30 */
	HB_P_LOCALNEARSETSTR, 51, 18, 0,	/* MTITULO 18*/
	'(', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ')', 0, 
/* 00442 */ HB_P_LINEOFFSET, 19,	/* 33 */
	HB_P_PUSHSYMNEAR, 17,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00464 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00493) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00493 */ HB_P_LINEOFFSET, 21,	/* 35 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00522) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00522 */ HB_P_LINEOFFSET, 22,	/* 36 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00549) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00549 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 20,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'i', 'p', 'd', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'p', 'd', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00580) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00580 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 00589 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00628 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00664 */ HB_P_LINEOFFSET, 31,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00709 */ HB_P_LINEOFFSET, 32,	/* 46 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00754 */ HB_P_LINEOFFSET, 33,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00799 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00844 */ HB_P_LINEOFFSET, 35,	/* 49 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00889 */ HB_P_LINEOFFSET, 36,	/* 50 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00934 */ HB_P_LINEOFFSET, 37,	/* 51 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00979 */ HB_P_LINEOFFSET, 38,	/* 52 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'o', 'c', 'a', 'l', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01024 */ HB_P_LINEOFFSET, 39,	/* 53 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'r', 'e', 'a', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01069 */ HB_P_LINEOFFSET, 40,	/* 54 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01114 */ HB_P_LINEOFFSET, 41,	/* 55 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01159 */ HB_P_LINEOFFSET, 42,	/* 56 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', '.', 'c', '/', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 's', 'p', 'e', 'n', 's', 'a', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01222 */ HB_P_LINEOFFSET, 43,	/* 57 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', '.', 'c', '/', 'V', 'e', 'n', 'c', '.', ' ', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'I', 'g', 'u', 'a', 'l', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01285 */ HB_P_LINEOFFSET, 44,	/* 58 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01348 */ HB_P_LINEOFFSET, 45,	/* 59 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'c', '/', 'A', 't', 'r', 'a', 's', 'o', ' ', 'a', 'c', 'i', 'm', 'a', ' ', 'd', 'e', ' ', 'D', 'i', 'a', 's', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01411 */ HB_P_LINEOFFSET, 46,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01473 */ HB_P_LINEOFFSET, 47,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01535 */ HB_P_LINEOFFSET, 48,	/* 62 */
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MCOD_VEND 0*/
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 01546 */ HB_P_LINEOFFSET, 49,	/* 63 */
	HB_P_PUSHMEMVAR, 25, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 4,	/* T_INI */
/* 01553 */ HB_P_LINEOFFSET, 50,	/* 64 */
	HB_P_PUSHMEMVAR, 25, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 5,	/* T_FIM */
/* 01563 */ HB_P_LINEOFFSET, 51,	/* 65 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 35,	/* BANK */
/* 01573 */ HB_P_LINEOFFSET, 52,	/* 66 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_POPLOCALNEAR, 37,	/* MTIP_PG */
/* 01586 */ HB_P_LINEOFFSET, 53,	/* 67 */
	HB_P_LOCALNEARSETSTR, 39, 2, 0,	/* MLOC_PG 2*/
	' ', 0, 
/* 01594 */ HB_P_LINEOFFSET, 54,	/* 68 */
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MDOC_DESC 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_POPLOCALNEAR, 44,	/* MTIP_JURO */
/* 01609 */ HB_P_LINEOFFSET, 55,	/* 69 */
	HB_P_LOCALNEARSETSTR, 59, 2, 0,	/* MMOV_CX 2*/
	' ', 0, 
/* 01617 */ HB_P_LINEOFFSET, 56,	/* 70 */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MTIPO_SINT 2*/
	'N', 0, 
/* 01625 */ HB_P_LINEOFFSET, 57,	/* 71 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 01649) */
	HB_P_PUSHSYMNEAR, 27,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 3,
/* 01649 */ HB_P_LINEOFFSET, 58,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 27,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01742 */ HB_P_LINEOFFSET, 59,	/* 73 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01787) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01792) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01843 */ HB_P_LINEOFFSET, 60,	/* 74 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01888) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01893) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_INI */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01924) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01925) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01943 */ HB_P_LINEOFFSET, 61,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01988) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01993) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02024) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02025) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02043 */ HB_P_LINEOFFSET, 62,	/* 76 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02088) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02093) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02127 */ HB_P_LINEOFFSET, 63,	/* 77 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02172) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02177) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	38, 0,	/* MCOD_VEND */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 33,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02251 */ HB_P_LINEOFFSET, 64,	/* 78 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MLOC_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02296) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02301) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'o', 'c', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MLOC_PG */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'M', ',', 'C', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02355 */ HB_P_LINEOFFSET, 65,	/* 79 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02400) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02405) */
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
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02437 */ HB_P_LINEOFFSET, 66,	/* 80 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02482) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02487) */
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
	32, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 34,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02538 */ HB_P_LINEOFFSET, 67,	/* 81 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MCOD_OPER */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02583) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02588) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	41, 0,	/* MCOD_OPER */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 33,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02662 */ HB_P_LINEOFFSET, 68,	/* 82 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MTIP_JURO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02707) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02712) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', '_', 'j', 'u', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MTIP_JURO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02766 */ HB_P_LINEOFFSET, 69,	/* 83 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MEMI_VENC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02811) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02816) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'e', 'm', 'i', '_', 'v', 'e', 'n', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MEMI_VENC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02870 */ HB_P_LINEOFFSET, 70,	/* 84 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDOC_DESC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02915) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02920) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'o', 'c', '_', 'd', 'e', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDOC_DESC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02974 */ HB_P_LINEOFFSET, 71,	/* 85 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	54, 0,	/* MQTD_DIAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03019) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03024) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'q', 't', 'd', '_', 'd', 'i', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03061 */ HB_P_LINEOFFSET, 72,	/* 86 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MMOV_CX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03106) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03111) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'm', 'o', 'v', '_', 'c', 'x', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 56,	/* 56 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'C', ']', 'c', 'a', 'i', 'x', 'a', ' ', 'e', ' ', '[', 'M', ']', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03200 */ HB_P_LINEOFFSET, 73,	/* 87 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTIPO_SINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03245) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03250) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 's', 'i', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTIPO_SINT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'O', 'p', 'c', 'a', 'o', ' ', ':', ' ', '[', 'S', ']', 'i', 'm', ' ', 'o', 'u', ' ', '[', 'N', ']', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03341 */ HB_P_LINEOFFSET, 74,	/* 88 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 03363 */ HB_P_LINEOFFSET, 75,	/* 89 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03378) */
	HB_P_JUMP, 231, 36,	/* 9447 (abs: 12822) */
/* 03378 */ HB_P_LINEOFFSET, 78,	/* 92 */
	HB_P_LOCALNEARSETSTR, 8, 2, 0,	/* L_MES 2*/
	' ', 0, 
/* 03386 */ HB_P_LINEOFFSET, 79,	/* 93 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* TP_MES */
	HB_P_POPLOCALNEAR, 9,	/* TD_MES */
/* 03396 */ HB_P_LINEOFFSET, 80,	/* 94 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 03447) */
/* 03408 */ HB_P_LINEOFFSET, 81,	/* 95 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03435 */ HB_P_LINEOFFSET, 82,	/* 96 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'D', 'U', 0, 
	HB_P_JUMP, 129, 3,	/* 897 (abs: 04341) */
/* 03447 */ HB_P_LINEOFFSET, 83,	/* 97 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 03495) */
/* 03459 */ HB_P_LINEOFFSET, 84,	/* 98 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03483 */ HB_P_LINEOFFSET, 85,	/* 99 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'C', 'H', 0, 
	HB_P_JUMP, 81, 3,	/* 849 (abs: 04341) */
/* 03495 */ HB_P_LINEOFFSET, 86,	/* 100 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 135, 1,	/* 391 (abs: 03896) */
/* 03508 */ HB_P_LINEOFFSET, 87,	/* 101 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03532 */ HB_P_LINEOFFSET, 88,	/* 102 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'C', 'T', 0, 
/* 03541 */ HB_P_LINEOFFSET, 89,	/* 103 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
/* 03552 */ HB_P_LINEOFFSET, 90,	/* 104 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03583 */ HB_P_LINEOFFSET, 91,	/* 105 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03628 */ HB_P_LINEOFFSET, 92,	/* 106 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03666) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03671) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 38,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03721) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 70,	/* 70 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03808 */ HB_P_LINEOFFSET, 93,	/* 107 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 03830 */ HB_P_LINEOFFSET, 94,	/* 108 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03845) */
	HB_P_JUMP, 150, 243,	/* -3178 (abs: 00664) */
/* 03845 */ HB_P_LINEOFFSET, 97,	/* 111 */
	HB_P_PUSHSYMNEAR, 41,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 42, 0,	/* OPCAO */
/* 03880 */ HB_P_LINEOFFSET, 98,	/* 112 */
	HB_P_PUSHVARIABLE, 42, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 195, 1,	/* 451 (abs: 04341) */
	HB_P_JUMP, 99, 243,	/* -3229 (abs: 00664) */
/* 03896 */ HB_P_LINEOFFSET, 101,	/* 115 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 1,	/* 408 (abs: 04314) */
/* 03909 */ HB_P_LINEOFFSET, 102,	/* 116 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'F', 'I', 'N', 'A', 'N', 'C', 'E', 'I', 'R', 'A', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03936 */ HB_P_LINEOFFSET, 103,	/* 117 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'F', 'I', 0, 
/* 03945 */ HB_P_LINEOFFSET, 104,	/* 118 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
/* 03956 */ HB_P_LINEOFFSET, 105,	/* 119 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'F', 'I', 'N', 'A', 'N', 'C', 'E', 'I', 'R', 'A', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03990 */ HB_P_LINEOFFSET, 106,	/* 120 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04035 */ HB_P_LINEOFFSET, 107,	/* 121 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04073) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04078) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 38,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04128) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 71,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04216 */ HB_P_LINEOFFSET, 108,	/* 122 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 04238 */ HB_P_LINEOFFSET, 109,	/* 123 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04253) */
	HB_P_JUMP, 124, 33,	/* 8572 (abs: 12822) */
/* 04253 */ HB_P_LINEOFFSET, 112,	/* 126 */
	HB_P_PUSHSYMNEAR, 41,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 42, 0,	/* OPCAO */
/* 04292 */ HB_P_LINEOFFSET, 113,	/* 127 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04299 */ HB_P_LINEOFFSET, 114,	/* 128 */
	HB_P_PUSHVARIABLE, 42, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04341) */
	HB_P_JUMP, 193, 241,	/* -3647 (abs: 00664) */
/* 04314 */ HB_P_LINEOFFSET, 118,	/* 132 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 04341 */ HB_P_LINEOFFSET, 120,	/* 134 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'o', ' ', 'a', 's', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'c', 'o', 'm', ' ', 'J', 'U', 'R', 'O', 'S', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 36,	/* MTIPO_DUP */
/* 04389 */ HB_P_LINEOFFSET, 121,	/* 135 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04404) */
	HB_P_JUMP, 229, 32,	/* 8421 (abs: 12822) */
/* 04404 */ HB_P_LINEOFFSET, 124,	/* 138 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04459 */ HB_P_LINEOFFSET, 125,	/* 139 */
	HB_P_PUSHLOCALNEAR, 60,	/* MTIPO_SINT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 8,	/* 2291 (abs: 06759) */
/* 04471 */ HB_P_LINEOFFSET, 126,	/* 140 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 04536) */
/* 04482 */ HB_P_LINEOFFSET, 127,	/* 141 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04562) */
/* 04536 */ HB_P_LINEOFFSET, 129,	/* 143 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 04562 */ HB_P_LINEOFFSET, 134,	/* 148 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCER */
	HB_P_POPLOCALNEAR, 12,	/* PAG */
/* 04635 */ HB_P_LINEOFFSET, 135,	/* 149 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_CLI */
/* 04642 */ HB_P_LINEOFFSET, 136,	/* 150 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 70, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04698 */ HB_P_LINEOFFSET, 137,	/* 151 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04722 */ HB_P_LINEOFFSET, 138,	/* 152 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04775) */
/* 04735 */ HB_P_LINEOFFSET, 139,	/* 153 */
	HB_P_PUSHSYMNEAR, 50,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 04770 */ HB_P_LINEOFFSET, 140,	/* 154 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04775 */ HB_P_LINEOFFSET, 142,	/* 156 */
	HB_P_PUSHSYMNEAR, 51,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04807) */
	HB_P_JUMP, 82, 31,	/* 8018 (abs: 12822) */
/* 04807 */ HB_P_LINEOFFSET, 145,	/* 159 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 52, 0,	/* I */
/* 04813 */ HB_P_LINEOFFSET, 146,	/* 160 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 52, 0,	/* I */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 59, 6,	/* 1595 (abs: 06425) */
/* 04833 */ HB_P_LINEOFFSET, 147,	/* 161 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MALIAS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 121,	/* 121 (abs: 04967) */
/* 04848 */ HB_P_LINEOFFSET, 148,	/* 162 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', 'p', 'a', 'g', 'o', ')', ',', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
	HB_P_JUMPNEAR, 119,	/* 119 (abs: 05084) */
/* 04967 */ HB_P_LINEOFFSET, 150,	/* 164 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', 'p', 'a', 'g', 'o', ')', ',', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05084 */ HB_P_LINEOFFSET, 152,	/* 166 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05123 */ HB_P_LINEOFFSET, 153,	/* 167 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05166) */
/* 05134 */ HB_P_LINEOFFSET, 154,	/* 168 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05166 */ HB_P_LINEOFFSET, 156,	/* 170 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 05207) */
/* 05177 */ HB_P_LINEOFFSET, 157,	/* 171 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05207 */ HB_P_LINEOFFSET, 159,	/* 173 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05250) */
/* 05218 */ HB_P_LINEOFFSET, 160,	/* 174 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05250 */ HB_P_LINEOFFSET, 162,	/* 176 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05293) */
/* 05261 */ HB_P_LINEOFFSET, 163,	/* 177 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05293 */ HB_P_LINEOFFSET, 165,	/* 179 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05345) */
/* 05304 */ HB_P_LINEOFFSET, 166,	/* 180 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05345 */ HB_P_LINEOFFSET, 168,	/* 182 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 05387) */
/* 05356 */ HB_P_LINEOFFSET, 169,	/* 183 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05387 */ HB_P_LINEOFFSET, 171,	/* 185 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05439) */
/* 05398 */ HB_P_LINEOFFSET, 172,	/* 186 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05439 */ HB_P_LINEOFFSET, 174,	/* 188 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_DUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 05482) */
/* 05450 */ HB_P_LINEOFFSET, 175,	/* 189 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05482 */ HB_P_LINEOFFSET, 177,	/* 191 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05525) */
/* 05493 */ HB_P_LINEOFFSET, 178,	/* 192 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05525 */ HB_P_LINEOFFSET, 180,	/* 194 */
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_JURO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05570) */
/* 05536 */ HB_P_LINEOFFSET, 181,	/* 195 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05570 */ HB_P_LINEOFFSET, 183,	/* 197 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05616) */
/* 05581 */ HB_P_LINEOFFSET, 184,	/* 198 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05616 */ HB_P_LINEOFFSET, 186,	/* 200 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 05660) */
/* 05627 */ HB_P_LINEOFFSET, 187,	/* 201 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* AREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05660 */ HB_P_LINEOFFSET, 189,	/* 203 */
	HB_P_PUSHLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 05700) */
/* 05671 */ HB_P_LINEOFFSET, 190,	/* 204 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05700 */ HB_P_LINEOFFSET, 192,	/* 206 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 05753) */
/* 05711 */ HB_P_LINEOFFSET, 193,	/* 207 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'a', 't', 'p', 'a', 'g', ' ', '-', ' ', 'v', 'e', 'n', 'c', ')', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05753 */ HB_P_LINEOFFSET, 195,	/* 209 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 71, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05773 */ HB_P_LINEOFFSET, 196,	/* 210 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05797 */ HB_P_LINEOFFSET, 197,	/* 211 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 05809 */ HB_P_LINEOFFSET, 198,	/* 212 */
	HB_P_PUSHSYMNEAR, 56,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 05828 */ HB_P_LINEOFFSET, 199,	/* 213 */
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05844) */
	HB_P_JUMP, 62, 2,	/* 574 (abs: 06415) */
/* 05844 */ HB_P_LINEOFFSET, 202,	/* 216 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05862) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 42, 1,	/* 298 (abs: 06160) */
/* 05865 */ HB_P_LINEOFFSET, 203,	/* 217 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 05871 */ HB_P_LINEOFFSET, 204,	/* 218 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05886) */
/* 05879 */ HB_P_LINEOFFSET, 205,	/* 219 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05886 */ HB_P_LINEOFFSET, 207,	/* 221 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05901 */ HB_P_LINEOFFSET, 208,	/* 222 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05915 */ HB_P_LINEOFFSET, 209,	/* 223 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05944 */ HB_P_LINEOFFSET, 210,	/* 224 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06013 */ HB_P_LINEOFFSET, 211,	/* 225 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06049 */ HB_P_LINEOFFSET, 212,	/* 226 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'l', 'r', '.', 'M', 'e', 'd', '.', 'D', 'o', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 06088 */ HB_P_LINEOFFSET, 213,	/* 227 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 06127 */ HB_P_LINEOFFSET, 214,	/* 228 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06160 */ HB_P_LINEOFFSET, 216,	/* 230 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06190 */ HB_P_LINEOFFSET, 217,	/* 231 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06224 */ HB_P_LINEOFFSET, 218,	/* 232 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06274 */ HB_P_LINEOFFSET, 219,	/* 233 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06334 */ HB_P_LINEOFFSET, 220,	/* 234 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06386 */ HB_P_LINEOFFSET, 221,	/* 235 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
/* 06400 */ HB_P_LINEOFFSET, 222,	/* 236 */
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHLOCALNEAR, 71,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
/* 06413 */ HB_P_LINEOFFSET, 223,	/* 237 */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 52, 0,	/* I */
	HB_P_JUMP, 189, 249,	/* -1603 (abs: 04819) */
/* 06425 */ HB_P_LINEOFFSET, 224,	/* 238 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06439 */ HB_P_LINEOFFSET, 225,	/* 239 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06490 */ HB_P_LINEOFFSET, 226,	/* 240 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06559 */ HB_P_LINEOFFSET, 227,	/* 241 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'e', 'd', 'i', 'o', ' ', 'p', '/', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06646 */ HB_P_LINEOFFSET, 228,	/* 242 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06730 */ HB_P_LINEOFFSET, 229,	/* 243 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 91, 23,	/* 5979 (abs: 12735) */
/* 06759 */ HB_P_LINEOFFSET, 231,	/* 245 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06810 */ HB_P_LINEOFFSET, 233,	/* 247 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MALIAS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 06925) */
/* 06825 */ HB_P_LINEOFFSET, 234,	/* 248 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 07023) */
/* 06925 */ HB_P_LINEOFFSET, 236,	/* 250 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07023 */ HB_P_LINEOFFSET, 238,	/* 252 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 07075) */
/* 07035 */ HB_P_LINEOFFSET, 239,	/* 253 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07075 */ HB_P_LINEOFFSET, 241,	/* 255 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07118) */
/* 07086 */ HB_P_LINEOFFSET, 242,	/* 256 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07118 */ HB_P_LINEOFFSET, 244,	/* 258 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 07159) */
/* 07129 */ HB_P_LINEOFFSET, 245,	/* 259 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07159 */ HB_P_LINEOFFSET, 247,	/* 261 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07202) */
/* 07170 */ HB_P_LINEOFFSET, 248,	/* 262 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07202 */ HB_P_LINEOFFSET, 250,	/* 264 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07245) */
/* 07213 */ HB_P_LINEOFFSET, 251,	/* 265 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07245 */ HB_P_LINEOFFSET, 253,	/* 267 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 07297) */
/* 07256 */ HB_P_LINEOFFSET, 254,	/* 268 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07297 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07341) */
/* 07309 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07341 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 07395) */
/* 07353 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07395 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_DUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 07440) */
/* 07407 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07440 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 07485) */
/* 07452 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07485 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_JURO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 07532) */
/* 07497 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07532 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 07580) */
/* 07544 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07580 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 07626) */
/* 07592 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* AREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07626 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 07668) */
/* 07638 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07668 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 07723) */
/* 07680 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'a', 't', 'p', 'a', 'g', ' ', '-', ' ', 'v', 'e', 'n', 'c', ')', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07723 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'p', 'a', 'g', ',', 't', 'i', 'p', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07772 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 65, 0,	/* Q_DUPR */
/* 07781 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 65, 0,	/* Q_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 07802 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07827 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 65, 0,	/* Q_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 07893) */
/* 07842 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 50,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 198, 227,	/* -7226 (abs: 00664) */
/* 07893 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 51,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07926) */
	HB_P_JUMP, 35, 19,	/* 4899 (abs: 12822) */
/* 07926 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 66,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'o', 'n', 0, 
	HB_P_DOSHORT, 2,
/* 07941 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 66,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 67,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 07971) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 07982) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 07984 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCER */
	HB_P_POPLOCALNEAR, 12,	/* PAG */
/* 08058 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MDIA */
/* 08071 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 08138) */
/* 08083 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 08165) */
/* 08138 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 08165 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 08178 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 52, 0,	/* I */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 65, 0,	/* Q_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 15, 15,	/* 3855 (abs: 12052) */
/* 08200 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 56,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 08228 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08247) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 46, 2,	/* 558 (abs: 08805) */
/* 08250 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 08257 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08274) */
/* 08266 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08274 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08290 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08305 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08335 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08405 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08446 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 08480 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08517 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08556 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08595 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'i', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 08628 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'J', 'u', 'r', '.', 'D', 'e', 's', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08666 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08703 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 08740 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'L', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 08771 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08805 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 08861) */
/* 08817 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 27,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 08846 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_PUSHSYMNEAR, 54,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* AREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08861) */
	HB_P_JUMP, 112, 12,	/* 3184 (abs: 12042) */
/* 08861 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 33,	/* MDIA */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 37, 1,	/* 293 (abs: 09170) */
/* 08880 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 09138) */
/* 08890 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08929 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 08968 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09007 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09046 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09092 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MT_PG */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09138 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_LOCALNEARSETINT, 50, 0, 0,	/* MT_JUR 0*/
	HB_P_PUSHLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
/* 09155 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MDIA */
/* 09170 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 09280) */
/* 09202 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 8,	/* L_MES */
/* 09231 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 09255 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 09280 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09312 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09348 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09406 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09462) */
/* 09426 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 09552) */
/* 09462 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09518) */
/* 09482 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 09552) */
/* 09518 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09552 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09593 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09650 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09707 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09766 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 09836) */
/* 09778 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 09892) */
/* 09836 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09892 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09933 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09974 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 10010 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 10062) */
/* 10030 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 10062 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_DUP 1*/
/* 10069 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MTOT_DUP 1*/
/* 10076 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
/* 10094 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
/* 10112 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 53,	/* MVLR_DOC */
/* 10130 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
/* 10148 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 10190) */
/* 10165 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 42,	/* MJUROS_D */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 42,	/* MJUROS_D */
/* 10183 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_LOCALNEARADDINT, 43, 1, 0,	/* MJUR_TOT 1*/
/* 10190 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 10317) */
/* 10216 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
/* 10245 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* TOT_JUR 1*/
/* 10252 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHLOCALNEAR, 50,	/* MT_JUR */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
/* 10281 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
/* 10310 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MTOT_JUR 1*/
/* 10317 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 10444) */
/* 10343 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
/* 10372 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* TOT_DES 1*/
/* 10379 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHLOCALNEAR, 49,	/* MT_DES */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
/* 10408 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
/* 10437 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* MTOT_DES 1*/
/* 10444 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHLOCALNEAR, 48,	/* MT_PG */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
/* 10462 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
/* 10480 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 249, 5,	/* 1529 (abs: 12039) */
/* 10513 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_LESS,
	HB_P_JUMPFALSE, 220, 1,	/* 476 (abs: 11000) */
/* 10527 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 10572 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10672 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10772 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10872 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ' ', 'P', 'a', 'g', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10972 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 219, 3,	/* 987 (abs: 11984) */
/* 11000 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11008 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 11015 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11031 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11046 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11076 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11146 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11187 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 11221 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11258 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11297 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11336 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'i', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11369 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'J', 'u', 'r', '.', 'D', 'e', 's', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11407 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11444 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 61,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 11481 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11515 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 11539 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 11584 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11684 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11784 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11884 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ' ', 'P', 'a', 'g', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11984 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 8,	/* L_MES */
/* 12013 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
/* 12039 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHVARIABLE, 52, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 52, 0,	/* I */
	HB_P_JUMP, 232, 240,	/* -3864 (abs: 08185) */
/* 12052 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_GREATEREQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 12071) */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 12096) */
/* 12073 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 12080 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 12096 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 12111 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 12163 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12272 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12381 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12490 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12599 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 's', 'p', 'e', 'n', 'c', 'a', 'd', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MJUR_TOT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 63,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MJUROS_D */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12708 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 12735 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 12743 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 70,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 12753 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 66,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 12795 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 71,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 133, 208,	/* -12155 (abs: 00664) */
/* 12822 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 12830 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 12836 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

