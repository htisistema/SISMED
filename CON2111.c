/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON2111.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON2111.PRG /q /oC:\HTI\SISMED\CON2111.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:51 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON2111.PRG"

HB_FUNC( CON2111 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( DOW );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DBUNLOCKALL );
HB_FUNC_EXTERN( DBCOMMITALL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON2111 )
{ "CON2111", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON2111 )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MBAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINSC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MBANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESC_CART", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPRAZO_CART", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_DUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODCONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPARCELA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_DEMO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVALOR_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOTAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "DOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( DOW )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "DUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR_DUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DBUNLOCKALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCKALL )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON2111 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON2111
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON2111 = hb_vm_SymbolInit_CON2111;
   #pragma data_seg()
#endif

HB_FUNC( CON2111 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 23, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'C', 'O', 'N', '2', '1', '1', '1', 0, 
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MQTD_PARC 0*/
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MINTERVALO 0*/
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* POINT 0*/
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 27,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 2,	/* MVENC */
	HB_P_PUSHSYMNEAR, 3,	/* MEMISSAO */
	HB_P_PUSHSYMNEAR, 4,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 5,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 6,	/* MNOME_CLI */
	HB_P_PUSHSYMNEAR, 7,	/* MEND */
	HB_P_PUSHSYMNEAR, 8,	/* MBAIRRO */
	HB_P_PUSHSYMNEAR, 9,	/* MCIDADE */
	HB_P_PUSHSYMNEAR, 10,	/* MUF */
	HB_P_PUSHSYMNEAR, 11,	/* MCGC */
	HB_P_PUSHSYMNEAR, 12,	/* MCPF */
	HB_P_PUSHSYMNEAR, 13,	/* MINSC */
	HB_P_PUSHSYMNEAR, 14,	/* MBANCO */
	HB_P_PUSHSYMNEAR, 15,	/* MNUM_BANCO */
	HB_P_PUSHSYMNEAR, 16,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 17,	/* MDESC_CART */
	HB_P_PUSHSYMNEAR, 18,	/* MPRAZO_CART */
	HB_P_PUSHSYMNEAR, 19,	/* MCARTAO */
	HB_P_PUSHSYMNEAR, 20,	/* M_DUP */
	HB_P_PUSHSYMNEAR, 21,	/* MCODCONTA */
	HB_P_PUSHSYMNEAR, 22,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 23,	/* MPARCELA */
	HB_P_PUSHSYMNEAR, 24,	/* M_DEMO */
	HB_P_PUSHSYMNEAR, 25,	/* MVALOR_PARC */
	HB_P_PUSHSYMNEAR, 26,	/* MTOTAL */
	HB_P_DOSHORT, 26,
	HB_P_POPVARIABLE, 26, 0,	/* MTOTAL */
	HB_P_POPVARIABLE, 25, 0,	/* MVALOR_PARC */
	HB_P_POPVARIABLE, 24, 0,	/* M_DEMO */
	HB_P_POPVARIABLE, 20, 0,	/* M_DUP */
/* 00109 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHSYMNEAR, 28,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'V', 'A', 'R', 'I', 'O', 'S', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 29, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00189) */
/* 00184 */ HB_P_LINEOFFSET, 7,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00189 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_PUSHSYMNEAR, 30,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00218) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00218 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_PUSHSYMNEAR, 30,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00247) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00247 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_PUSHSYMNEAR, 30,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00276) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00276 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* LCI 0*/
/* 00282 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CCI 0*/
/* 00288 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_LOCALNEARSETINT, 17, 15, 0,	/* LBA 15*/
/* 00294 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_LOCALNEARSETINT, 18, 79, 0,	/* CBA 79*/
/* 00300 */ HB_P_LINEOFFSET, 18,	/* 29 */
	HB_P_LOCALNEARSETINT, 19, 4, 0,	/* LI 4*/
/* 00306 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_LOCALNEARSETINT, 20, 50, 0,	/* CI 50*/
/* 00312 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_LOCALNEARSETINT, 21, 29, 0,	/* LB 29*/
/* 00318 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_LOCALNEARSETINT, 22, 89, 0,	/* CB 89*/
/* 00324 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 31,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* MTRACO */
/* 00339 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'V', 'A', 'R', 'I', 'O', 'S', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00396 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* M_DUP */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00407 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* M_DEMO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00418 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 34,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00427 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 35,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00440 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00489 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', '.', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00538 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00587 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00636 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00685 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00734 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00783 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'P', 'a', 'r', 'c', 'e', 'l', 'a', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00828 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'P', 'a', 'g', '.', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'r', 'i', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00877 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00926 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00956 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'Q', 't', 'd', '.', ' ', 'd', 'e', ' ', 'P', 'a', 'r', 'c', 'e', 'l', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00998 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01034 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MTIPO_IMP */
/* 01043 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 38,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 39,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01063 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 40,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01070 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MTP_PG 2*/
	' ', 0, 
