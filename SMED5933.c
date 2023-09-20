/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED5933.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED5933.PRG /q /oC:\HTI\SISMED\SMED5933.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:48 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED5933.PRG"

HB_FUNC( SMED5933 );
HB_FUNC( CABMEDI );
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
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( __DBLOCATE );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __DBCONTINUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( REPLICATE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED5933 )
{ "SMED5933", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED5933 )}, NULL },
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
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABMEDI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CABMEDI )}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "__DBLOCATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBLOCATE )}, NULL },
{ "MEDICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "REGISTRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DBCONTINUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBCONTINUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED5933 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED5933
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED5933 = hb_vm_SymbolInit_SMED5933;
   #pragma data_seg()
#endif

HB_FUNC( SMED5933 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 13, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'M', 'E', 'D', '5', '9', '3', '3', 0, 
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 8 */
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
/* 00050 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00059 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MCONT 0*/
/* 00065 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* MPAG 1*/
/* 00071 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00081 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 20, 0,	/* LBA 20*/
/* 00087 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 70, 0,	/* CBA 70*/
/* 00093 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 'P', 'O', 'R', ' ', 'M', 'E', 'D', 'I', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 00138 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 9,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00151 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00160 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'a', 's', ' ', 'D', 'a', 't', 'a', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00213 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00223 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 00243 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 12,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
/* 00263 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* TDATA 0*/
/* 00269 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MMEDICA */
/* 00280 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* MTOTCIR 0*/
/* 00286 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00294 */ HB_P_LINEOFFSET, 23,	/* 29 */
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
/* 00344 */ HB_P_LINEOFFSET, 24,	/* 30 */
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
/* 00394 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', ' ', 'd', 'e', ' ', ' ', 'M', 'e', 'd', 'i', 'c', 'a', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00443 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00457 */ HB_P_LINEOFFSET, 27,	/* 33 */
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
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00502) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00507) */
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
/* 00540 */ HB_P_LINEOFFSET, 28,	/* 34 */
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
/* 00562 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00577) */
	HB_P_JUMP, 43, 4,	/* 1067 (abs: 01641) */
/* 00577 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00591) */
	HB_P_JUMP, 62, 254,	/* -450 (abs: 00138) */
/* 00591 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'l', 'i', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 26,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00611 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00625 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHSYMNEAR, 27,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00640 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 16,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00655 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00671) */
/* 00664 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHSYMNEAR, 30,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00671 */ HB_P_LINEOFFSET, 44,	/* 50 */
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
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00716) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00721) */
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
/* 00754 */ HB_P_LINEOFFSET, 45,	/* 51 */
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
/* 00776 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00791) */
	HB_P_JUMP, 118, 253,	/* -650 (abs: 00138) */
/* 00791 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 9,	/* TDATA */
/* 00800 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHLOCALNEAR, 9,	/* TDATA */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00811) */
	HB_P_JUMP, 98, 253,	/* -670 (abs: 00138) */
/* 00811 */ HB_P_LINEOFFSET, 53,	/* 59 */
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
	12, 0,	/* MMEDICA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00856) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00861) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'm', 'e', 'd', 'i', 'c', 'a', 0, 
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
/* 00895 */ HB_P_LINEOFFSET, 54,	/* 60 */
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
/* 00917 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00932) */
	HB_P_JUMP, 233, 252,	/* -791 (abs: 00138) */
/* 00932 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHSYMNEAR, 31,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'M', 'E', 'D', '5', '9', '3', '3', '.', 'R', 'E', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00959) */
	HB_P_JUMP, 206, 252,	/* -818 (abs: 00138) */
/* 00959 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHSYMNEAR, 32,	/* CABMEDI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 00972 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 00978 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 33, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00997) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 33, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01006) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 22, 1,	/* 278 (abs: 01284) */
/* 01009 */ HB_P_LINEOFFSET, 65,	/* 71 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01050) */
/* 01018 */ HB_P_LINEOFFSET, 66,	/* 72 */
	HB_P_PUSHSYMNEAR, 34,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01025 */ HB_P_LINEOFFSET, 67,	/* 73 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* MPAG 1*/
/* 01031 */ HB_P_LINEOFFSET, 68,	/* 74 */
	HB_P_PUSHSYMNEAR, 32,	/* CABMEDI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01044 */ HB_P_LINEOFFSET, 69,	/* 75 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 01050 */ HB_P_LINEOFFSET, 72,	/* 78 */
	HB_P_PUSHSYMNEAR, 35,	/* __DBLOCATE */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MMEDICA */
	HB_P_PUSHVARIABLE, 36, 0,	/* MEDICA */
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
/* 01082 */ HB_P_LINEOFFSET, 74,	/* 80 */
	HB_P_PUSHSYMNEAR, 38,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 195, 0,	/* 195 (abs: 01284) */
