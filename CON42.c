/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON42.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON42.PRG /q /oC:\HTI\SISMED\CON42.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:29 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON42.PRG"

HB_FUNC( CON42 );
HB_FUNC( CHEQ_RES );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON420 );
HB_FUNC_EXTERN( CON421 );
HB_FUNC_EXTERN( CON423 );
HB_FUNC_EXTERN( CON424 );
HB_FUNC_EXTERN( CON428 );
HB_FUNC_EXTERN( CON419 );
HB_FUNC_EXTERN( CON429 );
HB_FUNC_EXTERN( CON425 );
HB_FUNC_EXTERN( CON252 );
HB_FUNC_EXTERN( CON422 );
HB_FUNC_EXTERN( CON4201 );
HB_FUNC_EXTERN( CON4202 );
HB_FUNC_EXTERN( CON426 );
HB_FUNC_EXTERN( CON4231 );
HB_FUNC_EXTERN( CON427 );
HB_FUNC_EXTERN( CON4203 );
HB_FUNC_EXTERN( CON4204 );
HB_FUNC_EXTERN( CON4205 );
HB_FUNC_EXTERN( CON4191 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON42 )
{ "CON42", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON42 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON420", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON420 )}, NULL },
{ "CON421", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON421 )}, NULL },
{ "CON423", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON423 )}, NULL },
{ "CON424", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON424 )}, NULL },
{ "CON428", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON428 )}, NULL },
{ "CON419", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON419 )}, NULL },
{ "CON429", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON429 )}, NULL },
{ "CON425", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON425 )}, NULL },
{ "CON252", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON252 )}, NULL },
{ "CON422", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON422 )}, NULL },
{ "CON4201", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4201 )}, NULL },
{ "CON4202", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4202 )}, NULL },
{ "CON426", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON426 )}, NULL },
{ "CON4231", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4231 )}, NULL },
{ "CHEQ_RES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHEQ_RES )}, NULL },
{ "CON427", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON427 )}, NULL },
{ "CON4203", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4203 )}, NULL },
{ "CON4204", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4204 )}, NULL },
{ "CON4205", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4205 )}, NULL },
{ "CON4191", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4191 )}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON42 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON42
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON42 = hb_vm_SymbolInit_CON42;
   #pragma data_seg()
#endif

