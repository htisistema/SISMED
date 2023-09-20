/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON422.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON422.PRG /q /oC:\HTI\SISMED\CON422.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:51 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON422.PRG"

HB_FUNC( CON422 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( RANGECHECK );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON422 )
{ "CON422", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON422 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTT_DIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "RANGECHECK", {HB_FS_PUBLIC}, {HB_FUNCNAME( RANGECHECK )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON422 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON422
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON422 = hb_vm_SymbolInit_CON422;
   #pragma data_seg()
#endif

HB_FUNC( CON422 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 56, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '2', 0, 
	HB_P_LOCALNEARSETSTR, 36, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 38, 2, 0,	/* MLOC_PG 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 39,	/* MAREA */
	HB_P_LOCALNEARSETINT, 52, 0, 0,	/* MPONTO 0*/
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 55, 0, 0,	/* Y 0*/
	HB_P_LOCALNEARSETSTR, 56, 2, 0,	/* MTIPO_BAIXA 2*/
	' ', 0, 
/* 00057 */ HB_P_LINEOFFSET, 2,	/* 15 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 16,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MCPF */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 7,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 9,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ */
	HB_P_PUSHSYMNEAR, 12,	/* MTT_DIA */
	HB_P_PUSHSYMNEAR, 13,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 14,	/* CONS_DOC */
	HB_P_PUSHSYMNEAR, 15,	/* CONS_CLI */
	HB_P_DOSHORT, 14,
	HB_P_POPVARIABLE, 15, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 14, 0,	/* CONS_DOC */
	HB_P_POPVARIABLE, 13, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 12, 0,	/* MTT_DIA */
	HB_P_POPVARIABLE, 11, 0,	/* MARQ */
	HB_P_POPVARIABLE, 10, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_FORN */
/* 00139 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'C', '/', 'B', 'A', 'I', 'X', 'A', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00218) */
/* 00213 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00218 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00247) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00247 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00274) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00274 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00303) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00303 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00332) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00332 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_POPLOCALNEAR, 46,	/* LCI */
/* 00342 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_LOCALNEARSETINT, 48, 20, 0,	/* LBA 20*/
/* 00348 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_LOCALNEARSETINT, 49, 79, 0,	/* CBA 79*/
/* 00354 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 00363 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', ' ', 'c', 'o', 'm', ' ', 'B', 'A', 'I', 'X', 'A', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00411 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00450 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00509 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00568 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', '.', ' ', 'F', 'o', 'r', 'n', '.', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00627 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00686 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00745 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00804 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00863 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00922 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'A', 'r', 'e', 'a', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00981 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'o', ' ', 'D', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01040 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01099 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', '[', 'N', ']', 'o', 'm', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'C', ']', 'o', 'r', 'r', 'e', 'n', 't', 'i', 's', 't', 'a', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01158 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'i', 'x', 'a', ' ', '(', 'V', 'e', 'r', ' ', 'M', 'e', 'n', 's', 'a', 'g', 'e', 'm', ')', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01217 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01276 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01307 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* MQUANTD 1*/
/* 01313 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHMEMVAR, 24, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 01320 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHMEMVAR, 24, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 01330 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 34,	/* BANK */
/* 01340 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_LOCALNEARSETSTR, 54, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 54,	/* MTIPO_DOC */
	HB_P_POPLOCALNEAR, 36,	/* MTIP_PG */
/* 01353 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_LOCALNEARSETSTR, 56, 2, 0,	/* MTIPO_BAIXA 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_BAIXA */
	HB_P_POPLOCALNEAR, 38,	/* MLOC_PG */
/* 01365 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 51,	/* MCOD_OPER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_POPLOCALNEAR, 37,	/* MCOD_VEND */
/* 01381 */ HB_P_LINEOFFSET, 43,	/* 56 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MTT_DIA */
/* 01390 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 45,	/* MLIN6 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 44,	/* MLIN5 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 43,	/* MLIN4 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 42,	/* MLIN3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MLIN2 */
	HB_P_POPLOCALNEAR, 40,	/* MLIN1 */
/* 01416 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_LOCALNEARSETSTR, 50, 2, 0,	/* MTIP_NOME 2*/
	'N', 0, 
/* 01424 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 29,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01517 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 31,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01610 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 01632 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01656) */
/* 01644 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01651 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01656 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_PUSHSYMNEAR, 31,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 3,
/* 01676 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01721) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01726) */
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
	3, 0,	/* T_INI */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01757) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01758) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01776 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01821) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01826) */
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
	4, 0,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01857) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01858) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01876 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01921) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01926) */
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
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01960 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02005) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02010) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	37, 0,	/* MCOD_VEND */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02068) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 100, 0,	/* 100 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 82,	/* 82 (abs: 02168) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02185 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MCOD_OPER */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02230) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02235) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	51, 0,	/* MCOD_OPER */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02293) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 100, 0,	/* 100 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 82,	/* 82 (abs: 02393) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02410 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02455) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02460) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 86, 0,	/* 86 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'R', 'E', 'A', ' ', 'd', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02584 */ HB_P_LINEOFFSET, 60,	/* 73 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 't', '_', 'd', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MTT_DIA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02656 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	54, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02701) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02706) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	54, 0,	/* MTIPO_DOC */
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
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02762 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MTIP_NOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02807) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02812) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', '_', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MTIP_NOME */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02866 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	56, 0,	/* MTIPO_BAIXA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02911) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02916) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'b', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	56, 0,	/* MTIPO_BAIXA */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', ',', 'V', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02965) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 97, 0,	/* 97 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* LCI */
	47, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', '[', 'P', ']', 'D', 'o', 'c', '.', 'P', 'a', 'g', 'o', 's', ' ', '-', ' ', '[', 'V', ']', 'e', 'n', 'c', 'i', 'd', 'o', 's', '/', 'V', 'e', 'n', 'c', 'e', 'r', ' ', '-', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03079 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03124) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03129) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 40,	/* RANGECHECK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03180 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* MLIN1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03225) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03230) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03258 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MLIN2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03303) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03308) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03336 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MLIN3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03381) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03386) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '3', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03414 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MLIN4 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03459) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03464) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '4', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03492 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MLIN5 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03537) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03542) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '5', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03570 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* LCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_PUSHLOCALNEAR, 47,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MLIN6 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03615) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03620) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'l', 'i', 'n', '6', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03648 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 03670 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03694) */
