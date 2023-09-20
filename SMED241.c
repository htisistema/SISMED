/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED241.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED241.PRG /q /oC:\HTI\SISMED\SMED241.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:40 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED241.PRG"

HB_FUNC( SMED241 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOBOTTOM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED241 )
{ "SMED241", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED241 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOBOTTOM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "COD_MED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "OPCA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "NOMECOM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMEDROGA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "USO_MED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DOSE_QUANT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POSOLOGIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EFEITO_COL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRECAUCOES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED241 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED241
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED241 = hb_vm_SymbolInit_SMED241;
   #pragma data_seg()
#endif

HB_FUNC( SMED241 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_POPLOCALNEAR, 1,	/* LCI */
/* 00014 */ HB_P_LINEOFFSET, 1,	/* 12 */
	HB_P_LOCALNEARSETINT, 3, 21, 0,	/* LBA 21*/
/* 00020 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_LOCALNEARSETINT, 4, 77, 0,	/* CBA 77*/
/* 00026 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'M', 'E', 'D', 'I', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 00067 */ HB_P_LINEOFFSET, 7,	/* 18 */
	HB_P_PUSHSYMNEAR, 2,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'd', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00080 */ HB_P_LINEOFFSET, 8,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00089 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* DBGOBOTTOM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00096 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* COD_MED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* MCOD */
/* 00118 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MUSO */
/* 00129 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* OPCA */
/* 00140 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 00150 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MNOMEDR */
/* 00161 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MNOMECOM */
/* 00172 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDOSE */
/* 00183 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MPOSO */
/* 00194 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MEFEI */
/* 00205 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MPREC */
/* 00216 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 10,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'P', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00270 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00278 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', ' ', 'M', 'e', 'd', 'i', 'c', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00322 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'C', 'o', 'm', 'e', 'r', 'c', 'i', 'a', 'l', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00366 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 's', 'o', ' ', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00399 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'D', 'r', 'o', 'g', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00443 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 'D', 'o', 's', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00487 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'o', 's', 'o', 'l', 'o', 'g', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00531 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'f', 'e', 'i', 't', 'o', 's', ' ', 'C', 'o', 'l', 'a', 't', 'e', 'r', 'a', 'i', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00575 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'e', 'c', 'a', 'u', 'c', 'o', 'e', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00619 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00628 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_DOSHORT, 1,
/* 00652 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00660 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MNOMECOM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00705) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00710) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'n', 'o', 'm', 'e', 'c', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00745 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 19,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* GETLIST */
/* 00767 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00799) */
/* 00779 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 3,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00787 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00794 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00799 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MNOMECOM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00813) */
	HB_P_JUMP, 25, 253,	/* -743 (abs: 00067) */
/* 00813 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MNOMECOM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00823 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 24,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 14, 1,	/* 270 (abs: 01100) */
/* 00833 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00842 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 4,
/* 00857 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 25,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 5,
/* 00873 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00881 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 26,	/* SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'w', '+', '*', '/', 'n', ',', 'x', 0, 
	HB_P_DOSHORT, 1,
/* 00898 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'M', 'e', 'd', 'i', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'E', 'x', 'i', 's', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00952 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00960 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'C', 'o', 'm', 'e', 'r', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00993 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'D', 'r', 'o', 'g', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01026 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01035 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* NOMECOM */
	HB_P_DOSHORT, 1,
/* 01054 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* NOMEDROGA */
	HB_P_DOSHORT, 1,
/* 01073 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01081 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 29,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01090 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 250, 251,	/* -1030 (abs: 00067) */
/* 01100 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 49, 0,	/* 49*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MUSO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01145) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01150) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'u', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01181 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MNOMEDR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01226) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01231) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'n', 'o', 'm', 'e', 'd', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01265 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDOSE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01310) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01315) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'o', 's', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01347 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MPOSO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01392) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01397) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'o', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01429 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MEFEI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01474) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01479) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'e', 'f', 'e', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01511 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 2,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MPREC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01556) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01561) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'r', 'e', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 18, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01593 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 19,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* GETLIST */
/* 01615 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01630) */
	HB_P_JUMP, 232, 249,	/* -1560 (abs: 00067) */
/* 01630 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 30,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 01670 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01685) */
	HB_P_JUMP, 177, 249,	/* -1615 (abs: 00067) */
/* 01685 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 01826) */
/* 01697 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHSYMNEAR, 31,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 01775) */
/* 01706 */ HB_P_LINEOFFSET, 86,	/* 97 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_POPFIELD, 7, 0,	/* COD_MED */
/* 01713 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_PUSHLOCALNEAR, 14,	/* MUSO */
	HB_P_POPFIELD, 32, 0,	/* USO_MED */
/* 01720 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHLOCALNEAR, 6,	/* MNOMEDR */
	HB_P_POPFIELD, 28, 0,	/* NOMEDROGA */
/* 01727 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_PUSHLOCALNEAR, 7,	/* MNOMECOM */
	HB_P_POPFIELD, 27, 0,	/* NOMECOM */
/* 01734 */ HB_P_LINEOFFSET, 90,	/* 101 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDOSE */
	HB_P_POPFIELD, 33, 0,	/* DOSE_QUANT */
	HB_P_PUSHLOCALNEAR, 9,	/* MPOSO */
	HB_P_POPFIELD, 34, 0,	/* POSOLOGIA */
/* 01746 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_PUSHLOCALNEAR, 10,	/* MEFEI */
	HB_P_POPFIELD, 35, 0,	/* EFEITO_COL */
	HB_P_PUSHLOCALNEAR, 11,	/* MPREC */
	HB_P_POPFIELD, 36, 0,	/* PRECAUCOES */
/* 01758 */ HB_P_LINEOFFSET, 92,	/* 103 */
	HB_P_PUSHSYMNEAR, 37,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01765 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_PUSHSYMNEAR, 38,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 87, 249,	/* -1705 (abs: 00067) */
/* 01775 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 39,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 36, 249,	/* -1756 (abs: 00067) */
	HB_P_JUMP, 33, 249,	/* -1759 (abs: 00067) */
	HB_P_ENDPROC
/* 01830 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