HB_FUNC( CON42 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '4', '2', 0, 
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 6 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 00070) */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'D', 'o', 'c', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 00115) */
/* 00070 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00115 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00124 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00132 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '0', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00185 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00242) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '1', '-', '>', ' ', 'A', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00285) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00289 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '2', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00343 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '3', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00397 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00455) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '4', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00498) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00502 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00560) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '5', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'X', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00603) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00607 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '6', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00661 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00719) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '7', '-', '>', ' ', 'C', 'a', 'r', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00762) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00766 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00824) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '8', '-', '>', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00867) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00871 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 00929) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '9', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'c', '/', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 00972) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00976 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01034) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'A', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 's', 'e', 'm', ' ', 'D', 'E', 'B', 'I', 'T', 'O', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01077) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01081 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01139) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'B', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'x', ' ', 'D', 'o', 'c', '.', ' ', 'Q', 'u', 'i', 't', 'a', 'd', 'o', 's', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01182) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01186 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01244) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'C', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01287) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01291 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01349) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'D', '-', '>', ' ', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'e', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01392) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01396 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'E', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'p', '/', 'C', 'h', 'e', 'q', 's', '.', 'e', ' ', 'D', 'u', 'p', '.', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01450 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01508) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'F', '-', '>', ' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01551) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01555 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01613) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'G', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'c', 'o', 'r', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01656) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01660 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01718) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'H', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', '(', 'D', 'A', 'T', 'A', ' ', 'O', 'P', 'E', 'R', 'A', 'C', 'A', 'O', ')', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01761) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01765 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01823) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'I', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'M', 'e', 'd', 'i', 'a', ' ', 'd', 'e', ' ', 'D', 'i', 'a', 's', ' ', 'e', 'm', ' ', 'A', 't', 'r', 'a', 's', 'o', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01866) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01870 */ HB_P_LINEOFFSET, 28,	/* 33 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 01928) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'J', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01971) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01975 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 02033) */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'L', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 02076) */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', ' ', ' ', ' ', ' ', ' ', 'D', 'e', 's', 'a', 'b', 'i', 'l', 'i', 't', 'a', 'd', 'o', ' ', 'p', '/', 'M', 'O', 'D', 'U', 'L', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 02080 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OP42 */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02107) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02112) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', '4', '2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OP42 */
/* 02124 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02144) */
/* 02132 */ HB_P_LINEOFFSET, 33,	/* 38 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02139 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02144 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02184) */
/* 02152 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02170) */
/* 02160 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHSYMNEAR, 8,	/* CON420 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 66, 2,	/* 578 (abs: 02745) */
/* 02170 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHSYMNEAR, 8,	/* CON420 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 238, 247,	/* -2066 (abs: 00115) */
/* 02184 */ HB_P_LINEOFFSET, 42,	/* 47 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02210) */
/* 02193 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 34, 2,	/* 546 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 9,	/* CON421 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 26, 2,	/* 538 (abs: 02745) */
/* 02210 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02251) */
/* 02219 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02237) */
/* 02227 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHSYMNEAR, 10,	/* CON423 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 255, 1,	/* 511 (abs: 02745) */
/* 02237 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHSYMNEAR, 10,	/* CON423 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 171, 247,	/* -2133 (abs: 00115) */
/* 02251 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02292) */
/* 02260 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02278) */
/* 02268 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHSYMNEAR, 11,	/* CON424 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 214, 1,	/* 470 (abs: 02745) */
/* 02278 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 11,	/* CON424 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 130, 247,	/* -2174 (abs: 00115) */
/* 02292 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02318) */
/* 02301 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 182, 1,	/* 438 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 12,	/* CON428 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 174, 1,	/* 430 (abs: 02745) */
/* 02318 */ HB_P_LINEOFFSET, 61,	/* 66 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02344) */
/* 02327 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 156, 1,	/* 412 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 13,	/* CON419 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 148, 1,	/* 404 (abs: 02745) */
/* 02344 */ HB_P_LINEOFFSET, 63,	/* 68 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 02385) */
/* 02353 */ HB_P_LINEOFFSET, 64,	/* 69 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02371) */
/* 02361 */ HB_P_LINEOFFSET, 65,	/* 70 */
	HB_P_PUSHSYMNEAR, 14,	/* CON429 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 121, 1,	/* 377 (abs: 02745) */
/* 02371 */ HB_P_LINEOFFSET, 67,	/* 72 */
	HB_P_PUSHSYMNEAR, 14,	/* CON429 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 37, 247,	/* -2267 (abs: 00115) */
/* 02385 */ HB_P_LINEOFFSET, 69,	/* 74 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02411) */
/* 02394 */ HB_P_LINEOFFSET, 70,	/* 75 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 89, 1,	/* 345 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 15,	/* CON425 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 81, 1,	/* 337 (abs: 02745) */
/* 02411 */ HB_P_LINEOFFSET, 71,	/* 76 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 02442) */
/* 02420 */ HB_P_LINEOFFSET, 72,	/* 77 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 63, 1,	/* 319 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 16,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 50, 1,	/* 306 (abs: 02745) */
/* 02442 */ HB_P_LINEOFFSET, 73,	/* 78 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 02473) */
/* 02451 */ HB_P_LINEOFFSET, 74,	/* 79 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 32, 1,	/* 288 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 17,	/* CON422 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 19, 1,	/* 275 (abs: 02745) */
/* 02473 */ HB_P_LINEOFFSET, 75,	/* 80 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02499) */
/* 02482 */ HB_P_LINEOFFSET, 76,	/* 81 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 18,	/* CON4201 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 249, 0,	/* 249 (abs: 02745) */
/* 02499 */ HB_P_LINEOFFSET, 77,	/* 82 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02525) */
/* 02508 */ HB_P_LINEOFFSET, 78,	/* 83 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 19,	/* CON4202 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 0,	/* 223 (abs: 02745) */
/* 02525 */ HB_P_LINEOFFSET, 79,	/* 84 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02551) */
/* 02534 */ HB_P_LINEOFFSET, 80,	/* 85 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 205, 0,	/* 205 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 20,	/* CON426 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 197, 0,	/* 197 (abs: 02745) */
/* 02551 */ HB_P_LINEOFFSET, 81,	/* 86 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02577) */
/* 02560 */ HB_P_LINEOFFSET, 82,	/* 87 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 179, 0,	/* 179 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 21,	/* CON4231 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 171, 0,	/* 171 (abs: 02745) */
/* 02577 */ HB_P_LINEOFFSET, 83,	/* 88 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02596) */
/* 02586 */ HB_P_LINEOFFSET, 84,	/* 89 */
	HB_P_PUSHSYMNEAR, 22,	/* CHEQ_RES */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 82, 246,	/* -2478 (abs: 00115) */
