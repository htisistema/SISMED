/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED5E22.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED5E22.PRG /q /oC:\HTI\SISMED\SMED5E22.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:36 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED5E22.PRG"

HB_FUNC( SMED5E22 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED5E22 )
{ "SMED5E22", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED5E22 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED5E22 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED5E22
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED5E22 = hb_vm_SymbolInit_SMED5E22;
   #pragma data_seg()
#endif

HB_FUNC( SMED5E22 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_PRODUTO */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 6,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 4,	/* MARQ */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 4, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00040 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00049 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00059 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 15, 0,	/* LBA 15*/
/* 00065 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 79, 0,	/* CBA 79*/
/* 00071 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'P', 'E', 'Q', 'U', 'E', 'N', 'A', 'S', ' ', 'P', 'E', 'R', 'S', 'O', 'N', 'A', 'L', 'I', 'Z', 'A', 'D', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00134 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MDESCR1 */
/* 00145 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDESCR2 */
/* 00156 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MDESCR3 */
/* 00167 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MDESCR4 */
/* 00178 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00188 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_LOCALNEARSETINT, 11, 1, 0,	/* MQUANTD 1*/
/* 00194 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00204 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', 's', ' ', 'o', 'p', 'c', 'o', 'e', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00251 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00291 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00331 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00371 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00411 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00472 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDESCR1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00517) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00522) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 16, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00552 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDESCR2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00597) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00602) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 16, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00632 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDESCR3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00677) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00682) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', '3', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 16, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00712 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDESCR4 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00757) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00762) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', '4', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 16, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00792 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00837) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00842) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 16, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00880 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 17,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00902 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00917) */
	HB_P_JUMP, 5, 6,	/* 1541 (abs: 02455) */
/* 00917 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'a', 's', ' ', 'e', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00986 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01001) */
	HB_P_JUMP, 160, 252,	/* -864 (abs: 00134) */
/* 01001 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01015) */
	HB_P_JUMP, 146, 252,	/* -878 (abs: 00134) */
/* 01015 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 20, 0,	/* I */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 11,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01060) */
/* 01029 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHLOCALNEAR, 7,	/* MDESCR1 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDESCR2 */
	HB_P_PUSHLOCALNEAR, 9,	/* MDESCR3 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDESCR4 */
	HB_P_ARRAYGEN, 4, 0,	/* 4 */
	HB_P_DOSHORT, 2,
/* 01049 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 20, 0,	/* I */
	HB_P_JUMPNEAR, 219,	/* -37 (abs: 01021) */
/* 01060 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 21,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01083) */
	HB_P_JUMP, 78, 252,	/* -946 (abs: 00134) */
/* 01083 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 20, 0,	/* I */
/* 01089 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	27, '0', 0, 
	HB_P_DOSHORT, 1,
/* 01112 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	27, 'M', 15, 0, 
	HB_P_DOSHORT, 1,
/* 01136 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 20, 0,	/* I */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 28, 4,	/* 1052 (abs: 02205) */
/* 01156 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 17, 0,	/* 17 */
	HB_P_DOSHORT, 1,
/* 01185 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01236) */
/* 01200 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01236 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01290) */
/* 01254 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01290 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01344) */
/* 01308 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01344 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01398) */
/* 01362 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01398 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_LEFT, 17, 0,	/* 17 */
	HB_P_DOSHORT, 1,
/* 01446 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01498) */
/* 01461 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01498 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01553) */
/* 01516 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01553 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01608) */
/* 01571 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01608 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01663) */
/* 01626 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01663 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01693 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01745) */
/* 01708 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01745 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01800) */
/* 01763 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01800 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01855) */
/* 01818 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01855 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01910) */
/* 01873 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01910 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01940 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 01992) */
/* 01955 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01992 */ HB_P_LINEOFFSET, 95,	/* 103 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02047) */
/* 02010 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02047 */ HB_P_LINEOFFSET, 98,	/* 106 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02102) */
/* 02065 */ HB_P_LINEOFFSET, 99,	/* 107 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02102 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02157) */
/* 02120 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PRODUTO */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02157 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_POPVARIABLE, 20, 0,	/* I */
/* 02168 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 02193 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHVARIABLE, 20, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 20, 0,	/* I */
	HB_P_JUMP, 220, 251,	/* -1060 (abs: 01142) */
/* 02205 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	27, 'P', 0, 
	HB_P_DOSHORT, 1,
/* 02228 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	27, '2', 0, 
	HB_P_DOSHORT, 1,
/* 02251 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 25,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02292 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 02374) */
/* 02302 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 26,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 02319 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHSYMNEAR, 27,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', '2', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 67, 247,	/* -2237 (abs: 00134) */
/* 02374 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_TIPO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 57, 247,	/* -2247 (abs: 00134) */
/* 02384 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 26,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 02401 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHSYMNEAR, 27,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'S', 'P', 'R', 'I', 'N', 'T', 'E', 'R', ' ', '/', 'S', 'E', 'L', ' ', '/', 'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 242, 246,	/* -2318 (abs: 00134) */
/* 02455 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02462 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02467 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
