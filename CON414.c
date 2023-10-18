/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON414.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON414.PRG /q /oC:\HTI\SISMED\CON414.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:22 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON414.PRG"

HB_FUNC( CON414 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON414 )
{ "CON414", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON414 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "Q_DUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TIP_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLPAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHEQUE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "TP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS_B", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON414 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON414
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON414 = hb_vm_SymbolInit_CON414;
   #pragma data_seg()
#endif

HB_FUNC( CON414 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 37, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '1', '4', 0, 
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MT_PAGO 0*/
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MOBS_DOC 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MBANCO */
	HB_P_LOCALNEARSETSTR, 33, 4, 0,	/* MBANCO_PG 4*/
	' ', ' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MTP_PG 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_LOCALNEARSETSTR, 37, 2, 0,	/* MTIP_DATA 2*/
	'P', 0, 
/* 00060 */ HB_P_LINEOFFSET, 3,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 3,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* BANK */
	HB_P_PUSHSYMNEAR, 6,	/* MCOD_FOR */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_CONTA */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 4, 0,	/* MARQ */
	HB_P_POPVARIABLE, 3, 0,	/* MIMP_TIPO */
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00169) */
/* 00164 */ HB_P_LINEOFFSET, 6,	/* 20 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00169 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00191 */ HB_P_LINEOFFSET, 11,	/* 25 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00220) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00220 */ HB_P_LINEOFFSET, 12,	/* 26 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00249) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00249 */ HB_P_LINEOFFSET, 15,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 15,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00269 */ HB_P_LINEOFFSET, 17,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', '(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ')', 0, 
	HB_P_DOSHORT, 5,
/* 00321 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 21,	/* 35 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00393 */ HB_P_LINEOFFSET, 22,	/* 36 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00430 */ HB_P_LINEOFFSET, 23,	/* 37 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00467 */ HB_P_LINEOFFSET, 24,	/* 38 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00504 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00541 */ HB_P_LINEOFFSET, 26,	/* 40 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'e', 's', 'u', 'm', 'o', '/', 'G', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00578 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'O', 'B', 'S', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00615 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', '.', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00652 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'B', 'a', 'n', 'c', 'o', ' ', 'd', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00689 */ HB_P_LINEOFFSET, 30,	/* 44 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00726 */ HB_P_LINEOFFSET, 31,	/* 45 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00763 */ HB_P_LINEOFFSET, 32,	/* 46 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 's', 'q', 'u', 'i', 's', 'a', ' ', 'D', 'a', 't', 'a', ' ', '[', 'P', ']', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'o', 'u', ' ', '[', 'O', ']', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00829 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00838 */ HB_P_LINEOFFSET, 36,	/* 50 */
	HB_P_LOCALNEARSETSTR, 37, 2, 0,	/* MTIP_DATA 2*/
	'P', 0, 
/* 00846 */ HB_P_LINEOFFSET, 37,	/* 51 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MBANCO */
/* 00857 */ HB_P_LINEOFFSET, 38,	/* 52 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_CONTA */
/* 00869 */ HB_P_LINEOFFSET, 39,	/* 53 */
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 00877 */ HB_P_LINEOFFSET, 40,	/* 54 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MTIPO_DOC */
/* 00888 */ HB_P_LINEOFFSET, 41,	/* 55 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* BANK */
/* 00899 */ HB_P_LINEOFFSET, 42,	/* 56 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_FOR */
/* 00905 */ HB_P_LINEOFFSET, 43,	/* 57 */
	HB_P_PUSHSYMNEAR, 19,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 00928 */ HB_P_LINEOFFSET, 44,	/* 58 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MOBS_DOC 2*/
	'S', 0, 
/* 00936 */ HB_P_LINEOFFSET, 45,	/* 59 */
	HB_P_LOCALNEARSETSTR, 19, 34, 0,	/* MTIT 34*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ')', 0, 
/* 00976 */ HB_P_LINEOFFSET, 46,	/* 60 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 24,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01045 */ HB_P_LINEOFFSET, 47,	/* 61 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01084) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01089) */
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
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01117 */ HB_P_LINEOFFSET, 48,	/* 62 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01156) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01161) */
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
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01189 */ HB_P_LINEOFFSET, 49,	/* 63 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01228) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01233) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01269 */ HB_P_LINEOFFSET, 50,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', 'X', '.', 'X', 'X', 0, 
	HB_P_PUSHBLOCKSHORT, 16,	/* 16 */
	HB_P_PUSHSYMNEAR, 26,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01347 */ HB_P_LINEOFFSET, 51,	/* 65 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01386) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01391) */
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
	25, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01445 */ HB_P_LINEOFFSET, 52,	/* 66 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01484) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01489) */
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
	27, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01542 */ HB_P_LINEOFFSET, 53,	/* 67 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MBANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01581) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01586) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01619 */ HB_P_LINEOFFSET, 54,	/* 68 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MBANCO_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01658) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01663) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'b', 'a', 'n', 'c', 'o', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01699 */ HB_P_LINEOFFSET, 55,	/* 69 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MTP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01738) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01743) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 27,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'D', 'e', 'i', 'x', 'a', 'r', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'a', 'j', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01854 */ HB_P_LINEOFFSET, 56,	/* 70 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MMOV_CX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01893) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01898) */
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
	HB_P_PUSHSYMNEAR, 27,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'C', ']', 'c', 'a', 'i', 'x', 'a', ' ', 'e', ' ', '[', 'M', ']', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01987 */ HB_P_LINEOFFSET, 57,	/* 71 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_DATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02026) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02031) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', '_', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_DATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02085 */ HB_P_LINEOFFSET, 58,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 02107 */ HB_P_LINEOFFSET, 59,	/* 73 */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 02153) */
/* 02119 */ HB_P_LINEOFFSET, 60,	/* 74 */
	HB_P_PUSHSYMNEAR, 11,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 02141 */ HB_P_LINEOFFSET, 61,	/* 75 */
	HB_P_PUSHSYMNEAR, 30,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02148 */ HB_P_LINEOFFSET, 62,	/* 76 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02153 */ HB_P_LINEOFFSET, 64,	/* 78 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02174) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 02251) */
/* 02176 */ HB_P_LINEOFFSET, 65,	/* 79 */
	HB_P_PUSHSYMNEAR, 32,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'A', ']', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', ' ', '[', 'S', ']', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 28,	/* MTIPO_CON */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 02259) */
/* 02251 */ HB_P_LINEOFFSET, 67,	/* 81 */
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 02259 */ HB_P_LINEOFFSET, 69,	/* 83 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHSYMNEAR, 19,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02302) */
/* 02282 */ HB_P_LINEOFFSET, 70,	/* 84 */
	HB_P_PUSHSYMNEAR, 19,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '9', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 02302 */ HB_P_LINEOFFSET, 72,	/* 86 */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 19,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02345) */