/* 02596 */ HB_P_LINEOFFSET, 85,	/* 90 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 02621) */
/* 02605 */ HB_P_LINEOFFSET, 86,	/* 91 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 0,	/* 134 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 23,	/* CON427 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 126,	/* 126 (abs: 02745) */
/* 02621 */ HB_P_LINEOFFSET, 87,	/* 92 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02650) */
/* 02630 */ HB_P_LINEOFFSET, 88,	/* 93 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 16,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 02745) */
/* 02650 */ HB_P_LINEOFFSET, 89,	/* 94 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 02674) */
/* 02659 */ HB_P_LINEOFFSET, 90,	/* 95 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 24,	/* CON4203 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 02745) */
/* 02674 */ HB_P_LINEOFFSET, 91,	/* 96 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 02698) */
/* 02683 */ HB_P_LINEOFFSET, 92,	/* 97 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 25,	/* CON4204 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 02745) */
/* 02698 */ HB_P_LINEOFFSET, 93,	/* 98 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 02722) */
/* 02707 */ HB_P_LINEOFFSET, 94,	/* 99 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 26,	/* CON4205 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 02745) */
/* 02722 */ HB_P_LINEOFFSET, 95,	/* 100 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 202, 245,	/* -2614 (abs: 00115) */
/* 02732 */ HB_P_LINEOFFSET, 96,	/* 101 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02745) */
	HB_P_PUSHSYMNEAR, 27,	/* CON4191 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 186, 245,	/* -2630 (abs: 00115) */
	HB_P_ENDPROC
/* 02749 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CHEQ_RES )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 30, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 113, 0,	/* 113 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'C', 'H', 'E', 'Q', '_', 'R', 'E', 'S', 0, 
/* 00019 */ HB_P_LINEOFFSET, 4,	/* 117 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* M_VEND */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_DUP 0*/
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* MVLR_DUP 0*/
	HB_P_LOCALNEARSETSTR, 23, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MPONTO 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 00060 */ HB_P_LINEOFFSET, 6,	/* 119 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 29,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 30,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 31,	/* MCPF */
	HB_P_PUSHSYMNEAR, 32,	/* MCGC */
	HB_P_DOSHORT, 5,
/* 00077 */ HB_P_LINEOFFSET, 7,	/* 120 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 37,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 37,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 35,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 36,	/* MARQ */
	HB_P_PUSHSYMNEAR, 38,	/* MCODEMP */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 36, 0,	/* MARQ */
	HB_P_POPVARIABLE, 35, 0,	/* MIMP_TIPO */
/* 00116 */ HB_P_LINEOFFSET, 9,	/* 122 */
	HB_P_PUSHSYMNEAR, 39,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'H', 'E', 'Q', 'U', 'E', ' ', 'S', 'E', 'M', ' ', 'F', 'U', 'N', 'D', 'O', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'P', 'O', 'R', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', ')', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '4', '5', '6', 0, 
	HB_P_PUSHVARIABLE, 40, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00192) */
/* 00187 */ HB_P_LINEOFFSET, 10,	/* 123 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00192 */ HB_P_LINEOFFSET, 12,	/* 125 */
	HB_P_PUSHSYMNEAR, 41,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* MTRACO */
/* 00208 */ HB_P_LINEOFFSET, 14,	/* 127 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00218 */ HB_P_LINEOFFSET, 15,	/* 128 */
	HB_P_LOCALNEARSETINT, 6, 5, 0,	/* LBA 5*/
/* 00224 */ HB_P_LINEOFFSET, 16,	/* 129 */
	HB_P_LOCALNEARSETINT, 7, 75, 0,	/* CBA 75*/
