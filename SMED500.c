/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED500.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED500.PRG /q /oC:\HTI\SISMED\SMED500.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:36 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED500.PRG"

HB_FUNC( SMED500 );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( NIVEL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( APAGA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( SMEDGUIA );
HB_FUNC_EXTERN( SMED5CON );
HB_FUNC_EXTERN( SMED5PAT );
HB_FUNC_EXTERN( TEXTO );
HB_FUNC_EXTERN( SMED5DECL );
HB_FUNC_EXTERN( SMED5FRM );
HB_FUNC_EXTERN( SMED5COL );
HB_FUNC_EXTERN( SMED5DAT );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED500 )
{ "SMED500", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED500 )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIVEL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "APAGA", {HB_FS_PUBLIC}, {HB_FUNCNAME( APAGA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "SMEDGUIA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMEDGUIA )}, NULL },
{ "SMED5CON", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5CON )}, NULL },
{ "SMED5PAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5PAT )}, NULL },
{ "TEXTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TEXTO )}, NULL },
{ "SMED5DECL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5DECL )}, NULL },
{ "SMED5FRM", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5FRM )}, NULL },
{ "SMED5COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5COL )}, NULL },
{ "SMED5DAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED5DAT )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED500 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED500
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED500 = hb_vm_SymbolInit_SMED500;
   #pragma data_seg()
#endif

HB_FUNC( SMED500 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '5', '0', '0', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNEARSETINT, 3, 9, 0,	/* LCI 9*/
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_LOCALNEARSETINT, 4, 10, 0,	/* CCI 10*/
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 18, 0,	/* LBA 18*/
/* 00036 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 31, 0,	/* CBA 31*/
/* 00042 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 7,	/* TELA500 */
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MNOME */
/* 00068 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 9,	/* MDATA */
/* 00077 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MSINAL */
/* 00087 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00093 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 00150) */
/* 00110 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00145 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00150 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00159 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 7,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00173 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 9,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00197 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 1,
/* 00206 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'G', 'u', 'i', 'a', ' ', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'G', 'U', 'I', 'A', ' ', 'd', 'e', ' ', 'I', 'N', 'T', 'E', 'R', 'N', 'A', 'M', 'E', 'N', 'T', 'O', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00304 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 's', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'a', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 's', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'a', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00401 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'P', 'a', 't', 'o', 'l', 'o', 'g', 'i', 'a', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 't', 'o', 'l', 'o', 'g', 'i', 'a', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00489 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'T', ' ', 'e', ' ', 'x', ' ', 't', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'*', '*', ' ', 'E', 'd', 'i', 't', 'o', 'r', ' ', 'T', 'e', 'x', 't', 'o', 's', ' ', 's', 'i', 'm', 'p', 'l', 'e', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00577 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '1', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 00613) */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '0', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 121, 1,	/* 377 (abs: 00990) */
/* 00616 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'G', 'e', 's', 't', 'a', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'*', '*', ' ', 'D', 'e', 'c', 'l', 'a', 'r', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'G', 'E', 'S', 'T', 'A', 'N', 'T', 'E', 'S', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00708 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'F', 'o', 'r', 'm', 'u', 'l', 'a', 'r', 'i', 'o', 's', ' ', 'D', 'i', 'v', 'e', 'r', '.', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'F', 'o', 'r', 'm', 'u', 'l', 'a', 'r', 'i', 'o', 's', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00795 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'C', 'o', 'l', 'p', 'o', 's', 'c', 'o', 'p', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'*', '*', ' ', 'R', 'e', 's', 'u', 'l', 't', 'a', 'd', 'o', ' ', 'd', 'e', ' ', 'E', 'x', 'a', 'm', 'e', ' ', 'd', 'e', ' ', 'C', 'o', 'l', 'p', 'o', 's', 'c', 'o', 'p', 'i', 'a', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00895 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 10,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'D', 'a', 't', 'a', 's', ' ', 'd', 'e', ' ', 'P', 'a', 'r', 't', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'*', '*', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'd', 'a', 't', 'a', 's', ' ', 'd', 'e', ' ', 'P', 'a', 'r', 't', 'o', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00990 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01004 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 13,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 14,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01031) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01036) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 01049 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 15,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 01081) */
/* 01061 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 16,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 7,	/* TELA500 */
	HB_P_DOSHORT, 5,
/* 01076 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01081 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01154) */
/* 01089 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01144) */
/* 01106 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 33, 252,	/* -991 (abs: 00150) */
/* 01144 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHSYMNEAR, 17,	/* SMEDGUIA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 23, 252,	/* -1001 (abs: 00150) */
/* 01154 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01228) */
/* 01163 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01218) */
/* 01180 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 215, 251,	/* -1065 (abs: 00150) */
/* 01218 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 18,	/* SMED5CON */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 205, 251,	/* -1075 (abs: 00150) */
/* 01228 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01302) */
/* 01237 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01292) */
/* 01254 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 141, 251,	/* -1139 (abs: 00150) */
/* 01292 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHSYMNEAR, 19,	/* SMED5PAT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 131, 251,	/* -1149 (abs: 00150) */
/* 01302 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01376) */
/* 01311 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01366) */
/* 01328 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 67, 251,	/* -1213 (abs: 00150) */
/* 01366 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 20,	/* TEXTO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 57, 251,	/* -1223 (abs: 00150) */
/* 01376 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 01489) */
/* 01385 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01440) */
/* 01402 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 249, 250,	/* -1287 (abs: 00150) */
/* 01440 */ HB_P_LINEOFFSET, 80,	/* 87 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '1', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01476) */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '0', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 01751) */
/* 01479 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_PUSHSYMNEAR, 21,	/* SMED5DECL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 9, 1,	/* 265 (abs: 01751) */
/* 01489 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 01602) */
/* 01498 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01553) */
/* 01515 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 136, 250,	/* -1400 (abs: 00150) */
/* 01553 */ HB_P_LINEOFFSET, 88,	/* 95 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '1', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01589) */
	HB_P_PUSHSYMNEAR, 11,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '0', '2', '0', '0', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 01751) */
/* 01592 */ HB_P_LINEOFFSET, 89,	/* 96 */
	HB_P_PUSHSYMNEAR, 22,	/* SMED5FRM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 152, 0,	/* 152 (abs: 01751) */
/* 01602 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01676) */
/* 01611 */ HB_P_LINEOFFSET, 92,	/* 99 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01666) */
/* 01628 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 23, 250,	/* -1513 (abs: 00150) */
/* 01666 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHSYMNEAR, 23,	/* SMED5COL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 13, 250,	/* -1523 (abs: 00150) */
/* 01676 */ HB_P_LINEOFFSET, 97,	/* 104 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 250,	/* -1533 (abs: 00150) */
/* 01686 */ HB_P_LINEOFFSET, 98,	/* 105 */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01741) */
/* 01703 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 5,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 204, 249,	/* -1588 (abs: 00150) */
/* 01741 */ HB_P_LINEOFFSET, 102,	/* 109 */
	HB_P_PUSHSYMNEAR, 24,	/* SMED5DAT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 249,	/* -1598 (abs: 00150) */
	HB_P_JUMP, 191, 249,	/* -1601 (abs: 00150) */
	HB_P_ENDPROC
/* 01755 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