/* 01092 */ HB_P_LINEOFFSET, 75,	/* 81 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 33, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01111) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 33, 0,	/* DATA */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01120) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 29,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 161, 0,	/* 161 (abs: 01281) */
/* 01123 */ HB_P_LINEOFFSET, 76,	/* 82 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 01164) */
/* 01132 */ HB_P_LINEOFFSET, 77,	/* 83 */
	HB_P_PUSHSYMNEAR, 34,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01139 */ HB_P_LINEOFFSET, 78,	/* 84 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* MPAG 1*/
/* 01145 */ HB_P_LINEOFFSET, 79,	/* 85 */
	HB_P_PUSHSYMNEAR, 32,	/* CABMEDI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01158 */ HB_P_LINEOFFSET, 80,	/* 86 */
	HB_P_LOCALNEARSETINT, 11, 6, 0,	/* MCONT 6*/
/* 01164 */ HB_P_LINEOFFSET, 82,	/* 88 */
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
/* 01190 */ HB_P_LINEOFFSET, 83,	/* 89 */
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
/* 01213 */ HB_P_LINEOFFSET, 84,	/* 90 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* DATA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01236 */ HB_P_LINEOFFSET, 85,	/* 91 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MEDICA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01259 */ HB_P_LINEOFFSET, 86,	/* 92 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* MCONT 1*/
/* 01265 */ HB_P_LINEOFFSET, 87,	/* 93 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* MTOTCIR 1*/
/* 01271 */ HB_P_LINEOFFSET, 88,	/* 94 */
	HB_P_PUSHSYMNEAR, 42,	/* __DBCONTINUE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 70, 255,	/* -186 (abs: 01092) */
	HB_P_JUMP, 209, 254,	/* -303 (abs: 00978) */
/* 01284 */ HB_P_LINEOFFSET, 95,	/* 101 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCONT */
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 01313) */
/* 01293 */ HB_P_LINEOFFSET, 96,	/* 102 */
	HB_P_PUSHSYMNEAR, 32,	/* CABMEDI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_DOSHORT, 3,
/* 01306 */ HB_P_LINEOFFSET, 97,	/* 103 */
	HB_P_PUSHSYMNEAR, 34,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01313 */ HB_P_LINEOFFSET, 99,	/* 105 */
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
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01363 */ HB_P_LINEOFFSET, 100,	/* 106 */
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
/* 01393 */ HB_P_LINEOFFSET, 101,	/* 107 */
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
/* 01430 */ HB_P_LINEOFFSET, 102,	/* 108 */
	HB_P_PUSHSYMNEAR, 34,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01437 */ HB_P_LINEOFFSET, 103,	/* 109 */
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
/* 01478 */ HB_P_LINEOFFSET, 104,	/* 110 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 01560) */
/* 01488 */ HB_P_LINEOFFSET, 105,	/* 111 */
	HB_P_PUSHSYMNEAR, 45,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 01505 */ HB_P_LINEOFFSET, 106,	/* 112 */
	HB_P_PUSHSYMNEAR, 46,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', '2', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 117, 250,	/* -1419 (abs: 00138) */
/* 01560 */ HB_P_LINEOFFSET, 107,	/* 113 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MIMP_TIPO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 107, 250,	/* -1429 (abs: 00138) */
/* 01570 */ HB_P_LINEOFFSET, 108,	/* 114 */
	HB_P_PUSHSYMNEAR, 45,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 01587 */ HB_P_LINEOFFSET, 109,	/* 115 */
	HB_P_PUSHSYMNEAR, 46,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 36, 250,	/* -1500 (abs: 00138) */
/* 01641 */ HB_P_LINEOFFSET, 112,	/* 118 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01648 */ HB_P_LINEOFFSET, 113,	/* 119 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01653 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CABMEDI )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 127, 0,	/* 127 */
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
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 128 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00063 */ HB_P_LINEOFFSET, 2,	/* 129 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'M', 'E', 'D', 'I', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00127 */ HB_P_LINEOFFSET, 3,	/* 130 */
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
/* 00154 */ HB_P_LINEOFFSET, 4,	/* 131 */
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
/* 00183 */ HB_P_LINEOFFSET, 5,	/* 132 */
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
/* 00232 */ HB_P_LINEOFFSET, 6,	/* 133 */
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
/* 00254 */ HB_P_LINEOFFSET, 7,	/* 134 */
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
/* 00278 */ HB_P_LINEOFFSET, 8,	/* 135 */
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
/* 00300 */ HB_P_LINEOFFSET, 9,	/* 136 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00325 */ HB_P_LINEOFFSET, 10,	/* 137 */
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
	HB_P_PUSHSYMNEAR, 51,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00358 */ HB_P_LINEOFFSET, 11,	/* 138 */
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
/* 00392 */ HB_P_LINEOFFSET, 12,	/* 139 */
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
/* 00419 */ HB_P_LINEOFFSET, 13,	/* 140 */
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
/* 00446 */ HB_P_LINEOFFSET, 14,	/* 141 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'M', 'e', 'd', 'i', 'c', 'a', 'm', 'e', 'n', 't', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00481 */ HB_P_LINEOFFSET, 15,	/* 142 */
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
	HB_P_PUSHSYMNEAR, 51,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00514 */ HB_P_LINEOFFSET, 16,	/* 143 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00519 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