/* 01078 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 41,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDUPLICATA */
/* 01089 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHMEMVAR, 42, 0,	/* MDATA_SIS */
	HB_P_POPVARIABLE, 3, 0,	/* MEMISSAO */
/* 01097 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 43,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MVENC */
/* 01118 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MVALOR_PARC */
	HB_P_POPLOCALNEAR, 7,	/* MVALOR */
/* 01131 */ HB_P_LINEOFFSET, 53,	/* 64 */
	HB_P_PUSHSYMNEAR, 41,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MTIPO */
/* 01142 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_POPVARIABLE, 21, 0,	/* MCODCONTA */
/* 01154 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 41,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MOBS */
/* 01165 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 14, 0,	/* MBANCO */
/* 01174 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'C', 'o', 'm', 'p', 'l', 'e', 't', 'e', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', '.', ' ', ' ', '-', ' ', '<', 'F', '1', '>', ' ', 'A', 'j', 'u', 'd', 'a', ' ', 'd', 'o', ' ', 'C', 'a', 'm', 'p', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01243 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 43, 0,	/* 43 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	15, 0,	/* LCI */
	16, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01313) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 01331) */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01349 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 52,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 47, 0,	/* GETLIST */
/* 01371 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 53,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01395) */
/* 01383 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01390 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01395 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01425) */
	HB_P_PUSHSYMNEAR, 55,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 3,
/* 01425 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 56,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* TIPO */
	HB_P_POPVARIABLE, 21, 0,	/* MCODCONTA */
/* 01434 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 56,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* RAZAO */
	HB_P_POPVARIABLE, 22, 0,	/* MFORNECE */
/* 01443 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01488) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01493) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 36, 0,	/* 36 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MTIPO */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'A', ',', 'D', 'U', ',', 'F', 'R', ',', 'C', 'H', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01542) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 59,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 108, 0,	/* 108 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	15, 0,	/* LCI */
	16, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 60,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '<', 'D', 'U', '>', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '<', 'C', 'H', '>', 'c', 'h', 'e', 'q', 'u', 'e', 's', ' ', '<', 'F', 'R', '>', 'f', 'r', 'e', 't', 'e', ' ', '<', 'P', 'A', '>', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01667 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 39, 0,	/* 39 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	15, 0,	/* LCI */
	16, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 61,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODCONTA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01751) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 59,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 159, 0,	/* 159 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	15, 0,	/* LCI */
	16, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 60,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_PUSHSTRSHORT, 130,	/* 130 */
	'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 'o', ' ', 'G', 'r', 'u', 'p', 'o', ' ', 'd', 'a', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 's', 'o', ' ', 'o', ' ', 'p', 'r', 'i', 'm', 'e', 'i', 'r', 'o', ' ', 'd', 'i', 'g', 'i', 't', 'o', ' ', 'd', 'a', ' ', 'c', 'o', 'n', 't', 'a', ',', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 't', 'o', 'd', 'o', ' ', 'o', 's', ' ', 'e', 's', 'p', 'a', 'c', 'o', ' ', 'p', '/', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 't', 'a', ' ', '<', 'F', '1', '>', 'A', 'j', 'u', 'd', 'a', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01927 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 52,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 47, 0,	/* GETLIST */
/* 01949 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 62,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01958 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODCONTA */
	HB_P_DOSHORT, 1,
/* 01983 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 62,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01991 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSYMNEAR, 61,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODCONTA */
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 3,
/* 02011 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDUPLICATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02056) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02061) */
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
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02098 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02155 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02200) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02205) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02248 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 62, 0,	/* 62*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'v', 'a', 'l', 'o', 'r', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02335 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 14, 0,	/* MBANCO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02397) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 59,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 95, 0,	/* 95 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	15, 0,	/* LCI */
	16, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 60,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'C', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'C', 'A', 'R', 'T', 'E', 'I', 'R', 'A', ' ', '[', 'B', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'B', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02509 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MTP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02554) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02559) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 60,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'D', 'e', 'i', 'x', 'a', 'r', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'a', 'j', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02670 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MOBS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02715) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02720) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'o', 'b', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02747 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MQTD_PARC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02792) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02797) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'q', 't', 'd', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MQTD_PARC */
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02836) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02837) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02855 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 16,	/* CCI */
	HB_P_ADDINT, 37, 0,	/* 37*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 48,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MINTERVALO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02900) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02905) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MINTERVALO */
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02945) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02946) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02964 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHSYMNEAR, 52,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 47, 0,	/* GETLIST */
/* 02986 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSYMNEAR, 53,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03001) */
	HB_P_JUMP, 214, 245,	/* -2602 (abs: 00396) */
