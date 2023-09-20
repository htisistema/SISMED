/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED214.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED214.PRG /q /oC:\HTI\SISMED\SMED214.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:38 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED214.PRG"

HB_FUNC( SMED214 );
HB_FUNC( TECLA_ESC );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( WVW_PBSETFONT );
HB_FUNC_EXTERN( WVW_PBCREATE );
HB_FUNC_EXTERN( HISTORICO1 );
HB_FUNC_EXTERN( HISTORICO2 );
HB_FUNC_EXTERN( HISTORICO3 );
HB_FUNC_EXTERN( HISTORICO4 );
HB_FUNC_EXTERN( SMED710 );
HB_FUNC_EXTERN( RECIBO );
HB_FUNC_EXTERN( SMED540 );
HB_FUNC_EXTERN( SMEDEXA );
HB_FUNC_EXTERN( SMED470 );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( WVW_PBENABLE );
HB_FUNC_EXTERN( WVW_SETMOUSEMOVE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DRAWLABEL );
HB_FUNC_EXTERN( NIVEL );
HB_FUNC_EXTERN( VCCONV );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( EXIBI_FOTO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( USO_CONS );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_PBDESTROY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( __KEYBOARD );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED214 )
{ "SMED214", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED214 )}, NULL },
{ "MNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFATOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMOD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRSOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCCONV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPRAZO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_CONS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTP_CONSULTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRECIB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_PBSETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBSETFONT )}, NULL },
{ "WVW_PBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBCREATE )}, NULL },
{ "HISTORICO1", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO1 )}, NULL },
{ "NHIST1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HISTORICO2", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO2 )}, NULL },
{ "NHIST2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HISTORICO3", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO3 )}, NULL },
{ "NHIST3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HISTORICO4", {HB_FS_PUBLIC}, {HB_FUNCNAME( HISTORICO4 )}, NULL },
{ "NHIST4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED710", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED710 )}, NULL },
{ "ND_ESTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECIBO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECIBO )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRECIBO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED540", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED540 )}, NULL },
{ "NRECEITA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMEDEXA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMEDEXA )}, NULL },
{ "NEXAME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SMED470", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED470 )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "NCIRURGIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TECLA_ESC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TECLA_ESC )}, NULL },
{ "NFIM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_PBENABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBENABLE )}, NULL },
{ "WVW_SETMOUSEMOVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_SETMOUSEMOVE )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCIM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETBAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DRAWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWLABEL )}, NULL },
{ "NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIVEL )}, NULL },
{ "VCCONV", {HB_FS_PUBLIC}, {HB_FUNCNAME( VCCONV )}, NULL },
{ "CONV", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "VALOR_CON", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "EXIBI_FOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_FOTO )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "USO_CONS", {HB_FS_PUBLIC}, {HB_FUNCNAME( USO_CONS )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_PBDESTROY", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBDESTROY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "MODALIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED214 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED214
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED214 = hb_vm_SymbolInit_SMED214;
   #pragma data_seg()
#endif

HB_FUNC( SMED214 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '2', '1', '4', 0, 
/* 00018 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MNOME */
	HB_P_PUSHSYMNEAR, 2,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 3,	/* MFATOR */
	HB_P_PUSHSYMNEAR, 4,	/* MMOD */
	HB_P_PUSHSYMNEAR, 5,	/* MRSOC */
	HB_P_PUSHSYMNEAR, 6,	/* MDATA */
	HB_P_PUSHSYMNEAR, 7,	/* MCCONV */
	HB_P_PUSHSYMNEAR, 8,	/* MPRAZO */
	HB_P_PUSHSYMNEAR, 9,	/* MDATA_CONS */
	HB_P_PUSHSYMNEAR, 10,	/* MTP_CONSULTA */
	HB_P_PUSHSYMNEAR, 11,	/* MCONS_CLI */
	HB_P_PUSHSYMNEAR, 12,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 13,	/* MRECIB */
	HB_P_DOSHORT, 13,
	HB_P_POPVARIABLE, 13, 0,	/* MRECIB */
	HB_P_POPVARIABLE, 12, 0,	/* MCOD_CLI */
	HB_P_POPVARIABLE, 11, 0,	/* MCONS_CLI */
	HB_P_POPVARIABLE, 8, 0,	/* MPRAZO */
/* 00072 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '2', 0, 
	HB_P_PUSHVARIABLE, 16, 0,	/* NIVEL_ACESS */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00118) */
/* 00113 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00118 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 17,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'm', 'e', 'd', 'c', 'o', 'n', 'v', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'o', 'n', 'v', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00148) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00148 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 11, 0,	/* MCONS_CLI */
/* 00156 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MREG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 11, 0,	/* MCONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00224 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00248 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 21,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 00312) */
/* 00262 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 22,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00307 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00312 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 23,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00349 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 24,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 25, 0,	/* GETLIST */
/* 00363 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 26,	/* WVW_PBSETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'm', 'e', 's', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00384 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'[', 'H', ']', 'i', 's', 't', 'o', 'r', 'i', 'a', ' ', 'C', 'l', 'i', 'n', 'i', 'c', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 28,	/* HISTORICO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 29, 0,	/* NHIST1 */
/* 00442 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'[', 'E', ']', 'x', 'a', 'm', 'e', ' ', 'C', 'l', 'i', 'n', 'i', 'c', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 30,	/* HISTORICO2 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 31, 0,	/* NHIST2 */
/* 00498 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'H', 'i', 'p', 'o', 't', 'e', 's', 'e', ' ', '[', 'D', ']', 'i', 'a', 'g', 'n', 'o', 's', 't', 'i', 'c', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 32,	/* HISTORICO3 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 33, 0,	/* NHIST3 */
/* 00561 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'[', 'C', ']', 'o', 'n', 'd', 'u', 't', 'a', ' ', 'M', 'e', 'd', 'i', 'c', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 34,	/* HISTORICO4 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 35, 0,	/* NHIST4 */
/* 00618 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'D', 'a', 'd', 'o', 's', ' ', 'E', 's', '[', 'T', ']', 'a', 't', 'i', 's', 't', 'i', 'c', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 36,	/* SMED710 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 37, 0,	/* ND_ESTA */
/* 00672 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'm', 'i', 't', 'i', 'r', ' ', '[', 'R', ']', 'e', 'c', 'i', 'b', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 30,	/* 30 */
	HB_P_PUSHSYMNEAR, 38,	/* RECIBO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_PUSHVARIABLE, 2, 0,	/* MVALOR */
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 40, 0,	/* NRECIBO */
/* 00743 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'E', 'm', 'i', 't', 'i', 'r', ' ', 'R', 'e', 'c', 'e', '[', 'I', ']', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 20,	/* 20 */
	HB_P_PUSHSYMNEAR, 41,	/* SMED540 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 42, 0,	/* NRECEITA */
/* 00805 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'm', 'i', 't', 'i', 'r', ' ', 'E', '[', 'X', ']', 'a', 'm', 'e', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 20,	/* 20 */
	HB_P_PUSHSYMNEAR, 43,	/* SMEDEXA */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 44, 0,	/* NEXAME */
/* 00866 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 20,	/* 20 */
	HB_P_PUSHSYMNEAR, 45,	/* SMED470 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 46,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 47, 0,	/* NCIRURGIA */
/* 00921 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 27,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'<', 'E', 'S', 'C', '>', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 48,	/* TECLA_ESC */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 11,
	HB_P_POPVARIABLE, 49, 0,	/* NFIM */
/* 00979 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* NHIST1 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 00991 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* NHIST2 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01003 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* NHIST3 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01015 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* NHIST4 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01027 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 37, 0,	/* ND_ESTA */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01039 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* NRECIBO */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01051 */ HB_P_LINEOFFSET, 36,	/* 41 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* NRECEITA */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01063 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* NEXAME */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01075 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NCIRURGIA */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 01087 */ HB_P_LINEOFFSET, 39,	/* 44 */
	HB_P_PUSHSYMNEAR, 51,	/* WVW_SETMOUSEMOVE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_DOSHORT, 2,
/* 01096 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 10, 0,	/* MTP_CONSULTA */
/* 01105 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_POPVARIABLE, 9, 0,	/* MDATA_CONS */
/* 01113 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHSYMNEAR, 52,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 01122 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHSYMNEAR, 53,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '-', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', '-', ' ', '<', 'A', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'R', 'e', 'g', '.', ' ', '-', ' ', '<', 0, 
	HB_P_PUSHVARIABLE, 54, 0,	/* SETCIM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'>', ' ', 'P', 'r', 'o', 'x', '.', ' ', 'R', 'e', 'g', '.', ' ', '-', ' ', '<', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 55, 0,	/* SETBAIX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'>', ' ', 'R', 'e', 'g', '.', ' ', 'A', 'n', 't', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01231 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHSYMNEAR, 56,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 01244 */ HB_P_LINEOFFSET, 46,	/* 51 */
	HB_P_PUSHSYMNEAR, 57,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01259 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHSYMNEAR, 58,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01267 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 53,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', '-', ' ', '<', 'F', '3', '>', ' ', 'p', '/', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01343 */ HB_P_LINEOFFSET, 49,	/* 54 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01379 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'e', 'g', 'i', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01415 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', 'm', 'e', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01452 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01489 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'u', 'm', 'e', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01526 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01557 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01594 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01631 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'F', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01653 */ HB_P_LINEOFFSET, 58,	/* 63 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01690 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01727 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', ' ', '1', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01764 */ HB_P_LINEOFFSET, 61,	/* 66 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'M', 'A', 'I', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01801 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'N', 'S', 'T', 'A', 'G', 'R', 'A', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01838 */ HB_P_LINEOFFSET, 63,	/* 68 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 't', 'a', 'd', 'o', ' ', 'C', 'i', 'v', 'i', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01875 */ HB_P_LINEOFFSET, 64,	/* 69 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'[', 'S', ']', 'o', 'l', 't', 'e', 'i', 'r', 'o', ' ', '[', 'C', ']', 'a', 's', 'a', 'd', 'o', ' ', '[', 'D', ']', 'i', 'v', 'o', 'r', 'c', 'i', 'a', 'd', 'o', ' ', '[', 'V', ']', 'i', 'u', 'v', 'o', ' ', 'S', 'e', '[', 'P', ']', 'a', 'r', 'a', 'd', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01956 */ HB_P_LINEOFFSET, 65,	/* 70 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'a', 't', 'u', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01993 */ HB_P_LINEOFFSET, 66,	/* 71 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'P', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02030 */ HB_P_LINEOFFSET, 67,	/* 72 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', '.', 'G', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02067 */ HB_P_LINEOFFSET, 68,	/* 73 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'N', 'a', 's', 'c', 'i', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02104 */ HB_P_LINEOFFSET, 69,	/* 74 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02129 */ HB_P_LINEOFFSET, 70,	/* 75 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'e', 'x', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02166 */ HB_P_LINEOFFSET, 71,	/* 76 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'[', 'M', ']', 'a', 's', 'c', 'u', 'l', 'i', 'n', 'o', ' ', '[', 'F', ']', 'e', 'm', 'i', 'n', 'i', 'n', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 8,
/* 02218 */ HB_P_LINEOFFSET, 72,	/* 77 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'a', 'c', 'a', '/', 'C', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02255 */ HB_P_LINEOFFSET, 73,	/* 78 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'[', 'P', ']', 'r', 'e', 't', 'a', ' ', '[', 'B', ']', 'r', 'a', 'n', 'c', 'a', ' ', 'P', 'r', 'a', '[', 'D', ']', 'a', ' ', '[', 'O', ']', 'u', 't', 'r', 'a', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 02317 */ HB_P_LINEOFFSET, 74,	/* 79 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 'c', 'o', 'l', 'a', 'r', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02354 */ HB_P_LINEOFFSET, 75,	/* 80 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'[', '1', ']', 'N', 'u', 'n', 'c', 'a', ' ', 'e', 's', 't', 'u', 'd', 'o', 'u', ' ', '-', ' ', '[', '2', ']', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'z', 'a', 'c', 'a', 'o', '/', '1', 'o', '.', 'a', 'n', 'o', ' ', '-', ' ', '[', '3', ']', 'F', 'u', 'n', 'd', '.', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 02447 */ HB_P_LINEOFFSET, 76,	/* 81 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'[', '4', ']', 'F', 'u', 'n', 'd', '.', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '5', ']', 'M', 'e', 'd', 'i', 'o', ' ', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '6', ']', 'M', 'e', 'd', 'i', 'o', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 02535 */ HB_P_LINEOFFSET, 77,	/* 82 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'[', '7', ']', 'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r', ' ', 'i', 'n', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', ' ', '-', ' ', '[', '8', ']', 'S', 'u', 'p', 'e', 'r', 'i', 'o', 'r', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 't', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 8,
/* 02610 */ HB_P_LINEOFFSET, 78,	/* 83 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'T', 'r', 'a', 'b', 'a', 'l', 'h', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02647 */ HB_P_LINEOFFSET, 79,	/* 84 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02684 */ HB_P_LINEOFFSET, 80,	/* 85 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02721 */ HB_P_LINEOFFSET, 81,	/* 86 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', ' ', 'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02758 */ HB_P_LINEOFFSET, 82,	/* 87 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'n', 'd', 'i', 'c', 'a', 'd', 'o', ' ', 'P', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02795 */ HB_P_LINEOFFSET, 83,	/* 88 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02832 */ HB_P_LINEOFFSET, 84,	/* 89 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'r', 'a', 'b', 'a', 'l', 'h', 'o', ' ', 'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02869 */ HB_P_LINEOFFSET, 85,	/* 90 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'f', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02906 */ HB_P_LINEOFFSET, 86,	/* 91 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'F', 'o', 'n', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02943 */ HB_P_LINEOFFSET, 87,	/* 92 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02980 */ HB_P_LINEOFFSET, 88,	/* 93 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'l', 'a', 'n', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03017 */ HB_P_LINEOFFSET, 89,	/* 94 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'N', 'o', '.', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03054 */ HB_P_LINEOFFSET, 90,	/* 95 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03091 */ HB_P_LINEOFFSET, 91,	/* 96 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03128 */ HB_P_LINEOFFSET, 92,	/* 97 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'P', 'r', 'o', 'x', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03165 */ HB_P_LINEOFFSET, 93,	/* 98 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', ' ', 'f', 'u', 'm', 'a', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', '/', 'E', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03202 */ HB_P_LINEOFFSET, 94,	/* 99 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03239 */ HB_P_LINEOFFSET, 95,	/* 100 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03276 */ HB_P_LINEOFFSET, 96,	/* 101 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03313 */ HB_P_LINEOFFSET, 97,	/* 102 */
	HB_P_PUSHSYMNEAR, 62,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 03438) */
/* 03330 */ HB_P_LINEOFFSET, 98,	/* 103 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* NHIST1 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03342 */ HB_P_LINEOFFSET, 99,	/* 104 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* NHIST2 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03354 */ HB_P_LINEOFFSET, 100,	/* 105 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* NHIST3 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03366 */ HB_P_LINEOFFSET, 101,	/* 106 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* NHIST4 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03378 */ HB_P_LINEOFFSET, 102,	/* 107 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 37, 0,	/* ND_ESTA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03390 */ HB_P_LINEOFFSET, 103,	/* 108 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* NRECEITA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03402 */ HB_P_LINEOFFSET, 104,	/* 109 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* NEXAME */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03414 */ HB_P_LINEOFFSET, 105,	/* 110 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* NRECIBO */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03426 */ HB_P_LINEOFFSET, 106,	/* 111 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NCIRURGIA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 03438 */ HB_P_LINEOFFSET, 108,	/* 113 */
	HB_P_PUSHSYMNEAR, 63,	/* VCCONV */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 03461 */ HB_P_LINEOFFSET, 109,	/* 114 */
	HB_P_PUSHSYMNEAR, 64,	/* CONV */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR_CON */
	HB_P_POPVARIABLE, 2, 0,	/* MVALOR */
/* 03470 */ HB_P_LINEOFFSET, 110,	/* 115 */
	HB_P_PUSHSYMNEAR, 53,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'C', 'a', 'm', 'p', 'o', 's', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'd', 'o', 's', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', ' ', ' ', '-', ' ', ' ', '<', 'F', '3', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03544 */ HB_P_LINEOFFSET, 111,	/* 116 */
	HB_P_PUSHSYMNEAR, 46,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* MCOD_CLI */
/* 03561 */ HB_P_LINEOFFSET, 112,	/* 117 */
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MNOME */
/* 03574 */ HB_P_LINEOFFSET, 113,	/* 118 */
	HB_P_PUSHSYMNEAR, 58,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03583 */ HB_P_LINEOFFSET, 114,	/* 119 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03606 */ HB_P_LINEOFFSET, 115,	/* 120 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03628 */ HB_P_LINEOFFSET, 116,	/* 121 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03652 */ HB_P_LINEOFFSET, 117,	/* 122 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03676 */ HB_P_LINEOFFSET, 118,	/* 123 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03700 */ HB_P_LINEOFFSET, 119,	/* 124 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03724 */ HB_P_LINEOFFSET, 120,	/* 125 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03748 */ HB_P_LINEOFFSET, 121,	/* 126 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03772 */ HB_P_LINEOFFSET, 122,	/* 127 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03796 */ HB_P_LINEOFFSET, 123,	/* 128 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03832 */ HB_P_LINEOFFSET, 124,	/* 129 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03856 */ HB_P_LINEOFFSET, 125,	/* 130 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03880 */ HB_P_LINEOFFSET, 126,	/* 131 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03904 */ HB_P_LINEOFFSET, 127,	/* 132 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03928 */ HB_P_LINEOFFSET, 128,	/* 133 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03952 */ HB_P_LINEOFFSET, 129,	/* 134 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03976 */ HB_P_LINEOFFSET, 130,	/* 135 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'@', '!', '@', 'R', ' ', '9', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04022 */ HB_P_LINEOFFSET, 131,	/* 136 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04046 */ HB_P_LINEOFFSET, 132,	/* 137 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04070 */ HB_P_LINEOFFSET, 133,	/* 138 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04094 */ HB_P_LINEOFFSET, 134,	/* 139 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04118 */ HB_P_LINEOFFSET, 135,	/* 140 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04142 */ HB_P_LINEOFFSET, 136,	/* 141 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04166 */ HB_P_LINEOFFSET, 137,	/* 142 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04190 */ HB_P_LINEOFFSET, 138,	/* 143 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04214 */ HB_P_LINEOFFSET, 139,	/* 144 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04238 */ HB_P_LINEOFFSET, 140,	/* 145 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04262 */ HB_P_LINEOFFSET, 141,	/* 146 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04286 */ HB_P_LINEOFFSET, 142,	/* 147 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04310 */ HB_P_LINEOFFSET, 143,	/* 148 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04334 */ HB_P_LINEOFFSET, 144,	/* 149 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04358 */ HB_P_LINEOFFSET, 145,	/* 150 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04382 */ HB_P_LINEOFFSET, 146,	/* 151 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04406 */ HB_P_LINEOFFSET, 147,	/* 152 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04430 */ HB_P_LINEOFFSET, 148,	/* 153 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04454 */ HB_P_LINEOFFSET, 149,	/* 154 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 04483 */ HB_P_LINEOFFSET, 150,	/* 155 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04507 */ HB_P_LINEOFFSET, 151,	/* 156 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 04536 */ HB_P_LINEOFFSET, 152,	/* 157 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 04565 */ HB_P_LINEOFFSET, 153,	/* 158 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04589 */ HB_P_LINEOFFSET, 154,	/* 159 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04613 */ HB_P_LINEOFFSET, 155,	/* 160 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04637 */ HB_P_LINEOFFSET, 156,	/* 161 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 60,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04661 */ HB_P_LINEOFFSET, 157,	/* 162 */
	HB_P_PUSHSYMNEAR, 58,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04669 */ HB_P_LINEOFFSET, 158,	/* 163 */
	HB_P_PUSHSYMNEAR, 68,	/* EXIBI_FOTO */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_PUSHMEMVAR, 69, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 7,
/* 04700 */ HB_P_LINEOFFSET, 159,	/* 164 */
	HB_P_PUSHSYMNEAR, 70,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTP_CONSULTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04719) */
/* 04712 */ HB_P_LINEOFFSET, 160,	/* 165 */
	HB_P_PUSHSYMNEAR, 71,	/* USO_CONS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04719 */ HB_P_LINEOFFSET, 162,	/* 167 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 107,	/* 107 (abs: 04836) */
/* 04731 */ HB_P_LINEOFFSET, 163,	/* 168 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* NHIST1 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04743 */ HB_P_LINEOFFSET, 164,	/* 169 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* NHIST2 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04755 */ HB_P_LINEOFFSET, 165,	/* 170 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* NHIST3 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04767 */ HB_P_LINEOFFSET, 166,	/* 171 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* NHIST4 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04779 */ HB_P_LINEOFFSET, 167,	/* 172 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 37, 0,	/* ND_ESTA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04791 */ HB_P_LINEOFFSET, 168,	/* 173 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* NRECEITA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04803 */ HB_P_LINEOFFSET, 169,	/* 174 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* NEXAME */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 04815 */ HB_P_LINEOFFSET, 170,	/* 175 */
	HB_P_PUSHSYMNEAR, 51,	/* WVW_SETMOUSEMOVE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 04824 */ HB_P_LINEOFFSET, 171,	/* 176 */
	HB_P_PUSHSYMNEAR, 74,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04831 */ HB_P_LINEOFFSET, 172,	/* 177 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04836 */ HB_P_LINEOFFSET, 174,	/* 179 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTP_CONSULTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 04894) */
/* 04848 */ HB_P_LINEOFFSET, 175,	/* 180 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'U', 'S', 'O', ' ', 'M', 'E', 'D', 'I', 'C', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 0, 
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 8,
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 04936) */
/* 04894 */ HB_P_LINEOFFSET, 177,	/* 182 */
	HB_P_PUSHSYMNEAR, 61,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 0, 
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 8,
/* 04936 */ HB_P_LINEOFFSET, 179,	/* 184 */
	HB_P_PUSHSYMNEAR, 75,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 04944 */ HB_P_LINEOFFSET, 180,	/* 185 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'h', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 04980) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'H', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 04999) */
/* 04982 */ HB_P_LINEOFFSET, 181,	/* 186 */
	HB_P_PUSHSYMNEAR, 28,	/* HISTORICO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 145, 1,	/* 401 (abs: 05397) */
/* 04999 */ HB_P_LINEOFFSET, 182,	/* 187 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05035) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 05054) */
/* 05037 */ HB_P_LINEOFFSET, 183,	/* 188 */
	HB_P_PUSHSYMNEAR, 30,	/* HISTORICO2 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 90, 1,	/* 346 (abs: 05397) */
/* 05054 */ HB_P_LINEOFFSET, 184,	/* 189 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'd', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05090) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 05109) */
/* 05092 */ HB_P_LINEOFFSET, 185,	/* 190 */
	HB_P_PUSHSYMNEAR, 32,	/* HISTORICO3 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 35, 1,	/* 291 (abs: 05397) */
/* 05109 */ HB_P_LINEOFFSET, 186,	/* 191 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'c', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05145) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 05164) */
/* 05147 */ HB_P_LINEOFFSET, 187,	/* 192 */
	HB_P_PUSHSYMNEAR, 34,	/* HISTORICO4 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 236, 0,	/* 236 (abs: 05397) */
/* 05164 */ HB_P_LINEOFFSET, 188,	/* 193 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	't', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05200) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05212) */
/* 05202 */ HB_P_LINEOFFSET, 189,	/* 194 */
	HB_P_PUSHSYMNEAR, 36,	/* SMED710 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 188, 0,	/* 188 (abs: 05397) */
/* 05212 */ HB_P_LINEOFFSET, 190,	/* 195 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'r', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05248) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 05281) */
/* 05250 */ HB_P_LINEOFFSET, 191,	/* 196 */
	HB_P_PUSHSYMNEAR, 38,	/* RECIBO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_PUSHVARIABLE, 2, 0,	/* MVALOR */
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 118,	/* 118 (abs: 05397) */
/* 05281 */ HB_P_LINEOFFSET, 192,	/* 197 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05317) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 05340) */
/* 05319 */ HB_P_LINEOFFSET, 193,	/* 198 */
	HB_P_PUSHSYMNEAR, 41,	/* SMED540 */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_ONE,
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 05397) */
/* 05340 */ HB_P_LINEOFFSET, 194,	/* 199 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'x', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05376) */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 76,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 05397) */
/* 05378 */ HB_P_LINEOFFSET, 195,	/* 200 */
	HB_P_PUSHSYMNEAR, 43,	/* SMEDEXA */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 39, 0,	/* MDATA_SIS */
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 05397 */ HB_P_LINEOFFSET, 197,	/* 202 */
	HB_P_PUSHSYMNEAR, 72,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 50, 239,	/* -4302 (abs: 01105) */
/* 05410 */ HB_P_LINEOFFSET, 201,	/* 206 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTP_CONSULTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 160, 1,	/* 416 (abs: 05836) */
/* 05423 */ HB_P_LINEOFFSET, 202,	/* 207 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'a', 'u', 'l', 't', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MDATA_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05514 */ HB_P_LINEOFFSET, 203,	/* 208 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05538 */ HB_P_LINEOFFSET, 223,	/* 228 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 110,	/* 110 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'm', 'e', 'd', 'm', 'o', 'v', ' ', '(', 'd', 'a', 't', 'a', 'c', 'o', 'n', 's', ',', 'c', 'a', 'd', 'n', 'o', 'm', 'e', ',', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ',', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ',', 'c', 'o', 'd', 'c', 'o', 'n', 'v', ',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ',', 'v', 'a', 'l', 'o', 'r', ',', 'r', 'e', 'c', 'i', 'b', 'o', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MDATA_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* CONV */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* MODALIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* CONV */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* VALOR_CON */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MRECIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05809 */ HB_P_LINEOFFSET, 224,	/* 229 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 53, 1,	/* 309 (abs: 06142) */
/* 05836 */ HB_P_LINEOFFSET, 225,	/* 230 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTP_CONSULTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 40, 1,	/* 296 (abs: 06142) */
/* 05849 */ HB_P_LINEOFFSET, 245,	/* 250 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 110,	/* 110 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'm', 'e', 'd', 'm', 'o', 'v', ' ', '(', 'd', 'a', 't', 'a', 'c', 'o', 'n', 's', ',', 'c', 'a', 'd', 'n', 'o', 'm', 'e', ',', 'r', 'e', 'g', 'i', 's', 't', 'r', 'o', ',', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ',', 'c', 'o', 'd', 'c', 'o', 'n', 'v', ',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ',', 'v', 'a', 'l', 'o', 'r', ',', 'r', 'e', 'c', 'i', 'b', 'o', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MDATA_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* MCONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* CONV */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* MODALIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06118 */ HB_P_LINEOFFSET, 246,	/* 251 */
	HB_P_MESSAGE, 18, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 19,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06142 */ HB_P_LINEOFFSET, 248,	/* 253 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* NHIST1 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06154 */ HB_P_LINEOFFSET, 249,	/* 254 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* NHIST2 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06166 */ HB_P_LINEOFFSET, 250,	/* 255 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* NHIST3 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06178 */ HB_P_LINEOFFSET, 251,	/* 256 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* NHIST4 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06190 */ HB_P_LINEOFFSET, 252,	/* 257 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 37, 0,	/* ND_ESTA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06202 */ HB_P_LINEOFFSET, 253,	/* 258 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* NRECEITA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06214 */ HB_P_LINEOFFSET, 254,	/* 259 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* NEXAME */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06226 */ HB_P_LINEOFFSET, 255,	/* 260 */
	HB_P_PUSHSYMNEAR, 73,	/* WVW_PBDESTROY */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* NCIRURGIA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 06238 */ HB_P_LINE, 5, 1,	/* 261 */
	HB_P_PUSHSYMNEAR, 51,	/* WVW_SETMOUSEMOVE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 06248 */ HB_P_LINE, 6, 1,	/* 262 */
	HB_P_PUSHSYMNEAR, 74,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06256 */ HB_P_LINE, 7, 1,	/* 263 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06262 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TECLA_ESC )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 78,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	27, 0, 
	HB_P_DOSHORT, 1,
/* 00012 */ HB_P_LINEOFFSET, 1,	/* 268 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00017 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

