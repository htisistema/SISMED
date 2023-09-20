/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON419.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON419.PRG /q /oC:\HTI\SISMED\CON419.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:32 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON419.PRG"

HB_FUNC( CON419 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON419 )
{ "CON419", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON419 )}, NULL },
{ "MCOD_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CONS_DUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "X", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON419 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON419
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON419 = hb_vm_SymbolInit_CON419;
   #pragma data_seg()
#endif

HB_FUNC( CON419 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 24, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '1', '9', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_DOC */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_DET 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MDOC_APAG 0*/
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MDOC_REC 0*/
/* 00040 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_FOR */
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_CONTA */
	HB_P_PUSHSYMNEAR, 3,	/* PAG */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MARQ */
	HB_P_PUSHSYMNEAR, 8,	/* MCODEMP */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 6, 0,	/* MARQ */
	HB_P_POPVARIABLE, 5, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 00089 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', 'X', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00165) */
/* 00160 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00165 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00194) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00194 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00223) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00223 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00252) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00252 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00279) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00279 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00308) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00308 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00328 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 4,
/* 00341 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00381 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00421 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00462 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 18,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00477 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 19,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00510 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00551 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00592 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 18,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00648 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 19,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00684 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00725 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00766 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', '.', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00807 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'l', 'a', 't', '.', ' ', '[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', '[', 'D', ']', 'e', 't', 'e', 'l', 'h', 'a', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00863 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'[', 'V', ']', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', ' ', '[', 'P', ']', 'a', 'g', 'a', 's', ' ', 'o', 'u', ' ', '[', 'E', ']', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00919 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'a', 'l', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00962 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO_IMP */
/* 00971 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 20,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 00980 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 00992 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MSALDO_INI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_POPLOCALNEAR, 23,	/* MDOC_APAG */
/* 01019 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO_DOC */
/* 01030 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_CONTA */
/* 01042 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* BANK */
	HB_P_POPLOCALNEAR, 16,	/* MTIPO_REL */
/* 01055 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_DET 2*/
	'D', 0, 
/* 01063 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01101) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01106) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 67,	/* 67 */
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01207 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01246) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01251) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 66,	/* 66 */
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01351 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 28,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01422 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01461) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01466) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 144,	/* 144 */
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 130,	/* 130 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', '<', 'P', 'A', '>', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', '<', 'D', 'U', '>', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '<', 'C', 'H', '>', 'c', 'h', 'e', 'q', 'u', 'e', 's', ' ', '<', 'F', 'R', '>', 'f', 'r', 'e', 't', 'e', 's', ' ', 'o', 'u', ' ', 'N', 'A', 'O', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01652 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', 'X', '.', 'X', 'X', 0, 
	HB_P_PUSHBLOCKSHORT, 25,	/* 25 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 29,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01721) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 193,	/* 193 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 181, 0,	/* 181 (abs: 01914) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 166,	/* 166 */
	'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 'o', ' ', 'G', 'r', 'u', 'p', 'o', ' ', 'd', 'a', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 's', 'o', ' ', 'o', ' ', 'p', 'r', 'i', 'm', 'e', 'i', 'r', 'o', ' ', 'd', 'i', 'g', 'i', 't', 'o', ' ', 'd', 'a', ' ', 'c', 'o', 'n', 't', 'a', ',', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 't', 'o', 'd', 'o', ' ', 'o', 's', ' ', 'e', 's', 'p', 'a', 'c', 'o', ' ', 'p', '/', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 't', 'a', ' ', '<', 'F', '9', '>', 'p', '/', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'a', 'n', 'd', 'o', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01931 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01970) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01975) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02024) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 90, 0,	/* 90 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 02114) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02131 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02170) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02175) */
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
	10, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 32,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02223) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 91, 0,	/* 91 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 02314) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02331 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02370) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02375) */
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
	21, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02426 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DET */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02465) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02470) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'D', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02524 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02563) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02568) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', ',', 'P', ',', 'E', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02624 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MSALDO_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02663) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02668) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02716 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 33,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 23, 0,	/* GETLIST */