/* 03001 */ HB_P_LINEOFFSET, 87,	/* 98 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', '?', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 03037 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03051) */
	HB_P_JUMP, 164, 245,	/* -2652 (abs: 00396) */
/* 03051 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 03072) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 49,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MVALOR_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03077) */
	HB_P_JUMP, 138, 245,	/* -2678 (abs: 00396) */
/* 03077 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MVALOR_PARC */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03096) */
/* 03086 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MVALOR_PARC */
	HB_P_POPVARIABLE, 23, 0,	/* MPARCELA */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 03106) */
/* 03096 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_PUSHLOCALNEAR, 7,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_PARC */
	HB_P_DIVIDE,
	HB_P_POPVARIABLE, 23, 0,	/* MPARCELA */
/* 03106 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 03112 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_PUSHMEMVAR, 42, 0,	/* MDATA_SIS */
	HB_P_POPVARIABLE, 2, 0,	/* MVENC */
/* 03120 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_PARC */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 205, 0,	/* 205 (abs: 03336) */
/* 03134 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 64,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDUPLICATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHSYMNEAR, 66,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDUPLICATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MDOC */
/* 03196 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MVENC */
	HB_P_PUSHLOCALNEAR, 10,	/* MINTERVALO */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MVENC */
/* 03207 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHSYMNEAR, 67,	/* DOW */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 03232) */
/* 03221 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MVENC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 2, 0,	/* MVENC */
/* 03232 */ HB_P_LINEOFFSET, 107,	/* 118 */
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* M_DUP */
	HB_P_PUSHVARIABLE, 23, 0,	/* MPARCELA */
	HB_P_PUSHVARIABLE, 2, 0,	/* MVENC */
	HB_P_PUSHLOCALNEAR, 11,	/* MDOC */
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 03253 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 11,	/* MDOC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 69,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* MPARCELA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03315 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOTAL */
	HB_P_PUSHVARIABLE, 23, 0,	/* MPARCELA */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOTAL */
/* 03327 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMP, 49, 255,	/* -207 (abs: 03126) */
/* 03336 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* POINT 0*/
/* 03342 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* LI */
	HB_P_PUSHLOCALNEAR, 20,	/* CI */
	HB_P_PUSHLOCALNEAR, 21,	/* LB */
	HB_P_PUSHLOCALNEAR, 22,	/* CB */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'V', 'A', 'R', 'I', 'O', 'S', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 03389 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 03442 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_PUSHSYMNEAR, 70,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 03457 */ HB_P_LINEOFFSET, 116,	/* 127 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'P', 'a', 'r', 'c', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03485 */ HB_P_LINEOFFSET, 117,	/* 128 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03510 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_PUSHSYMNEAR, 70,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 03525 */ HB_P_LINEOFFSET, 119,	/* 130 */
	HB_P_PUSHSYMNEAR, 62,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03534 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_PARC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03563 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03600 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_PUSHSYMNEAR, 62,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03608 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 71,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHVARIABLE, 24, 0,	/* M_DEMO */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 23,	/* POINT */
/* 03631 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_PUSHSYMNEAR, 53,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03653) */
/* 03643 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 237, 1,	/* 493 (abs: 04143) */
/* 03653 */ HB_P_LINEOFFSET, 128,	/* 139 */
	HB_P_PUSHSYMNEAR, 53,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 254,	/* -274 (abs: 03389) */
/* 03666 */ HB_P_LINEOFFSET, 129,	/* 140 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 03706 */ HB_P_LINEOFFSET, 130,	/* 141 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03734 */ HB_P_LINEOFFSET, 131,	/* 142 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03763 */ HB_P_LINEOFFSET, 132,	/* 143 */
	HB_P_PUSHSYMNEAR, 36,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03792 */ HB_P_LINEOFFSET, 133,	/* 144 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 72,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 20, 0,	/* M_DUP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03855 */ HB_P_LINEOFFSET, 134,	/* 145 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 72,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 20, 0,	/* M_DUP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03915 */ HB_P_LINEOFFSET, 135,	/* 146 */
	HB_P_PUSHSYMNEAR, 45,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 72,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 20, 0,	/* M_DUP */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 'd', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ONE,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 51, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03986 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_PUSHSYMNEAR, 52,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 47, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 47, 0,	/* GETLIST */