/* 00230 */ HB_P_LINEOFFSET, 17,	/* 130 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', '/', 'V', 'e', 'n', 'd', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00275 */ HB_P_LINEOFFSET, 20,	/* 133 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 34, 0,	/* MTIPO_IMP */
/* 00284 */ HB_P_LINEOFFSET, 22,	/* 135 */
	HB_P_PUSHVARIABLE, 42, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 225, 255,	/* -31*/
	HB_P_POPLOCALNEAR, 15,	/* MDATA1 */
/* 00294 */ HB_P_LINEOFFSET, 23,	/* 136 */
	HB_P_PUSHVARIABLE, 42, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 16,	/* MDATA2 */
/* 00301 */ HB_P_LINEOFFSET, 24,	/* 137 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_DUP 0*/
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_POPLOCALNEAR, 14,	/* MCOD_VEND */
/* 00320 */ HB_P_LINEOFFSET, 25,	/* 138 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* MIMP_TIPO */
/* 00326 */ HB_P_LINEOFFSET, 26,	/* 139 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_MATRIZ */
/* 00333 */ HB_P_LINEOFFSET, 27,	/* 140 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* M_VEND */
/* 00340 */ HB_P_LINEOFFSET, 28,	/* 141 */
	HB_P_PUSHSYMNEAR, 43,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00387 */ HB_P_LINEOFFSET, 29,	/* 142 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00430 */ HB_P_LINEOFFSET, 30,	/* 143 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00473 */ HB_P_LINEOFFSET, 31,	/* 144 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00516 */ HB_P_LINEOFFSET, 32,	/* 145 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00559 */ HB_P_LINEOFFSET, 34,	/* 147 */
	HB_P_PUSHSYMNEAR, 46,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 49,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00604) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00609) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 50,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00651) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00652) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 48, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00670 */ HB_P_LINEOFFSET, 35,	/* 148 */
	HB_P_PUSHSYMNEAR, 46,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 49,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00715) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00720) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	16, 0,	/* MDATA2 */
	15, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00762) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00763) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 48, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00781 */ HB_P_LINEOFFSET, 36,	/* 149 */
	HB_P_PUSHSYMNEAR, 46,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 49,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00826) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00831) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_DOC */
	HB_P_PUSHSYMNEAR, 52,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 48, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00887 */ HB_P_LINEOFFSET, 37,	/* 150 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 48, 0,	/* GETLIST */
/* 00909 */ HB_P_LINEOFFSET, 38,	/* 151 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00933) */
/* 00921 */ HB_P_LINEOFFSET, 39,	/* 152 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00928 */ HB_P_LINEOFFSET, 40,	/* 153 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00933 */ HB_P_LINEOFFSET, 42,	/* 155 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_SENHA */
/* 00940 */ HB_P_LINEOFFSET, 43,	/* 156 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 's', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 28, 0,	/* CONS_SENHA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00998 */ HB_P_LINEOFFSET, 44,	/* 157 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01022 */ HB_P_LINEOFFSET, 45,	/* 158 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 01075) */
/* 01035 */ HB_P_LINEOFFSET, 46,	/* 159 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01075 */ HB_P_LINEOFFSET, 48,	/* 161 */
	HB_P_PUSHSYMNEAR, 43,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', ' ', 'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01111 */ HB_P_LINEOFFSET, 49,	/* 162 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 01117 */ HB_P_LINEOFFSET, 50,	/* 163 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 114, 1,	/* 370 (abs: 01503) */
/* 01136 */ HB_P_LINEOFFSET, 51,	/* 164 */
	HB_P_PUSHSYMNEAR, 59,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_DOSHORT, 1,
