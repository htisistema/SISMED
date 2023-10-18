/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED580.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED580.PRG /q /oC:\HTI\SISMED\SMED580.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:37 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED580.PRG"

HB_FUNC( SMED580 );
HB_FUNC( SMED581 );
HB_FUNC( SMED582 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( APAGA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( CABEC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( RODAPE );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED580 )
{ "SMED580", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED580 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "APAGA", {HB_FS_PUBLIC}, {HB_FUNCNAME( APAGA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SMED581", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SMED581 )}, NULL },
{ "SMED582", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SMED582 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "TRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CABEC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABEC )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "LINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "RODAPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( RODAPE )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED580 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED580
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED580 = hb_vm_SymbolInit_SMED580;
   #pragma data_seg()
#endif

HB_FUNC( SMED580 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '5', '8', '0', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHSYMNEAR, 2,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00081 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00090 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00098 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'p', '/', 'P', 'a', 'c', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'*', '*', ' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'a', 'c', 'i', 'e', 'n', 't', 'e', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00204 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'p', '/', 'A', 'c', 'o', 'm', 'p', 'a', 'n', 'h', 'a', 'n', 't', 'e', ' ', 0, 
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'*', '*', ' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'p', 'a', 'r', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'A', 'c', 'o', 'm', 'p', 'a', 'n', 'h', 'a', 't', 'e', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00314 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00328 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00355) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00360) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00373 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00387) */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00425) */
/* 00387 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00405) */
/* 00395 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 10,	/* SMED581 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 178, 254,	/* -334 (abs: 00068) */
/* 00405 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 168, 254,	/* -344 (abs: 00068) */
/* 00415 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 11,	/* SMED582 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 158, 254,	/* -354 (abs: 00068) */
/* 00425 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00432 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00437 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SMED581 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 41, 0,	/* 41 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '5', '8', '1', 0, 
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* LINHAS 0*/
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MQTD 0*/
/* 00026 */ HB_P_LINEOFFSET, 2,	/* 43 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 14,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 15,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 16,	/* MARQ */
	HB_P_PUSHSYMNEAR, 18,	/* TRACO */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 16, 0,	/* MARQ */
	HB_P_POPVARIABLE, 14, 0,	/* MIMP_TIPO */
/* 00057 */ HB_P_LINEOFFSET, 5,	/* 46 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MTIPO_IMP */
/* 00066 */ HB_P_LINEOFFSET, 7,	/* 48 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'D', 'E', 'C', 'L', 'A', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'M', 'P', 'A', 'R', 'E', 'C', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00114 */ HB_P_LINEOFFSET, 9,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00127 */ HB_P_LINEOFFSET, 10,	/* 51 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00136 */ HB_P_LINEOFFSET, 11,	/* 52 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00150 */ HB_P_LINEOFFSET, 12,	/* 53 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MPERIODO */
/* 00161 */ HB_P_LINEOFFSET, 13,	/* 54 */
	HB_P_PUSHSYMNEAR, 21,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MDATA */
/* 00181 */ HB_P_LINEOFFSET, 14,	/* 55 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MNOME */
/* 00192 */ HB_P_LINEOFFSET, 15,	/* 56 */
	HB_P_LOCALNEARSETSTR, 3, 10, 0,	/* LIN1 10*/
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
/* 00208 */ HB_P_LINEOFFSET, 16,	/* 57 */
	HB_P_LOCALNEARSETSTR, 4, 42, 0,	/* LIN2 42*/
	' ', 'c', 'o', 'm', 'p', 'a', 'r', 'e', 'c', 'e', 'u', ' ', 'a', 'o', ' ', 'm', 'e', 'u', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'o', 'r', 'i', 'o', ' ', ' ', 'n', 'o', ' ', ' ', 'd', 'i', 'a', ' ', ' ', 0, 
/* 00256 */ HB_P_LINEOFFSET, 17,	/* 58 */
	HB_P_LOCALNEARSETSTR, 5, 14, 0,	/* LIN3 14*/
	' ', ' ', 'D', 'u', 'r', 'a', 'n', 't', 'e', ' ', 'o', ' ', ' ', 0, 
/* 00276 */ HB_P_LINEOFFSET, 18,	/* 59 */
	HB_P_LOCALNEARSETSTR, 6, 14, 0,	/* LIN4 14*/
	' ', ' ', 'e', 'x', 'p', 'e', 'd', 'i', 'e', 'n', 't', 'e', '.', 0, 
/* 00296 */ HB_P_LINEOFFSET, 19,	/* 60 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* I */
	HB_P_POPLOCALNEAR, 15,	/* MQTD */
/* 00306 */ HB_P_LINEOFFSET, 20,	/* 61 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 00316 */ HB_P_LINEOFFSET, 21,	/* 62 */
	HB_P_PUSHSYMNEAR, 22,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 18, 0,	/* TRACO */
/* 00332 */ HB_P_LINEOFFSET, 22,	/* 63 */
	HB_P_PUSHSYMNEAR, 2,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00346 */ HB_P_LINEOFFSET, 23,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00400 */ HB_P_LINEOFFSET, 24,	/* 65 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00408 */ HB_P_LINEOFFSET, 25,	/* 66 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'o', 'm', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00444 */ HB_P_LINEOFFSET, 26,	/* 67 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00481 */ HB_P_LINEOFFSET, 27,	/* 68 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'x', 'p', 'e', 'd', 'i', 'e', 'n', 't', 'e', ' ', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00518 */ HB_P_LINEOFFSET, 28,	/* 69 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00555 */ HB_P_LINEOFFSET, 29,	/* 70 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00593) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00598) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00630 */ HB_P_LINEOFFSET, 30,	/* 71 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 00652 */ HB_P_LINEOFFSET, 31,	/* 72 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00667) */
	HB_P_JUMP, 219, 3,	/* 987 (abs: 01651) */
/* 00667 */ HB_P_LINEOFFSET, 34,	/* 75 */
	HB_P_PUSHSYMNEAR, 32,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 9,	/* MDATA */
/* 00676 */ HB_P_LINEOFFSET, 35,	/* 76 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00715) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00720) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00758 */ HB_P_LINEOFFSET, 36,	/* 77 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MPERIODO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00797) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00802) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00837 */ HB_P_LINEOFFSET, 37,	/* 78 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 00859 */ HB_P_LINEOFFSET, 38,	/* 79 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00874) */
	HB_P_JUMP, 11, 253,	/* -757 (abs: 00114) */
/* 00874 */ HB_P_LINEOFFSET, 41,	/* 82 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00902 */ HB_P_LINEOFFSET, 42,	/* 83 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MQTD 1*/
/* 00908 */ HB_P_LINEOFFSET, 43,	/* 84 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00947) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00952) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MQTD */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00985) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00986) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01004 */ HB_P_LINEOFFSET, 44,	/* 85 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 01026 */ HB_P_LINEOFFSET, 45,	/* 86 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01066 */ HB_P_LINEOFFSET, 46,	/* 87 */
	HB_P_PUSHSYMNEAR, 34,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01088) */
	HB_P_JUMP, 53, 252,	/* -971 (abs: 00114) */
/* 01088 */ HB_P_LINEOFFSET, 49,	/* 90 */
	HB_P_PUSHLOCALNEAR, 3,	/* LIN1 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01105) */
	HB_P_PUSHLOCALNEAR, 14,	/* MNOME */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01112) */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN2 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* LIN3 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MPERIODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01140) */
	HB_P_PUSHLOCALNEAR, 11,	/* MPERIODO */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01147) */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MPERIODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN4 */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* MDECLARA */
/* 01153 */ HB_P_LINEOFFSET, 50,	/* 91 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* I */
	HB_P_PUSHLOCALNEAR, 15,	/* MQTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 1,	/* 426 (abs: 01590) */
/* 01167 */ HB_P_LINEOFFSET, 51,	/* 92 */
	HB_P_PUSHSYMNEAR, 37,	/* CABEC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01174 */ HB_P_LINEOFFSET, 52,	/* 93 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'E', 'C', 'L', 'A', 'R', 'A', 'C', 'A', 'O', ' ', ' ', 'D', 'E', ' ', ' ', 'C', 'O', 'M', 'P', 'A', 'R', 'E', 'C', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01230 */ HB_P_LINEOFFSET, 53,	/* 94 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01256 */ HB_P_LINEOFFSET, 55,	/* 96 */
	HB_P_PUSHSYMNEAR, 39,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDECLARA */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* LINHAS */
/* 01269 */ HB_P_LINEOFFSET, 57,	/* 98 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 01377) */
/* 01283 */ HB_P_LINEOFFSET, 58,	/* 99 */
	HB_P_PUSHSYMNEAR, 41,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDECLARA */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 2,	/* LIN */
/* 01302 */ HB_P_LINEOFFSET, 59,	/* 100 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PADR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01339 */ HB_P_LINEOFFSET, 60,	/* 101 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01366 */ HB_P_LINEOFFSET, 61,	/* 102 */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 40, 0,	/* LINHA */
	HB_P_JUMPNEAR, 156,	/* -100 (abs: 01275) */
/* 01377 */ HB_P_LINEOFFSET, 63,	/* 104 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'e', 'c', 'i', 'f', 'e', ',', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01410 */ HB_P_LINEOFFSET, 64,	/* 105 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01432 */ HB_P_LINEOFFSET, 65,	/* 106 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01483 */ HB_P_LINEOFFSET, 66,	/* 107 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01525 */ HB_P_LINEOFFSET, 67,	/* 108 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01567 */ HB_P_LINEOFFSET, 68,	/* 109 */
	HB_P_PUSHSYMNEAR, 47,	/* RODAPE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01574 */ HB_P_LINEOFFSET, 69,	/* 110 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01581 */ HB_P_LINEOFFSET, 70,	/* 111 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* I 1*/
	HB_P_JUMP, 84, 254,	/* -428 (abs: 01159) */
/* 01590 */ HB_P_LINEOFFSET, 71,	/* 112 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01631 */ HB_P_LINEOFFSET, 72,	/* 113 */
	HB_P_PUSHSYMNEAR, 49,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 2, 250,	/* -1534 (abs: 00114) */
/* 01651 */ HB_P_LINEOFFSET, 74,	/* 115 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01658 */ HB_P_LINEOFFSET, 75,	/* 116 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01663 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SMED582 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 124, 0,	/* 124 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '5', '8', '2', 0, 
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* LINHAS 0*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MQTD 0*/
/* 00026 */ HB_P_LINEOFFSET, 2,	/* 126 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 14,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 15,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 16,	/* MARQ */
	HB_P_PUSHSYMNEAR, 18,	/* TRACO */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 16, 0,	/* MARQ */
	HB_P_POPVARIABLE, 14, 0,	/* MIMP_TIPO */
/* 00057 */ HB_P_LINEOFFSET, 5,	/* 129 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MTIPO_IMP */
/* 00066 */ HB_P_LINEOFFSET, 7,	/* 131 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'D', 'E', 'C', 'L', 'A', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'M', 'P', 'A', 'R', 'E', 'C', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00114 */ HB_P_LINEOFFSET, 9,	/* 133 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00128 */ HB_P_LINEOFFSET, 10,	/* 134 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MPERIODO */
/* 00139 */ HB_P_LINEOFFSET, 11,	/* 135 */
	HB_P_PUSHSYMNEAR, 21,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MDATA */
/* 00159 */ HB_P_LINEOFFSET, 12,	/* 136 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MNOME_ACO */
	HB_P_POPLOCALNEAR, 15,	/* MNOME */
/* 00173 */ HB_P_LINEOFFSET, 13,	/* 137 */
	HB_P_LOCALNEARSETSTR, 3, 10, 0,	/* LIN1 10*/
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
/* 00189 */ HB_P_LINEOFFSET, 14,	/* 138 */
	HB_P_LOCALNEARSETSTR, 4, 42, 0,	/* LIN2 42*/
	' ', 'c', 'o', 'm', 'p', 'a', 'r', 'e', 'c', 'e', 'u', ' ', 'a', 'o', ' ', 'm', 'e', 'u', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'o', 'r', 'i', 'o', ' ', ' ', 'n', 'o', ' ', ' ', 'd', 'i', 'a', ' ', ' ', 0, 
/* 00237 */ HB_P_LINEOFFSET, 15,	/* 139 */
	HB_P_LOCALNEARSETSTR, 5, 14, 0,	/* LIN3 14*/
	' ', ' ', 'D', 'u', 'r', 'a', 'n', 't', 'e', ' ', 'o', ' ', ' ', 0, 
/* 00257 */ HB_P_LINEOFFSET, 16,	/* 140 */
	HB_P_LOCALNEARSETSTR, 6, 33, 0,	/* LIN4 33*/
	' ', ' ', 'e', 'x', 'p', 'e', 'd', 'i', 'e', 'n', 't', 'e', ' ', 'a', 'c', 'o', 'm', 'p', 'a', 'n', 'h', 'a', 'n', 'd', 'o', ' ', 'a', ' ', 'S', 'r', 'a', '.', 0, 
/* 00296 */ HB_P_LINEOFFSET, 17,	/* 141 */
	HB_P_LOCALNEARSETSTR, 7, 27, 0,	/* LIN5 27*/
	' ', ' ', 'p', 'a', 'r', 'a', ' ', 'a', 't', 'e', 'n', 'd', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'm', 'e', 'd', 'i', 'c', 'o', '.', 0, 
/* 00329 */ HB_P_LINEOFFSET, 18,	/* 142 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* I */
	HB_P_POPLOCALNEAR, 16,	/* MQTD */
/* 00339 */ HB_P_LINEOFFSET, 19,	/* 143 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* OPCAO */
/* 00349 */ HB_P_LINEOFFSET, 20,	/* 144 */
	HB_P_PUSHSYMNEAR, 22,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 18, 0,	/* TRACO */
/* 00365 */ HB_P_LINEOFFSET, 21,	/* 145 */
	HB_P_PUSHSYMNEAR, 2,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00378 */ HB_P_LINEOFFSET, 22,	/* 146 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00387 */ HB_P_LINEOFFSET, 23,	/* 147 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00441 */ HB_P_LINEOFFSET, 24,	/* 148 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00449 */ HB_P_LINEOFFSET, 25,	/* 149 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'o', 'm', 'e', ' ', 'A', 'c', 'o', 'p', 'a', 'n', 'h', 'a', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00485 */ HB_P_LINEOFFSET, 26,	/* 150 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'N', 'o', 'm', 'e', ' ', 'P', 'a', 'c', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00522 */ HB_P_LINEOFFSET, 27,	/* 151 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00559 */ HB_P_LINEOFFSET, 28,	/* 152 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'x', 'p', 'e', 'd', 'i', 'e', 'n', 't', 'e', ' ', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00596 */ HB_P_LINEOFFSET, 29,	/* 153 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 30,	/* 154 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MNOME_ACO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00671) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00676) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00712 */ HB_P_LINEOFFSET, 31,	/* 155 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MNOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00751) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00756) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00788 */ HB_P_LINEOFFSET, 32,	/* 156 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 00810 */ HB_P_LINEOFFSET, 33,	/* 157 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00825) */
	HB_P_JUMP, 243, 3,	/* 1011 (abs: 01833) */
/* 00825 */ HB_P_LINEOFFSET, 36,	/* 160 */
	HB_P_PUSHSYMNEAR, 32,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 10,	/* MDATA */
/* 00834 */ HB_P_LINEOFFSET, 37,	/* 161 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00873) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00878) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00916 */ HB_P_LINEOFFSET, 38,	/* 162 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MPERIODO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00955) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00960) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00995 */ HB_P_LINEOFFSET, 39,	/* 163 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 01017 */ HB_P_LINEOFFSET, 40,	/* 164 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01032) */
	HB_P_JUMP, 109, 252,	/* -915 (abs: 00114) */
/* 01032 */ HB_P_LINEOFFSET, 43,	/* 167 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01060 */ HB_P_LINEOFFSET, 44,	/* 168 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* MQTD 1*/
/* 01066 */ HB_P_LINEOFFSET, 45,	/* 169 */
	HB_P_PUSHSYMNEAR, 26,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 29,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01105) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01110) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MQTD */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01143) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01144) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 28, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01162 */ HB_P_LINEOFFSET, 46,	/* 170 */
	HB_P_PUSHSYMNEAR, 31,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 28, 0,	/* GETLIST */
