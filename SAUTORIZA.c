/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAUTORIZA.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SAUTORIZA.PRG /q /oC:\HTI\SISMED\SAUTORIZA.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:54 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAUTORIZA.PRG"

HB_FUNC( AUTORIZACAO );
HB_FUNC( CRIP );
HB_FUNC( DCRIP );
HB_FUNC( TIRA_PONTOS );
HB_FUNC( SENHA_CESSO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( FECHA_TELA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAUTORIZA )
{ "AUTORIZACAO", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( AUTORIZACAO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRIP )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DCRIP", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( DCRIP )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "TIRA_PONTOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TIRA_PONTOS )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "SENHA_CESSO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SENHA_CESSO )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAUTORIZA )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAUTORIZA
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAUTORIZA = hb_vm_SymbolInit_SAUTORIZA;
   #pragma data_seg()
#endif

HB_FUNC( AUTORIZACAO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00090) */
/* 00085 */ HB_P_LINEOFFSET, 1,	/* 8 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00090 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00095 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CRIP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 17, 0,	/* 17 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* MLETRA */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MAUX */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00033) */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 19 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00033 */ HB_P_LINEOFFSET, 4,	/* 21 */
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* MSENHA 1*/
	0, 
/* 00040 */ HB_P_LINEOFFSET, 5,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* MEXP */
/* 00051 */ HB_P_LINEOFFSET, 6,	/* 23 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 24 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 00097) */
/* 00075 */ HB_P_LINEOFFSET, 8,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00089 */ HB_P_LINEOFFSET, 9,	/* 26 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 224,	/* -32 (abs: 00063) */
/* 00097 */ HB_P_LINEOFFSET, 10,	/* 27 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
/* 00103 */ HB_P_LINEOFFSET, 11,	/* 28 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 145, 1,	/* 401 (abs: 00520) */
/* 00122 */ HB_P_LINEOFFSET, 12,	/* 29 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00152) */
/* 00136 */ HB_P_LINEOFFSET, 13,	/* 30 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 106, 1,	/* 362 (abs: 00511) */
/* 00152 */ HB_P_LINEOFFSET, 14,	/* 31 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00182) */
/* 00166 */ HB_P_LINEOFFSET, 15,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 76, 1,	/* 332 (abs: 00511) */
/* 00182 */ HB_P_LINEOFFSET, 16,	/* 33 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00212) */
/* 00196 */ HB_P_LINEOFFSET, 17,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'W', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 46, 1,	/* 302 (abs: 00511) */
/* 00212 */ HB_P_LINEOFFSET, 18,	/* 35 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00242) */
/* 00226 */ HB_P_LINEOFFSET, 19,	/* 36 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 16, 1,	/* 272 (abs: 00511) */
/* 00242 */ HB_P_LINEOFFSET, 20,	/* 37 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00272) */
/* 00256 */ HB_P_LINEOFFSET, 21,	/* 38 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 242, 0,	/* 242 (abs: 00511) */
/* 00272 */ HB_P_LINEOFFSET, 22,	/* 39 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00302) */
/* 00286 */ HB_P_LINEOFFSET, 23,	/* 40 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 212, 0,	/* 212 (abs: 00511) */
/* 00302 */ HB_P_LINEOFFSET, 24,	/* 41 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00332) */
/* 00316 */ HB_P_LINEOFFSET, 25,	/* 42 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 182, 0,	/* 182 (abs: 00511) */
/* 00332 */ HB_P_LINEOFFSET, 26,	/* 43 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00362) */
/* 00346 */ HB_P_LINEOFFSET, 27,	/* 44 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'K', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 152, 0,	/* 152 (abs: 00511) */
/* 00362 */ HB_P_LINEOFFSET, 28,	/* 45 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00391) */
/* 00376 */ HB_P_LINEOFFSET, 29,	/* 46 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 122,	/* 122 (abs: 00511) */
/* 00391 */ HB_P_LINEOFFSET, 30,	/* 47 */
	HB_P_PUSHLOCALNEAR, 4,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00420) */