/* 01145 */ HB_P_LINEOFFSET, 52,	/* 165 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 01152 */ HB_P_LINEOFFSET, 53,	/* 166 */
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ',', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'h', 'e', 'q', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'h', 'e', 'q', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'o', 'k', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'o', 'k', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01241 */ HB_P_LINEOFFSET, 54,	/* 167 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01309 */ HB_P_LINEOFFSET, 55,	/* 168 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01350 */ HB_P_LINEOFFSET, 56,	/* 169 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_CHEQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01371 */ HB_P_LINEOFFSET, 57,	/* 170 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01395 */ HB_P_LINEOFFSET, 58,	/* 171 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01409) */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 01496) */
/* 01409 */ HB_P_LINEOFFSET, 62,	/* 175 */
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_DOSHORT, 2,
/* 01451 */ HB_P_LINEOFFSET, 63,	/* 176 */
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01467 */ HB_P_LINEOFFSET, 64,	/* 177 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_GER */
/* 01480 */ HB_P_LINEOFFSET, 65,	/* 178 */
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MVLR_GER */
/* 01494 */ HB_P_LINEOFFSET, 66,	/* 179 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 135, 254,	/* -377 (abs: 01123) */
/* 01503 */ HB_P_LINEOFFSET, 67,	/* 180 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 01509 */ HB_P_LINEOFFSET, 68,	/* 181 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 205, 1,	/* 461 (abs: 01986) */
/* 01528 */ HB_P_LINEOFFSET, 69,	/* 182 */
	HB_P_PUSHSYMNEAR, 59,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_DOSHORT, 1,
/* 01537 */ HB_P_LINEOFFSET, 70,	/* 183 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 01544 */ HB_P_LINEOFFSET, 71,	/* 184 */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ',', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01629 */ HB_P_LINEOFFSET, 72,	/* 185 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01687 */ HB_P_LINEOFFSET, 73,	/* 186 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01728 */ HB_P_LINEOFFSET, 74,	/* 187 */
	HB_P_PUSHSYMNEAR, 50,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01771) */
/* 01739 */ HB_P_LINEOFFSET, 75,	/* 188 */
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 60, 0,	/* CCOMM */
/* 01771 */ HB_P_LINEOFFSET, 77,	/* 190 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 60, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_CHEQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01792 */ HB_P_LINEOFFSET, 78,	/* 191 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01816 */ HB_P_LINEOFFSET, 79,	/* 192 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01831) */
	HB_P_JUMP, 151, 0,	/* 151 (abs: 01979) */
/* 01831 */ HB_P_LINEOFFSET, 82,	/* 195 */
	HB_P_PUSHSYMNEAR, 62,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 29,	/* MPONTO */
/* 01849 */ HB_P_LINEOFFSET, 83,	/* 196 */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 01892) */
/* 01857 */ HB_P_LINEOFFSET, 84,	/* 197 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 01874 */ HB_P_LINEOFFSET, 85,	/* 198 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 60,	/* 60 (abs: 01950) */
/* 01892 */ HB_P_LINEOFFSET, 87,	/* 200 */
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01908 */ HB_P_LINEOFFSET, 88,	/* 201 */
	HB_P_PUSHSYMNEAR, 47,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_DOSHORT, 2,
/* 01950 */ HB_P_LINEOFFSET, 90,	/* 203 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_DUP */
/* 01963 */ HB_P_LINEOFFSET, 91,	/* 204 */
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MVLR_DUP */
/* 01977 */ HB_P_LINEOFFSET, 92,	/* 205 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 44, 254,	/* -468 (abs: 01515) */
/* 01986 */ HB_P_LINEOFFSET, 93,	/* 206 */
	HB_P_PUSHSYMNEAR, 63,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 02016 */ HB_P_LINEOFFSET, 94,	/* 207 */
	HB_P_PUSHSYMNEAR, 43,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02060 */ HB_P_LINEOFFSET, 95,	/* 208 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'S', '_', 'C', 'H', 'E', 'Q', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 36, 0,	/* MARQ */
/* 02080 */ HB_P_LINEOFFSET, 96,	/* 209 */
	HB_P_PUSHSYMNEAR, 64,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'S', '_', 'C', 'H', 'E', 'Q', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02111) */
	HB_P_JUMP, 215, 248,	/* -1833 (abs: 00275) */
