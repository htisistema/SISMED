/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMEDDBF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMEDDBF.PRG /q /oC:\HTI\SISMED\SMEDDBF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:41 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMEDDBF.PRG"

HB_FUNC( SMEDDBF );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_EXISTTABLE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( CRIPTO );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCKALL );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMEDDBF )
{ "SMEDDBF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMEDDBF )}, NULL },
{ "COR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTCOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELA_DBF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAMINHO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIP_TERM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NMAXPSW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOP_TIP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "SR_EXISTTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_EXISTTABLE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "SEN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "SCOD_OP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIPTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTO )}, NULL },
{ "SSENHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "SDATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SNIVEL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCKALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCKALL )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "CDESP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESC1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMEDDBF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMEDDBF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMEDDBF = hb_vm_SymbolInit_SMEDDBF;
   #pragma data_seg()
#endif

HB_FUNC( SMEDDBF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 5, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 4, 0,	/* 4 */
	HB_P_LOCALNEARSETSTR, 4, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'D', 'B', 'F', 0, 
	HB_P_LOCALNEARSETSTR, 6, 1, 0,	/* MLINHA 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* MCOD_BC 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00032 */ HB_P_LINEOFFSET, 1,	/* 5 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* COR */
	HB_P_PUSHSYMNEAR, 2,	/* F */
	HB_P_PUSHSYMNEAR, 3,	/* MTCOR */
	HB_P_PUSHSYMNEAR, 4,	/* TELA_DBF */
	HB_P_PUSHSYMNEAR, 5,	/* MCAMINHO */
	HB_P_PUSHSYMNEAR, 6,	/* MTIP_TERM */
	HB_P_PUSHSYMNEAR, 7,	/* NMAXPSW */
	HB_P_PUSHSYMNEAR, 8,	/* MOP_TIP */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 7, 0,	/* NMAXPSW */
	HB_P_POPVARIABLE, 3, 0,	/* MTCOR */
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 6 */
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCAMINHO */
/* 00076 */ HB_P_LINEOFFSET, 3,	/* 7 */
	HB_P_PUSHLOCALNEAR, 1,	/* MOP */
	HB_P_POPVARIABLE, 8, 0,	/* MOP_TIP */
/* 00083 */ HB_P_LINEOFFSET, 4,	/* 8 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MTIP_TERM */
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 9 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00100 */ HB_P_LINEOFFSET, 6,	/* 10 */
	HB_P_PUSHSYMNEAR, 12,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', 'd', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'D', 'E', ' ', 'D', 'A', 'D', 'O', 'S', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00182 */ HB_P_LINEOFFSET, 7,	/* 11 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 2, 0,	/* F */
/* 00188 */ HB_P_LINEOFFSET, 9,	/* 13 */
	HB_P_LOCALNEARSETSTR, 8, 26, 0,	/* MATRIZ 26*/
	's', 'c', 'o', 'd', '_', 'o', 'p', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
/* 00220 */ HB_P_LINEOFFSET, 10,	/* 14 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'n', 'o', 'm', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00246 */ HB_P_LINEOFFSET, 11,	/* 15 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 't', 'i', 'p', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00271 */ HB_P_LINEOFFSET, 12,	/* 16 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 't', 'i', 'p', 'o', '_', 's', 'i', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00300 */ HB_P_LINEOFFSET, 13,	/* 17 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 's', 'e', 'n', 'h', 'a', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00326 */ HB_P_LINEOFFSET, 14,	/* 18 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00352 */ HB_P_LINEOFFSET, 15,	/* 19 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 's', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00386 */ HB_P_LINEOFFSET, 16,	/* 20 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 's', 'c', 'o', 'm', '_', 'p', 'r', 'a', 'z', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00420 */ HB_P_LINEOFFSET, 17,	/* 21 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 's', 'c', 'o', 'm', '_', 'o', 'p', 'e', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00454 */ HB_P_LINEOFFSET, 18,	/* 22 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 's', 'c', 'o', 't', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00485 */ HB_P_LINEOFFSET, 19,	/* 23 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'u', 'l', 't', '_', 'e', 'n', 't', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00510 */ HB_P_LINEOFFSET, 20,	/* 24 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'u', 'l', 't', '_', 'f', 'i', 'm', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00535 */ HB_P_LINEOFFSET, 21,	/* 25 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'n', 'i', 'v', 'e', 'l', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00561 */ HB_P_LINEOFFSET, 22,	/* 26 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'i', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00590 */ HB_P_LINEOFFSET, 23,	/* 27 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'h', 'o', 'r', 'a', '_', 'f', 'i', 'm', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00619 */ HB_P_LINEOFFSET, 24,	/* 28 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'u', 'l', 't', '_', 'e', '_', 'c', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00644 */ HB_P_LINEOFFSET, 25,	/* 29 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'h', '_', 'i', '_', 'c', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00670 */ HB_P_LINEOFFSET, 26,	/* 30 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 's', 'e', 'x', 'p', 'i', 'r', 'a', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00702 */ HB_P_LINEOFFSET, 27,	/* 31 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'c', 'o', 'd', '_', 'a', 'u', 't', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00731 */ HB_P_LINEOFFSET, 28,	/* 32 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 's', 's', 't', 'a', 't', 'u', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00758 */ HB_P_LINEOFFSET, 29,	/* 33 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 's', 'o', 'p', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00782 */ HB_P_LINEOFFSET, 30,	/* 34 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00810 */ HB_P_LINEOFFSET, 31,	/* 35 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00838 */ HB_P_LINEOFFSET, 32,	/* 36 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 's', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00870 */ HB_P_LINEOFFSET, 33,	/* 37 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'b', 'l', 'o', 'q', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00895 */ HB_P_LINEOFFSET, 34,	/* 38 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 's', 'm', 'e', 'n', 's', 'a', 'g', 'e', 'm', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00926 */ HB_P_LINEOFFSET, 35,	/* 39 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'a', 'm', 'b', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00955 */ HB_P_LINEOFFSET, 36,	/* 40 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'o', 'c', '_', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 00985 */ HB_P_LINEOFFSET, 37,	/* 41 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 's', 't', 'o', 'q', '_', 'm', 'i', 'n', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01014 */ HB_P_LINEOFFSET, 38,	/* 42 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'e', 's', 't', 'o', 'q', '_', 'm', 'e', 'd', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '5', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01048 */ HB_P_LINEOFFSET, 39,	/* 43 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01077 */ HB_P_LINEOFFSET, 40,	/* 44 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'a', 'c', 'e', 's', 's', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01104 */ HB_P_LINEOFFSET, 41,	/* 45 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'h', 'o', 'r', 'a', '_', 'a', 'c', 'e', 's', 's', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01134 */ HB_P_LINEOFFSET, 42,	/* 46 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01160 */ HB_P_LINEOFFSET, 43,	/* 47 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'a', 't', '_', 'a', 'n', 'i', 'v', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01188 */ HB_P_LINEOFFSET, 44,	/* 48 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'e', 'r', '_', 'A', 'P', 'P', '.', '.', '.', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01218 */ HB_P_LINEOFFSET, 45,	/* 49 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01247 */ HB_P_LINEOFFSET, 46,	/* 50 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01273 */ HB_P_LINEOFFSET, 47,	/* 51 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01304 */ HB_P_LINEOFFSET, 48,	/* 52 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01331 */ HB_P_LINEOFFSET, 49,	/* 53 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01358 */ HB_P_LINEOFFSET, 50,	/* 54 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'u', 'f', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01380 */ HB_P_LINEOFFSET, 51,	/* 55 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'n', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01405 */ HB_P_LINEOFFSET, 52,	/* 56 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'p', 'f', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01429 */ HB_P_LINEOFFSET, 53,	/* 57 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'r', 'g', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01452 */ HB_P_LINEOFFSET, 54,	/* 58 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 's', 'c', 'o', 'd', '_', 'm', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01479 */ HB_P_LINEOFFSET, 55,	/* 59 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01522 */ HB_P_LINEOFFSET, 56,	/* 60 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 01552 */ HB_P_LINEOFFSET, 57,	/* 61 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01561 */ HB_P_LINEOFFSET, 58,	/* 62 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01629 */ HB_P_LINEOFFSET, 59,	/* 63 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 83, 2,	/* 595 (abs: 02242) */
/* 01650 */ HB_P_LINEOFFSET, 61,	/* 65 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01693 */ HB_P_LINEOFFSET, 62,	/* 66 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01743 */ HB_P_LINEOFFSET, 63,	/* 67 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01767 */ HB_P_LINEOFFSET, 64,	/* 68 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01827 */ HB_P_LINEOFFSET, 65,	/* 69 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'N', 'S', 'T', 'R', 'A', 'I', 'N', 'T', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', '_', 'P', 'K', ' ', 'P', 'R', 'I', 'M', 'A', 'R', 'Y', ' ', 'K', 'E', 'Y', ' ', '(', 's', 'c', 'o', 'd', '_', 'o', 'p', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01914 */ HB_P_LINEOFFSET, 66,	/* 70 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02084 */ HB_P_LINEOFFSET, 67,	/* 71 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02108 */ HB_P_LINEOFFSET, 69,	/* 73 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02137) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02137 */ HB_P_LINEOFFSET, 70,	/* 74 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02144 */ HB_P_LINEOFFSET, 71,	/* 75 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 22,	/* SCOD_OP */
/* 02156 */ HB_P_LINEOFFSET, 72,	/* 76 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'T', 'I', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 23,	/* SNOME */
/* 02177 */ HB_P_LINEOFFSET, 73,	/* 77 */
	HB_P_PUSHSYMNEAR, 24,	/* CRIPTO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'0', '7', '2', '5', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 25,	/* SSENHA */
/* 02195 */ HB_P_LINEOFFSET, 74,	/* 78 */
	HB_P_PUSHSYMNEAR, 26,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 27,	/* SDATA_CAD */
/* 02206 */ HB_P_LINEOFFSET, 75,	/* 79 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIASEDFIELDNEAR, 28,	/* SNIVEL */
/* 02216 */ HB_P_LINEOFFSET, 83,	/* 87 */
	HB_P_PUSHSYMNEAR, 29,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02223 */ HB_P_LINEOFFSET, 84,	/* 88 */
	HB_P_PUSHSYMNEAR, 30,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02230 */ HB_P_LINEOFFSET, 85,	/* 89 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 21,	/* SEN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 31,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 02242 */ HB_P_LINEOFFSET, 88,	/* 92 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02310 */ HB_P_LINEOFFSET, 89,	/* 93 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 20, 7,	/* 1812 (abs: 04140) */
/* 02331 */ HB_P_LINEOFFSET, 90,	/* 94 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02396 */ HB_P_LINEOFFSET, 91,	/* 95 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02403 */ HB_P_LINEOFFSET, 92,	/* 96 */
	HB_P_LOCALNEARSETSTR, 8, 14, 0,	/* MATRIZ 14*/
	'v', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
/* 02423 */ HB_P_LINEOFFSET, 93,	/* 97 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'i', 'm', 'p', 'r', 'e', 's', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02450 */ HB_P_LINEOFFSET, 94,	/* 98 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02479 */ HB_P_LINEOFFSET, 95,	/* 99 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02508 */ HB_P_LINEOFFSET, 96,	/* 100 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'c', 'o', 'p', 'i', 'a', '_', 'd', 'u', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02542 */ HB_P_LINEOFFSET, 97,	/* 101 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'u', 'p', '_', 'i', 'm', 'p', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02569 */ HB_P_LINEOFFSET, 98,	/* 102 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'u', 'p', '_', 'p', 'o', 'r', 't', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02597 */ HB_P_LINEOFFSET, 99,	/* 103 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02631 */ HB_P_LINEOFFSET, 100,	/* 104 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'm', 'u', 'l', 't', 'a', '_', 'd', 'u', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02665 */ HB_P_LINEOFFSET, 101,	/* 105 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'j', 'u', 'r', 'o', 's', '_', 'd', 'u', 'p', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '6', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02699 */ HB_P_LINEOFFSET, 102,	/* 106 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'o', 'd', 'a', '_', 'd', 'u', 'p', '1', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02729 */ HB_P_LINEOFFSET, 103,	/* 107 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'o', 'd', 'a', '_', 'd', 'u', 'p', '2', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02759 */ HB_P_LINEOFFSET, 104,	/* 108 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'e', 'd', 'e', 'n', '_', 'b', 'o', 'l', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02788 */ HB_P_LINEOFFSET, 105,	/* 109 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'l', 'o', 'c', 'a', 'l', '_', 'b', 'o', 'l', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02818 */ HB_P_LINEOFFSET, 106,	/* 110 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '1', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02848 */ HB_P_LINEOFFSET, 107,	/* 111 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '2', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02878 */ HB_P_LINEOFFSET, 108,	/* 112 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '3', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02908 */ HB_P_LINEOFFSET, 109,	/* 113 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '4', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02938 */ HB_P_LINEOFFSET, 110,	/* 114 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '5', ' ', 'C', 'H', 'A', 'R', '(', '4', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02968 */ HB_P_LINEOFFSET, 111,	/* 115 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'f', 'e', 'c', 'h', 'a', '_', 'c', 'x', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 02996 */ HB_P_LINEOFFSET, 112,	/* 116 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'y', 's', 'd', 'a', 't', 'l', 'm', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03025 */ HB_P_LINEOFFSET, 113,	/* 117 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03053 */ HB_P_LINEOFFSET, 114,	/* 118 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'm', 'e', 'd', 'i', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03080 */ HB_P_LINEOFFSET, 115,	/* 119 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03109 */ HB_P_LINEOFFSET, 116,	/* 120 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03135 */ HB_P_LINEOFFSET, 117,	/* 121 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03162 */ HB_P_LINEOFFSET, 118,	/* 122 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03189 */ HB_P_LINEOFFSET, 119,	/* 123 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'u', 'f', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03211 */ HB_P_LINEOFFSET, 120,	/* 124 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'e', 'p', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03234 */ HB_P_LINEOFFSET, 121,	/* 125 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', 'C', 'H', 'A', 'R', '(', '7', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03260 */ HB_P_LINEOFFSET, 122,	/* 126 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'n', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03285 */ HB_P_LINEOFFSET, 123,	/* 127 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'f', 'o', 'n', 'e', '1', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03311 */ HB_P_LINEOFFSET, 124,	/* 128 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'n', 'p', 'j', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03336 */ HB_P_LINEOFFSET, 125,	/* 129 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'i', 'n', 's', 'c', ' ', 'C', 'H', 'A', 'R', '(', '1', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03361 */ HB_P_LINEOFFSET, 126,	/* 130 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'p', 'f', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03385 */ HB_P_LINEOFFSET, 127,	/* 131 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'r', 'g', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03408 */ HB_P_LINEOFFSET, 128,	/* 132 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'a', 'c', 'e', 's', 's', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03438 */ HB_P_LINEOFFSET, 129,	/* 133 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03481 */ HB_P_LINEOFFSET, 130,	/* 134 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03511 */ HB_P_LINEOFFSET, 131,	/* 135 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'd', 'i', 'a', '_', 'v', 'e', 'n', 'c', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '2', ',', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03543 */ HB_P_LINEOFFSET, 132,	/* 136 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 's', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03571 */ HB_P_LINEOFFSET, 133,	/* 137 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'r', 'i', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03597 */ HB_P_LINEOFFSET, 134,	/* 138 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03629 */ HB_P_LINEOFFSET, 135,	/* 139 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'f', 'o', 'n', 'e', '_', 'c', 'l', 'i', 'n', 'i', 'c', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03662 */ HB_P_LINEOFFSET, 136,	/* 140 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'i', 'n', 's', 'c', '_', 'm', 'u', 'n', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03691 */ HB_P_LINEOFFSET, 137,	/* 141 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'r', 'm', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03715 */ HB_P_LINEOFFSET, 138,	/* 142 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03745 */ HB_P_LINEOFFSET, 139,	/* 143 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'a', 'i', 'n', 'i', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 03769 */ HB_P_LINEOFFSET, 140,	/* 144 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03812 */ HB_P_LINEOFFSET, 141,	/* 145 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03862 */ HB_P_LINEOFFSET, 142,	/* 146 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03886 */ HB_P_LINEOFFSET, 143,	/* 147 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03946 */ HB_P_LINEOFFSET, 144,	/* 148 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04116 */ HB_P_LINEOFFSET, 145,	/* 149 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04140 */ HB_P_LINEOFFSET, 147,	/* 151 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04207 */ HB_P_LINEOFFSET, 148,	/* 152 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'C', 'L', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 37, 10,	/* 2597 (abs: 06821) */
/* 04227 */ HB_P_LINEOFFSET, 149,	/* 153 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04292 */ HB_P_LINEOFFSET, 150,	/* 154 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
/* 04315 */ HB_P_LINEOFFSET, 151,	/* 155 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'd', 'a', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04335 */ HB_P_LINEOFFSET, 152,	/* 156 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'n', 'o', 'm', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04359 */ HB_P_LINEOFFSET, 153,	/* 157 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', 'n', 's', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04381 */ HB_P_LINEOFFSET, 154,	/* 158 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'e', 'x', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04404 */ HB_P_LINEOFFSET, 155,	/* 159 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04426 */ HB_P_LINEOFFSET, 156,	/* 160 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'e', 's', 't', 'c', 'i', 'v', 'i', 'l', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04453 */ HB_P_LINEOFFSET, 157,	/* 161 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'p', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04482 */ HB_P_LINEOFFSET, 158,	/* 162 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'a', 't', 'u', 'r', 'a', 'l', '1', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04510 */ HB_P_LINEOFFSET, 159,	/* 163 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04538 */ HB_P_LINEOFFSET, 160,	/* 164 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04564 */ HB_P_LINEOFFSET, 161,	/* 165 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'o', 'n', 'e', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04588 */ HB_P_LINEOFFSET, 162,	/* 166 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'e', 's', 't', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04610 */ HB_P_LINEOFFSET, 163,	/* 167 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'e', 'p', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04632 */ HB_P_LINEOFFSET, 164,	/* 168 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'r', 'e', 's', 'p', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04656 */ HB_P_LINEOFFSET, 165,	/* 169 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 'd', 'i', 'c', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04682 */ HB_P_LINEOFFSET, 166,	/* 170 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', 'u', 'l', 't', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04705 */ HB_P_LINEOFFSET, 167,	/* 171 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'd', 'c', 'o', 'n', 'v', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04731 */ HB_P_LINEOFFSET, 168,	/* 172 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'e', 'm', 'p', '_', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04758 */ HB_P_LINEOFFSET, 169,	/* 173 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04784 */ HB_P_LINEOFFSET, 170,	/* 174 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'n', 'j', 'u', 'g', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04811 */ HB_P_LINEOFFSET, 171,	/* 175 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'p', '_', 'c', 'o', 'n', 'j', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04839 */ HB_P_LINEOFFSET, 172,	/* 176 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'p', 'r', 'o', 'f', '_', 'c', 'o', 'n', 'j', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04868 */ HB_P_LINEOFFSET, 173,	/* 177 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 'c', 'o', 'n', 'j', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04897 */ HB_P_LINEOFFSET, 174,	/* 178 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'l', 'a', 'n', 'o', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04923 */ HB_P_LINEOFFSET, 175,	/* 179 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04951 */ HB_P_LINEOFFSET, 176,	/* 180 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'c', 'a', 'r', 't', ' ', 'C', 'H', 'A', 'R', '(', '1', '8', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 04979 */ HB_P_LINEOFFSET, 177,	/* 181 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'v', 'a', 'l', '_', 'c', 'a', 'r', 't', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05004 */ HB_P_LINEOFFSET, 178,	/* 182 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'r', 'g', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05026 */ HB_P_LINEOFFSET, 179,	/* 183 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'u', 'm', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05050 */ HB_P_LINEOFFSET, 180,	/* 184 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'u', 'm', '_', 'd', 'a', 't', '1', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05074 */ HB_P_LINEOFFSET, 181,	/* 185 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'f', 'u', 'm', '_', 'd', 'a', 't', '2', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05098 */ HB_P_LINEOFFSET, 182,	/* 186 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'b', 's', '1', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05122 */ HB_P_LINEOFFSET, 183,	/* 187 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'b', 's', '2', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05146 */ HB_P_LINEOFFSET, 184,	/* 188 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'b', 's', '3', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05170 */ HB_P_LINEOFFSET, 185,	/* 189 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'o', 'b', 's', '4', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05194 */ HB_P_LINEOFFSET, 186,	/* 190 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '1', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05219 */ HB_P_LINEOFFSET, 187,	/* 191 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '1', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05244 */ HB_P_LINEOFFSET, 188,	/* 192 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '1', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05269 */ HB_P_LINEOFFSET, 189,	/* 193 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '2', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05294 */ HB_P_LINEOFFSET, 190,	/* 194 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '2', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05319 */ HB_P_LINEOFFSET, 191,	/* 195 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '2', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05344 */ HB_P_LINEOFFSET, 192,	/* 196 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '3', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05369 */ HB_P_LINEOFFSET, 193,	/* 197 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '3', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05394 */ HB_P_LINEOFFSET, 194,	/* 198 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '3', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05419 */ HB_P_LINEOFFSET, 195,	/* 199 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '4', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05444 */ HB_P_LINEOFFSET, 196,	/* 200 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '4', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05469 */ HB_P_LINEOFFSET, 197,	/* 201 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '4', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05494 */ HB_P_LINEOFFSET, 198,	/* 202 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '5', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05519 */ HB_P_LINEOFFSET, 199,	/* 203 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '5', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05544 */ HB_P_LINEOFFSET, 200,	/* 204 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '5', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05569 */ HB_P_LINEOFFSET, 201,	/* 205 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'u', 'l', 't', '_', 'm', 'e', 's', 't', '6', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05594 */ HB_P_LINEOFFSET, 202,	/* 206 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'r', 'o', '_', 'n', 'a', 's', 'c', '6', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05619 */ HB_P_LINEOFFSET, 203,	/* 207 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'n', 'a', 's', 'c', '6', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05644 */ HB_P_LINEOFFSET, 204,	/* 208 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'p', 'f', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05667 */ HB_P_LINEOFFSET, 205,	/* 209 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'n', 'e', '1', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05692 */ HB_P_LINEOFFSET, 206,	/* 210 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'n', 'e', '2', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05717 */ HB_P_LINEOFFSET, 207,	/* 211 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'g', 'e', 'n', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05742 */ HB_P_LINEOFFSET, 208,	/* 212 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'e', 's', 'c', 'o', 'l', 'a', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05768 */ HB_P_LINEOFFSET, 209,	/* 213 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'r', 'a', 'p', 'e', 'u', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05797 */ HB_P_LINEOFFSET, 210,	/* 214 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'o', 'n', 'e', '_', 't', 'e', 'r', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05826 */ HB_P_LINEOFFSET, 211,	/* 215 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'd', 'i', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05852 */ HB_P_LINEOFFSET, 212,	/* 216 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'f', 'o', 'n', 'e', '_', 'm', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05880 */ HB_P_LINEOFFSET, 213,	/* 217 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 't', 'p', '_', 'a', 'l', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05907 */ HB_P_LINEOFFSET, 214,	/* 218 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 'i', 'n', 't', 'e', 'r', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05932 */ HB_P_LINEOFFSET, 215,	/* 219 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05962 */ HB_P_LINEOFFSET, 216,	/* 220 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'e', 'd', '_', 'i', 'n', 't', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 05990 */ HB_P_LINEOFFSET, 217,	/* 221 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'u', 'b', 's', 't', 'a', 'n', 'c', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06019 */ HB_P_LINEOFFSET, 218,	/* 222 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'm', 'p', 'o', '_', 'u', 's', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06048 */ HB_P_LINEOFFSET, 219,	/* 223 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'e', 'm', 'p', 'o', '_', 'a', 'b', 'u', 's', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06078 */ HB_P_LINEOFFSET, 220,	/* 224 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'u', 't', 'r', 'o', '_', 's', 'p', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06107 */ HB_P_LINEOFFSET, 221,	/* 225 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'i', 'n', 't', 'e', 'r', '_', 'a', 'n', 't', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06136 */ HB_P_LINEOFFSET, 222,	/* 226 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'm', 'o', 'r', 'b', 'i', 'd', 'a', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06166 */ HB_P_LINEOFFSET, 223,	/* 227 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06196 */ HB_P_LINEOFFSET, 224,	/* 228 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06221 */ HB_P_LINEOFFSET, 225,	/* 229 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06264 */ HB_P_LINEOFFSET, 226,	/* 230 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06293 */ HB_P_LINEOFFSET, 227,	/* 231 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'f', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06320 */ HB_P_LINEOFFSET, 228,	/* 232 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', '_', 'a', 'u', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06345 */ HB_P_LINEOFFSET, 229,	/* 233 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'b', 's', '_', 'a', 'u', 't', 'a', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06373 */ HB_P_LINEOFFSET, 230,	/* 234 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'b', 's', '_', 'a', 'u', 't', 'a', '1', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06402 */ HB_P_LINEOFFSET, 231,	/* 235 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06427 */ HB_P_LINEOFFSET, 232,	/* 236 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'i', 'n', 's', 't', 'a', 'g', 'r', 'a', 'm', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 06456 */ HB_P_LINEOFFSET, 235,	/* 239 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06498 */ HB_P_LINEOFFSET, 236,	/* 240 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06547 */ HB_P_LINEOFFSET, 237,	/* 241 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06571 */ HB_P_LINEOFFSET, 238,	/* 242 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06630 */ HB_P_LINEOFFSET, 239,	/* 243 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06797 */ HB_P_LINEOFFSET, 240,	/* 244 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06821 */ HB_P_LINEOFFSET, 242,	/* 246 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06891 */ HB_P_LINEOFFSET, 243,	/* 247 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 36, 3,	/* 804 (abs: 07713) */
/* 06912 */ HB_P_LINEOFFSET, 244,	/* 248 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06979 */ HB_P_LINEOFFSET, 245,	/* 249 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	'd', 'a', 't', 'a', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 07001 */ HB_P_LINEOFFSET, 246,	/* 250 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07027 */ HB_P_LINEOFFSET, 247,	/* 251 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07053 */ HB_P_LINEOFFSET, 248,	/* 252 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07079 */ HB_P_LINEOFFSET, 249,	/* 253 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07105 */ HB_P_LINEOFFSET, 250,	/* 254 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07131 */ HB_P_LINEOFFSET, 251,	/* 255 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '6', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07157 */ HB_P_LINEOFFSET, 252,	/* 256 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '7', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07183 */ HB_P_LINEOFFSET, 253,	/* 257 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '8', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07209 */ HB_P_LINEOFFSET, 254,	/* 258 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '9', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07235 */ HB_P_LINEOFFSET, 255,	/* 259 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'n', '1', '0', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07261 */ HB_P_LINE, 4, 1,	/* 260 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07305 */ HB_P_LINE, 5, 1,	/* 261 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07336 */ HB_P_LINE, 6, 1,	/* 262 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07380 */ HB_P_LINE, 7, 1,	/* 263 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07431 */ HB_P_LINE, 8, 1,	/* 264 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07456 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07517 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'A', 'G', 'E', 'N', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07688 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07713 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07783 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'D', 'R', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 244, 2,	/* 756 (abs: 08557) */
/* 07804 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07871 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_LOCALNEARSETSTR, 8, 18, 0,	/* MATRIZ 18*/
	' ', 'c', 'o', 'd', '_', 'm', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 07896 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'u', 's', 'o', '_', 'm', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07924 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'n', 'o', 'm', 'e', 'd', 'r', 'o', 'g', 'a', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07955 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'o', 'm', 'e', 'c', 'o', 'm', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 07984 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 's', 'e', '_', 'q', 'u', 'a', 'n', 't', ' ', 'C', 'H', 'A', 'R', '(', '2', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08016 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'o', 's', 'o', 'l', 'o', 'g', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08047 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'e', 'f', 'e', 'i', 't', 'o', '_', 'c', 'o', 'l', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08079 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'r', 'e', 'c', 'a', 'u', 'c', 'o', 'e', 's', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08111 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08155 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08186 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08229 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08279 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08304 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08364 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'D', 'R', 'O', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08532 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08557 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'T', 'A', 'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 137, 2,	/* 649 (abs: 09224) */
/* 08578 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08645 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_LOCALNEARSETSTR, 8, 26, 0,	/* MATRIZ 26*/
	'v', 'a', 'l', 'c', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
/* 08678 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 's', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08715 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'c', 'h', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08752 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', 'a', 'l', 't', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08778 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08822 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 08853 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08896 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08946 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08971 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09031 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'T', 'A', 'B', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09199 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09224 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'M', 'O', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 57, 3,	/* 825 (abs: 10067) */
/* 09245 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09312 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	' ', 'd', 'a', 't', 'a', 'c', 'o', 'n', 's', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 09336 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'a', 'd', 'n', 'o', 'm', 'e', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09368 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09399 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09430 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', 'c', 'o', 'n', 'v', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09461 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09492 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09529 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'o', 'p', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09566 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'g', 'u', 'i', 'a', 'n', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09594 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'e', 'c', 'i', 'b', 'o', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09621 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09665 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 09696 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09739 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09789 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09814 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09874 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'M', 'O', 'V', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10042 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10067 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 94, 3,	/* 862 (abs: 10948) */
/* 10089 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10157 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	' ', 'c', 'o', 'd', 'c', 'o', 'n', 'v', 9, 'C', 'H', 'A', 'R', '(', '2', ')', 0, 
/* 10181 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 9, 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10212 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'i', 'p', 'o', 9, 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10237 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'f', 'a', 't', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10273 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'r', 's', 'o', 'c', 'i', 'a', 'l', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10305 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10337 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'f', 'o', 'n', 'e', 'c', 'o', 'n', 'v', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10369 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', 'i', 'n', 'i', 9, 'D', 'A', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10393 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'r', 'a', 'z', 'o', 9, 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10425 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'n', 9, 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10461 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'o', 'p', 9, 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10496 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10540 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 10571 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10615 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10666 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10691 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10752 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'V', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10923 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10948 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'M', 'E', 'D', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 227, 2,	/* 739 (abs: 11705) */
/* 10969 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11036 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 11062 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'e', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'i', 'd', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11094 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'r', 'o', 'f', 'i', 's', 's', 'i', 'o', 'n', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11126 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'r', 'm', 9, 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11151 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'o', 'n', 'e', 9, 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11177 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11207 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'e', 'p', 9, 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11231 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11259 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11303 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11334 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11377 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11427 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11452 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11512 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'M', 'E', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11680 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11705 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'R', 'E', 'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 176, 2,	/* 688 (abs: 12411) */
/* 11726 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11793 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
/* 11819 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', 'm', 'e', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11845 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'r', 'o', 'f', 'i', 's', 's', 'i', 'o', 'n', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11877 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', 9, 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11899 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '3', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11936 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 9, 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 11965 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12009 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12040 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12083 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12133 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12158 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12218 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12386 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12411 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 145, 2,	/* 657 (abs: 13087) */
/* 12433 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12501 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 12527 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', 9, 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12549 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', 'm', 'e', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12575 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'i', 'a', 'g', 'n', 'o', 's', 't', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12605 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'm', 'e', 'd', 'i', 'c', 'a', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12635 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12679 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 12710 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12754 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12805 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12830 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12891 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'L', 'I', 'N', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13062 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13087 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 205, 2,	/* 717 (abs: 13823) */
/* 13109 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13177 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'o', 'd', '_', 'r', 'e', 'c', 'e', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 13203 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '1', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13231 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '2', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13259 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '3', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13287 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '4', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13315 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '5', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13343 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '6', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13371 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13415 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13446 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13490 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13541 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13566 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13627 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'R', 'E', 'C', 'E', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13798 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13823 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'C', 'O', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 221, 2,	/* 733 (abs: 14574) */
/* 13844 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13911 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	' ', 't', 'u', 'r', 'n', 'o', 9, 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
/* 13934 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', 9, 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13956 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 13984 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14012 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'n', 'o', 'm', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14044 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'n', '_', 'c', 'o', 'n', 'v', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14075 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', 'n', 's', 9, 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14099 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'f', 'o', 'n', 'e', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14128 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14172 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14203 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14246 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14296 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14321 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14381 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14549 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14574 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'C', 'O', 'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 43, 4,	/* 1067 (abs: 15659) */
/* 14595 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14662 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	' ', 'n', 'o', 'm', 'e', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
/* 14685 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 'd', 'i', 'c', 'o', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14716 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14744 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'a', 'r', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14776 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'a', 't', 'a', 9, 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14798 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'c', 'o', 'n', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14829 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 's', 'h', 'i', 'l', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14861 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'i', 'a', 'g', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14893 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '1', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14925 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '2', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14957 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '3', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 14989 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '4', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15021 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '5', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15053 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '6', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15085 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '7', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15117 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '8', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15149 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '9', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15181 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'l', 'i', 'n', '1', '0', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15213 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15257 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15288 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15331 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15381 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15406 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15466 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'L', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15634 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15659 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'M', 'E', 'D', 'C', 'I', 'D', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 157, 2,	/* 669 (abs: 16346) */
/* 15680 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15747 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_LOCALNEARSETSTR, 8, 22, 0,	/* MATRIZ 22*/
	' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
/* 15776 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', ' ', ' ', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15806 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'o', 'm', 'e', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15835 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'v', 'l', 'r', '_', 'u', 's', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '8', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15871 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', 'o', ' ', ' ', ' ', ' ', 9, 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15900 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15944 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 15975 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16018 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16068 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16093 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16153 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16321 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16346 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 134, 5,	/* 1414 (abs: 17779) */
/* 16368 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16436 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	' ', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
/* 16459 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16482 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16508 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', '_', 'd', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16538 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'b', 'a', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16567 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'c', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16595 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16627 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', 'i', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16651 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16684 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16715 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'd', 'e', 's', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16744 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16774 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16804 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16834 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16863 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16894 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'a', 'n', 'g', 'r', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16923 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'p', '_', 'p', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16950 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 16974 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17000 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'u', 't', 'o', 'r', 'i', 'z', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17029 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17066 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17102 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'p', '_', 'd', 'e', 's', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17131 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'd', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17160 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'c', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17189 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'f', 'e', 'c', 'h', 'a', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17218 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 't', 'p', '_', 'm', 'o', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17246 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17276 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', '_', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17301 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17327 */ HB_P_LINE, 5, 2,	/* 517 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17371 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17402 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17446 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17497 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17522 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17583 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'A', 'I', 'X', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17754 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 17779 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'M', 'E', 'D', 'D', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 75, 2,	/* 587 (abs: 18383) */
/* 17799 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'D', 'E', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17865 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 17889 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '1', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17916 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '2', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17943 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 17987 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18018 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18060 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'E', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18109 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18134 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'E', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18193 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'E', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'E', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'D', 'E', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18358 */ HB_P_LINE, 26, 2,	/* 538 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18383 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 98, 4,	/* 1122 (abs: 19524) */
/* 18405 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18473 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 18497 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', 'a', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18521 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'h', 'c', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18550 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'h', 'b', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18579 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'h', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18608 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18637 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18666 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18695 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18724 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18753 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', 't', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18782 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'l', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18811 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18840 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'p', 'l', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18869 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'g', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18898 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'u', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18927 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18956 */ HB_P_LINE, 47, 2,	/* 559 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'h', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 18985 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'k', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19014 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'l', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19043 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'r', 'a', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19072 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19116 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19147 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19191 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19242 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19267 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19328 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'M', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19499 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19524 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 47, 3,	/* 815 (abs: 20358) */
/* 19546 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19614 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 19640 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', '_', 'p', 'u', 'l', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19666 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'v', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19696 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'v', 'e', 'f', '1', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19726 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'i', 't', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19756 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'p', 'f', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19786 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'f', 'e', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19816 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'v', 'v', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19846 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'v', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19876 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'f', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19906 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19950 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 19981 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20025 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20076 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20101 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20162 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'P', 'U', 'L', 'M', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20333 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 20358 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 247, 5,	/* 1527 (abs: 21904) */
/* 20380 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20448 */ HB_P_LINE, 83, 2,	/* 595 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'o', 'd', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 20474 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'o', 'm', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20501 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', '_', 'p', 'u', 'l', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20527 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '7', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20559 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 's', 'e', 'x', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20585 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 's', 'o', 'l', 'i', 'c', 'i', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20615 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 't', '_', 'e', 'x', 'a', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20646 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 't', '_', 'e', 'x', 'a', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20677 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 't', '_', 'e', 'x', 'a', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20708 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 't', '_', 'e', 'x', 'a', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20739 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'e', 't', 'o', 'd', 'o', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20770 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'l', 'a', 'r', 'i', 'n', 'g', 'e', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20801 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'l', 'a', 'r', 'i', 'n', 'g', 'e', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20832 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'l', 'a', 'r', 'i', 'n', 'g', 'e', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20863 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'l', 'a', 'r', 'i', 'n', 'g', 'e', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20894 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'a', 'r', 'i', 'n', 'a', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20925 */ HB_P_LINE, 99, 2,	/* 611 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'd', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20956 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'd', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 20987 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'd', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21018 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'd', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21049 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'd', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21080 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'e', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21111 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'e', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21142 */ HB_P_LINE, 106, 2,	/* 618 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'e', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21173 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'e', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21204 */ HB_P_LINE, 108, 2,	/* 620 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'b', 'r', 'o', 'n', 'q', '_', 'e', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21235 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'a', 't', 'e', 'r', 'i', 'a', 'l', '1', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21266 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'a', 't', 'e', 'r', 'i', 'a', 'l', '2', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21297 */ HB_P_LINE, 111, 2,	/* 623 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'a', 't', 'e', 'r', 'i', 'a', 'l', '3', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21328 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'i', 'a', 'g', '1', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21359 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'i', 'a', 'g', '2', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21390 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'i', 'a', 'g', '3', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21421 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'i', 'a', 'g', '4', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21452 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21496 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 21527 */ HB_P_LINE, 118, 2,	/* 630 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21571 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21622 */ HB_P_LINE, 120, 2,	/* 632 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21647 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21708 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'E', 'N', 'D', 'O', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21879 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 21904 */ HB_P_LINE, 125, 2,	/* 637 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 39, 2,	/* 551 (abs: 22474) */
/* 21926 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21994 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_LOCALNEARSETSTR, 8, 21, 0,	/* MATRIZ 21*/
	' ', 'p', 'a', 't', 'o', 'l', 'o', 'g', 'i', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
/* 22022 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22066 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22097 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22141 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22192 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22217 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22278 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'P', 'A', 'T', 'O', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22449 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22474 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	' ', 'd', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 22497 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22527 */ HB_P_LINE, 139, 2,	/* 651 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', 'c', 'l', 'i', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22557 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22588 */ HB_P_LINE, 141, 2,	/* 653 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22618 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22662 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 22693 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 192, 1,	/* 448 (abs: 23160) */
/* 22715 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 22783 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22827 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22878 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22903 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22964 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'H', 'I', 'S', 'T', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23135 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23160 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 192, 1,	/* 448 (abs: 23627) */
/* 23182 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23250 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23294 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23345 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23370 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23431 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'E', 'X', 'A', 'M', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23602 */ HB_P_LINE, 160, 2,	/* 672 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23627 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 192, 1,	/* 448 (abs: 24094) */
/* 23649 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23717 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23761 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23812 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23837 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23898 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'D', 'I', 'A', 'G', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24069 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24094 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 192, 1,	/* 448 (abs: 24561) */
/* 24116 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24184 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24228 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24279 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24304 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24365 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'O', 'N', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24536 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24561 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'M', 'E', 'D', 'R', 'A', 'D', 'I', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 24, 1,	/* 280 (abs: 24861) */
/* 24584 */ HB_P_LINE, 181, 2,	/* 693 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'R', 'A', 'D', 'I', 'O', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24653 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_LOCALNEARSETSTR, 8, 19, 0,	/* MATRIZ 19*/
	' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
/* 24679 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'r', 'a', 'd', 'i', 'o', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 24707 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 24739 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'R', 'A', 'D', 'I', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24784 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'R', 'A', 'D', 'I', 'O', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24836 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24861 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 79, 2,	/* 591 (abs: 25472) */
/* 24884 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 24953 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_LOCALNEARSETSTR, 8, 22, 0,	/* MATRIZ 22*/
	' ', 'c', 'o', 'd', '_', 'c', 'i', 'r', 'u', 'r', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 24982 */ HB_P_LINE, 192, 2,	/* 704 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25014 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25058 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25089 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25134 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25186 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25211 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25273 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 156,	/* 156 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'C', 'I', 'R', 'U', 'R', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25447 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25472 */ HB_P_LINE, 202, 2,	/* 714 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 4, 4,	/* 1028 (abs: 26519) */
/* 25494 */ HB_P_LINE, 203, 2,	/* 715 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25562 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_LOCALNEARSETSTR, 8, 18, 0,	/* MATRIZ 18*/
	' ', 'd', 'a', 't', 'a', '_', 'c', 'i', 'r', 'u', 'r', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 25587 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'h', 'o', 'r', 'a', '_', 'c', 'i', 'r', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25618 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'h', 'o', 'r', 'a', '_', 'i', 'n', 't', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25649 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25680 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25712 */ HB_P_LINE, 209, 2,	/* 721 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'c', 'i', 'r', 'u', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25743 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'i', 'r', 'u', 'r', 'g', 'i', 'a', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25775 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'c', 'o', 'n', 'v', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25806 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 'o', 'n', 'v', 'e', 'n', 'i', 'o', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25838 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'i', 'a', 'g', '1', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25870 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'i', 'a', 'g', '2', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25902 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'e', 'q', 'u', 'i', 'p', 'e', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25934 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'a', 'l', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25966 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'h', 'o', 's', 'p', 'i', 't', 'a', 'l', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 25998 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'l', 'r', '_', 'c', 'i', 'r', 'u', 'r', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26035 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'o', 'b', 's', '_', 'c', 'i', 'r', 'u', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26067 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26111 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26142 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26186 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26237 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26262 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26323 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'M', 'V', 'C', 'I', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26494 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 26519 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 233, 5,	/* 1513 (abs: 28050) */
/* 26540 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26607 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_LOCALNEARSETSTR, 8, 28, 0,	/* MATRIZ 28*/
	'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
/* 26642 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'r', 'a', 'z', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26670 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26696 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26723 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'l', 't', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26750 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26781 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'i', 'r', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26810 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'i', 'd', 'a', 'd', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26839 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26863 */ HB_P_LINE, 240, 2,	/* 752 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', 'e', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26888 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'p', 'o', 's', 't', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26917 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'e', 'm', 'a', 'i', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26946 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 26973 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'e', 'l', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27000 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'f', 'a', 'x', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27026 */ HB_P_LINE, 246, 2,	/* 758 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'g', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27052 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 's', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27079 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'p', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27105 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27135 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27162 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'p', 'r', 'a', 'z', 'o', '_', 'p', 'a', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27193 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 't', '_', 'g', 'e', 'r', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27226 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 't', '_', 'v', 'e', 'n', 'd', 'e', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27259 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 't', '_', 'f', 'a', 't', 'u', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27291 */ HB_P_LINE, 255, 2,	/* 767 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', 't', '_', 'c', 'o', 'b', 'r', 'a', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27323 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'l', 'i', 'm', 'i', 't', 'e', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27357 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27383 */ HB_P_LINE, 2, 3,	/* 770 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27410 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27437 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '3', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27464 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '4', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27491 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '5', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27518 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27545 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'A', 'P', 'P', '.', '.', '.', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27573 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'f', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27604 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27648 */ HB_P_LINE, 11, 3,	/* 779 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 27679 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27722 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27772 */ HB_P_LINE, 14, 3,	/* 782 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27797 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27857 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28025 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28050 */ HB_P_LINE, 20, 3,	/* 788 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'e', 's', 'p', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 19, 3,	/* 787 (abs: 28855) */
/* 28071 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'D', 'E', 'S', 'P', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28138 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_LOCALNEARSETSTR, 8, 26, 0,	/* MATRIZ 26*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
/* 28171 */ HB_P_LINE, 23, 3,	/* 791 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'e', 's', 'c', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 28199 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 28225 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 28269 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 28300 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28343 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28393 */ HB_P_LINE, 30, 3,	/* 798 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28418 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28478 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'D', 'E', 'S', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28646 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28671 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHLOCALNEAR, 1,	/* MOP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 177, 0,	/* 177 (abs: 28855) */
/* 28681 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 28716) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 28716 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28724 */ HB_P_LINE, 37, 3,	/* 805 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '.', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 33,	/* CODIGO */
/* 28738 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 'E', 'S', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 34,	/* DESC1 */
/* 28760 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 35,	/* TIPO */
/* 28771 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHSYMNEAR, 36,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28779 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHSYMNEAR, 20,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28787 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '.', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 33,	/* CODIGO */
/* 28801 */ HB_P_LINE, 43, 3,	/* 811 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 'E', 'S', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 34,	/* DESC1 */
/* 28823 */ HB_P_LINE, 44, 3,	/* 812 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIASEDFIELDNEAR, 35,	/* TIPO */
/* 28834 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_PUSHSYMNEAR, 36,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28842 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 32,	/* CDESP */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 31,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 28855 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 244, 5,	/* 1524 (abs: 30397) */
/* 28876 */ HB_P_LINE, 51, 3,	/* 819 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28943 */ HB_P_LINE, 52, 3,	/* 820 */
	HB_P_LOCALNEARSETSTR, 8, 18, 0,	/* MATRIZ 18*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 28968 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 28994 */ HB_P_LINE, 54, 3,	/* 822 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29022 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29054 */ HB_P_LINE, 56, 3,	/* 824 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29091 */ HB_P_LINE, 57, 3,	/* 825 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', '_', 'f', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29120 */ HB_P_LINE, 58, 3,	/* 826 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'f', 'o', 'r', 'n', 'e', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29148 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29178 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29204 */ HB_P_LINE, 61, 3,	/* 829 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'e', 'n', 'c', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29227 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'p', 'a', 'g', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29252 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'p', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29279 */ HB_P_LINE, 64, 3,	/* 832 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29306 */ HB_P_LINE, 65, 3,	/* 833 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29335 */ HB_P_LINE, 66, 3,	/* 834 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29361 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29394 */ HB_P_LINE, 68, 3,	/* 836 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29428 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29464 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'j', 'u', 'r', 'o', 's', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29497 */ HB_P_LINE, 71, 3,	/* 839 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'a', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29523 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'n', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29550 */ HB_P_LINE, 73, 3,	/* 841 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29576 */ HB_P_LINE, 74, 3,	/* 842 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'o', 'b', 's', '_', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29604 */ HB_P_LINE, 75, 3,	/* 843 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'n', 'b', 'a', 'n', 'c', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29632 */ HB_P_LINE, 76, 3,	/* 844 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'h', 'e', 'q', 'u', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29660 */ HB_P_LINE, 77, 3,	/* 845 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'n', 't', 'a', '_', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29690 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29720 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29750 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29780 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', 'c', 'e', 'i', 't', 'e', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29808 */ HB_P_LINE, 82, 3,	/* 850 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'a', '_', 's', 'o', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29834 */ HB_P_LINE, 83, 3,	/* 851 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', '_', 'r', 'e', 'c', 'e', 'b', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29862 */ HB_P_LINE, 84, 3,	/* 852 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'o', 'p', 'e', '_', 'r', 'e', 'c', 'e', 'b', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29893 */ HB_P_LINE, 85, 3,	/* 853 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'd', 'o', 'c', '_', 't', 'r', 'a', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29924 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', '_', 't', 'r', 'a', 'n', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29951 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 29995 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30026 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30069 */ HB_P_LINE, 91, 3,	/* 859 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30119 */ HB_P_LINE, 92, 3,	/* 860 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30144 */ HB_P_LINE, 93, 3,	/* 861 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30204 */ HB_P_LINE, 94, 3,	/* 862 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30372 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 30397 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 30421 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', 'o', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30450 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', 'e', 'r', 'o', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30479 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30511 */ HB_P_LINE, 101, 3,	/* 869 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30548 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30577 */ HB_P_LINE, 103, 3,	/* 871 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'f', 'o', 'r', 'n', 'e', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30605 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30634 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'c', '_', 'c', 'p', 'f', 'c', 'n', 'p', 'j', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30666 */ HB_P_LINE, 106, 3,	/* 874 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30691 */ HB_P_LINE, 107, 3,	/* 875 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'v', 'e', 'n', 'c', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30713 */ HB_P_LINE, 108, 3,	/* 876 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'e', 'n', 'c', '1', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30736 */ HB_P_LINE, 109, 3,	/* 877 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'p', 'a', 'g', ' ', ' ', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30764 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 't', 'r', 'a', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30790 */ HB_P_LINE, 111, 3,	/* 879 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'o', 'p', 'e', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30816 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'b', 'a', 'n', 'c', 'o', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30845 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30874 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', '_', 'c', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30904 */ HB_P_LINE, 115, 3,	/* 883 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30939 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 30974 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', '_', 'i', 'p', 'i', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31009 */ HB_P_LINE, 118, 3,	/* 886 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31044 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'j', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31079 */ HB_P_LINE, 120, 3,	/* 888 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31114 */ HB_P_LINE, 121, 3,	/* 889 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'p', 'a', 'g', 'o', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31143 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'i', 'p', '_', 'p', 'g', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31172 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'o', 'v', '_', 'c', 'x', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31201 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31230 */ HB_P_LINE, 125, 3,	/* 893 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'h', 'e', 'q', 'u', 'e', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31259 */ HB_P_LINE, 126, 3,	/* 894 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31288 */ HB_P_LINE, 127, 3,	/* 895 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31317 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31352 */ HB_P_LINE, 129, 3,	/* 897 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', '1', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31388 */ HB_P_LINE, 130, 3,	/* 898 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'v', 'l', 'r', '_', 't', 'a', 'b', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31423 */ HB_P_LINE, 131, 3,	/* 899 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31452 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'l', 't', '_', 'o', 'p', 'e', 'r', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31481 */ HB_P_LINE, 133, 3,	/* 901 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'o', 'c', '_', 't', 'r', 'a', 'n', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31511 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', '_', 't', 'r', 'a', 'n', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31537 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31566 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'f', 'o', 'r', 'n', '_', 'd', 'e', 's', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31598 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31626 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'o', 'p', 'e', 'r', '_', 'p', 'a', 'r', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31657 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31685 */ HB_P_LINE, 140, 3,	/* 908 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'm', 'o', 't', 'i', 'v', 'o', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31716 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'i', 'n', 'c', 'l', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31745 */ HB_P_LINE, 142, 3,	/* 910 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'b', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31775 */ HB_P_LINE, 143, 3,	/* 911 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'b', 's', '1', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31805 */ HB_P_LINE, 144, 3,	/* 912 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', ' ', 'C', 'H', 'A', 'R', '(', '3', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31835 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'p', 'f', 'c', 'n', 'p', 'j', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31865 */ HB_P_LINE, 146, 3,	/* 914 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'c', 'o', 'b', 'r', 'a', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31891 */ HB_P_LINE, 147, 3,	/* 915 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'p', 'r', 'e', 'v', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31917 */ HB_P_LINE, 148, 3,	/* 916 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'd', 'a', 't', 'p', 'r', 'o', 'c', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31943 */ HB_P_LINE, 149, 3,	/* 917 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'o', 'p', 'e', 'p', 'r', 'o', 'c', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 31972 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'o', 'p', 'e', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32003 */ HB_P_LINE, 151, 3,	/* 919 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'o', 'p', 'e', '_', 'c', 'o', 'm', 'i', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32038 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'p', 'g', '_', 'c', 'o', 'm', 'i', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32064 */ HB_P_LINE, 153, 3,	/* 921 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'o', 'p', 'e', '_', 'p', 'g', 'c', 'o', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32095 */ HB_P_LINE, 154, 3,	/* 922 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', 'i', 'n', '1', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32125 */ HB_P_LINE, 155, 3,	/* 923 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', 'i', 'n', '2', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32155 */ HB_P_LINE, 156, 3,	/* 924 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', 'i', 'n', '3', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32185 */ HB_P_LINE, 157, 3,	/* 925 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', 'i', 'n', '4', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32215 */ HB_P_LINE, 158, 3,	/* 926 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'l', 'i', 'n', '5', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32245 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'h', 'o', 'r', 'a', '_', 'b', 'x', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32274 */ HB_P_LINE, 160, 3,	/* 928 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32303 */ HB_P_LINE, 161, 3,	/* 929 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32336 */ HB_P_LINE, 162, 3,	/* 930 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 'o', 'n', 'v', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32369 */ HB_P_LINE, 163, 3,	/* 931 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 'o', 'd', '_', 'e', 's', 'p', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32402 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'c', 'o', 'd', '_', 'm', 'e', 'd', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32435 */ HB_P_LINE, 165, 3,	/* 933 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 's', 't', 'a', 't', 'u', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32468 */ HB_P_LINE, 166, 3,	/* 934 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32501 */ HB_P_LINE, 167, 3,	/* 935 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32545 */ HB_P_LINE, 168, 3,	/* 936 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 32576 */ HB_P_LINE, 169, 3,	/* 937 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32645 */ HB_P_LINE, 170, 3,	/* 938 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 185, 1,	/* 441 (abs: 33104) */
/* 32666 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32733 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32776 */ HB_P_LINE, 174, 3,	/* 942 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32826 */ HB_P_LINE, 175, 3,	/* 943 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32851 */ HB_P_LINE, 176, 3,	/* 944 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32911 */ HB_P_LINE, 177, 3,	/* 945 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33079 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33104 */ HB_P_LINE, 180, 3,	/* 948 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33173 */ HB_P_LINE, 181, 3,	/* 949 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'r', 'e', 'd', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 185, 1,	/* 441 (abs: 33632) */
/* 33194 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33261 */ HB_P_LINE, 183, 3,	/* 951 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33304 */ HB_P_LINE, 184, 3,	/* 952 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33354 */ HB_P_LINE, 185, 3,	/* 953 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33379 */ HB_P_LINE, 186, 3,	/* 954 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33439 */ HB_P_LINE, 187, 3,	/* 955 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33607 */ HB_P_LINE, 188, 3,	/* 956 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33632 */ HB_P_LINE, 191, 3,	/* 959 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'o', 'n', 'f', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 142, 2,	/* 654 (abs: 34304) */
/* 33653 */ HB_P_LINE, 192, 3,	/* 960 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33720 */ HB_P_LINE, 193, 3,	/* 961 */
	HB_P_LOCALNEARSETSTR, 8, 18, 0,	/* MATRIZ 18*/
	'm', 'o', 'd', 'u', 'l', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
/* 33745 */ HB_P_LINE, 194, 3,	/* 962 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33774 */ HB_P_LINE, 195, 3,	/* 963 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'i', 'v', 'e', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '9', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33801 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'a', 'l', 't', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33828 */ HB_P_LINE, 197, 3,	/* 965 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'o', 'p', 'e', 'r', '_', 'a', 'l', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33858 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33902 */ HB_P_LINE, 199, 3,	/* 967 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 33933 */ HB_P_LINE, 200, 3,	/* 968 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 33976 */ HB_P_LINE, 201, 3,	/* 969 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34026 */ HB_P_LINE, 202, 3,	/* 970 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34051 */ HB_P_LINE, 203, 3,	/* 971 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34111 */ HB_P_LINE, 204, 3,	/* 972 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 150,	/* 150 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'O', 'N', 'F', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34279 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 34304 */ HB_P_LINE, 208, 3,	/* 976 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34373 */ HB_P_LINE, 209, 3,	/* 977 */
	HB_P_LOCALNEARSETSTR, 8, 18, 0,	/* MATRIZ 18*/
	'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 34398 */ HB_P_LINE, 210, 3,	/* 978 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34424 */ HB_P_LINE, 211, 3,	/* 979 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34447 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'n', 'o', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34473 */ HB_P_LINE, 213, 3,	/* 981 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'n', 'u', 'm', '_', 'd', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34503 */ HB_P_LINE, 214, 3,	/* 982 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'b', 'a', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34532 */ HB_P_LINE, 215, 3,	/* 983 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 'c', 'o', 'd', '_', 'c', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34560 */ HB_P_LINE, 216, 3,	/* 984 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34592 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', 'i', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34616 */ HB_P_LINE, 218, 3,	/* 986 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34649 */ HB_P_LINE, 219, 3,	/* 987 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'm', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34680 */ HB_P_LINE, 220, 3,	/* 988 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'd', 'e', 's', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34709 */ HB_P_LINE, 221, 3,	/* 989 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34739 */ HB_P_LINE, 222, 3,	/* 990 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '2', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34769 */ HB_P_LINE, 223, 3,	/* 991 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34799 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34828 */ HB_P_LINE, 225, 3,	/* 993 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34859 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 's', 'a', 'n', 'g', 'r', 'i', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34888 */ HB_P_LINE, 227, 3,	/* 995 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'p', '_', 'p', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34915 */ HB_P_LINE, 228, 3,	/* 996 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34939 */ HB_P_LINE, 229, 3,	/* 997 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34965 */ HB_P_LINE, 230, 3,	/* 998 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'u', 't', 'o', 'r', 'i', 'z', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 34994 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	',', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'm', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '0', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35031 */ HB_P_LINE, 232, 3,	/* 1000 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '2', ',', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35067 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 't', 'p', '_', 'd', 'e', 's', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35096 */ HB_P_LINE, 234, 3,	/* 1002 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'p', 'd', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35125 */ HB_P_LINE, 235, 3,	/* 1003 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'n', 'u', 'm', '_', 'c', 'u', 'p', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35154 */ HB_P_LINE, 236, 3,	/* 1004 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'f', 'e', 'c', 'h', 'a', 'd', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35183 */ HB_P_LINE, 237, 3,	/* 1005 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	',', 't', 'p', '_', 'm', 'o', 'v', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35211 */ HB_P_LINE, 238, 3,	/* 1006 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35241 */ HB_P_LINE, 239, 3,	/* 1007 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'c', '_', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35266 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'o', 'b', 's', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35292 */ HB_P_LINE, 241, 3,	/* 1009 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35336 */ HB_P_LINE, 242, 3,	/* 1010 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35367 */ HB_P_LINE, 243, 3,	/* 1011 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 191, 1,	/* 447 (abs: 35833) */
/* 35389 */ HB_P_LINE, 244, 3,	/* 1012 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35456 */ HB_P_LINE, 246, 3,	/* 1014 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35500 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35551 */ HB_P_LINE, 248, 3,	/* 1016 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35576 */ HB_P_LINE, 249, 3,	/* 1017 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35637 */ HB_P_LINE, 250, 3,	/* 1018 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35808 */ HB_P_LINE, 251, 3,	/* 1019 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35833 */ HB_P_LINE, 253, 3,	/* 1021 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'l', 'o', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 100, 4,	/* 1124 (abs: 36974) */
/* 35853 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'L', 'O', 'G', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35919 */ HB_P_LINE, 255, 3,	/* 1023 */
	HB_P_LOCALNEARSETSTR, 8, 16, 0,	/* MATRIZ 16*/
	'd', 'a', 't', 'a', '_', 's', 'i', 's', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 35942 */ HB_P_LINE, 0, 4,	/* 1024 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35965 */ HB_P_LINE, 1, 4,	/* 1025 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'h', 'o', 'r', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '8', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 35991 */ HB_P_LINE, 2, 4,	/* 1026 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36018 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'a', 'u', 't', '_', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36048 */ HB_P_LINE, 4, 4,	/* 1028 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36078 */ HB_P_LINE, 5, 4,	/* 1029 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36108 */ HB_P_LINE, 6, 4,	/* 1030 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36137 */ HB_P_LINE, 7, 4,	/* 1031 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36167 */ HB_P_LINE, 8, 4,	/* 1032 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36197 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36229 */ HB_P_LINE, 10, 4,	/* 1034 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'q', 'u', 'a', 'n', 't', 'd', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36264 */ HB_P_LINE, 11, 4,	/* 1035 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'q', 'u', 'a', 'n', 't', 'd', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36299 */ HB_P_LINE, 12, 4,	/* 1036 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'a', 'l', 'o', 'r', '1', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36333 */ HB_P_LINE, 13, 4,	/* 1037 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	',', 'v', 'a', 'l', 'o', 'r', '2', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '4', ',', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36367 */ HB_P_LINE, 14, 4,	/* 1038 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '1', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36391 */ HB_P_LINE, 15, 4,	/* 1039 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'e', 'n', 'c', '2', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36415 */ HB_P_LINE, 16, 4,	/* 1040 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'm', 'o', 'd', 'u', 'l', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36444 */ HB_P_LINE, 17, 4,	/* 1041 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', 'C', 'H', 'A', 'R', '(', '6', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36473 */ HB_P_LINE, 18, 4,	/* 1042 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'a', 'u', 't', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '7', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36503 */ HB_P_LINE, 19, 4,	/* 1043 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36534 */ HB_P_LINE, 20, 4,	/* 1044 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36578 */ HB_P_LINE, 21, 4,	/* 1045 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 36609 */ HB_P_LINE, 23, 4,	/* 1047 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36651 */ HB_P_LINE, 24, 4,	/* 1048 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36700 */ HB_P_LINE, 25, 4,	/* 1049 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36725 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36784 */ HB_P_LINE, 27, 4,	/* 1051 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'L', 'O', 'G', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36949 */ HB_P_LINE, 28, 4,	/* 1052 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36974 */ HB_P_LINE, 30, 4,	/* 1054 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	']', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37043 */ HB_P_LINE, 31, 4,	/* 1055 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	'c', 'o', 'd', 'i', 'g', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
/* 37067 */ HB_P_LINE, 32, 4,	/* 1056 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'a', 'r', 't', 'a', 'o', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37096 */ HB_P_LINE, 33, 4,	/* 1057 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'i', 'g', 'l', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37123 */ HB_P_LINE, 34, 4,	/* 1058 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 'p', 'r', 'a', 'z', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '3', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37155 */ HB_P_LINE, 35, 4,	/* 1059 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '5', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37190 */ HB_P_LINE, 36, 4,	/* 1060 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37220 */ HB_P_LINE, 37, 4,	/* 1061 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '4', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37252 */ HB_P_LINE, 38, 4,	/* 1062 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	',', 't', 'i', 'p', 'o', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37284 */ HB_P_LINE, 39, 4,	/* 1063 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 't', 'e', 'f', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37309 */ HB_P_LINE, 40, 4,	/* 1064 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37353 */ HB_P_LINE, 41, 4,	/* 1065 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37384 */ HB_P_LINE, 42, 4,	/* 1066 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 124, 1,	/* 380 (abs: 37783) */
/* 37406 */ HB_P_LINE, 43, 4,	/* 1067 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37450 */ HB_P_LINE, 44, 4,	/* 1068 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37501 */ HB_P_LINE, 45, 4,	/* 1069 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37526 */ HB_P_LINE, 46, 4,	/* 1070 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37587 */ HB_P_LINE, 47, 4,	/* 1071 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'A', 'R', 'T', 'A', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37758 */ HB_P_LINE, 48, 4,	/* 1072 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 37783 */ HB_P_LINE, 51, 4,	/* 1075 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 132, 2,	/* 644 (abs: 38446) */
/* 37805 */ HB_P_LINE, 52, 4,	/* 1076 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37873 */ HB_P_LINE, 53, 4,	/* 1077 */
	HB_P_LOCALNEARSETSTR, 8, 17, 0,	/* MATRIZ 17*/
	' ', 'd', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'A', 'T', 'E', ' ', 0, 
/* 37897 */ HB_P_LINE, 54, 4,	/* 1078 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', ' ', ' ', 'C', 'H', 'A', 'R', '(', '3', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37927 */ HB_P_LINE, 55, 4,	/* 1079 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'e', 's', 'p', 'e', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37958 */ HB_P_LINE, 56, 4,	/* 1080 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', ' ', ' ', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '3', ',', '2', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 37994 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38038 */ HB_P_LINE, 58, 4,	/* 1082 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38069 */ HB_P_LINE, 60, 4,	/* 1084 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38113 */ HB_P_LINE, 61, 4,	/* 1085 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38164 */ HB_P_LINE, 62, 4,	/* 1086 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38189 */ HB_P_LINE, 63, 4,	/* 1087 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38250 */ HB_P_LINE, 64, 4,	/* 1088 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 153,	/* 153 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'M', 'E', 'D', 'E', 'S', 'P', 'E', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38421 */ HB_P_LINE, 65, 4,	/* 1089 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38446 */ HB_P_LINE, 67, 4,	/* 1091 */
	HB_P_PUSHSYMNEAR, 16,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'C', 'F', 'G', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 17, 3,	/* 785 (abs: 39248) */
/* 38466 */ HB_P_LINE, 68, 4,	/* 1092 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* F */
	HB_P_DUPLICATE,
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	']', ' ', 'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '-', '>', 'S', 'A', 'C', 'C', 'F', 'G', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 38532 */ HB_P_LINE, 69, 4,	/* 1093 */
	HB_P_LOCALNEARSETSTR, 8, 20, 0,	/* MATRIZ 20*/
	' ', 'v', 'e', 'r', '_', 'c', 'f', 'g', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
/* 38559 */ HB_P_LINE, 70, 4,	/* 1094 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'n', 'o', 'm', 'e', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38590 */ HB_P_LINE, 71, 4,	/* 1095 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'i', 'p', '_', 't', 'e', 'r', 'm', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38620 */ HB_P_LINE, 72, 4,	/* 1096 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 't', 'i', 'p', '_', 'c', 'o', 'r', ' ', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38650 */ HB_P_LINE, 73, 4,	/* 1097 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	',', 'm', 'u', 'l', 't', '_', 'm', 'e', 'd', ' ', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38680 */ HB_P_LINE, 74, 4,	/* 1098 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'p', 'o', 'r', 't', 'a', '_', 'd', 'e', 'f', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', ',', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38715 */ HB_P_LINE, 75, 4,	/* 1099 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'a', 'm', '_', 'p', 'r', 'i', 'n', 't', ' ', 'C', 'H', 'A', 'R', '(', '3', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38746 */ HB_P_LINE, 76, 4,	/* 1100 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'a', 'm', '_', 'b', 'a', 'n', 'c', 'o', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38777 */ HB_P_LINE, 77, 4,	/* 1101 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	',', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '1', '5', ',', '0', ')', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38821 */ HB_P_LINE, 78, 4,	/* 1102 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', 'C', 'H', 'A', 'R', '(', '1', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38852 */ HB_P_LINE, 79, 4,	/* 1103 */
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	',', 'c', 'a', 'm', '_', 'f', 'o', 't', 'o', 's', ' ', 'C', 'H', 'A', 'R', '(', '5', '0', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MATRIZ */
/* 38883 */ HB_P_LINE, 81, 4,	/* 1105 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'G', 'E', 'N', 'E', 'R', 'A', 'T', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'F', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38925 */ HB_P_LINE, 82, 4,	/* 1106 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'F', 'G', ' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MATRIZ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38974 */ HB_P_LINE, 83, 4,	/* 1107 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38999 */ HB_P_LINE, 84, 4,	/* 1108 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'S', 'A', 'C', 'C', 'F', 'G', ' ', 'A', 'D', 'D', ' ', 'U', 'N', 'I', 'Q', 'U', 'E', ' ', '(', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39058 */ HB_P_LINE, 85, 4,	/* 1109 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'C', 'R', 'E', 'A', 'T', 'E', ' ', 'T', 'R', 'I', 'G', 'G', 'E', 'R', ' ', 'S', 'A', 'C', 'C', 'F', 'G', '_', 'S', 'R', ' ', 'F', 'O', 'R', ' ', 'S', 'A', 'C', 'C', 'F', 'G', ' ', 'A', 'C', 'T', 'I', 'V', 'E', ' ', 'B', 'E', 'F', 'O', 'R', 'E', ' ', 'I', 'N', 'S', 'E', 'R', 'T', ' ', 'P', 'O', 'S', 'I', 'T', 'I', 'O', 'N', ' ', '0', ' ', 'a', 's', ' ', 'b', 'e', 'g', 'i', 'n', ' ', 'I', 'f', ' ', '(', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'i', 's', ' ', 'n', 'u', 'l', 'l', ')', ' ', 't', 'h', 'e', 'n', ' ', 'n', 'e', 'w', '.', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 'g', 'e', 'n', '_', 'i', 'd', '(', ' ', 'S', 'A', 'C', 'C', 'F', 'G', ',', ' ', '1', ')', ';', ' ', 'e', 'n', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39223 */ HB_P_LINE, 86, 4,	/* 1110 */
	HB_P_MESSAGE, 17, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 18,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 39248 */ HB_P_LINE, 88, 4,	/* 1112 */
	HB_P_PUSHSYMNEAR, 11,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 39257 */ HB_P_LINE, 89, 4,	/* 1113 */
	HB_P_PUSHSYMNEAR, 37,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 38,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 39,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 39280 */ HB_P_LINE, 91, 4,	/* 1115 */
	HB_P_PUSHSYMNEAR, 40,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 39288 */ HB_P_LINE, 92, 4,	/* 1116 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 39294 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