/* 00405 */ HB_P_LINEOFFSET, 31,	/* 48 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 00511) */
/* 00420 */ HB_P_LINEOFFSET, 33,	/* 50 */
	HB_P_PUSHSYMNEAR, 8,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'S', 'E', 'N', 'H', 'A', ' ', 'D', 'E', ' ', 'L', 'I', 'B', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'F', 'o', 'i', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'd', 'a', ' ', 'e', 'r', 'r', 'a', 'd', 'a', ',', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00498 */ HB_P_LINEOFFSET, 34,	/* 51 */
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* MSENHA 1*/
	0, 
/* 00505 */ HB_P_LINEOFFSET, 35,	/* 52 */
	HB_P_PUSHLOCALNEAR, 6,	/* MSENHA */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00511 */ HB_P_LINEOFFSET, 37,	/* 54 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 104, 254,	/* -408 (abs: 00109) */
/* 00520 */ HB_P_LINEOFFSET, 38,	/* 55 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
/* 00526 */ HB_P_LINEOFFSET, 39,	/* 56 */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00549) */
/* 00539 */ HB_P_LINEOFFSET, 40,	/* 57 */
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 6,	/* MSENHA */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 00601) */
/* 00549 */ HB_P_LINEOFFSET, 42,	/* 59 */
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MSENHA */
/* 00563 */ HB_P_LINEOFFSET, 43,	/* 60 */
	HB_P_LOCALNEARSETINT, 7, 3, 0,	/* I 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00601) */
/* 00581 */ HB_P_LINEOFFSET, 44,	/* 61 */
	HB_P_PUSHLOCALNEAR, 6,	/* MSENHA */
	HB_P_PUSHLOCALNEAR, 5,	/* MAUX */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MSENHA */
/* 00593 */ HB_P_LINEOFFSET, 45,	/* 62 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 226,	/* -30 (abs: 00569) */
/* 00601 */ HB_P_LINEOFFSET, 47,	/* 64 */
	HB_P_PUSHLOCALNEAR, 6,	/* MSENHA */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00607 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( DCRIP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 70, 0,	/* 70 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* MLETRA */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MAUX */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 71 */
	HB_P_PUSHSYMNEAR, 10,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00026 */ HB_P_LINEOFFSET, 2,	/* 72 */
	HB_P_PUSHSYMNEAR, 10,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00036 */ HB_P_LINEOFFSET, 3,	/* 73 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* MSENHA 1*/
	0, 
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 74 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 00049 */ HB_P_LINEOFFSET, 5,	/* 75 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00116) */
/* 00067 */ HB_P_LINEOFFSET, 6,	/* 76 */
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00090) */
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00094) */
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 00110) */
/* 00094 */ HB_P_LINEOFFSET, 9,	/* 79 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 00108 */ HB_P_LINEOFFSET, 10,	/* 80 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 197,	/* -59 (abs: 00055) */
/* 00116 */ HB_P_LINEOFFSET, 11,	/* 81 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 00122 */ HB_P_LINEOFFSET, 12,	/* 82 */
	HB_P_PUSHSYMNEAR, 11,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00138) */