/* 02325 */ HB_P_LINEOFFSET, 73,	/* 87 */
	HB_P_PUSHSYMNEAR, 19,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '0', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 02345 */ HB_P_LINEOFFSET, 75,	/* 89 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* TP_MES */
	HB_P_POPLOCALNEAR, 6,	/* TD_MES */
/* 02355 */ HB_P_LINEOFFSET, 76,	/* 90 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 18,	/* 4800 (abs: 07164) */
/* 02367 */ HB_P_LINEOFFSET, 77,	/* 91 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIT */
/* 02387 */ HB_P_LINEOFFSET, 78,	/* 92 */
	HB_P_PUSHSYMNEAR, 33,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02446 */ HB_P_LINEOFFSET, 79,	/* 93 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_DATA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 155, 0,	/* 155 (abs: 02610) */
/* 02458 */ HB_P_LINEOFFSET, 80,	/* 94 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIPO */
/* 02507 */ HB_P_LINEOFFSET, 81,	/* 95 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', ' ', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
	HB_P_JUMP, 153, 0,	/* 153 (abs: 02760) */
/* 02610 */ HB_P_LINEOFFSET, 83,	/* 97 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIPO */
/* 02658 */ HB_P_LINEOFFSET, 84,	/* 98 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', 'o', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', 'o', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', ' ', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02760 */ HB_P_LINEOFFSET, 86,	/* 100 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02805) */
/* 02771 */ HB_P_LINEOFFSET, 87,	/* 101 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02805 */ HB_P_LINEOFFSET, 89,	/* 103 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02848) */
/* 02816 */ HB_P_LINEOFFSET, 90,	/* 104 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02848 */ HB_P_LINEOFFSET, 92,	/* 106 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 02902) */
/* 02860 */ HB_P_LINEOFFSET, 93,	/* 107 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02902 */ HB_P_LINEOFFSET, 95,	/* 109 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02947) */
/* 02913 */ HB_P_LINEOFFSET, 96,	/* 110 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02947 */ HB_P_LINEOFFSET, 98,	/* 112 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 02991) */
/* 02958 */ HB_P_LINEOFFSET, 99,	/* 113 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 't', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 02991 */ HB_P_LINEOFFSET, 101,	/* 115 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'p', 'a', 'g', ',', 't', 'i', 'p', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 03041 */ HB_P_LINEOFFSET, 103,	/* 117 */
	HB_P_PUSHSYMNEAR, 38,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 4,