/* 03682 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03689 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03694 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_LOCALNEARSETSTR, 7, 2, 0,	/* L_MES 2*/
	' ', 0, 
/* 03702 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* TP_MES */
	HB_P_POPLOCALNEAR, 8,	/* TD_MES */
/* 03712 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_LOCALNEARSETSTR, 29, 47, 0,	/* MTIT 47*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'C', '/', 'B', 'A', 'I', 'X', 'A', 'S', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03765 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_BAIXA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 03798) */
/* 03776 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'D', 'o', 'c', '.', 'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MTIT */
	HB_P_JUMPNEAR, 66,	/* 66 (abs: 03862) */
/* 03798 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_BAIXA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 03841) */
/* 03809 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'D', 'o', 'c', '.', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MTIT */
	HB_P_JUMPNEAR, 23,	/* 23 (abs: 03862) */
/* 03841 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'D', 'o', 'c', '.', ' ', 'G', 'E', 'R', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MTIT */
/* 03862 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* CONS_DOC */
/* 03870 */ HB_P_LINEOFFSET, 87,	/* 100 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 03957 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_BAIXA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04003) */
/* 03968 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04003 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_BAIXA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04045) */
/* 04014 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04045 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 04101) */
/* 04057 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04101 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 04155) */
/* 04112 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04155 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04200) */
/* 04166 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04200 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 04254) */
/* 04212 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04254 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 04297) */
/* 04265 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04297 */ HB_P_LINEOFFSET, 109,	/* 122 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 04352) */
/* 04308 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'o', 'p', 'e', 'r', '_', 'p', 'a', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04352 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 04395) */
/* 04363 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04395 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ',', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04433 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 14, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04454 */ HB_P_LINEOFFSET, 117,	/* 130 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04478 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 04542) */
/* 04492 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 224, 239,	/* -4128 (abs: 00411) */
/* 04542 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_PUSHSYMNEAR, 48,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'B', 'A', 'I', 'X', '_', 'P', 'A', 'R', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 04583) */
/* 04571 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04578 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04583 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'o', 'n', 0, 
	HB_P_DOSHORT, 2,
/* 04597 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* I 0*/
/* 04603 */ HB_P_LINEOFFSET, 129,	/* 142 */
	HB_P_LOCALNEARSETINT, 53, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 53,	/* I */
	HB_P_PUSHLOCALNEAR, 28,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 242, 11,	/* 3058 (abs: 07672) */