/* 00133 */ HB_P_LINEOFFSET, 13,	/* 83 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00138 */ HB_P_LINEOFFSET, 15,	/* 85 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 145, 1,	/* 401 (abs: 00555) */
/* 00157 */ HB_P_LINEOFFSET, 16,	/* 86 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00187) */
/* 00171 */ HB_P_LINEOFFSET, 17,	/* 87 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 106, 1,	/* 362 (abs: 00546) */
/* 00187 */ HB_P_LINEOFFSET, 18,	/* 88 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00217) */
/* 00201 */ HB_P_LINEOFFSET, 19,	/* 89 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 76, 1,	/* 332 (abs: 00546) */
/* 00217 */ HB_P_LINEOFFSET, 20,	/* 90 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'W', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00247) */
/* 00231 */ HB_P_LINEOFFSET, 21,	/* 91 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 46, 1,	/* 302 (abs: 00546) */
/* 00247 */ HB_P_LINEOFFSET, 22,	/* 92 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00277) */
/* 00261 */ HB_P_LINEOFFSET, 23,	/* 93 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 16, 1,	/* 272 (abs: 00546) */
/* 00277 */ HB_P_LINEOFFSET, 24,	/* 94 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00307) */
/* 00291 */ HB_P_LINEOFFSET, 25,	/* 95 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 242, 0,	/* 242 (abs: 00546) */
/* 00307 */ HB_P_LINEOFFSET, 26,	/* 96 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00337) */
/* 00321 */ HB_P_LINEOFFSET, 27,	/* 97 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 212, 0,	/* 212 (abs: 00546) */
/* 00337 */ HB_P_LINEOFFSET, 28,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00367) */
/* 00351 */ HB_P_LINEOFFSET, 29,	/* 99 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 182, 0,	/* 182 (abs: 00546) */
/* 00367 */ HB_P_LINEOFFSET, 30,	/* 100 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'K', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00397) */
/* 00381 */ HB_P_LINEOFFSET, 31,	/* 101 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 152, 0,	/* 152 (abs: 00546) */
/* 00397 */ HB_P_LINEOFFSET, 32,	/* 102 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00426) */
/* 00411 */ HB_P_LINEOFFSET, 33,	/* 103 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 122,	/* 122 (abs: 00546) */
/* 00426 */ HB_P_LINEOFFSET, 34,	/* 104 */
	HB_P_PUSHLOCALNEAR, 2,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00455) */
/* 00440 */ HB_P_LINEOFFSET, 35,	/* 105 */
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 00546) */
/* 00455 */ HB_P_LINEOFFSET, 37,	/* 107 */
	HB_P_PUSHSYMNEAR, 8,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'S', 'E', 'N', 'H', 'A', ' ', 'D', 'E', ' ', 'L', 'I', 'B', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'F', 'o', 'i', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'd', 'a', ' ', 'e', 'r', 'r', 'a', 'd', 'a', ',', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00533 */ HB_P_LINEOFFSET, 38,	/* 108 */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* MSENHA 1*/
	0, 
/* 00540 */ HB_P_LINEOFFSET, 39,	/* 109 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSENHA */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00546 */ HB_P_LINEOFFSET, 41,	/* 111 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 104, 254,	/* -408 (abs: 00144) */
/* 00555 */ HB_P_LINEOFFSET, 42,	/* 112 */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MEXP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00578) */
/* 00568 */ HB_P_LINEOFFSET, 43,	/* 113 */
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 4,	/* MSENHA */
	HB_P_JUMPNEAR, 60,	/* 60 (abs: 00636) */
/* 00578 */ HB_P_LINEOFFSET, 45,	/* 115 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 00584 */ HB_P_LINEOFFSET, 46,	/* 116 */
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* MSENHA */
/* 00598 */ HB_P_LINEOFFSET, 47,	/* 117 */
	HB_P_LOCALNEARSETINT, 5, 3, 0,	/* I 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 6,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00636) */
/* 00616 */ HB_P_LINEOFFSET, 48,	/* 118 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSENHA */
	HB_P_PUSHLOCALNEAR, 3,	/* MAUX */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* MSENHA */
/* 00628 */ HB_P_LINEOFFSET, 49,	/* 119 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 226,	/* -30 (abs: 00604) */
/* 00636 */ HB_P_LINEOFFSET, 51,	/* 121 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSENHA */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00642 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TIRA_PONTOS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 125, 0,	/* 125 */
	HB_P_PUSHSYMNEAR, 13,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPALAVRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* MPALAVRA */