/* 03070 */ HB_P_LINEOFFSET, 104,	/* 118 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_POPVARIABLE, 39, 0,	/* MALIAS */
/* 03084 */ HB_P_LINEOFFSET, 105,	/* 119 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 03100 */ HB_P_LINEOFFSET, 106,	/* 120 */
	HB_P_PUSHSYMNEAR, 40,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03107 */ HB_P_LINEOFFSET, 107,	/* 121 */
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 03179) */
/* 03116 */ HB_P_LINEOFFSET, 108,	/* 122 */
	HB_P_PUSHSYMNEAR, 42,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03163 */ HB_P_LINEOFFSET, 109,	/* 123 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 39, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 43,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
	HB_P_JUMP, 217, 244,	/* -2855 (abs: 00321) */
/* 03179 */ HB_P_LINEOFFSET, 123,	/* 137 */
	HB_P_PUSHSYMNEAR, 44,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 03223) */
/* 03207 */ HB_P_LINEOFFSET, 124,	/* 138 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 39, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 43,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
	HB_P_JUMP, 173, 244,	/* -2899 (abs: 00321) */
/* 03223 */ HB_P_LINEOFFSET, 129,	/* 143 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 03263 */ HB_P_LINEOFFSET, 130,	/* 144 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 03285 */ HB_P_LINEOFFSET, 131,	/* 145 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 03293 */ HB_P_LINEOFFSET, 133,	/* 147 */
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 80, 10,	/* 2640 (abs: 05940) */
/* 03303 */ HB_P_LINEOFFSET, 134,	/* 148 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 03324 */ HB_P_LINEOFFSET, 135,	/* 149 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03342) */
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 03589) */
/* 03345 */ HB_P_LINEOFFSET, 136,	/* 150 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 03351 */ HB_P_LINEOFFSET, 137,	/* 151 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03366) */
/* 03359 */ HB_P_LINEOFFSET, 138,	/* 152 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03366 */ HB_P_LINEOFFSET, 140,	/* 154 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 03381 */ HB_P_LINEOFFSET, 141,	/* 155 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03395 */ HB_P_LINEOFFSET, 142,	/* 156 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', '.', ' ', ' ', ' ', 'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'D', 'u', 'p', '.', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ' ', 'V', 'l', 'r', '.', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'B', 'c', 'o', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 03556 */ HB_P_LINEOFFSET, 143,	/* 157 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03589 */ HB_P_LINEOFFSET, 145,	/* 159 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 5, 2,	/* 517 (abs: 04115) */
/* 03601 */ HB_P_LINEOFFSET, 146,	/* 160 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 244, 1,	/* 500 (abs: 04107) */
/* 03610 */ HB_P_LINEOFFSET, 147,	/* 161 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 29, 1,	/* 285 (abs: 03904) */
/* 03622 */ HB_P_LINEOFFSET, 148,	/* 162 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 03675 */ HB_P_LINEOFFSET, 149,	/* 163 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03733 */ HB_P_LINEOFFSET, 150,	/* 164 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03781 */ HB_P_LINEOFFSET, 151,	/* 165 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03820 */ HB_P_LINEOFFSET, 152,	/* 166 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03868 */ HB_P_LINEOFFSET, 153,	/* 167 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 196, 0,	/* 196 (abs: 04097) */
/* 03904 */ HB_P_LINEOFFSET, 155,	/* 169 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03962 */ HB_P_LINEOFFSET, 156,	/* 170 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04010 */ HB_P_LINEOFFSET, 157,	/* 171 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04049 */ HB_P_LINEOFFSET, 158,	/* 172 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04097 */ HB_P_LINEOFFSET, 160,	/* 174 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MT_PAGO 0*/
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 04107 */ HB_P_LINEOFFSET, 162,	/* 176 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 04115 */ HB_P_LINEOFFSET, 164,	/* 178 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04148) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 193, 0,	/* 193 (abs: 04341) */
/* 04151 */ HB_P_LINEOFFSET, 165,	/* 179 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 156, 0,	/* 156 (abs: 04313) */
/* 04160 */ HB_P_LINEOFFSET, 166,	/* 180 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04282 */ HB_P_LINEOFFSET, 167,	/* 181 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
/* 04288 */ HB_P_LINEOFFSET, 168,	/* 182 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04313 */ HB_P_LINEOFFSET, 170,	/* 184 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 04335 */ HB_P_LINEOFFSET, 171,	/* 185 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* TOT 0*/
/* 04341 */ HB_P_LINEOFFSET, 185,	/* 199 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 04437) */
/* 04360 */ HB_P_LINEOFFSET, 187,	/* 201 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 04424) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 04423) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04437) */
/* 04426 */ HB_P_LINEOFFSET, 188,	/* 202 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 139, 251,	/* -1141 (abs: 03293) */
/* 04437 */ HB_P_LINEOFFSET, 193,	/* 207 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 6, 2,	/* 518 (abs: 04964) */
/* 04449 */ HB_P_LINEOFFSET, 194,	/* 208 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 245, 1,	/* 501 (abs: 04956) */
/* 04458 */ HB_P_LINEOFFSET, 195,	/* 209 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 30, 1,	/* 286 (abs: 04753) */
/* 04470 */ HB_P_LINEOFFSET, 196,	/* 210 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04523 */ HB_P_LINEOFFSET, 197,	/* 211 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04582 */ HB_P_LINEOFFSET, 198,	/* 212 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04630 */ HB_P_LINEOFFSET, 199,	/* 213 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04669 */ HB_P_LINEOFFSET, 200,	/* 214 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04717 */ HB_P_LINEOFFSET, 201,	/* 215 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 196, 0,	/* 196 (abs: 04946) */
/* 04753 */ HB_P_LINEOFFSET, 203,	/* 217 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04811 */ HB_P_LINEOFFSET, 204,	/* 218 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04859 */ HB_P_LINEOFFSET, 205,	/* 219 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04898 */ HB_P_LINEOFFSET, 206,	/* 220 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04946 */ HB_P_LINEOFFSET, 208,	/* 222 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MT_PAGO 0*/
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 04956 */ HB_P_LINEOFFSET, 210,	/* 224 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 04964 */ HB_P_LINEOFFSET, 212,	/* 226 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04997) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 05193) */
/* 05000 */ HB_P_LINEOFFSET, 213,	/* 227 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 159, 0,	/* 159 (abs: 05165) */
/* 05009 */ HB_P_LINEOFFSET, 214,	/* 228 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05131 */ HB_P_LINEOFFSET, 215,	/* 229 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
/* 05137 */ HB_P_LINEOFFSET, 216,	/* 230 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 248,	/* -1869 (abs: 03293) */
/* 05165 */ HB_P_LINEOFFSET, 219,	/* 233 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 05187 */ HB_P_LINEOFFSET, 220,	/* 234 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* TOT 0*/
/* 05193 */ HB_P_LINEOFFSET, 222,	/* 236 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 159, 2,	/* 671 (abs: 05873) */
/* 05205 */ HB_P_LINEOFFSET, 223,	/* 237 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* FORNEC */
	HB_P_DOSHORT, 1,
