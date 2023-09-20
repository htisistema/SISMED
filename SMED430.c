/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED430.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED430.PRG /q /oC:\HTI\SISMED\SMED430.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:43 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED430.PRG"

HB_FUNC( SMED430 );
HB_FUNC_EXTERN( NIVEL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( APAGA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SMED431 );
HB_FUNC_EXTERN( SMED432 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED430 )
{ "SMED430", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED430 )}, NULL },
{ "NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIVEL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "APAGA", {HB_FS_PUBLIC}, {HB_FUNCNAME( APAGA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SMED431", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED431 )}, NULL },
{ "SMED432", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED432 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED430 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED430
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED430 = hb_vm_SymbolInit_SMED430;
   #pragma data_seg()
#endif

HB_FUNC( SMED430 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 13, 0,	/* LBA 13*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 53, 0,	/* CBA 53*/
/* 00026 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_LOCALNEARSETINT, 1, 0, 0,	/* OPCAO 0*/
/* 00032 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 1,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 00089) */
/* 00049 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 2,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00084 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00089 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 3,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'A', ' ', 'A', 'G', 'E', 'N', 'D', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00125 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00138 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00146 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00243 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'*', '*', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'e', ' ', 'E', 'x', 'c', 'a', 'i', 'x', 'e', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00351 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00365 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 8,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 9,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00392) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00397) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 1,	/* OPCAO */
/* 00410 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 10,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00425) */
	HB_P_JUMP, 151, 0,	/* 151 (abs: 00573) */
/* 00425 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00498) */
/* 00433 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 1,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 00488) */
/* 00450 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 2,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 152, 254,	/* -360 (abs: 00125) */
/* 00488 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 11,	/* SMED431 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 142, 254,	/* -370 (abs: 00125) */
/* 00498 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 132, 254,	/* -380 (abs: 00125) */
/* 00508 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 1,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 00563) */
/* 00525 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 2,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 77, 254,	/* -435 (abs: 00125) */
/* 00563 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* SMED432 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 67, 254,	/* -445 (abs: 00125) */
/* 00573 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 13,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00580 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00585 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

