/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED212.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED212.PRG /q /oC:\HTI\SISMED\SMED212.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED212.PRG"

HB_FUNC( SMED212 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DRAWLABEL );
HB_FUNC_EXTERN( VCCONV );
HB_FUNC_EXTERN( EXIBI_FOTO );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( CALC_NASC );
HB_FUNC_EXTERN( VER_CONV );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( OP_SIMNAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED212 )
{ "SMED212", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED212 )}, NULL },
{ "MVALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFATOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMOD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPRAZO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCIM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETBAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MRECIB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DRAWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWLABEL )}, NULL },
{ "VCCONV", {HB_FS_PUBLIC}, {HB_FUNCNAME( VCCONV )}, NULL },
{ "EXIBI_FOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_FOTO )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CALC_NASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( CALC_NASC )}, NULL },
{ "VER_CONV", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CONV )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED212 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED212
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED212 = hb_vm_SymbolInit_SMED212;
   #pragma data_seg()
#endif

HB_FUNC( SMED212 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '2', '1', '2', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_CLI */
/* 00023 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 2,	/* MFATOR */
	HB_P_PUSHSYMNEAR, 3,	/* MMOD */
	HB_P_PUSHSYMNEAR, 4,	/* MPRAZO */
	HB_P_DOSHORT, 4,
/* 00038 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '2', 0, 
	HB_P_PUSHVARIABLE, 7, 0,	/* NIVEL_ACESS */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00085) */
/* 00080 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00085 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_CLI */
/* 00092 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MREG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00160 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00184 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 00254) */
/* 00197 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 12,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00249 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00254 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00292 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 14,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00301 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '-', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', '-', ' ', '<', 'A', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'R', 'e', 'g', '.', ' ', '-', ' ', '<', 0, 
	HB_P_PUSHVARIABLE, 16, 0,	/* SETCIM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'>', ' ', 'P', 'r', 'o', 'x', '.', ' ', 'R', 'e', 'g', '.', ' ', '-', ' ', '<', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 17, 0,	/* SETBAIX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'>', ' ', 'R', 'e', 'g', '.', ' ', 'A', 'n', 't', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00410 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 2, 0,	/* MFATOR */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MVALOR */
	HB_P_POPVARIABLE, 4, 0,	/* MPRAZO */
/* 00424 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 18,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
	HB_P_POPVARIABLE, 19, 0,	/* MRECIB */
/* 00438 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MMOD */
/* 00450 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00469 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 22,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00482 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 23,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00497 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00505 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '-', ' ', '<', 'F', '3', '>', ' ', 'p', '/', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00581 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00617 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00653 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00690 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00727 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'u', 'm', 'e', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00764 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00795 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00832 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00869 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'F', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00891 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00928 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00965 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', ' ', '1', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01002 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'M', 'A', 'I', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01039 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'N', 'S', 'T', 'A', 'G', 'R', 'A', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01076 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 't', 'a', 'd', 'o', ' ', 'C', 'i', 'v', 'i', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01113 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'[', 'S', ']', 'o', 'l', 't', 'e', 'i', 'r', 'o', ' ', '[', 'C', ']', 'a', 's', 'a', 'd', 'o', ' ', '[', 'D', ']', 'i', 'v', 'o', 'r', 'c', 'i', 'a', 'd', 'o', ' ', '[', 'V', ']', 'i', 'u', 'v', 'o', ' ', 'S', 'e', '[', 'P', ']', 'a', 'r', 'a', 'd', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01194 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'a', 't', 'u', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01231 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'P', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01268 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', '.', 'G', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01305 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'N', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01342 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01367 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'e', 'x', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01404 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'[', 'M', ']', 'a', 's', 'c', 'u', 'l', 'i', 'n', 'o', ' ', '[', 'F', ']', 'e', 'm', 'i', 'n', 'i', 'n', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 8,
/* 01456 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'a', 'c', 'a', '/', 'C', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01493 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'[', 'P', ']', 'r', 'e', 't', 'a', ' ', '[', 'B', ']', 'r', 'a', 'n', 'c', 'a', ' ', 'P', 'r', 'a', '[', 'D', ']', 'a', ' ', '[', 'O', ']', 'u', 't', 'r', 'a', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01555 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 'c', 'o', 'l', 'a', 'r', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01592 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'[', '1', ']', 'N', 'u', 'n', 'c', 'a', ' ', 'e', 's', 't', 'u', 'd', 'o', 'u', ' ', '-', ' ', '[', '2', ']', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'z', 'a', 'c', 'a', 'o', '/', '1', 'o', '.', 'a', 'n', 'o', ' ', '-', ' ', '[', '3', ']', 'F', 'u', 'n', 'd', '.', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 01685 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'[', '4', ']', 'F', 'u', 'n', 'd', '.', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '5', ']', 'M', 'e', 'd', 'i', 'o', ' ', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '6', ']', 'M', 'e', 'd', 'i', 'o', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 01773 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 27,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'[', '7', ']', 'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r', ' ', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '8', ']', 'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 01848 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'T', 'r', 'a', 'b', 'a', 'l', 'h', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01885 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01922 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01959 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', ' ', 'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01996 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'n', 'd', 'i', 'c', 'a', 'd', 'o', ' ', 'P', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02033 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02070 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'r', 'a', 'b', 'a', 'l', 'h', 'o', ' ', 'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02107 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02144 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02181 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02218 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'l', 'a', 'n', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02255 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', '.', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02292 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02329 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02366 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'P', 'r', 'o', 'x', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02403 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', ' ', 'f', 'u', 'm', 'a', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', '/', 'E', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02440 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02477 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02514 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02551 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHSYMNEAR, 28,	/* VCCONV */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSHREF,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 02571 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'C', 'a', 'm', 'p', 'o', 's', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'd', 'o', 's', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', ' ', '-', ' ', ' ', '<', 'F', '3', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02645 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02654 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02676 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02697 */ HB_P_LINEOFFSET, 80,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02705 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_PUSHSYMNEAR, 29,	/* EXIBI_FOTO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_PUSHMEMVAR, 30, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 7,
/* 02735 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02809) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02810) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02834 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02906 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02978 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03050 */ HB_P_LINEOFFSET, 86,	/* 93 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03122 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03194 */ HB_P_LINEOFFSET, 88,	/* 95 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03266 */ HB_P_LINEOFFSET, 89,	/* 96 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03345 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03413 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03481 */ HB_P_LINEOFFSET, 92,	/* 99 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03549 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03617 */ HB_P_LINEOFFSET, 94,	/* 101 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', ',', 'C', ',', 'D', ',', 'V', ',', 'P', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03718 */ HB_P_LINEOFFSET, 95,	/* 102 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03790 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'@', '!', '@', 'R', ' ', '9', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03879 */ HB_P_LINEOFFSET, 97,	/* 104 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03951 */ HB_P_LINEOFFSET, 98,	/* 105 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 27, 0,	/* 27 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHSYMNEAR, 37,	/* CALC_NASC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04045 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 24, 0,	/* 24 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'F', ',', 'M', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04140 */ HB_P_LINEOFFSET, 100,	/* 107 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', ',', 'B', ',', 'D', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04239 */ HB_P_LINEOFFSET, 101,	/* 108 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 36, 0,	/* 36 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'1', ',', '2', ',', '3', ',', '4', ',', '5', ',', '6', ',', '7', ',', '8', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04342 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04414 */ HB_P_LINEOFFSET, 104,	/* 111 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04486 */ HB_P_LINEOFFSET, 105,	/* 112 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04558 */ HB_P_LINEOFFSET, 106,	/* 113 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04626 */ HB_P_LINEOFFSET, 107,	/* 114 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04698 */ HB_P_LINEOFFSET, 109,	/* 116 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04770 */ HB_P_LINEOFFSET, 110,	/* 117 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04842 */ HB_P_LINEOFFSET, 111,	/* 118 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04914 */ HB_P_LINEOFFSET, 112,	/* 119 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04982 */ HB_P_LINEOFFSET, 114,	/* 121 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHSYMNEAR, 38,	/* VER_CONV */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05079 */ HB_P_LINEOFFSET, 115,	/* 122 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05151 */ HB_P_LINEOFFSET, 116,	/* 123 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05223 */ HB_P_LINEOFFSET, 117,	/* 124 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05291 */ HB_P_LINEOFFSET, 118,	/* 125 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05359 */ HB_P_LINEOFFSET, 119,	/* 126 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', ',', 'N', ',', 'E', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05458 */ HB_P_LINEOFFSET, 120,	/* 127 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 38, 0,	/* 38 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 05540) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05563 */ HB_P_LINEOFFSET, 121,	/* 128 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 38, 0,	/* 38 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 05645) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05668 */ HB_P_LINEOFFSET, 122,	/* 129 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05735 */ HB_P_LINEOFFSET, 123,	/* 130 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05802 */ HB_P_LINEOFFSET, 124,	/* 131 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05869 */ HB_P_LINEOFFSET, 125,	/* 132 */
	HB_P_PUSHSYMNEAR, 31,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'c', 'o', 'n', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 33, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05936 */ HB_P_LINEOFFSET, 126,	/* 133 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 33, 0,	/* GETLIST */
/* 05958 */ HB_P_LINEOFFSET, 127,	/* 134 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 05982) */
/* 05970 */ HB_P_LINEOFFSET, 128,	/* 135 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05977 */ HB_P_LINEOFFSET, 129,	/* 136 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 05982 */ HB_P_LINEOFFSET, 131,	/* 138 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MMOD */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 06006) */
	HB_P_PUSHVARIABLE, 3, 0,	/* MMOD */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'R', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 06017) */