/* 02738 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 34,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 02784) */
/* 02750 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 36,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 02772 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02779 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02784 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHSYMNEAR, 38,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02827) */
/* 02807 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSYMNEAR, 38,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'1', '1', '/', '1', '1', '/', '1', '1', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 02827 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 38,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02870) */
/* 02850 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHSYMNEAR, 38,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 02870 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 39,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02880 */ HB_P_LINEOFFSET, 73,	/* 83 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_DOSHORT, 2,
/* 02906 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 02912 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_MINUS,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02965) */
/* 02928 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_DOSHORT, 2,
/* 02957 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 211,	/* -45 (abs: 02918) */
/* 02965 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 02971 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 12, 15,	/* 3852 (abs: 06839) */
/* 02990 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 15, 5,	/* 1295 (abs: 04294) */
/* 03002 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_LOCALNEARSETSTR, 5, 52, 0,	/* MTIT 52*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'X', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ')', 0, 
/* 03060 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 03068 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03146 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03177 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 03220) */
/* 03188 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03220 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03274) */
/* 03232 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03274 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03295 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03319 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 03663) */
/* 03334 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 03340 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 49, 1,	/* 305 (abs: 03663) */
/* 03361 */ HB_P_LINEOFFSET, 96,	/* 106 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 03386 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 03489) */
/* 03405 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03435) */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 03653) */
/* 03435 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 03484) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03489) */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 03653) */
/* 03489 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 03539) */
/* 03509 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 03617) */
/* 03539 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 03589) */
/* 03559 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 03617) */
/* 03589 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 03617 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 03645 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 03651 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 03346) */
/* 03663 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 03671 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03741 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03770 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03804 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 03858) */
/* 03815 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03858 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 03910) */
/* 03869 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03910 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 03954) */
/* 03921 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 03954 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03975 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03999 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 2, 11,	/* 2818 (abs: 06829) */
/* 04014 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 04020 */ HB_P_LINEOFFSET, 134,	/* 144 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 04291) */
/* 04041 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04066 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04117) */
/* 04086 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 131, 0,	/* 131 (abs: 04245) */
/* 04117 */ HB_P_LINEOFFSET, 138,	/* 148 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04167) */
/* 04137 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 04245) */
/* 04167 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04217) */
/* 04187 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 04245) */
/* 04217 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 04245 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 04273 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 04279 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 250, 254,	/* -262 (abs: 04026) */
	HB_P_JUMP, 234, 9,	/* 2538 (abs: 06829) */
