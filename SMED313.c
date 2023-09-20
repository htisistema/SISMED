/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED313.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED313.PRG /q /oC:\HTI\SISMED\SMED313.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:42 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED313.PRG"

HB_FUNC( SMED313 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( VCCONV );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( WVW_PBSETFONT );
HB_FUNC_EXTERN( WVW_PBCREATE );
HB_FUNC_EXTERN( HISTORICO1 );
HB_FUNC_EXTERN( HISTORICO2 );
HB_FUNC_EXTERN( HISTORICO3 );
HB_FUNC_EXTERN( HISTORICO4 );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RELATORI );
HB_FUNC_EXTERN( SMED700 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( ASC );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED313 )
{ "SMED313", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED313 )}, NULL },
{ "MVALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFATOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMOD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRSOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MREG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCCONV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "TECLA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "REGISTRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODCONV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VCCONV", {HB_FS_PUBLIC}, {HB_FUNCNAME( VCCONV )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "DATANS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "RESP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INDICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_MEST1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_MEST2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_MEST3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_MEST4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ULT_MEST5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRO_NASC1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRO_NASC2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRO_NASC3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRO_NASC4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRO_NASC5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_NASC1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_NASC2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_NASC3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_NASC4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_NASC5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_PBSETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBSETFONT )}, NULL },
{ "WVW_PBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBCREATE )}, NULL },
{ "HISTORICO1", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO1 )}, NULL },
{ "HISTORICO2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO2 )}, NULL },
{ "HISTORICO3", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO3 )}, NULL },
{ "HISTORICO4", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO4 )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RELATORI", {HB_FS_PUBLIC}, {HB_FUNCNAME( RELATORI )}, NULL },
{ "SMED700", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED700 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED313 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED313
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED313 = hb_vm_SymbolInit_SMED313;
   #pragma data_seg()
#endif

HB_FUNC( SMED313 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 46, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '3', '1', '3', 0, 
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MPONTO 0*/
/* 00022 */ HB_P_LINEOFFSET, 2,	/* 18 */
	HB_P_PUSHSYMNEAR, 10,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 2,	/* MFATOR */
	HB_P_PUSHSYMNEAR, 3,	/* MMOD */
	HB_P_PUSHSYMNEAR, 4,	/* MRSOC */
	HB_P_PUSHSYMNEAR, 5,	/* MDATA */
	HB_P_PUSHSYMNEAR, 6,	/* MNOME */
	HB_P_PUSHSYMNEAR, 7,	/* MREG */
	HB_P_PUSHSYMNEAR, 8,	/* MCCONV */
	HB_P_PUSHSYMNEAR, 9,	/* MCPF */
	HB_P_DOSHORT, 9,
/* 00047 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'S', 'O', ' ', 'M', 'E', 'D', 'I', 'C', 'O', ' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '2', 0, 
	HB_P_PUSHVARIABLE, 12, 0,	/* NIVEL_ACESS */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00105) */
/* 00100 */ HB_P_LINEOFFSET, 5,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00105 */ HB_P_LINEOFFSET, 7,	/* 23 */
	HB_P_LOCALNEARSETINT, 2, 32, 0,	/* LBA 32*/
/* 00111 */ HB_P_LINEOFFSET, 8,	/* 24 */
	HB_P_LOCALNEARSETINT, 3, 79, 0,	/* CBA 79*/
/* 00117 */ HB_P_LINEOFFSET, 9,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00154 */ HB_P_LINEOFFSET, 11,	/* 27 */
	HB_P_PUSHSYMNEAR, 14,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00163 */ HB_P_LINEOFFSET, 12,	/* 28 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* OPCAOHIS 0*/
/* 00169 */ HB_P_LINEOFFSET, 13,	/* 29 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MRSOC */
/* 00181 */ HB_P_LINEOFFSET, 14,	/* 30 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MRECIB */
/* 00191 */ HB_P_LINEOFFSET, 15,	/* 31 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MMOD */
/* 00203 */ HB_P_LINEOFFSET, 16,	/* 32 */
	HB_P_LOCALNEARSETINT, 24, 32, 0,	/* LB 32*/
/* 00209 */ HB_P_LINEOFFSET, 17,	/* 33 */
	HB_P_LOCALNEARSETINT, 25, 79, 0,	/* CB 79*/
/* 00215 */ HB_P_LINEOFFSET, 18,	/* 34 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 16, 0,	/* TECLA */
/* 00223 */ HB_P_LINEOFFSET, 19,	/* 35 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MREG */
/* 00229 */ HB_P_LINEOFFSET, 20,	/* 36 */
	HB_P_PUSHSYMNEAR, 17,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MDATA */
/* 00250 */ HB_P_LINEOFFSET, 21,	/* 37 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MCCONV */
/* 00262 */ HB_P_LINEOFFSET, 22,	/* 38 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* MNOME */
/* 00274 */ HB_P_LINEOFFSET, 23,	/* 39 */
	HB_P_PUSHSYMNEAR, 17,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MDATN */
/* 00294 */ HB_P_LINEOFFSET, 24,	/* 40 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MRESP */
/* 00305 */ HB_P_LINEOFFSET, 25,	/* 41 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MIND */
/* 00316 */ HB_P_LINEOFFSET, 26,	/* 42 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 1, 0,	/* MVALOR */
/* 00322 */ HB_P_LINEOFFSET, 27,	/* 43 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 2, 0,	/* MFATOR */
/* 00328 */ HB_P_LINEOFFSET, 28,	/* 44 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MGUIA */
/* 00339 */ HB_P_LINEOFFSET, 29,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', ' ', 'C', 'a', 'm', 'p', 'o', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00389 */ HB_P_LINEOFFSET, 30,	/* 46 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00397 */ HB_P_LINEOFFSET, 31,	/* 47 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_POPVARIABLE, 7, 0,	/* MREG */
/* 00406 */ HB_P_LINEOFFSET, 32,	/* 48 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* CODCONV */
	HB_P_POPVARIABLE, 8, 0,	/* MCCONV */
/* 00415 */ HB_P_LINEOFFSET, 33,	/* 49 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 23,	/* NOME */
	HB_P_POPVARIABLE, 6, 0,	/* MNOME */
/* 00424 */ HB_P_LINEOFFSET, 34,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 24,	/* CPF */
	HB_P_POPVARIABLE, 9, 0,	/* MCPF */
/* 00433 */ HB_P_LINEOFFSET, 35,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* VCCONV */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 8, 0,	/* MCCONV */
	HB_P_DOSHORT, 1,
/* 00443 */ HB_P_LINEOFFSET, 38,	/* 54 */
	HB_P_PUSHSYMNEAR, 26,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00462 */ HB_P_LINEOFFSET, 40,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00493 */ HB_P_LINEOFFSET, 41,	/* 57 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00524 */ HB_P_LINEOFFSET, 42,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', 'm', 'e', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00556 */ HB_P_LINEOFFSET, 43,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00588 */ HB_P_LINEOFFSET, 44,	/* 60 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', '.', 'N', 'a', 's', 'c', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00620 */ HB_P_LINEOFFSET, 45,	/* 61 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00645 */ HB_P_LINEOFFSET, 46,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00677 */ HB_P_LINEOFFSET, 47,	/* 63 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'I', 'n', 'd', 'i', 'c', 'a', 'd', 'o', ' ', 'P', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00709 */ HB_P_LINEOFFSET, 48,	/* 64 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00718 */ HB_P_LINEOFFSET, 49,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* DATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00742 */ HB_P_LINEOFFSET, 50,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_DOSHORT, 1,
/* 00761 */ HB_P_LINEOFFSET, 51,	/* 67 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 23,	/* NOME */
	HB_P_DOSHORT, 1,
/* 00781 */ HB_P_LINEOFFSET, 52,	/* 68 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* CODCONV */
	HB_P_DOSHORT, 1,
/* 00801 */ HB_P_LINEOFFSET, 53,	/* 69 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSYMNEAR, 32,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MRSOC */
	HB_P_DOSHORT, 1,
/* 00826 */ HB_P_LINEOFFSET, 54,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* DATANS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00851 */ HB_P_LINEOFFSET, 55,	/* 71 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* INT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* DATANS */
	HB_P_MINUS,
	HB_P_PUSHINT, 109, 1,	/* 365 */
	HB_P_DIVIDE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00893 */ HB_P_LINEOFFSET, 56,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* RESP */
	HB_P_DOSHORT, 1,
/* 00913 */ HB_P_LINEOFFSET, 57,	/* 73 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* INDICA */
	HB_P_DOSHORT, 1,
/* 00933 */ HB_P_LINEOFFSET, 58,	/* 74 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00941 */ HB_P_LINEOFFSET, 59,	/* 75 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 39,	/* ULT_MEST1 */
	HB_P_POPLOCALNEAR, 28,	/* MULT_MEST1 */
/* 00949 */ HB_P_LINEOFFSET, 60,	/* 76 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 40,	/* ULT_MEST2 */
	HB_P_POPLOCALNEAR, 31,	/* MULT_MEST2 */
/* 00957 */ HB_P_LINEOFFSET, 61,	/* 77 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 41,	/* ULT_MEST3 */
	HB_P_POPLOCALNEAR, 34,	/* MULT_MEST3 */
/* 00965 */ HB_P_LINEOFFSET, 62,	/* 78 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* ULT_MEST4 */
	HB_P_POPLOCALNEAR, 37,	/* MULT_MEST4 */
/* 00973 */ HB_P_LINEOFFSET, 63,	/* 79 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* ULT_MEST5 */
	HB_P_POPLOCALNEAR, 40,	/* MULT_MEST5 */
/* 00981 */ HB_P_LINEOFFSET, 64,	/* 80 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* PRO_NASC1 */
	HB_P_POPLOCALNEAR, 29,	/* MPRO_NASC1 */
/* 00989 */ HB_P_LINEOFFSET, 65,	/* 81 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* PRO_NASC2 */
	HB_P_POPLOCALNEAR, 32,	/* MPRO_NASC2 */
/* 00997 */ HB_P_LINEOFFSET, 66,	/* 82 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* PRO_NASC3 */
	HB_P_POPLOCALNEAR, 35,	/* MPRO_NASC3 */
/* 01005 */ HB_P_LINEOFFSET, 67,	/* 83 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* PRO_NASC4 */
	HB_P_POPLOCALNEAR, 38,	/* MPRO_NASC4 */
/* 01013 */ HB_P_LINEOFFSET, 68,	/* 84 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* PRO_NASC5 */
	HB_P_POPLOCALNEAR, 41,	/* MPRO_NASC5 */
/* 01021 */ HB_P_LINEOFFSET, 69,	/* 85 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* DAT_NASC1 */
	HB_P_POPLOCALNEAR, 30,	/* MDAT_NASC1 */
/* 01029 */ HB_P_LINEOFFSET, 70,	/* 86 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* DAT_NASC2 */
	HB_P_POPLOCALNEAR, 33,	/* MDAT_NASC2 */
/* 01037 */ HB_P_LINEOFFSET, 71,	/* 87 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* DAT_NASC3 */
	HB_P_POPLOCALNEAR, 36,	/* MDAT_NASC3 */
/* 01045 */ HB_P_LINEOFFSET, 72,	/* 88 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* DAT_NASC4 */
	HB_P_POPLOCALNEAR, 39,	/* MDAT_NASC4 */
/* 01053 */ HB_P_LINEOFFSET, 73,	/* 89 */
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* DAT_NASC5 */
	HB_P_POPLOCALNEAR, 42,	/* MDAT_NASC5 */
/* 01061 */ HB_P_LINEOFFSET, 74,	/* 90 */
	HB_P_PUSHSYMNEAR, 19,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01069 */ HB_P_LINEOFFSET, 75,	/* 91 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* OPCAOHIS 0*/
/* 01075 */ HB_P_LINEOFFSET, 76,	/* 92 */
	HB_P_PUSHSYMNEAR, 36,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 5, 0,	/* MDATA */
/* 01085 */ HB_P_LINEOFFSET, 77,	/* 93 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_PBSETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01112 */ HB_P_LINEOFFSET, 78,	/* 94 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'a', ' ', 'A', 'd', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 56,	/* HISTORICO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPLOCALNEAR, 43,	/* NHIST1 */
/* 01169 */ HB_P_LINEOFFSET, 79,	/* 95 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'[', 'E', ']', 'n', 't', 'r', 'e', 'v', 'i', 's', 't', 'a', ' ', 'd', 'e', ' ', 'A', 'd', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 57,	/* HISTORICO2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPLOCALNEAR, 44,	/* NHIST2 */
/* 01230 */ HB_P_LINEOFFSET, 80,	/* 96 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'a', ' ', '[', 'A', ']', 'v', 'a', 'l', 'i', 'a', 'c', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 58,	/* HISTORICO3 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPLOCALNEAR, 45,	/* NHIST3 */
/* 01288 */ HB_P_LINEOFFSET, 81,	/* 97 */
	HB_P_PUSHSYMNEAR, 55,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'E', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'd', 'o', ' ', '[', 'T', ']', 'r', 'a', 't', 'a', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 59,	/* HISTORICO4 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPLOCALNEAR, 45,	/* NHIST3 */
/* 01349 */ HB_P_LINEOFFSET, 84,	/* 100 */
	HB_P_PUSHSYMNEAR, 60,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01357 */ HB_P_LINEOFFSET, 85,	/* 101 */
	HB_P_PUSHSYMNEAR, 18,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'o', 'p', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'S', 'A', 'I', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 01411 */ HB_P_LINEOFFSET, 86,	/* 102 */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 01451) */