/* 05230 */ HB_P_LINEOFFSET, 224,	/* 238 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* CLIENTE */
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05278 */ HB_P_LINEOFFSET, 225,	/* 239 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* TIPO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05312 */ HB_P_LINEOFFSET, 226,	/* 240 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05346 */ HB_P_LINEOFFSET, 227,	/* 241 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05380 */ HB_P_LINEOFFSET, 228,	/* 242 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05432 */ HB_P_LINEOFFSET, 229,	/* 243 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05484 */ HB_P_LINEOFFSET, 230,	/* 244 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 05569) */
/* 05497 */ HB_P_LINEOFFSET, 231,	/* 245 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05551 */ HB_P_LINEOFFSET, 232,	/* 246 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 05615) */
/* 05569 */ HB_P_LINEOFFSET, 234,	/* 248 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05615 */ HB_P_LINEOFFSET, 236,	/* 250 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VENC */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05661 */ HB_P_LINEOFFSET, 237,	/* 251 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* NBANCO */
	HB_P_DOSHORT, 1,
/* 05690 */ HB_P_LINEOFFSET, 238,	/* 252 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* CHEQUE */
	HB_P_DOSHORT, 1,
/* 05719 */ HB_P_LINEOFFSET, 239,	/* 253 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* TP_PG */
	HB_P_DOSHORT, 1,
