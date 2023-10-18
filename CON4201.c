/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON4201.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON4201.PRG /q /oC:\HTI\SISMED\CON4201.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:42 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON4201.PRG"

HB_FUNC( CON4201 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_UF );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON4201 )
{ "CON4201", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON4201 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_UF )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON4201 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON4201
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON4201 = hb_vm_SymbolInit_CON4201;
   #pragma data_seg()
#endif

HB_FUNC( CON4201 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'C', 'O', 'N', '4', '2', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MAREA */
	HB_P_LOCALNEARSETSTR, 11, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOT_CLI 0*/
	HB_P_LOCALNEARSETSTR, 13, 3, 0,	/* MUF 3*/
	' ', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* CCOMM 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* CONS_PED */
/* 00065 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 3,	/* MCOM_VEND */
	HB_P_PUSHSYMNEAR, 4,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 5,	/* MCGC */
	HB_P_PUSHSYMNEAR, 6,	/* MCPF */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 10,	/* MCOD_VEND */
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
/* 00104 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 12,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'S', 'E', 'M', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 13, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00178) */
/* 00173 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00178 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00207) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00207 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 14,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00234) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00234 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 's', 'e', 'm', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00273 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00324 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '/', 'R', 'e', 'p', 'r', 'e', 's', 'e', 'n', 't', 'a', 'n', 't', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00375 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00427 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00479 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00531 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00540 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 10, 0,	/* MCOD_VEND */
/* 00546 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MCLIENTE */
/* 00558 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MCIDADE */
/* 00569 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MAREA */
/* 00580 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MUF */
/* 00591 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00629) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00634) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 22,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 160,	/* 160 */
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00836 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 25,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00905 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00944) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00949) */
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
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00983 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01022) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01027) */
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
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01059 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01098) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01103) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MUF */
	HB_P_PUSHSYMNEAR, 26,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01149 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 20, 0,	/* GETLIST */
/* 01171 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01186) */
	HB_P_JUMP, 31, 8,	/* 2079 (abs: 03262) */
/* 01186 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_LOCALNEARSETSTR, 5, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 01232 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_LOCALNEARSETSTR, 6, 40, 0,	/* MTIPO 40*/
	'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'S', 'E', 'M', ' ', 'D', 'E', 'B', 'I', 'T', 'O', 'S', ' ', '(', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ')', 0, 
/* 01278 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 01316) */
/* 01289 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'D', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MUF */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIPO */
/* 01316 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* CONS_CLI */
/* 01323 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_LOCALNEARSETSTR, 15, 47, 0,	/* CCOMM 47*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 01376 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01419) */
/* 01387 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* CCOMM */
/* 01419 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 01460) */
/* 01430 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* CCOMM */
/* 01460 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 01499) */
/* 01471 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'D', ' ', 'u', 'f', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* CCOMM */
/* 01499 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 01540) */
/* 01510 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* CCOMM */
/* 01540 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* CCOMM */
/* 01565 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 15,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 14, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01585 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01609 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 01663) */
/* 01622 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 160, 251,	/* -1120 (abs: 00540) */
/* 01663 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01694) */
	HB_P_JUMP, 129, 251,	/* -1151 (abs: 00540) */
/* 01694 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_POPLOCALNEAR, 4,	/* PAG */
/* 01703 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 252, 4,	/* 1276 (abs: 02996) */
/* 01723 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSYMNEAR, 37,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01759 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* CONS_DUP */
/* 01766 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 16, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01858 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01882 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01898) */
	HB_P_JUMP, 67, 4,	/* 1091 (abs: 02986) */
/* 01898 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01916) */
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 02220) */
/* 01919 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 01925 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01940) */
/* 01933 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHSYMNEAR, 39,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01940 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHSYMNEAR, 40,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 01955 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01969 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 02034) */
/* 01978 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 42,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 2, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02034 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 130,	/* 130 */
	'C', 'o', 'd', '.', ' ', ' ', 'R', 'a', 'z', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'U', 'l', 't', '.', 'C', 'o', 'm', 'p', ' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', 'V', 'l', 'r', '.', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'A', 'c', 'u', 'm', ' ', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 02187 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02220 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02250 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02284 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 02326 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* CONS_DUP */
/* 02333 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ',', 'M', 'A', 'X', '(', 'n', 'u', 'm', '_', 'p', 'e', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 16, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02428 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02452 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* CONS_PED */
/* 02459 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 17, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02554 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02578 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02630) */
/* 02591 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 02666) */
/* 02630 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02666 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02698 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* CONS_PED */
/* 02705 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 84,	/* 84 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 17, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02822 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02846 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02895 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* CONS_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02944 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 44,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02978 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* MTOT_CLI 1*/
/* 02984 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHVARIABLE, 36, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 36, 0,	/* I */
	HB_P_JUMP, 252, 250,	/* -1284 (abs: 01709) */
/* 02996 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03034) */
/* 03008 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 39,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03015 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_LOCALNEARADDINT, 4, 1, 0,	/* PAG 1*/
/* 03021 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 40,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03034 */ HB_P_LINEOFFSET, 126,	/* 136 */
	HB_P_PUSHSYMNEAR, 41,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03048 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 03092 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CLI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03157 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 03183 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_PUSHSYMNEAR, 39,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03190 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_PUSHSYMNEAR, 49,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03199 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 03240 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 51,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'L', 'I', '_', 'D', 'E', 'B', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 03262 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHSYMNEAR, 52,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03269 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03274 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