/* 01423 */ HB_P_LINEOFFSET, 87,	/* 103 */
	HB_P_PUSHSYMNEAR, 62,	/* RELATORI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MRECIB */
	HB_P_DOSHORT, 1,
/* 01432 */ HB_P_LINEOFFSET, 88,	/* 104 */
	HB_P_PUSHSYMNEAR, 63,	/* SMED700 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01439 */ HB_P_LINEOFFSET, 89,	/* 105 */
	HB_P_PUSHSYMNEAR, 64,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01446 */ HB_P_LINEOFFSET, 90,	/* 106 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01451 */ HB_P_LINEOFFSET, 92,	/* 108 */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'r', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01487) */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01503) */
/* 01489 */ HB_P_LINEOFFSET, 93,	/* 109 */
	HB_P_PUSHSYMNEAR, 56,	/* HISTORICO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 105, 255,	/* -151 (abs: 01349) */
/* 01503 */ HB_P_LINEOFFSET, 94,	/* 110 */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01539) */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01555) */
/* 01541 */ HB_P_LINEOFFSET, 95,	/* 111 */
	HB_P_PUSHSYMNEAR, 57,	/* HISTORICO2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 53, 255,	/* -203 (abs: 01349) */
/* 01555 */ HB_P_LINEOFFSET, 96,	/* 112 */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01591) */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01607) */
/* 01593 */ HB_P_LINEOFFSET, 97,	/* 113 */
	HB_P_PUSHSYMNEAR, 58,	/* HISTORICO3 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 1, 255,	/* -255 (abs: 01349) */
/* 01607 */ HB_P_LINEOFFSET, 98,	/* 114 */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	't', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01643) */
	HB_P_PUSHSYMNEAR, 61,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 218, 254,	/* -294 (abs: 01349) */
/* 01646 */ HB_P_LINEOFFSET, 99,	/* 115 */
	HB_P_PUSHSYMNEAR, 59,	/* HISTORICO4 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* REGISTRO */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 204, 254,	/* -308 (abs: 01349) */
	HB_P_ENDPROC
/* 01661 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