/* 04008 */ HB_P_LINEOFFSET, 137,	/* 148 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 69,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 24, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ARRAYPOP,
/* 04086 */ HB_P_LINEOFFSET, 138,	/* 149 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* MTOTAL */
	HB_P_POPLOCALNEAR, 12,	/* I */
/* 04095 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_PARC */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 04133) */
/* 04108 */ HB_P_LINEOFFSET, 140,	/* 151 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 23,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOTAL */
/* 04125 */ HB_P_LINEOFFSET, 141,	/* 152 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 226,	/* -30 (abs: 04101) */
/* 04133 */ HB_P_LINEOFFSET, 142,	/* 153 */
	HB_P_PUSHSYMNEAR, 54,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 17, 253,	/* -751 (abs: 03389) */
/* 04143 */ HB_P_LINEOFFSET, 145,	/* 156 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', '?', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 04179 */ HB_P_LINEOFFSET, 146,	/* 157 */
	HB_P_PUSHLOCALNEAR, 5,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04193) */
	HB_P_JUMP, 46, 241,	/* -3794 (abs: 00396) */
/* 04193 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHSYMNEAR, 38,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 39,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04213 */ HB_P_LINEOFFSET, 151,	/* 162 */
	HB_P_PUSHSYMNEAR, 40,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04220 */ HB_P_LINEOFFSET, 153,	/* 164 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 04226 */ HB_P_LINEOFFSET, 154,	/* 165 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_PARC */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 04473) */
/* 04240 */ HB_P_LINEOFFSET, 155,	/* 166 */
	HB_P_PUSHSYMNEAR, 73,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 167, 0,	/* 167 (abs: 04414) */
/* 04250 */ HB_P_LINEOFFSET, 156,	/* 167 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 57,	/* TIPO */
/* 04258 */ HB_P_LINEOFFSET, 157,	/* 168 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* DUPLICATA */
/* 04273 */ HB_P_LINEOFFSET, 158,	/* 169 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* VALOR_DUP */
/* 04287 */ HB_P_LINEOFFSET, 159,	/* 170 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MCODCONTA */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* TIP_FOR */
/* 04296 */ HB_P_LINEOFFSET, 160,	/* 171 */
	HB_P_PUSHSYMNEAR, 65,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 78,	/* FORNEC */
/* 04312 */ HB_P_LINEOFFSET, 161,	/* 172 */
	HB_P_PUSHVARIABLE, 22, 0,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* CLIENTE */
/* 04321 */ HB_P_LINEOFFSET, 162,	/* 173 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MEMISSAO */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 80,	/* EMISSAO */
/* 04330 */ HB_P_LINEOFFSET, 163,	/* 174 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 81,	/* VENC */
/* 04345 */ HB_P_LINEOFFSET, 164,	/* 175 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 82,	/* VALOR */
/* 04359 */ HB_P_LINEOFFSET, 165,	/* 176 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 83,	/* PAGO */
/* 04369 */ HB_P_LINEOFFSET, 166,	/* 177 */
	HB_P_PUSHMEMVAR, 84, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 85,	/* VENDEDOR */
/* 04378 */ HB_P_LINEOFFSET, 167,	/* 178 */
	HB_P_PUSHVARIABLE, 14, 0,	/* MBANCO */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 86,	/* BANCO */
/* 04387 */ HB_P_LINEOFFSET, 168,	/* 179 */
	HB_P_PUSHLOCALNEAR, 8,	/* MOBS */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 87,	/* OBS */
/* 04395 */ HB_P_LINEOFFSET, 169,	/* 180 */
	HB_P_PUSHMEMVAR, 84, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 88,	/* OPERADOR */
/* 04404 */ HB_P_LINEOFFSET, 170,	/* 181 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTP_PG */
	HB_P_PUSHSYMNEAR, 74,	/* DUPP */
	HB_P_POPALIASEDFIELDNEAR, 89,	/* TP_PG */
	HB_P_JUMPNEAR, 52,	/* 52 (abs: 04464) */
/* 04414 */ HB_P_LINEOFFSET, 172,	/* 183 */
	HB_P_PUSHSYMNEAR, 90,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'A', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 04466) */
/* 04464 */ HB_P_LINEOFFSET, 175,	/* 186 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMP, 18, 255,	/* -238 (abs: 04232) */
/* 04473 */ HB_P_LINEOFFSET, 176,	/* 187 */
	HB_P_PUSHSYMNEAR, 91,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04480 */ HB_P_LINEOFFSET, 177,	/* 188 */
	HB_P_PUSHSYMNEAR, 92,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 5, 240,	/* -4091 (abs: 00396) */
	HB_P_ENDPROC
/* 04491 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