/* 01184 */ HB_P_LINEOFFSET, 47,	/* 171 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01224 */ HB_P_LINEOFFSET, 48,	/* 172 */
	HB_P_PUSHSYMNEAR, 34,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01246) */
	HB_P_JUMP, 151, 251,	/* -1129 (abs: 00114) */
/* 01246 */ HB_P_LINEOFFSET, 51,	/* 175 */
	HB_P_PUSHLOCALNEAR, 3,	/* LIN1 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MNOME_ACO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01263) */
	HB_P_PUSHLOCALNEAR, 17,	/* MNOME_ACO */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01270) */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MNOME_ACO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN2 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* LIN3 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01298) */
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01305) */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MPERIODO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN4 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01322) */
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01329) */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* LIN5 */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MDECLARA */
/* 01335 */ HB_P_LINEOFFSET, 52,	/* 176 */
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 11,	/* I */
	HB_P_PUSHLOCALNEAR, 16,	/* MQTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 170, 1,	/* 426 (abs: 01772) */
/* 01349 */ HB_P_LINEOFFSET, 53,	/* 177 */
	HB_P_PUSHSYMNEAR, 37,	/* CABEC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01356 */ HB_P_LINEOFFSET, 54,	/* 178 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'E', 'C', 'L', 'A', 'R', 'A', 'C', 'A', 'O', ' ', ' ', 'D', 'E', ' ', ' ', 'C', 'O', 'M', 'P', 'A', 'R', 'E', 'C', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01412 */ HB_P_LINEOFFSET, 55,	/* 179 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01438 */ HB_P_LINEOFFSET, 57,	/* 181 */
	HB_P_PUSHSYMNEAR, 39,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDECLARA */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 01451 */ HB_P_LINEOFFSET, 59,	/* 183 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 9,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 96,	/* 96 (abs: 01559) */