/* 00022 */ HB_P_LINEOFFSET, 1,	/* 126 */
	HB_P_PUSHSYMNEAR, 13,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPALAVRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* MPALAVRA */
/* 00040 */ HB_P_LINEOFFSET, 2,	/* 127 */
	HB_P_PUSHSYMNEAR, 13,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPALAVRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* MPALAVRA */
/* 00058 */ HB_P_LINEOFFSET, 3,	/* 128 */
	HB_P_PUSHSYMNEAR, 13,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPALAVRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 1,	/* MPALAVRA */
/* 00076 */ HB_P_LINEOFFSET, 4,	/* 129 */
	HB_P_PUSHLOCALNEAR, 1,	/* MPALAVRA */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00082 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SENHA_CESSO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 133, 0,	/* 133 */
	HB_P_PUSHSYMNEAR, 15,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MDATA */
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* MQTDDIAS 1*/
	0, 
/* 00029 */ HB_P_LINEOFFSET, 2,	/* 135 */
	HB_P_PUSHVARIABLE, 16, 0,	/* COD_OPERADO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00048) */
/* 00043 */ HB_P_LINEOFFSET, 3,	/* 136 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00048 */ HB_P_LINEOFFSET, 5,	/* 138 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 5,
/* 00066 */ HB_P_LINEOFFSET, 6,	/* 139 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00099 */ HB_P_LINEOFFSET, 7,	/* 140 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'e', 'n', 'h', 'a', ' ', 'N', 'o', 'v', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00132 */ HB_P_LINEOFFSET, 8,	/* 141 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'e', 'n', 'h', 'a', ' ', 'A', 'n', 't', 'i', 'g', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00166 */ HB_P_LINEOFFSET, 9,	/* 142 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 21,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00210) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00215) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00243 */ HB_P_LINEOFFSET, 10,	/* 143 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 22, 0,	/* GETLIST */
/* 00265 */ HB_P_LINEOFFSET, 11,	/* 144 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 1,	/* MDIG1 */
/* 00351 */ HB_P_LINEOFFSET, 12,	/* 145 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* MDIG2 */
/* 00410 */ HB_P_LINEOFFSET, 13,	/* 146 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MDIG3 */
/* 00469 */ HB_P_LINEOFFSET, 14,	/* 147 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* MDIG4 */
/* 00527 */ HB_P_LINEOFFSET, 15,	/* 148 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 27,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* MDIG5 */
/* 00614 */ HB_P_LINEOFFSET, 16,	/* 149 */
	HB_P_PUSHSYMNEAR, 11,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 00644) */
/* 00625 */ HB_P_LINEOFFSET, 17,	/* 150 */
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHSYMNEAR, 30,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_MINUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* MQTDDIAS */
/* 00644 */ HB_P_LINEOFFSET, 19,	/* 152 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'S', 'e', 'n', 'h', 'a', ' ', 'N', 'o', 'v', 'a', '.', '.', '.', '.', '.', ':', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MDIG1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MDIG2 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MDIG3 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDIG4 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MDIG5 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* MQTDDIAS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00697 */ HB_P_LINEOFFSET, 20,	/* 153 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'S', 'e', 'n', 'h', 'a', ' ', 'A', 'n', 't', 'i', 'g', 'a', '.', '.', '.', ':', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MDIG1 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* MDIG3 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDIG4 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MDIG2 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MDIG5 */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* MQTDDIAS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00751 */ HB_P_LINEOFFSET, 22,	/* 155 */
	HB_P_PUSHSYMNEAR, 31,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'S', 'A', 'I', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 00795 */ HB_P_LINEOFFSET, 23,	/* 156 */
	HB_P_PUSHSYMNEAR, 32,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 00803 */ HB_P_LINEOFFSET, 24,	/* 157 */
	HB_P_PUSHSYMNEAR, 33,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00810 */ HB_P_LINEOFFSET, 25,	/* 158 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00815 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