/* 05748 */ HB_P_LINEOFFSET, 240,	/* 254 */
	HB_P_PUSHLOCALNEAR, 27,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 116,	/* 116 (abs: 05873) */
/* 05759 */ HB_P_LINEOFFSET, 241,	/* 255 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* OBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 05816) */
/* 05772 */ HB_P_LINEOFFSET, 242,	/* 256 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', 'B', 'S', '.', ' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05816 */ HB_P_LINEOFFSET, 244,	/* 258 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* OBS_B */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 05873) */
/* 05829 */ HB_P_LINEOFFSET, 245,	/* 259 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', 'B', 'S', '.', ' ', 'B', 'A', 'I', 'X', 'A', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* OBS_B */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05873 */ HB_P_LINEOFFSET, 249,	/* 263 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT 1*/
/* 05879 */ HB_P_LINEOFFSET, 250,	/* 264 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* TOT_G 1*/
/* 05885 */ HB_P_LINEOFFSET, 251,	/* 265 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
/* 05896 */ HB_P_LINEOFFSET, 252,	/* 266 */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
/* 05907 */ HB_P_LINEOFFSET, 253,	/* 267 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 05918 */ HB_P_LINEOFFSET, 254,	/* 268 */
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* MT_PAGO */
/* 05929 */ HB_P_LINEOFFSET, 255,	/* 269 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 172, 245,	/* -2644 (abs: 03293) */
/* 05940 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 73,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06031 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06051) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 20, 2,	/* 532 (abs: 06583) */
/* 06054 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 1, 2,	/* 513 (abs: 06574) */
/* 06064 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 36, 1,	/* 292 (abs: 06366) */
/* 06077 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06131 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06191 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06240 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06280 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06329 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 200, 0,	/* 200 (abs: 06563) */
/* 06366 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06425 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06474 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06514 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06563 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MT_PAGO 0*/
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 06574 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 06583 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06706 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06750) */
/* 06719 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06727 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 06734 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06750 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06765 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', 'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'F', ' ', 'I', ' ', 'N', ' ', 'A', ' ', 'L', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06851 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06934 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07034 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'T', 'o', 't', 'a', 'l', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07134 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 76, 12,	/* 3148 (abs: 10309) */
/* 07164 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 63, 12,	/* 3135 (abs: 10309) */
/* 07177 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIT */
/* 07198 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 33,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07258 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', ' ', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07359 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 07406) */
/* 07371 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07406 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 07451) */
/* 07418 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07451 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 07507) */
/* 07464 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07507 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 07554) */
/* 07519 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07554 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 07600) */
/* 07566 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 't', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07600 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'p', 'a', 'g', 'o', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 36, 0,	/* CCOMM */
/* 07649 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 38,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_PUSHVARIABLE, 36, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 4,
/* 07679 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_POPVARIABLE, 39, 0,	/* MALIAS */
/* 07694 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 07711 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 40,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07719 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 07794) */
/* 07729 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 42,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07777 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 39, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 43,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
	HB_P_JUMP, 210, 226,	/* -7470 (abs: 00321) */
