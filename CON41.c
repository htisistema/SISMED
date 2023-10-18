/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON41.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON41.PRG /q /oC:\HTI\SISMED\CON41.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:19 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON41.PRG"

HB_FUNC( CON41 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON411 );
HB_FUNC_EXTERN( CON413 );
HB_FUNC_EXTERN( CON414 );
HB_FUNC_EXTERN( CON418 );
HB_FUNC_EXTERN( CON419 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON41 )
{ "CON41", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON41 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON411", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON411 )}, NULL },
{ "CON413", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON413 )}, NULL },
{ "CON414", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON414 )}, NULL },
{ "CON418", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON418 )}, NULL },
{ "CON419", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON419 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON41 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON41
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON41 = hb_vm_SymbolInit_CON41;
   #pragma data_seg()
#endif

HB_FUNC( CON41 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '4', '1', 0, 
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00026 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LBA 5*/
/* 00032 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_LOCALNEARSETINT, 6, 34, 0,	/* CBA 34*/
/* 00038 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OP41 0*/
/* 00044 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00092 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00101 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', '0', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00154 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '1', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00208 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '2', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00262 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '3', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'i', 'b', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00316 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', '4', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'X', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00370 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OP41 */
	HB_P_PUSHSYMNEAR, 5,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00397) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00402) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', '4', '1', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OP41 */
/* 00414 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00438) */
/* 00426 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00433 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00438 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00456) */
/* 00446 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* CON411 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 151, 254,	/* -361 (abs: 00092) */
/* 00456 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00475) */
/* 00465 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 9,	/* CON413 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 132, 254,	/* -380 (abs: 00092) */
/* 00475 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00494) */
/* 00484 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 10,	/* CON414 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 113, 254,	/* -399 (abs: 00092) */
/* 00494 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00513) */
/* 00503 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* CON418 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 94, 254,	/* -418 (abs: 00092) */
/* 00513 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP41 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 84, 254,	/* -428 (abs: 00092) */
/* 00523 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* CON419 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 74, 254,	/* -438 (abs: 00092) */
	HB_P_ENDPROC
/* 00534 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

