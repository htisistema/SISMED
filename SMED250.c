/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED250.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED250.PRG /q /oC:\HTI\SISMED\SMED250.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:30 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED250.PRG"

HB_FUNC( SMED250 );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOBOTTOM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SMED251 );
HB_FUNC_EXTERN( SMED252 );
HB_FUNC_EXTERN( SMED253 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED250 )
{ "SMED250", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED250 )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOBOTTOM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "COD_RECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED251", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED251 )}, NULL },
{ "SMED252", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED252 )}, NULL },
{ "SMED253", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED253 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED250 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED250
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED250 = hb_vm_SymbolInit_SMED250;
   #pragma data_seg()
#endif

HB_FUNC( SMED250 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 38, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 38,	/* TRACO */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_POPLOCALNEAR, 34,	/* LCI */
/* 00029 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_LOCALNEARSETINT, 36, 22, 0,	/* LBA 22*/
/* 00035 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_LOCALNEARSETINT, 37, 80, 0,	/* CBA 80*/
/* 00041 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'M', 'E', 'N', 'U', ' ', 'D', 'E', ' ', 'R', 'E', 'C', 'E', 'I', 'T', 'A', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00075 */ HB_P_LINEOFFSET, 7,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 4,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00097 */ HB_P_LINEOFFSET, 8,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'm', 'e', 'd', 'r', 'e', 'c', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'c', 'e', 0, 
	HB_P_DOSHORT, 2,
/* 00122 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_PUSHSYMNEAR, 6,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'm', 'e', 'd', 'd', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'd', 'r', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 00145 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MUSO1 */
/* 00156 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MUSO2 */
/* 00167 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MUSO3 */
/* 00178 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MUSO4 */
/* 00189 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MUSO5 */
/* 00200 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MUSO6 */
/* 00211 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MCOD1 */
/* 00222 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MCOD2 */
/* 00233 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* MCOD3 */
/* 00244 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MCOD4 */
/* 00255 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MCOD5 */
/* 00266 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MCOD6 */
/* 00277 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* MNOME1 */
/* 00288 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* MNOME2 */
/* 00299 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MNOME3 */
/* 00310 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 31,	/* MNOME4 */
/* 00321 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MNOME5 */
/* 00332 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 33,	/* MNOME6 */
/* 00343 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* MDOSE1 */
/* 00354 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* MDOSE2 */
/* 00365 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MDOSE3 */
/* 00376 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MDOSE4 */
/* 00387 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 20,	/* MDOSE5 */
/* 00398 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 21,	/* MDOSE6 */
/* 00409 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MPOSO1 */
/* 00420 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* MPOSO2 */
/* 00431 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 24,	/* MPOSO3 */
/* 00442 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* MPOSO4 */
/* 00453 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* MPOSO5 */
/* 00464 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 27,	/* MPOSO6 */
/* 00475 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MCOD_RECE */
/* 00486 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 8,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 9, 0,	/* MDATA */
/* 00496 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OPCAO */
/* 00506 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00515 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 11,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 37,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00537 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 11,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 37,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00559 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00567 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', ' ', 'd', 'a', ' ', 'R', 'e', 'c', 'e', 'i', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00608 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00639 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00667 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', 'm', 'e', ' ', 'M', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00701 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 40, 0,	/* 40*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'o', 's', 'a', 'g', 'e', 'm', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00734 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'o', 's', 'o', 'l', 'o', 'g', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00769 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00778 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MCOD1 */
	HB_P_DOSHORT, 1,
/* 00802 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD2 */
	HB_P_DOSHORT, 1,
/* 00826 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCOD3 */
	HB_P_DOSHORT, 1,
/* 00850 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MCOD4 */
	HB_P_DOSHORT, 1,
/* 00874 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD5 */
	HB_P_DOSHORT, 1,
/* 00898 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 35,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD6 */
	HB_P_DOSHORT, 1,
/* 00922 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 10,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00930 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 14,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'<', 'I', '>', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', ' ', '-', ' ', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', ' ', '-', ' ', ' ', '<', 'A', '>', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01004 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 15,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01012 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 01058) */
/* 01024 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 3,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 4,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 01046 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_PUSHSYMNEAR, 17,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01053 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01058 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01094) */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01155) */
/* 01096 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 4,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'c', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 19,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01116 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 20,	/* DBGOBOTTOM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01123 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 21,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 22,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* COD_RECE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MCOD_RECE */
/* 01145 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 24,	/* SMED251 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 112, 253,	/* -656 (abs: 00496) */
/* 01155 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01191) */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01203) */
/* 01193 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHSYMNEAR, 25,	/* SMED252 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 64, 253,	/* -704 (abs: 00496) */
/* 01203 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01239) */
	HB_P_PUSHSYMNEAR, 16,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 18,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01251) */
/* 01241 */ HB_P_LINEOFFSET, 86,	/* 97 */
	HB_P_PUSHSYMNEAR, 26,	/* SMED253 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 253,	/* -752 (abs: 00496) */
	HB_P_JUMP, 13, 253,	/* -755 (abs: 00496) */
	HB_P_ENDPROC
/* 01255 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