/* 01465 */ HB_P_LINEOFFSET, 60,	/* 184 */
	HB_P_PUSHSYMNEAR, 41,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDECLARA */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 2,	/* LIN */
/* 01484 */ HB_P_LINEOFFSET, 61,	/* 185 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* PADR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01521 */ HB_P_LINEOFFSET, 62,	/* 186 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01548 */ HB_P_LINEOFFSET, 63,	/* 187 */
	HB_P_PUSHVARIABLE, 40, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 40, 0,	/* LINHA */
	HB_P_JUMPNEAR, 156,	/* -100 (abs: 01457) */
/* 01559 */ HB_P_LINEOFFSET, 65,	/* 189 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'R', 'e', 'c', 'i', 'f', 'e', ',', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01592 */ HB_P_LINEOFFSET, 66,	/* 190 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01614 */ HB_P_LINEOFFSET, 67,	/* 191 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01665 */ HB_P_LINEOFFSET, 68,	/* 192 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01707 */ HB_P_LINEOFFSET, 69,	/* 193 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01749 */ HB_P_LINEOFFSET, 70,	/* 194 */
	HB_P_PUSHSYMNEAR, 47,	/* RODAPE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01756 */ HB_P_LINEOFFSET, 71,	/* 195 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01763 */ HB_P_LINEOFFSET, 72,	/* 196 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* I 1*/
	HB_P_JUMP, 84, 254,	/* -428 (abs: 01341) */
/* 01772 */ HB_P_LINEOFFSET, 73,	/* 197 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01813 */ HB_P_LINEOFFSET, 74,	/* 198 */
	HB_P_PUSHSYMNEAR, 49,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 76, 249,	/* -1716 (abs: 00114) */
/* 01833 */ HB_P_LINEOFFSET, 76,	/* 200 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01840 */ HB_P_LINEOFFSET, 77,	/* 201 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01845 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