/* 04294 */ HB_P_LINEOFFSET, 149,	/* 159 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 248, 4,	/* 1272 (abs: 05575) */
/* 04306 */ HB_P_LINEOFFSET, 150,	/* 160 */
	HB_P_LOCALNEARSETSTR, 5, 51, 0,	/* MTIT 51*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'D', 'A', 'S', ' ', 'X', ' ', 'P', 'A', 'G', 'A', 'S', ' ', '(', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', 's', ')', 0, 
/* 04363 */ HB_P_LINEOFFSET, 151,	/* 161 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 04371 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 04451 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 04486 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 04529) */
/* 04497 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 04529 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 04583) */
/* 04541 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 04583 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04604 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04628 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 04972) */
/* 04643 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 04649 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 49, 1,	/* 305 (abs: 04972) */
/* 04670 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04695 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 04798) */
/* 04714 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04744) */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 04962) */
/* 04744 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 04793) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04798) */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 04962) */
/* 04798 */ HB_P_LINEOFFSET, 175,	/* 185 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04848) */
/* 04818 */ HB_P_LINEOFFSET, 176,	/* 186 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 04926) */
/* 04848 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04898) */
/* 04868 */ HB_P_LINEOFFSET, 178,	/* 188 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 04926) */
/* 04898 */ HB_P_LINEOFFSET, 180,	/* 190 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 04926 */ HB_P_LINEOFFSET, 182,	/* 192 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 04954 */ HB_P_LINEOFFSET, 183,	/* 193 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 04960 */ HB_P_LINEOFFSET, 184,	/* 194 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 04655) */
/* 04972 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 04980 */ HB_P_LINEOFFSET, 187,	/* 197 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05052 */ HB_P_LINEOFFSET, 188,	/* 198 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05085 */ HB_P_LINEOFFSET, 189,	/* 199 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 05139) */
/* 05096 */ HB_P_LINEOFFSET, 190,	/* 200 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05139 */ HB_P_LINEOFFSET, 192,	/* 202 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05191) */
/* 05150 */ HB_P_LINEOFFSET, 193,	/* 203 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05191 */ HB_P_LINEOFFSET, 195,	/* 205 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 05235) */
/* 05202 */ HB_P_LINEOFFSET, 196,	/* 206 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05235 */ HB_P_LINEOFFSET, 198,	/* 208 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05256 */ HB_P_LINEOFFSET, 199,	/* 209 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05280 */ HB_P_LINEOFFSET, 200,	/* 210 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 1, 6,	/* 1537 (abs: 06829) */
/* 05295 */ HB_P_LINEOFFSET, 201,	/* 211 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 05301 */ HB_P_LINEOFFSET, 202,	/* 212 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 05572) */
/* 05322 */ HB_P_LINEOFFSET, 203,	/* 213 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05347 */ HB_P_LINEOFFSET, 204,	/* 214 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 05398) */
/* 05367 */ HB_P_LINEOFFSET, 205,	/* 215 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 131, 0,	/* 131 (abs: 05526) */
/* 05398 */ HB_P_LINEOFFSET, 206,	/* 216 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05448) */
/* 05418 */ HB_P_LINEOFFSET, 207,	/* 217 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 05526) */
/* 05448 */ HB_P_LINEOFFSET, 208,	/* 218 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05498) */
/* 05468 */ HB_P_LINEOFFSET, 209,	/* 219 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 05526) */
/* 05498 */ HB_P_LINEOFFSET, 211,	/* 221 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 05526 */ HB_P_LINEOFFSET, 213,	/* 223 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 05554 */ HB_P_LINEOFFSET, 214,	/* 224 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 05560 */ HB_P_LINEOFFSET, 215,	/* 225 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 250, 254,	/* -262 (abs: 05307) */
	HB_P_JUMP, 233, 4,	/* 1257 (abs: 06829) */
/* 05575 */ HB_P_LINEOFFSET, 218,	/* 228 */
	HB_P_LOCALNEARSETSTR, 5, 48, 0,	/* MTIT 48*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'D', 'A', 'S', ' ', 'X', ' ', 'P', 'A', 'G', 'A', 'S', ' ', '(', 'E', 'm', 'i', 's', 's', 'a', 'o', ')', 0, 
/* 05629 */ HB_P_LINEOFFSET, 219,	/* 229 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 05637 */ HB_P_LINEOFFSET, 220,	/* 230 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05718 */ HB_P_LINEOFFSET, 222,	/* 232 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05761) */
/* 05729 */ HB_P_LINEOFFSET, 223,	/* 233 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05761 */ HB_P_LINEOFFSET, 225,	/* 235 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 05815) */
/* 05773 */ HB_P_LINEOFFSET, 226,	/* 236 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 05815 */ HB_P_LINEOFFSET, 228,	/* 238 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05836 */ HB_P_LINEOFFSET, 229,	/* 239 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05860 */ HB_P_LINEOFFSET, 230,	/* 240 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 06204) */
/* 05875 */ HB_P_LINEOFFSET, 231,	/* 241 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 05881 */ HB_P_LINEOFFSET, 232,	/* 242 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 49, 1,	/* 305 (abs: 06204) */
/* 05902 */ HB_P_LINEOFFSET, 233,	/* 243 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05927 */ HB_P_LINEOFFSET, 235,	/* 245 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 06030) */
/* 05946 */ HB_P_LINEOFFSET, 236,	/* 246 */
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05976) */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 06194) */
/* 05976 */ HB_P_LINEOFFSET, 239,	/* 249 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 06025) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06030) */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 06194) */
/* 06030 */ HB_P_LINEOFFSET, 243,	/* 253 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 06080) */
/* 06050 */ HB_P_LINEOFFSET, 244,	/* 254 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 06158) */
/* 06080 */ HB_P_LINEOFFSET, 245,	/* 255 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 06130) */
/* 06100 */ HB_P_LINEOFFSET, 246,	/* 256 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 06158) */
/* 06130 */ HB_P_LINEOFFSET, 248,	/* 258 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 06158 */ HB_P_LINEOFFSET, 250,	/* 260 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 06186 */ HB_P_LINEOFFSET, 251,	/* 261 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 06192 */ HB_P_LINEOFFSET, 252,	/* 262 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 05887) */
/* 06204 */ HB_P_LINEOFFSET, 254,	/* 264 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_DUP */
/* 06212 */ HB_P_LINEOFFSET, 255,	/* 265 */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 06285 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 06320 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 06376) */
/* 06332 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 06376 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 06430) */
/* 06388 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 06430 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 06476) */
/* 06442 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 06476 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06498 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06523 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 37, 1,	/* 293 (abs: 06829) */
/* 06539 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 47, 0,	/* X */
/* 06546 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 8, 1,	/* 264 (abs: 06829) */
/* 06568 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 06594 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 06647) */
/* 06615 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 136, 0,	/* 136 (abs: 06780) */
/* 06647 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06699) */
/* 06668 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 06780) */
/* 06699 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06751) */
/* 06720 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 31,	/* 31 (abs: 06780) */
/* 06751 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 06780 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 41, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 06809 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 06816 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 47, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 47, 0,	/* X */
	HB_P_JUMP, 239, 254,	/* -273 (abs: 06553) */
