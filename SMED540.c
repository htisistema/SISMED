/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED540.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED540.PRG /q /oC:\HTI\SISMED\SMED540.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:46 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED540.PRG"

HB_FUNC( SMED540 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( APAGA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SMED541 );
HB_FUNC_EXTERN( SMED542 );
HB_FUNC_EXTERN( RECEITA );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED540 )
{ "SMED540", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED540 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "APAGA", {HB_FS_PUBLIC}, {HB_FUNCNAME( APAGA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SMED541", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED541 )}, NULL },
{ "SMED542", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED542 )}, NULL },
{ "RECEITA", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECEITA )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED540 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED540
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED540 = hb_vm_SymbolInit_SMED540;
   #pragma data_seg()
#endif

HB_FUNC( SMED540 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 4, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '5', '4', '0', 0, 
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_POPLOCALNEAR, 6,	/* LCI */
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_LOCALNEARSETINT, 8, 16, 0,	/* LBA 16*/
/* 00034 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_LOCALNEARSETINT, 9, 23, 0,	/* CBA 23*/
/* 00040 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* OPCAO 0*/
/* 00046 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'm', 'e', 'd', 'r', 'e', 'c', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'c', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00076) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00076 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'm', 'e', 'd', 'd', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'd', 'r', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00104) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00104 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'R', 'e', 'c', 'e', 'i', 't', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00132 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 3,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00145 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00154 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00162 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'p', '/', 'C', 'o', 'd', '.', 'M', 'e', 'd', '.', ' ', 0, 
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'*', '*', '*', ' ', 'F', 'a', 'z', 'e', 'r', ' ', 'R', 'e', 'c', 'e', 'i', 't', 'a', ' ', 'p', '/', 'C', 'o', 'd', '.', 'd', 'o', 's', ' ', 'R', 'e', 'm', 'e', 'd', 'i', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00257 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'p', '/', 'C', 'o', 'd', 'i', 'g', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'*', '*', '*', ' ', 'p', '/', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'R', 'e', 'c', 'e', 'i', 't', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00339 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'D', 'e', 's', 'c', 'r', 'e', 'v', 'e', 'r', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'*', '*', '*', ' ', 'R', 'e', 'c', 'e', 'i', 't', 'a', ' ', 'a', ' ', 'D', 'i', 'g', 'i', 't', 'a', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00419 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00433 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 8,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 9,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00460) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00465) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 00478 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHSYMNEAR, 10,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00492) */
	HB_P_JUMPNEAR, 72,	/* 72 (abs: 00562) */
/* 00492 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00515) */
/* 00500 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHSYMNEAR, 11,	/* SMED541 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VNOME */
	HB_P_PUSHLOCALNEAR, 2,	/* VDATA */
	HB_P_PUSHLOCALNEAR, 3,	/* VQUANTD */
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00562) */
/* 00515 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00539) */
/* 00524 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* SMED542 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VNOME */
	HB_P_PUSHLOCALNEAR, 2,	/* VDATA */
	HB_P_PUSHLOCALNEAR, 3,	/* VQUANTD */
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 00562) */
/* 00539 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 98, 254,	/* -414 (abs: 00132) */
/* 00549 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHSYMNEAR, 13,	/* RECEITA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VNOME */
	HB_P_PUSHLOCALNEAR, 2,	/* VDATA */
	HB_P_PUSHLOCALNEAR, 3,	/* VQUANTD */
	HB_P_DOSHORT, 3,
/* 00562 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHSYMNEAR, 14,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00569 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00574 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