/* 04617 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 50,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 04646) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 04657) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 04659 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MT_DIA 0*/
	HB_P_PUSHLOCALNEAR, 33,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 11,	/* PAG */
/* 04717 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MDIA */
/* 04729 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 04794) */
/* 04740 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04820) */
/* 04794 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIPO */
/* 04820 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 04832 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_LOCALNEARSETINT, 55, 0, 0,	/* Y 0*/
/* 04838 */ HB_P_LINEOFFSET, 142,	/* 155 */
	HB_P_LOCALNEARSETINT, 55, 1, 0,	/* Y 1*/
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 116, 9,	/* 2420 (abs: 07275) */
/* 04858 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHLOCALNEAR, 11,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04876) */
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 115, 2,	/* 627 (abs: 05503) */
/* 04879 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* PAG 1*/
/* 04885 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_PUSHLOCALNEAR, 11,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04900) */
/* 04893 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_PUSHSYMNEAR, 53,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04900 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* PAG */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04915 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 04929 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MLIN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 04963) */
/* 04940 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MLIN1 */
	HB_P_DOSHORT, 1,
/* 04963 */ HB_P_LINEOFFSET, 153,	/* 166 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MLIN2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 04997) */
/* 04974 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MLIN2 */
	HB_P_DOSHORT, 1,
/* 04997 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MLIN3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 05031) */
/* 05008 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MLIN3 */
	HB_P_DOSHORT, 1,
/* 05031 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MLIN4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 05065) */
/* 05042 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MLIN4 */
	HB_P_DOSHORT, 1,
/* 05065 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MLIN5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 05099) */
/* 05076 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MLIN5 */
	HB_P_DOSHORT, 1,
/* 05099 */ HB_P_LINEOFFSET, 165,	/* 178 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MLIN6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 05133) */
/* 05110 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MLIN6 */
	HB_P_DOSHORT, 1,
/* 05133 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05147 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MLIN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 05177) */
/* 05158 */ HB_P_LINEOFFSET, 170,	/* 183 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05177 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_PUSHLOCALNEAR, 50,	/* MTIP_NOME */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 0,	/* 152 (abs: 05338) */
/* 05189 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 137,	/* 137 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'V', 'e', 'n', 'c', '.', ' ', ' ', 'V', 'l', 'r', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'B', 'a', 'i', 'x', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 149, 0,	/* 149 (abs: 05484) */
/* 05338 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 137,	/* 137 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'o', 'r', 'r', 'e', 'n', 't', 'i', 's', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'V', 'e', 'n', 'c', '.', ' ', ' ', 'V', 'l', 'r', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'B', 'a', 'i', 'x', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05484 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05503 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 15, 0,	/* CONS_CLI */
/* 05511 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 05571 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 15, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05592 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05616 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 05674) */
/* 05630 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* CONS_CLI */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'N', 'A', 'O', ' ', 'E', 'N', 'C', 'O', 'N', 'T', 'R', 'A', 'D', 'O', 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 05674 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 05703) */
/* 05685 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHLOCALNEAR, 39,	/* MAREA */
	HB_P_PUSHMEMVAR, 15, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05703) */
	HB_P_JUMP, 32, 6,	/* 1568 (abs: 07268) */
