/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACLER.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SACLER.PRG /q /oC:\HTI\SISMED\SACLER.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:25 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACLER.PRG"

HB_FUNC( SACLER );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( CURDIR );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( LERTEXTO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACLER )
{ "SACLER", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACLER )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIPO_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "CURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDIR )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "LERTEXTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( LERTEXTO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACLER )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACLER
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACLER = hb_vm_SymbolInit_SACLER;
   #pragma data_seg()
#endif

HB_FUNC( SACLER )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'L', 'E', 'R', 0, 
/* 00017 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_PG */
	HB_P_PUSHSYMNEAR, 6,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 7,	/* MQUANTD */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00050 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'E', 'R', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 'S', ' ', 'D', 'O', ' ', 'D', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '2', '4', '5', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00098) */
/* 00093 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00098 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 10, 0,	/* LCI 10*/
/* 00104 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 3, 0,	/* CCI 3*/
/* 00110 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_LOCALNEARSETINT, 7, 12, 0,	/* LBA 12*/
/* 00116 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_LOCALNEARSETINT, 8, 78, 0,	/* CBA 78*/
/* 00122 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 3,	/* TELA */
/* 00137 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 12,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00159 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00188) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00188 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'f', 'g', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'f', 'g', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00215) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00215 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00244) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00244 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PUSHSYMNEAR, 16,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
/* 00272 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 17,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00294 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00303 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 20,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'L', 'e', 'r', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'T', 'e', 'x', 't', 'o', 0, 
	HB_P_DOSHORT, 6,
/* 00341 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00349 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '(', 'c', 'o', 'm', ' ', 'e', 'x', 't', 'e', 'n', 's', 'a', 'o', ')', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00410 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'a', 'r', 'q', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', 'S', '3', '0', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 24, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00470 */ HB_P_LINEOFFSET, 26,	/* 34 */
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
/* 00492 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00524) */
/* 00504 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 29,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* TELA */
	HB_P_DOSHORT, 5,
/* 00519 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00524 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 30,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
/* 00537 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 31,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 54,	/* 54 (abs: 00601) */
/* 00549 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 32,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'e', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 158, 254,	/* -354 (abs: 00244) */
/* 00601 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 33,	/* LERTEXTO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 145, 254,	/* -367 (abs: 00244) */
	HB_P_ENDPROC
/* 00615 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

