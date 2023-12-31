/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED231.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED231.PRG /q /oC:\HTI\SISMED\SMED231.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:29 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED231.PRG"

HB_FUNC( SMED231 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOBOTTOM );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED231 )
{ "SMED231", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED231 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "OPCA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOBOTTOM )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "MED", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
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
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "TELA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "PROFISSION", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESPECIALID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FONE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "CRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED231 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED231
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED231 = hb_vm_SymbolInit_SMED231;
   #pragma data_seg()
#endif

HB_FUNC( SMED231 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 15, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '2', '3', '1', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCOD_MED 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MCRM */
/* 00033 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00043 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 4, 20, 0,	/* LBA 20*/
/* 00049 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 5, 77, 0,	/* CBA 77*/
/* 00055 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'E', 'S', 'P', 'E', 'C', 'I', 'A', 'L', 'I', 'S', 'T', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00097 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00106 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* OPCA */
/* 00117 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00127 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCOD_MED 0*/
/* 00133 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MPROF */
/* 00144 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MESP */
/* 00155 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MEND */
/* 00166 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MCID */
/* 00177 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MCEP */
/* 00188 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MFONE */
/* 00199 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MCRM */
/* 00210 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'S', 'C', '>', ' ', 'P', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00265 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00273 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00312 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'i', 'o', 'n', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00351 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'E', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00390 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'R', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00429 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00468 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00507 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00546 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00585 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'e', 'd', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 10,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00605 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 11,	/* DBGOBOTTOM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00612 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* COD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPLOCALNEAR, 14,	/* MCOD_MED */
/* 00628 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 15,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00642 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCOD_MED */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00687) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00692) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
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
/* 00730 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MPROF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00775) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00780) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'r', 'o', 'f', 0, 
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
/* 00812 */ HB_P_LINEOFFSET, 39,	/* 46 */
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
/* 00834 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00858) */
/* 00846 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 23,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00853 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00858 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPROF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00872) */
	HB_P_JUMP, 252, 252,	/* -772 (abs: 00097) */
/* 00872 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 25,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPROF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSE, 17, 2,	/* 529 (abs: 01415) */
/* 00889 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 26,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPVARIABLE, 27, 0,	/* TELA2 */
/* 00905 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00914 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_DOSHORT, 4,
/* 00929 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00937 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 15,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00952 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 29,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 5,
/* 00969 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHSYMNEAR, 30,	/* SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'w', '+', '*', '/', 'n', ',', 'x', 0, 
	HB_P_DOSHORT, 1,
/* 00986 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'i', 'o', 'n', 'a', 'l', ' ', 'E', 'x', 'i', 's', 't', 'e', 'n', 't', 'e', ' ', 'n', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01042 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01050 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'N', 'o', 'm', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01074 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'i', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01104 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'n', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01128 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01137 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* PROFISSION */
	HB_P_DOSHORT, 1,
/* 01156 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* ESPECIALID */
	HB_P_DOSHORT, 1,
/* 01175 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* FONE */
	HB_P_DOSHORT, 1,
/* 01194 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01202 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 7,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 8,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'a', 'd', 'a', 's', 't', 'r', 'a', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01246 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 4, 0,	/* OPCA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
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
/* 01309 */ HB_P_LINEOFFSET, 69,	/* 76 */
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
/* 01331 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_PUSHSYMNEAR, 15,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01345 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHVARIABLE, 4, 0,	/* OPCA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 01376) */
/* 01357 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 34,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHVARIABLE, 27, 0,	/* TELA2 */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 4, 251,	/* -1276 (abs: 00097) */
/* 01376 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_PUSHVARIABLE, 4, 0,	/* OPCA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 01415) */
/* 01388 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHSYMNEAR, 34,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHVARIABLE, 27, 0,	/* TELA2 */
	HB_P_DOSHORT, 5,
/* 01404 */ HB_P_LINEOFFSET, 80,	/* 87 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* OPCA */
/* 01415 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MESP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01460) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01465) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 's', 'p', 0, 
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
/* 01496 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MCRM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01541) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01546) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'r', 'm', 0, 
	HB_P_PUSHNIL,
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
/* 01573 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MFONE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01618) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01623) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'f', 'o', 'n', 'e', 0, 
	HB_P_PUSHNIL,
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
/* 01651 */ HB_P_LINEOFFSET, 86,	/* 93 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01696) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01701) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'n', 'd', 0, 
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
/* 01732 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCID */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01777) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01782) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'i', 'd', 0, 
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
/* 01813 */ HB_P_LINEOFFSET, 88,	/* 95 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCEP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01858) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01863) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'e', 'p', 0, 
	HB_P_PUSHNIL,
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
/* 01890 */ HB_P_LINEOFFSET, 89,	/* 96 */
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
/* 01912 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01927) */
	HB_P_JUMP, 221, 248,	/* -1827 (abs: 00097) */
/* 01927 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 01967 */ HB_P_LINEOFFSET, 94,	/* 101 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01982) */
	HB_P_JUMP, 166, 248,	/* -1882 (abs: 00097) */
/* 01982 */ HB_P_LINEOFFSET, 97,	/* 104 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 151, 0,	/* 151 (abs: 02142) */
/* 01994 */ HB_P_LINEOFFSET, 98,	/* 105 */
	HB_P_PUSHSYMNEAR, 36,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 02091) */
/* 02003 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCOD_MED */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 14,	/* COD_ESPE */
/* 02018 */ HB_P_LINEOFFSET, 100,	/* 107 */
	HB_P_PUSHLOCALNEAR, 8,	/* MESP */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 32,	/* ESPECIALID */
/* 02026 */ HB_P_LINEOFFSET, 101,	/* 108 */
	HB_P_PUSHLOCALNEAR, 7,	/* MPROF */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 31,	/* PROFISSION */
/* 02034 */ HB_P_LINEOFFSET, 102,	/* 109 */
	HB_P_PUSHLOCALNEAR, 15,	/* MCRM */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 38,	/* CRM */
/* 02042 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHLOCALNEAR, 9,	/* MFONE */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 33,	/* FONE */
/* 02050 */ HB_P_LINEOFFSET, 104,	/* 111 */
	HB_P_PUSHLOCALNEAR, 10,	/* MEND */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 39,	/* ENDERECO */
/* 02058 */ HB_P_LINEOFFSET, 105,	/* 112 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCEP */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 40,	/* CEP */
/* 02066 */ HB_P_LINEOFFSET, 106,	/* 113 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCID */
	HB_P_PUSHSYMNEAR, 13,	/* MED */
	HB_P_POPALIASEDFIELDNEAR, 41,	/* CIDADE */
/* 02074 */ HB_P_LINEOFFSET, 107,	/* 114 */
	HB_P_PUSHSYMNEAR, 42,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02081 */ HB_P_LINEOFFSET, 108,	/* 115 */
	HB_P_PUSHSYMNEAR, 43,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 57, 248,	/* -1991 (abs: 00097) */
/* 02091 */ HB_P_LINEOFFSET, 111,	/* 118 */
	HB_P_PUSHSYMNEAR, 44,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 6, 248,	/* -2042 (abs: 00097) */
	HB_P_JUMP, 3, 248,	/* -2045 (abs: 00097) */
	HB_P_ENDPROC
/* 02146 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