/* 02111 */ HB_P_LINEOFFSET, 99,	/* 212 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* MPAG 1*/
/* 02117 */ HB_P_LINEOFFSET, 100,	/* 213 */
	HB_P_LOCALNEARSETSTR, 26, 61, 0,	/* MTIT 61*/
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 's', '/', 'f', 'u', 'n', 'd', 'o', 's', ' ', 'e', ' ', 'D', 'o', 'c', '.', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ')', 0, 
/* 02184 */ HB_P_LINEOFFSET, 101,	/* 214 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 65,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTIPO */
/* 02223 */ HB_P_LINEOFFSET, 102,	/* 215 */
	HB_P_PUSHSYMNEAR, 66,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 26,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 27,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 02238 */ HB_P_LINEOFFSET, 103,	/* 216 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02252 */ HB_P_LINEOFFSET, 104,	/* 217 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'S', 'E', 'M', ' ', 'F', 'U', 'N', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 02294 */ HB_P_LINEOFFSET, 105,	/* 218 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'O', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 02335 */ HB_P_LINEOFFSET, 106,	/* 219 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02367 */ HB_P_LINEOFFSET, 107,	/* 220 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'Q', 't', 'd', '.', 'C', 'h', 'e', 'q', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02398 */ HB_P_LINEOFFSET, 108,	/* 221 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', '.', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', 0, 
	HB_P_DOSHORT, 1,
/* 02432 */ HB_P_LINEOFFSET, 109,	/* 222 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'M', 'e', 'd', '.', 'C', 'h', 'e', 'q', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02464 */ HB_P_LINEOFFSET, 110,	/* 223 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'(', '%', ')', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02494 */ HB_P_LINEOFFSET, 111,	/* 224 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', 's', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02525 */ HB_P_LINEOFFSET, 112,	/* 225 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', '.', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 0, 
	HB_P_DOSHORT, 1,
/* 02559 */ HB_P_LINEOFFSET, 113,	/* 226 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'M', 'e', 'd', '.', 'D', 'o', 'c', 's', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02591 */ HB_P_LINEOFFSET, 114,	/* 227 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'(', '%', ')', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02621 */ HB_P_LINEOFFSET, 115,	/* 228 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02644 */ HB_P_LINEOFFSET, 116,	/* 229 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 02650 */ HB_P_LINEOFFSET, 117,	/* 230 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 205, 1,	/* 461 (abs: 03127) */
/* 02669 */ HB_P_LINEOFFSET, 118,	/* 231 */
	HB_P_PUSHSYMNEAR, 59,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 02688 */ HB_P_LINEOFFSET, 119,	/* 232 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02730 */ HB_P_LINEOFFSET, 120,	/* 233 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02774 */ HB_P_LINEOFFSET, 121,	/* 234 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02821 */ HB_P_LINEOFFSET, 122,	/* 235 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02875 */ HB_P_LINEOFFSET, 123,	/* 236 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02924 */ HB_P_LINEOFFSET, 124,	/* 237 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02968 */ HB_P_LINEOFFSET, 125,	/* 238 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03015 */ HB_P_LINEOFFSET, 126,	/* 239 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03069 */ HB_P_LINEOFFSET, 127,	/* 240 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03118 */ HB_P_LINEOFFSET, 128,	/* 241 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 44, 254,	/* -468 (abs: 02656) */
/* 03127 */ HB_P_LINEOFFSET, 129,	/* 242 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03150 */ HB_P_LINEOFFSET, 130,	/* 243 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', ' ', 'O', ' ', 'T', ' ', 'A', ' ', 'L', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03196 */ HB_P_LINEOFFSET, 131,	/* 244 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03234 */ HB_P_LINEOFFSET, 132,	/* 245 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03275 */ HB_P_LINEOFFSET, 133,	/* 246 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03317 */ HB_P_LINEOFFSET, 134,	/* 247 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03355 */ HB_P_LINEOFFSET, 135,	/* 248 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03396 */ HB_P_LINEOFFSET, 136,	/* 249 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03438 */ HB_P_LINEOFFSET, 137,	/* 250 */
	HB_P_PUSHSYMNEAR, 44,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 45,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 03464 */ HB_P_LINEOFFSET, 138,	/* 251 */
	HB_P_PUSHSYMNEAR, 72,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03471 */ HB_P_LINEOFFSET, 139,	/* 252 */
	HB_P_PUSHSYMNEAR, 73,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03480 */ HB_P_LINEOFFSET, 140,	/* 253 */
	HB_P_PUSHSYMNEAR, 74,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 74,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 74,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 03521 */ HB_P_LINEOFFSET, 141,	/* 254 */
	HB_P_PUSHSYMNEAR, 75,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 03531 */ HB_P_LINEOFFSET, 153,	/* 266 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03538 */ HB_P_LINEOFFSET, 154,	/* 267 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03543 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