/* 05703 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 32,	/* MDIA */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05729) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTT_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 115,	/* 115 (abs: 05844) */
/* 05731 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHLOCALNEAR, 33,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 05825) */
/* 05739 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05777 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05825 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MT_DIA 0*/
/* 05831 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MDIA */
/* 05844 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 7,	/* L_MES */
	HB_P_PUSHSYMNEAR, 60,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05884) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTT_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 05936) */
/* 05886 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 60,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* L_MES */
/* 05913 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05920 */ HB_P_LINEOFFSET, 202,	/* 215 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 05929 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05936 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05966 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHLOCALNEAR, 50,	/* MTIP_NOME */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 06017) */
/* 05977 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 06061) */
/* 06017 */ HB_P_LINEOFFSET, 209,	/* 222 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06061 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06112 */ HB_P_LINEOFFSET, 212,	/* 225 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 06151 */ HB_P_LINEOFFSET, 213,	/* 226 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06206 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06240 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_PUSHSYMNEAR, 31,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 06274 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 58,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 06313 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* TOT_DUP 1*/
/* 06319 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHLOCALNEAR, 19,	/* VLR_DUP */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* VLR_DUP */
/* 06335 */ HB_P_LINEOFFSET, 219,	/* 232 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* MTOT_DUP 1*/
/* 06341 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHLOCALNEAR, 25,	/* MVLR_DUP */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* MVLR_DUP */
/* 06357 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHLOCALNEAR, 33,	/* MT_DIA */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MT_DIA */
/* 06373 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 7,	/* L_MES */
	HB_P_PUSHSYMNEAR, 60,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 55,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 06413) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTT_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 85, 3,	/* 853 (abs: 07266) */
/* 06416 */ HB_P_LINEOFFSET, 223,	/* 236 */
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_LESS,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 06730) */
/* 06429 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06458 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06465 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06550 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06635 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06720 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 5, 2,	/* 517 (abs: 07244) */
/* 06730 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 53,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06737 */ HB_P_LINEOFFSET, 232,	/* 245 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* PAG 1*/
/* 06743 */ HB_P_LINEOFFSET, 233,	/* 246 */
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* PAG */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06758 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 137,	/* 137 */
	'C', 'o', 'd', '.', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'V', 'e', 'n', 'c', '.', ' ', ' ', 'V', 'l', 'r', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', '.', 'B', 'a', 'i', 'x', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 06904 */ HB_P_LINEOFFSET, 235,	/* 248 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06918 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06937 */ HB_P_LINEOFFSET, 237,	/* 250 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06944 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 06953 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06982 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06989 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07074 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07159 */ HB_P_LINEOFFSET, 243,	/* 256 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07244 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* VLR_DES 0*/
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_JUR */
	HB_P_POPLOCALNEAR, 16,	/* TOT_DUP */
/* 07266 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_LOCALNEARADDINT, 55, 1, 0,	/* Y 1*/
	HB_P_JUMP, 132, 246,	/* -2428 (abs: 04844) */
/* 07275 */ HB_P_LINEOFFSET, 248,	/* 261 */
	HB_P_PUSHSYMNEAR, 52,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 07304) */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* PAG 1*/
	HB_P_PUSHSYMNEAR, 54,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* PAG */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 07304 */ HB_P_LINEOFFSET, 249,	/* 262 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07311 */ HB_P_LINEOFFSET, 250,	/* 263 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07318 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07332 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 07360 */ HB_P_LINEOFFSET, 253,	/* 266 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07367 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MVLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07452 */ HB_P_LINEOFFSET, 255,	/* 268 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MVLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07537 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MVLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07623 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07631 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 56,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 07644 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 53,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07652 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 63,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 07662 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_LOCALNEARADDINT, 53, 1, 0,	/* I 1*/
	HB_P_JUMP, 12, 244,	/* -3060 (abs: 04609) */
/* 07672 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 07714 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 64,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'B', 'A', 'I', 'X', '_', 'P', 'A', 'R', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 97, 227,	/* -7327 (abs: 00411) */
	HB_P_ENDPROC
/* 07742 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

