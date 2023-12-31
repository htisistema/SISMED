/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED233.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED233.PRG /q /oC:\HTI\SISMED\SMED233.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:29 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED233.PRG"

HB_FUNC( SMED233 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED233 )
{ "SMED233", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED233 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MED", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROFISSION", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESPECIALID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FONE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED233 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED233
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED233 = hb_vm_SymbolInit_SMED233;
   #pragma data_seg()
#endif

HB_FUNC( SMED233 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '2', '3', '3', 0, 
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 18, 0,	/* LBA 18*/
/* 00034 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 77, 0,	/* CBA 77*/
/* 00040 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'E', 'S', 'P', 'E', 'C', 'I', 'A', 'L', 'I', 'S', 'T', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00082 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00091 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* OPCAO 0*/
/* 00097 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MPROF */
/* 00108 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MESP */
/* 00119 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MEND */
/* 00130 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MCID */
/* 00141 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MCEP */
/* 00152 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 3,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MFONE */
/* 00163 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'P', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00216 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00224 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00263 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'i', 'o', 'n', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00302 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'E', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00341 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00380 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00389 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* MED */
	HB_P_PUSHALIASEDFIELDNEAR, 9,	/* COD_ESPE */
	HB_P_DOSHORT, 1,
/* 00415 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* MED */
	HB_P_PUSHALIASEDFIELDNEAR, 10,	/* PROFISSION */
	HB_P_DOSHORT, 1,
/* 00441 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* MED */
	HB_P_PUSHALIASEDFIELDNEAR, 11,	/* ESPECIALID */
	HB_P_DOSHORT, 1,
/* 00467 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* MED */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* FONE */
	HB_P_DOSHORT, 1,
/* 00493 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00501 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_LOCALNEARSETSTR, 6, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00509 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00549 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 14,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00570) */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00584) */
/* 00572 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00579 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00584 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 254,	/* -511 (abs: 00082) */
/* 00596 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 16,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00638) */
/* 00605 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 17,	/* DBDELETE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00612 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00619 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 19,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00626 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00633 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00638 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00686 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00693 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00698 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

