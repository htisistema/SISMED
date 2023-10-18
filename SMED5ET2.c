/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED5ET2.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED5ET2.PRG /q /oC:\HTI\SISMED\SMED5ET2.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:27 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED5ET2.PRG"

HB_FUNC( SMED5ET2 );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SMED5E21 );
HB_FUNC_EXTERN( SMED5E22 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED5ET2 )
{ "SMED5ET2", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED5ET2 )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SMED5E21", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5E21 )}, NULL },
{ "SMED5E22", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5E22 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED5ET2 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED5ET2
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED5ET2 = hb_vm_SymbolInit_SMED5ET2;
   #pragma data_seg()
#endif

HB_FUNC( SMED5ET2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 19, 0,	/* LBA 19*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 25, 0,	/* CBA 25*/
/* 00026 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 3,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00048 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00084 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00092 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'N', 'o', 'r', 'm', 'a', 'l', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'*', '*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'P', 'a', 'd', 'r', 'a', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00189 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'P', 'e', 'q', 'u', 'e', 'n', 'a', ' ', 0, 
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'*', '*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'P', 'e', 'q', 'u', 'e', 'n', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'a', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '*', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00288 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00315) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00320) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 1,	/* OPCAO */
/* 00333 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00347) */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 00385) */
/* 00347 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00365) */
/* 00355 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* SMED5E21 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 234, 254,	/* -278 (abs: 00084) */
/* 00365 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 254,	/* -288 (abs: 00084) */
/* 00375 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 11,	/* SMED5E22 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 214, 254,	/* -298 (abs: 00084) */
/* 00385 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00392 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00397 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