/* 07794 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 44,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07826) */
	HB_P_JUMP, 178, 226,	/* -7502 (abs: 00321) */
/* 07826 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 07867 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 07890 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIPO */
/* 07917 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 07926 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 128, 7,	/* 1920 (abs: 09854) */
/* 07937 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 07959 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* FORNEC */
	HB_P_POPLOCALNEAR, 31,	/* MCOD_AUX */
/* 07968 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* CLIENTE */
	HB_P_POPLOCALNEAR, 29,	/* MCLIENTE */
/* 07977 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_POPLOCALNEAR, 30,	/* MTIP_FOR */
/* 07986 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MCOD_AUX */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* FORNEC */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 08006) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 171, 4,	/* 1195 (abs: 09201) */
/* 08009 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 08031 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08050) */
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 08304) */
/* 08053 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 08060 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08077) */
/* 08069 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08077 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08093 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08108 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', '.', ' ', ' ', ' ', 'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'D', 'u', 'p', '.', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', ' ', 'V', 'l', 'r', '.', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'B', 'c', 'o', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 08270 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08304 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 94,	/* 94 (abs: 08416) */
/* 08324 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 08358) */
/* 08346 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 143, 254,	/* -369 (abs: 07986) */
/* 08358 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 08402) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 08416) */
/* 08404 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 85, 254,	/* -427 (abs: 07986) */
/* 08416 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 181, 2,	/* 693 (abs: 09119) */
/* 08429 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* FORNEC */
	HB_P_DOSHORT, 1,
/* 08455 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* CLIENTE */
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* TIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08504 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* TIPO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08539 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08574 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08609 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08662 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08715 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 08804) */
/* 08729 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08785 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 08852) */
/* 08804 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08852 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* DATPAG */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VENC */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08899 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* NBANCO */
	HB_P_DOSHORT, 1,
/* 08929 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* CHEQUE */
	HB_P_DOSHORT, 1,
/* 08959 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* TP_PG */
	HB_P_DOSHORT, 1,
/* 08989 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHLOCALNEAR, 27,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 120,	/* 120 (abs: 09119) */
/* 09001 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* OBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 09060) */
/* 09015 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', 'B', 'S', '.', ' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09060 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* OBS_B */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 09119) */
/* 09074 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'O', 'B', 'S', '.', ' ', 'B', 'A', 'I', 'X', 'A', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* OBS_B */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09119 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT 1*/
/* 09126 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* TOT_G 1*/
/* 09133 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
/* 09145 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
/* 09157 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 09169 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHLOCALNEAR, 26,	/* MT_PAGO */
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* VLPAGO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* MT_PAGO */
/* 09181 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 59,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 09190 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 41,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 68, 251,	/* -1212 (abs: 07986) */
/* 09201 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 75,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* FORNEC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09232 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 216, 0,	/* 216 (abs: 09459) */
/* 09246 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09254 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 09261 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 09277 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09292 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 09425 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09459 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 09481) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSE, 183, 0,	/* 183 (abs: 09664) */
/* 09484 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09518 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09616 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09650 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_JUMP, 57, 249,	/* -1735 (abs: 07926) */
/* 09664 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 31,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 44, 249,	/* -1748 (abs: 07926) */
/* 09677 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MCOD_AUX */
	HB_P_DOSHORT, 1,
/* 09701 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCLIENTE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* MTIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09738 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09840 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_JUMP, 123, 248,	/* -1925 (abs: 07926) */
/* 09854 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 09898) */
/* 09867 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09875 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 09882 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 09898 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 09913 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', 'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'F', ' ', 'I', ' ', 'N', ' ', 'A', ' ', 'L', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 09999 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10082 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10182 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'T', 'o', 't', 'a', 'l', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10282 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10309 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 51,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10317 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 76,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10327 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10369 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 39, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 43,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 10383 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 78,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 155, 216,	/* -10085 (abs: 00321) */
	HB_P_ENDPROC
/* 10410 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