/* 06829 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMP, 237, 240,	/* -3859 (abs: 02977) */
/* 06839 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 51,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'P', 'A', 'G', 'X', 'R', 'E', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 06871) */
	HB_P_JUMP, 238, 232,	/* -5906 (abs: 00962) */
/* 06871 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIPO */
/* 06898 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 06905 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 06912 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 17,	/* MSALDO_INI */
	HB_P_POPLOCALNEAR, 14,	/* MSALDO */
/* 06919 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06934 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06949 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 181, 1,	/* 437 (abs: 07396) */
/* 06962 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'R', ' ', 'E', ' ', 'C', ' ', 'E', ' ', 'B', ' ', 'E', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'A', ' ', 'G', ' ', 'A', ' ', 'R', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07092 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'a', 'r', 't', 'a', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 07254 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07288 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'A', 'L', 'D', 'O', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'D', 'O', ' ', 'P', 'E', 'L', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 07350 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 124,	/* 124 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 241, 0,	/* 241 (abs: 07634) */
/* 07396 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 07495 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07529 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'A', 'L', 'D', 'O', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'D', 'O', ' ', 'P', 'E', 'L', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 07591 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07634 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 07641 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 9, 6,	/* 1545 (abs: 09203) */
/* 07661 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 07681) */
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 26, 2,	/* 538 (abs: 08219) */
/* 07684 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 07696 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07714) */
/* 07706 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07714 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 52,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07729 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 53,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07744 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 08086) */
/* 07757 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'R', ' ', 'E', ' ', 'C', ' ', 'E', ' ', 'B', ' ', 'E', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'A', ' ', 'G', ' ', 'A', ' ', 'R', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07887 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'a', 'r', 't', 'a', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08049 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 136, 0,	/* 136 (abs: 08219) */
/* 08086 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08185 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08219 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 08252) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08257) */
	HB_P_JUMP, 174, 3,	/* 942 (abs: 09196) */
/* 08257 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08286 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 2,	/* 605 (abs: 08901) */
/* 08299 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08351 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08403 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08455 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08507 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08561 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08613 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08665 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08717 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08771 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08832 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 238, 0,	/* 238 (abs: 09136) */
/* 08901 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08955 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09009 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09070 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09136 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSALDO */
/* 09161 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_REC */
/* 09177 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_APA */
/* 09193 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMP, 240, 249,	/* -1552 (abs: 07648) */
/* 09203 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 09248 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 09534) */
/* 09261 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09396 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDOC_APAG */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 17, 1,	/* 273 (abs: 09804) */
/* 09534 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09669 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDOC_APAG */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09804 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09907 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10027 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10054 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10062 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 60,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10072 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 61,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10114 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 62,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'P', 'A', 'G', 'X', 'R', 'E', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 10137 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 37,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10145 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10151 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

