/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED470.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED470.PRG /q /oC:\HTI\SISMED\SMED470.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:35 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED470.PRG"

HB_FUNC( SMED470 );
HB_FUNC_EXTERN( NIVEL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( WVW_PBSETFONT );
HB_FUNC_EXTERN( WVW_PBCREATE );
HB_FUNC_EXTERN( SMED471 );
HB_FUNC_EXTERN( SMED472 );
HB_FUNC_EXTERN( SMED473 );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED470 )
{ "SMED470", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED470 )}, NULL },
{ "NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIVEL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "WVW_PBSETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBSETFONT )}, NULL },
{ "WVW_PBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBCREATE )}, NULL },
{ "SMED471", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED471 )}, NULL },
{ "NINCLU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED472", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED472 )}, NULL },
{ "NALTER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED473", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED473 )}, NULL },
{ "NEXCLU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED470 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED470
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED470 = hb_vm_SymbolInit_SMED470;
   #pragma data_seg()
#endif

HB_FUNC( SMED470 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '4', '7', '0', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00028 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 6, 14, 0,	/* LBA 14*/
/* 00034 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_LOCALNEARSETINT, 7, 17, 0,	/* CBA 17*/
/* 00040 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* OPCAO 0*/
/* 00046 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 00103) */
/* 00063 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 2,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00098 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00103 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 3,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'M', 'E', 'N', 'U', ' ', 'C', 'I', 'R', 'U', 'R', 'G', 'I', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00132 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* WVW_PBSETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'm', 'e', 's', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00153 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCODIGO */
	HB_P_PUSHSYMNEAR, 6,	/* SMED471 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 7, 0,	/* NINCLU */
/* 00212 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 5,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'C', 'i', 'r', 'u', 'r', 'u', 'g', 'i', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCODIGO */
	HB_P_PUSHSYMNEAR, 8,	/* SMED472 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 9, 0,	/* NALTER */
/* 00274 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCODIGO */
	HB_P_PUSHSYMNEAR, 10,	/* SMED473 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 11, 0,	/* NEXCLU */
/* 00334 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00343 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 2,	/* 0.10, 10, 2 */
	HB_P_PUSHINT, 250, 0,	/* 250 */
	HB_P_DOSHORT, 2,
/* 00364 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 14,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 216,	/* -40 (abs: 00334) */
/* 00376 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00383 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00388 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

