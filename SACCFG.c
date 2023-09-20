/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACCFG.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SACCFG.PRG /q /oC:\HTI\SISMED\SACCFG.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:50 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACCFG.PRG"

HB_FUNC( SACCFG );
HB_FUNC( SACBKP );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( SETPRC );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCFG )
{ "SACCFG", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCFG )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "M_BKP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "LIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MD5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SLINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACBKP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SACBKP )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCFG )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCFG
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCFG = hb_vm_SymbolInit_SACCFG;
   #pragma data_seg()
#endif

HB_FUNC( SACCFG )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 2, 4, 0,	/* MNUM_TERM 4*/
	' ', ' ', ' ', 0, 
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'I', 'N', 'D', 'I', 'V', 'I', 'D', 'U', 'A', 'L', ' ', 'D', 'O', ' ', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00071 */ HB_P_LINEOFFSET, 2,	/* 12 */
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00091 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 00113 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00140) */
/* 00128 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 00140 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 5, 0,	/* M_BKP */
/* 00148 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 8, 0,	/* LIN */
/* 00182 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* LINHA */
	HB_P_POPVARIABLE, 10, 0,	/* LINHAS */
/* 00192 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 10, 0,	/* LINHAS */
/* 00223 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 9, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 9, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 10, 0,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 152, 0,	/* 152 (abs: 00388) */
/* 00239 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHVARIABLE, 9, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 8, 0,	/* LIN */
/* 00275 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_PUSHSYMNEAR, 12,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* LIN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 00351) */
/* 00295 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_PUSHSYMNEAR, 14,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* LIN */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* LIN */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 00376) */
/* 00351 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* LIN */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00376 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHVARIABLE, 9, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* LINHA */
	HB_P_JUMP, 100, 255,	/* -156 (abs: 00229) */
/* 00388 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'b', 'k', 'p', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 00408 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHLOCALNEAR, 1,	/* MNAO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00467) */
/* 00416 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 2, 0,	/* M_CFG */
/* 00424 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_CFG */
	HB_P_PUSHSYMNEAR, 18,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 19, 0,	/* MVERSAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_DOSHORT, 2,
/* 00467 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00510 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', '[', 'S', ']', 'e', 'r', 'v', 'i', 'd', 'o', 'r', ' ', '[', 'T', ']', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00554 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00598 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', ' ', 'd', 'a', ' ', 'T', 'e', 'l', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00642 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 22,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00657 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', 'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'B', 'A', 'C', 'K', 'U', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 00696 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00711 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 'X', 'E', 'C', 'U', 'T', 'A', 'V', 'E', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00754 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'N', 'O', 'M', 'E', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00797 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'R', 'Q', 'U', 'I', 'V', 'O', 'S', ' ', 'P', '/', 'C', 'O', 'M', 'P', 'A', 'C', 'T', 'A', 'R', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00840 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'1', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00883 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00926 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'2', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00969 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01012 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'3', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01055 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01098 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'4', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01141 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01184 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'5', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01227 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01270 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'6', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01313 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01356 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* M_CFG */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'c', 'f', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01416 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* M_CFG */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'c', 'f', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01478 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* M_CFG */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'c', 'f', 'g', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01543 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* M_CFG */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'c', 'f', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01605 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01669 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01734 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01799 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01864 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01928 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01993 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02057 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02122 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02186 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02251 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02315 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02380 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02444 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', '!', 'S', '9', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02509 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 5, 0,	/* M_BKP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'b', 'k', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02573 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 24, 0,	/* GETLIST */
/* 02595 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 02652) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02657) */
	HB_P_JUMP, 206, 4,	/* 1230 (abs: 03884) */
/* 02657 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 02677 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_PUSHSYMNEAR, 30,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'R', 'E', 'N', ' ', 's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', ' ', 's', 'a', 'c', 'c', 'f', 'g', '0', '1', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 02714 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHSYMNEAR, 31,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* MARQ */
/* 02737 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '1', ' ', 'C', ' ', 'E', 's', 't', 'a', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '2', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '3', ' ', 'C', ' ', 'm', 'd', '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MD5 */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '4', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'D', 'a', 'd', 'o', 's', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '5', ' ', 'C', ' ', 'V', 'e', 'r', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '6', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'l', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '7', ' ', 'C', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 35, 0,	/* SLINHAS */
/* 03041 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSYMNEAR, 36,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MARQ */
	HB_P_PUSHMEMVARREF, 35, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 03062 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 03072 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'b', 'k', 'p', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 03092 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHSYMNEAR, 30,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'R', 'E', 'N', ' ', 's', 'a', 'c', 'b', 'k', 'p', '.', 'i', 'n', 'i', ' ', 's', 'a', 'c', 'b', 'k', 'p', '0', '1', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 03129 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHSYMNEAR, 31,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'b', 'k', 'p', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* MARQ */
