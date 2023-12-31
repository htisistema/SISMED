/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED5931.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED5931.PRG /q /oC:\HTI\SISMED\SMED5931.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:39 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED5931.PRG"

HB_FUNC( SMED5931 );
HB_FUNC( CABCIR );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABRECI );
HB_FUNC_EXTERN( __DBLOCATE );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __DBCONTINUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DATE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED5931 )
{ "SMED5931", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED5931 )}, NULL },
{ "MMOD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABCIR", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CABCIR )}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABRECI", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABRECI )}, NULL },
{ "__DBLOCATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBLOCATE )}, NULL },
{ "CIRURGIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "REGISTRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DBCONTINUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBCONTINUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED5931 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED5931
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED5931 = hb_vm_SymbolInit_SMED5931;
   #pragma data_seg()
#endif

HB_FUNC( SMED5931 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'M', 'E', 'D', '5', '9', '3', '1', 0, 
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MMOD */
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 3,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* MARQ */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 5, 0,	/* MARQ */
	HB_P_POPVARIABLE, 3, 0,	/* MIMP_TIPO */
/* 00050 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00059 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONT 0*/
/* 00065 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* MPAG 1*/
/* 00071 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00081 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 18, 0,	/* LBA 18*/
/* 00087 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 70, 0,	/* CBA 70*/
/* 00093 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'L', 'I', 'S', 'T', 'A', 'G', 'E', 'M', ' ', 'D', 'A', 'S', ' ', 'C', 'I', 'R', 'U', 'R', 'G', 'I', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00132 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 9,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00145 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00154 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'a', 's', ' ', 'D', 'a', 't', 'a', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00207 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00217 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 00240 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* TDATA 0*/
/* 00246 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MCIRURG */
/* 00257 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* MTOTCIR 0*/
/* 00263 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00271 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', '(', 'I', 'n', 'i', 'c', 'i', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00321 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', '(', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00371 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', ' ', 'd', 'e', ' ', ' ', 'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00417 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00431 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00476) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00481) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00514 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 22,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 00536 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00551) */
	HB_P_JUMP, 44, 4,	/* 1068 (abs: 01616) */
/* 00551 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00565) */
	HB_P_JUMP, 82, 254,	/* -430 (abs: 00132) */
/* 00565 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHSYMNEAR, 25,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00578 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00592 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 26,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00607 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00622 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 28,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00638) */
/* 00631 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00638 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00683) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00688) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00721 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 22,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 00743 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00758) */
	HB_P_JUMP, 145, 253,	/* -623 (abs: 00132) */
/* 00758 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 9,	/* TDATA */
/* 00767 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHLOCALNEAR, 9,	/* TDATA */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00778) */
	HB_P_JUMP, 125, 253,	/* -643 (abs: 00132) */
/* 00778 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCIRURG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00823) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00828) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'r', 'u', 'r', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00862 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHSYMNEAR, 22,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 00884 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00899) */
	HB_P_JUMP, 4, 253,	/* -764 (abs: 00132) */
/* 00899 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 30,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'M', 'E', 'D', '5', '9', '3', '1', '.', 'R', 'E', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00926) */
	HB_P_JUMP, 233, 252,	/* -791 (abs: 00132) */
/* 00926 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* CABCIR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 00939 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 00945 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 32, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00964) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 32, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00973) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 22, 1,	/* 278 (abs: 01251) */
/* 00976 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01017) */
/* 00985 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00992 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* MPAG 1*/
/* 00998 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 34,	/* CABRECI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01011 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 01017 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 35,	/* __DBLOCATE */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCIRURG */
	HB_P_PUSHVARIABLE, 36, 0,	/* CIRURGIA */
	HB_P_PUSHSYMNEAR, 37,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 5,
/* 01049 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 38,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 195, 0,	/* 195 (abs: 01251) */
/* 01059 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 32, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01078) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 32, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01087) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 161, 0,	/* 161 (abs: 01248) */
/* 01090 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01131) */
/* 01099 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01106 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* MPAG 1*/
/* 01112 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_PUSHSYMNEAR, 31,	/* CABCIR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01125 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 01131 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* REGISTRO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01157 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* NOME */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01180 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* DATA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01203 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* CIRURGIA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01226 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONT 1*/
/* 01232 */ HB_P_LINEOFFSET, 86,	/* 93 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* MTOTCIR 1*/
/* 01238 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_PUSHSYMNEAR, 42,	/* __DBCONTINUE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 70, 255,	/* -186 (abs: 01059) */
	HB_P_JUMP, 209, 254,	/* -303 (abs: 00945) */
/* 01251 */ HB_P_LINEOFFSET, 94,	/* 101 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 01280) */
/* 01260 */ HB_P_LINEOFFSET, 95,	/* 102 */
	HB_P_PUSHSYMNEAR, 31,	/* CABCIR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01273 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01280 */ HB_P_LINEOFFSET, 98,	/* 105 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 's', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01330 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOTCIR */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01360 */ HB_P_LINEOFFSET, 100,	/* 107 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'H', 'r', 's', '.', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01397 */ HB_P_LINEOFFSET, 101,	/* 108 */
	HB_P_PUSHSYMNEAR, 33,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01404 */ HB_P_LINEOFFSET, 102,	/* 109 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01445 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHSYMNEAR, 45,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01453 */ HB_P_LINEOFFSET, 104,	/* 111 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 01535) */
/* 01463 */ HB_P_LINEOFFSET, 105,	/* 112 */
	HB_P_PUSHSYMNEAR, 46,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 01480 */ HB_P_LINEOFFSET, 106,	/* 113 */
	HB_P_PUSHSYMNEAR, 47,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', '2', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 136, 250,	/* -1400 (abs: 00132) */
/* 01535 */ HB_P_LINEOFFSET, 107,	/* 114 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MIMP_TIPO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 126, 250,	/* -1410 (abs: 00132) */
/* 01545 */ HB_P_LINEOFFSET, 108,	/* 115 */
	HB_P_PUSHSYMNEAR, 46,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 01562 */ HB_P_LINEOFFSET, 109,	/* 116 */
	HB_P_PUSHSYMNEAR, 47,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 55, 250,	/* -1481 (abs: 00132) */
/* 01616 */ HB_P_LINEOFFSET, 112,	/* 119 */
	HB_P_PUSHSYMNEAR, 49,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01623 */ HB_P_LINEOFFSET, 113,	/* 120 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01628 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CABCIR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 128, 0,	/* 128 */
	HB_P_PUSHSYMNEAR, 50,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* TRACO */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 130 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 51, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00050 */ HB_P_LINEOFFSET, 3,	/* 131 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 51, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 132 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'C', 'I', 'R', 'U', 'R', 'G', 'I', 'A', 'S', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00136 */ HB_P_LINEOFFSET, 5,	/* 133 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'P', 'A', 'G', '.', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00163 */ HB_P_LINEOFFSET, 6,	/* 134 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* FPAG */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00192 */ HB_P_LINEOFFSET, 7,	/* 135 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'e', ' ', 'M', 'e', 'd', 'i', 'c', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00241 */ HB_P_LINEOFFSET, 8,	/* 136 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* FDATA1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00263 */ HB_P_LINEOFFSET, 9,	/* 137 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'a', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00287 */ HB_P_LINEOFFSET, 10,	/* 138 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* FDATA2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00309 */ HB_P_LINEOFFSET, 11,	/* 139 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00334 */ HB_P_LINEOFFSET, 12,	/* 140 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00358 */ HB_P_LINEOFFSET, 13,	/* 141 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00392 */ HB_P_LINEOFFSET, 14,	/* 142 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'o', 'm', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00419 */ HB_P_LINEOFFSET, 15,	/* 143 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00446 */ HB_P_LINEOFFSET, 16,	/* 144 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00477 */ HB_P_LINEOFFSET, 17,	/* 145 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* TRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00501 */ HB_P_LINEOFFSET, 18,	/* 146 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00506 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

