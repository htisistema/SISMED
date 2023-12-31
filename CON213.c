/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON213.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON213.PRG /q /oC:\HTI\SISMED\CON213.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:20 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON213.PRG"

HB_FUNC( CON213 );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( MAXROW );
HB_FUNC_EXTERN( MAXCOL );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCOMMIT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON213 )
{ "CON213", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON213 )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "LCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "CBA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "MAXROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXROW )}, NULL },
{ "MAXCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( MAXCOL )}, NULL },
{ "TELA243", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OPERADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON213 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON213
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON213 = hb_vm_SymbolInit_CON213;
   #pragma data_seg()
#endif

HB_FUNC( CON213 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '2', '1', '3', 0, 
/* 00017 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00058 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 5,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_PUSHVARIABLE, 6, 0,	/* CBA */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 3,
/* 00098 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 7,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* MAXROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* MAXCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPVARIABLE, 10, 0,	/* TELA243 */
/* 00120 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 11,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* MAXROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 9,	/* MAXCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 10, 0,	/* TELA243 */
	HB_P_DOSHORT, 5,
/* 00142 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00162 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 14,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MTIPO */
/* 00173 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 14,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDUPLICATA */
/* 00184 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 14,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MFORNEC */
/* 00195 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00250 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00297) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00302) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'H', ',', 'D', 'U', ',', 'C', 'T', ',', 'P', 'A', ',', 'F', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00363 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDUPLICATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00410) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00415) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00452 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* GETLIST */
/* 00474 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 00498) */
	HB_P_PUSHLOCALNEAR, 3,	/* MDUPLICATA */
	HB_P_PUSHSYMNEAR, 14,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00509) */
	HB_P_PUSHSYMNEAR, 23,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00514) */
/* 00511 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_ENDPROC,
/* 00514 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 24,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 3,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00527 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 25,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 00593) */
/* 00536 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 26,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 't', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', '!', ' ', '[', ' ', 17, 196, 217, ' ', ']', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 42, 254,	/* -470 (abs: 00120) */
/* 00593 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 29, 0,	/* MCOD_FORN */
/* 00606 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 32,	/* 32 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MCOD_FORN */
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00685) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 32,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'o', 'u', ' ', '<', 'F', '7', '>', 'p', '/', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 's', ' ', 'd', 'e', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 20, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00781 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 21,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* GETLIST */
/* 00803 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00818) */
	HB_P_JUMP, 73, 253,	/* -695 (abs: 00120) */
/* 00818 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHSYMNEAR, 24,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 3,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00847 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHSYMNEAR, 25,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00867) */
	HB_P_PUSHVARIABLE, 34, 0,	/* PAGO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 00924) */
/* 00869 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 26,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'E', 's', 't', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'p', 'a', 'g', 'o', ' ', 'o', 'u', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 252,	/* -801 (abs: 00120) */
/* 00924 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHSYMNEAR, 25,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 00975) */
/* 00933 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 26,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'E', 's', 't', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 172, 252,	/* -852 (abs: 00120) */
/* 00975 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHSYMNEAR, 35,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 01035) */
/* 00984 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHSYMNEAR, 26,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 112, 252,	/* -912 (abs: 00120) */
/* 01035 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHSYMNEAR, 36,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01043 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 28, 0,	/* FORNEC */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
/* 01078 */ HB_P_LINEOFFSET, 49,	/* 54 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHSYMNEAR, 38,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01110 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01143 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01176 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* VALOR */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01232 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 1,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHVARIABLE, 3, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* BANCO */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01267 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHVARIABLE, 28, 0,	/* FORNEC */
	HB_P_POPLOCALNEAR, 4,	/* LCOD */
/* 01274 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHVARIABLE, 44, 0,	/* VALOR */
	HB_P_POPLOCALNEAR, 5,	/* LAST */
/* 01281 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHSYMNEAR, 15,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', '?', ' ', '[', 's', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01317 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 47,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01325 */ HB_P_LINEOFFSET, 58,	/* 63 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 48,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01361) */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 48,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	's', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01396) */
/* 01363 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHVARIABLE, 49, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 50,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 51,	/* OPERADOR */
/* 01372 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHSYMNEAR, 52,	/* DBDELETE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01379 */ HB_P_LINEOFFSET, 61,	/* 66 */
	HB_P_PUSHSYMNEAR, 53,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01386 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHSYMNEAR, 54,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 7, 251,	/* -1273 (abs: 00120) */
/* 01396 */ HB_P_LINEOFFSET, 65,	/* 70 */
	HB_P_PUSHSYMNEAR, 53,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01403 */ HB_P_LINEOFFSET, 66,	/* 71 */
	HB_P_PUSHSYMNEAR, 54,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 246, 250,	/* -1290 (abs: 00120) */
	HB_P_ENDPROC
/* 01414 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