/* 03152 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '1', ' ', 'C', ' ', 'E', 'X', 'E', 'C', 'U', 'T', 'A', 'V', 'E', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '2', ' ', 'C', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '3', ' ', 'C', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 'S', ' ', 'P', '/', 'C', 'O', 'M', 'P', 'A', 'C', 'T', 'A', 'R', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '4', ' ', 'C', ' ', '1', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '5', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '6', ' ', 'C', ' ', '2', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '7', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '8', ' ', 'C', ' ', '3', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '9', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '0', ' ', 'C', ' ', '4', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '1', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '2', ' ', 'C', ' ', '5', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '3', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '4', ' ', 'C', ' ', '6', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '5', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* M_BKP */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 35, 0,	/* SLINHAS */
/* 03853 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_PUSHSYMNEAR, 36,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MARQ */
	HB_P_PUSHMEMVARREF, 35, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 15,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 03874 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 03884 */ HB_P_LINEOFFSET, 110,	/* 120 */
	HB_P_PUSHSYMNEAR, 38,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03891 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03896 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SACBKP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 127, 0,	/* 127 */
	HB_P_PUSHSYMNEAR, 17,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'T', 'I', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_DOSHORT, 1,
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 128 */
	HB_P_PUSHSYMNEAR, 30,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'E', 'L', ' ', 'H', 'T', 'I', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_DOSHORT, 1,
/* 00048 */ HB_P_LINEOFFSET, 2,	/* 129 */
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'I', 'N', 'T', 'E', 'R', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00079 */ HB_P_LINEOFFSET, 3,	/* 130 */
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'T', 'I', 'B', 'K', 'P', '.', 'I', 'N', 'I', 0, 
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 00102 */ HB_P_LINEOFFSET, 4,	/* 131 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'0', '0', '1', ' ', 'C', ' ', 'E', 'X', 'E', 'C', 'U', 'T', 'A', 'V', 'E', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', '2', 0, 
	HB_P_DOSHORT, 1,
/* 00153 */ HB_P_LINEOFFSET, 5,	/* 132 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'0', '0', '2', ' ', 'C', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 'H', 'T', 'I', 'B', 'K', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 00212 */ HB_P_LINEOFFSET, 6,	/* 133 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'0', '0', '3', ' ', 'C', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 'S', ' ', 'P', '/', 'C', 'O', 'M', 'P', 'A', 'C', 'T', 'A', 'R', ' ', ' ', '=', 'S', 'I', 'S', 'M', 'E', 'D', '.', 'G', 'D', 'B', ' ', 'S', 'I', 'S', 'M', 'E', 'D', '.', 'E', 'X', 'E', ' ', '*', '.', 'D', 'L', 'L', ' ', '*', '.', 'I', 'N', 'I', 0, 
	HB_P_DOSHORT, 1,
/* 00298 */ HB_P_LINEOFFSET, 7,	/* 134 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'0', '0', '4', ' ', 'C', ' ', '1', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 'C', ':', 92, 'S', 'I', 'S', 'C', 'F', 'G', 92, 0, 
	HB_P_DOSHORT, 1,
/* 00361 */ HB_P_LINEOFFSET, 8,	/* 135 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'0', '0', '5', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', '7', 0, 
	HB_P_DOSHORT, 1,
/* 00415 */ HB_P_LINEOFFSET, 9,	/* 136 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '6', ' ', 'C', ' ', '2', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00468 */ HB_P_LINEOFFSET, 10,	/* 137 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '7', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00521 */ HB_P_LINEOFFSET, 11,	/* 138 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '8', ' ', 'C', ' ', '3', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00574 */ HB_P_LINEOFFSET, 12,	/* 139 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '9', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00627 */ HB_P_LINEOFFSET, 13,	/* 140 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '0', ' ', 'C', ' ', '4', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00680 */ HB_P_LINEOFFSET, 14,	/* 141 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '1', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00733 */ HB_P_LINEOFFSET, 15,	/* 142 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '2', ' ', 'C', ' ', '5', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00786 */ HB_P_LINEOFFSET, 16,	/* 143 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '3', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00839 */ HB_P_LINEOFFSET, 17,	/* 144 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '4', ' ', 'C', ' ', '6', ' ', '-', 'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'P', '/', ' ', 'B', 'A', 'C', 'K', 'U', 'P', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00892 */ HB_P_LINEOFFSET, 18,	/* 145 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '1', '5', ' ', 'N', ' ', 'Q', 'T', 'D', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'A', 'D', 'O', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_DOSHORT, 1,
/* 00945 */ HB_P_LINEOFFSET, 19,	/* 146 */
	HB_P_PUSHSYMNEAR, 42,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00954 */ HB_P_LINEOFFSET, 20,	/* 147 */
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 40,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00995 */ HB_P_LINEOFFSET, 21,	/* 148 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01000 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