/* 06008 */ HB_P_LINEOFFSET, 132,	/* 139 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_POPVARIABLE, 19, 0,	/* MRECIB */
/* 06017 */ HB_P_LINEOFFSET, 134,	/* 141 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MMOD */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 06039) */
/* 06030 */ HB_P_LINEOFFSET, 135,	/* 142 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_POPVARIABLE, 19, 0,	/* MRECIB */
/* 06039 */ HB_P_LINEOFFSET, 137,	/* 144 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06058) */
	HB_P_JUMP, 125, 233,	/* -5763 (abs: 00292) */
/* 06058 */ HB_P_LINEOFFSET, 140,	/* 147 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06080) */
/* 06070 */ HB_P_LINEOFFSET, 141,	/* 148 */
	HB_P_PUSHSYMNEAR, 42,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 124, 5,	/* 1404 (abs: 07481) */
/* 06080 */ HB_P_LINEOFFSET, 144,	/* 151 */
	HB_P_PUSHSYMNEAR, 43,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 06121 */ HB_P_LINEOFFSET, 145,	/* 152 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 06142) */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06147) */
	HB_P_JUMP, 57, 5,	/* 1337 (abs: 07481) */
/* 06147 */ HB_P_LINEOFFSET, 148,	/* 155 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 45, 5,	/* 1325 (abs: 07481) */
/* 06159 */ HB_P_LINEOFFSET, 191,	/* 198 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'S', 'E', 'T', ' ', 'n', 'o', 'm', 'e', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', 'n', 's', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 06257) */
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 06264) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 's', 'e', 'x', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'c', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'e', 's', 't', 'c', 'i', 'v', 'i', 'l', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'n', 'a', 't', 'u', 'r', 'a', 'l', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'o', 'd', 'c', 'o', 'n', 'v', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	',', 'e', 's', 't', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	',', 'c', 'e', 'p', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'f', 'o', 'n', 'e', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'f', 'o', 'n', 'e', '1', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'f', 'o', 'n', 'e', '2', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'r', 'e', 's', 'p', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	',', 'i', 'n', 'd', 'i', 'c', 'a', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'e', 'm', 'p', '_', 'c', 'l', 'i', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'c', 'o', 'n', 'j', 'u', 'g', 'e', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'e', 'm', 'p', '_', 'c', 'o', 'n', 'j', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'p', 'r', 'o', 'f', '_', 'c', 'o', 'n', 'j', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'f', 'o', 'n', 'e', '_', 'c', 'o', 'n', 'j', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'p', 'l', 'a', 'n', 'o', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'e', 'm', 'p', 'r', 'e', 's', 'a', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'n', 'u', 'm', '_', 'c', 'a', 'r', 't', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'v', 'a', 'l', '_', 'c', 'a', 'r', 't', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 07012) */
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 07019) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	',', 'r', 'g', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'o', 'b', 's', '1', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'o', 'b', 's', '2', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'o', 'b', 's', '3', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'o', 'b', 's', '4', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	',', 'c', 'p', 'f', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'e', 's', 'c', 'o', 'l', 'a', 'r', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'e', 'm', 'a', 'i', 'l', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'i', 'n', 's', 't', 'a', 'g', 'r', 'a', 'm', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', 'u', 'l', 't', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 07284) */
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 07291) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'f', 'u', 'm', 'a', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'f', 'u', 'm', '_', 'd', 'a', 't', '1', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 07359) */
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 07366) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'f', 'u', 'm', '_', 'd', 'a', 't', '2', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 07410) */
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 07417) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07457 */ HB_P_LINEOFFSET, 192,	/* 199 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07481 */ HB_P_LINEOFFSET, 196,	/* 203 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07488 */ HB_P_LINEOFFSET, 197,	/* 204 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07493 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

