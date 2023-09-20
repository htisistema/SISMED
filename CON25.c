/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON25.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON25.PRG /q /oC:\HTI\SISMED\CON25.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:29 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON25.PRG"

HB_FUNC( CON25 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON251 );
HB_FUNC_EXTERN( CON252 );
HB_FUNC_EXTERN( CON253 );
HB_FUNC_EXTERN( CON2511 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON25 )
{ "CON25", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON25 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON251", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON251 )}, NULL },
{ "CON252", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON252 )}, NULL },
{ "CON253", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON253 )}, NULL },
{ "CON2511", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON2511 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON25 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON25
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON25 = hb_vm_SymbolInit_CON25;
   #pragma data_seg()
#endif

HB_FUNC( CON25 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '2', '5', 0, 
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_LOCALNEARSETINT, 3, 5, 0,	/* LBA 5*/
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 4, 29, 0,	/* CBA 29*/
/* 00028 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00057) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00057 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00086) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00086 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00147) */
/* 00094 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* LBA */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'O', 'C', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '*', '*', '*', ' ', 'C', 'A', 'I', 'X', 'A', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 00202) */
/* 00147 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* LBA */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'O', 'C', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '*', '*', '*', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 5,
/* 00202 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00211 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* OPCAO 0*/
/* 00217 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00225 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '0', '-', '>', ' ', 'I', 'n', 'd', 'i', 'v', 'i', 'd', 'u', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00268 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '1', '-', '>', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00311 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '2', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00355 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '3', '-', '>', ' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00399 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '4', '-', '>', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00443 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '5', '-', '>', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'D', 'e', 'b', 'i', 't', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00487 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00501 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00528) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00533) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00546 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00570) */
/* 00558 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00565 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00570 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00590) */
/* 00578 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHSYMNEAR, 11,	/* CON251 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 127, 254,	/* -385 (abs: 00202) */
/* 00590 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00611) */
/* 00599 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 106, 254,	/* -406 (abs: 00202) */
/* 00611 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00635) */
/* 00620 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 11,	/* CON251 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 82, 254,	/* -430 (abs: 00202) */
/* 00635 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00656) */
/* 00644 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 13,	/* CON253 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 61, 254,	/* -451 (abs: 00202) */
/* 00656 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00671) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 1,	/* TP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00683) */
/* 00673 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 14,	/* CON2511 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 34, 254,	/* -478 (abs: 00202) */
/* 00683 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 254,	/* -488 (abs: 00202) */
/* 00693 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 9, 254,	/* -503 (abs: 00202) */
	HB_P_ENDPROC
/* 00709 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

