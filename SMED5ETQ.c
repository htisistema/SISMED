/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED5ETQ.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED5ETQ.PRG /q /oC:\HTI\SISMED\SMED5ETQ.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:27 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED5ETQ.PRG"

HB_FUNC( SMED5ETQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SMED5ET1 );
HB_FUNC_EXTERN( SMED5ET2 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED5ETQ )
{ "SMED5ETQ", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED5ETQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SMED5ET1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5ET1 )}, NULL },
{ "SMED5ET2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5ET2 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED5ETQ )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED5ETQ
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED5ETQ = hb_vm_SymbolInit_SMED5ETQ;
   #pragma data_seg()
#endif

HB_FUNC( SMED5ETQ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 11, 0,	/* LBA 11*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 23, 0,	/* CBA 23*/
/* 00026 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'*', '*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00155 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', ' ', 'P', 'e', 'r', 's', 'o', 'n', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 0, 
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'*', '*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'd', 'e', ' ', 'P', 'e', 'r', 's', 'o', 'n', 'a', 'l', 'i', 'z', 'a', 'd', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00261 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 4,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00288) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00293) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 1,	/* OPCAO */
/* 00306 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00320) */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00358) */
/* 00320 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00338) */
/* 00328 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_PUSHSYMNEAR, 6,	/* SMED5ET1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 232, 254,	/* -280 (abs: 00055) */
/* 00338 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 222, 254,	/* -290 (abs: 00055) */
/* 00348 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 7,	/* SMED5ET2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 212, 254,	/* -300 (abs: 00055) */
/* 00358 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00365 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00370 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

