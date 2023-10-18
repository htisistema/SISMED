/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON427.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON427.PRG /q /oC:\HTI\SISMED\CON427.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:43 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON427.PRG"

HB_FUNC( CON427 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( QQOUT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON427 )
{ "CON427", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON427 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOBRA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAXA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "BAIX_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AREA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QQOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QQOUT )}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON427 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON427
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON427 = hb_vm_SymbolInit_CON427;
   #pragma data_seg()
#endif

HB_FUNC( CON427 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 47, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 15, 0,	/* 15 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '7', 0, 
	HB_P_LOCALNEARSETSTR, 33, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 37,	/* MAREA */
	HB_P_LOCALNEARSETSTR, 39, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 40, 2, 0,	/* MLINHAS 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 41, 2, 0,	/* MOBS_CLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 43,	/* CLI_REC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 44,	/* CLI_PG */
	HB_P_LOCALNEARSETINT, 45, 0, 0,	/* MPT 0*/
	HB_P_LOCALNEARSETINT, 46, 0, 0,	/* MTOT_PG 0*/
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* PAGAS 0*/
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 19 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 15,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOBRA_FIN */
	HB_P_PUSHSYMNEAR, 3,	/* MTAXA_FIN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* BANK */
	HB_P_PUSHSYMNEAR, 7,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 8,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 9,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 10,	/* MCGC */
	HB_P_PUSHSYMNEAR, 11,	/* MCPF */
	HB_P_PUSHSYMNEAR, 12,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 14,	/* MARQ */
	HB_P_DOSHORT, 13,
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
	HB_P_POPVARIABLE, 13, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
/* 00129 */ HB_P_LINEOFFSET, 6,	/* 21 */
	HB_P_PUSHSYMNEAR, 16,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', '/', 'P', 'A', 'G', 'A', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00240) */
/* 00235 */ HB_P_LINEOFFSET, 7,	/* 22 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00240 */ HB_P_LINEOFFSET, 11,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00267) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00267 */ HB_P_LINEOFFSET, 12,	/* 27 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00296) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00296 */ HB_P_LINEOFFSET, 13,	/* 28 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00325) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00325 */ HB_P_LINEOFFSET, 14,	/* 29 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00354) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00354 */ HB_P_LINEOFFSET, 15,	/* 30 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00383) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00383 */ HB_P_LINEOFFSET, 16,	/* 31 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00410) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00410 */ HB_P_LINEOFFSET, 17,	/* 32 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00439) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00439 */ HB_P_LINEOFFSET, 20,	/* 35 */
	HB_P_PUSHSYMNEAR, 19,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 20,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00458 */ HB_P_LINEOFFSET, 22,	/* 37 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00498 */ HB_P_LINEOFFSET, 23,	/* 38 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00549 */ HB_P_LINEOFFSET, 24,	/* 39 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00600 */ HB_P_LINEOFFSET, 25,	/* 40 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00652 */ HB_P_LINEOFFSET, 26,	/* 41 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00704 */ HB_P_LINEOFFSET, 27,	/* 42 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00756 */ HB_P_LINEOFFSET, 28,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00808 */ HB_P_LINEOFFSET, 29,	/* 44 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00860 */ HB_P_LINEOFFSET, 30,	/* 45 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', 'o', 'u', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00912 */ HB_P_LINEOFFSET, 31,	/* 46 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00964 */ HB_P_LINEOFFSET, 32,	/* 47 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01016 */ HB_P_LINEOFFSET, 33,	/* 48 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01068 */ HB_P_LINEOFFSET, 34,	/* 49 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01120 */ HB_P_LINEOFFSET, 35,	/* 50 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', '[', 'S', '/', 'C', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01172 */ HB_P_LINEOFFSET, 36,	/* 51 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01224 */ HB_P_LINEOFFSET, 37,	/* 52 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MTIPO_IMP */
/* 01233 */ HB_P_LINEOFFSET, 39,	/* 54 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* CLI_REC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01243 */ HB_P_LINEOFFSET, 40,	/* 55 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01253 */ HB_P_LINEOFFSET, 41,	/* 56 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CLI_PG */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01263 */ HB_P_LINEOFFSET, 42,	/* 57 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 01271 */ HB_P_LINEOFFSET, 43,	/* 58 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* BANK */
/* 01282 */ HB_P_LINEOFFSET, 44,	/* 59 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 01288 */ HB_P_LINEOFFSET, 45,	/* 60 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MCOD_VEND 0*/
/* 01294 */ HB_P_LINEOFFSET, 46,	/* 61 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 01306 */ HB_P_LINEOFFSET, 47,	/* 62 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 01326 */ HB_P_LINEOFFSET, 48,	/* 63 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 01333 */ HB_P_LINEOFFSET, 49,	/* 64 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MOD 0*/
/* 01339 */ HB_P_LINEOFFSET, 50,	/* 65 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MCARTAO 0*/
/* 01345 */ HB_P_LINEOFFSET, 51,	/* 66 */
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MOP_DIA 2*/
	'S', 0, 
/* 01353 */ HB_P_LINEOFFSET, 52,	/* 67 */
	HB_P_LOCALNEARSETSTR, 33, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
/* 01362 */ HB_P_LINEOFFSET, 53,	/* 68 */
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MEND 2*/
	' ', 0, 
/* 01370 */ HB_P_LINEOFFSET, 54,	/* 69 */
	HB_P_LOCALNEARSETSTR, 35, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 01378 */ HB_P_LINEOFFSET, 55,	/* 70 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 36,	/* MCIDADE */
/* 01389 */ HB_P_LINEOFFSET, 56,	/* 71 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 37,	/* MAREA */
/* 01400 */ HB_P_LINEOFFSET, 57,	/* 72 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
/* 01406 */ HB_P_LINEOFFSET, 58,	/* 73 */
	HB_P_LOCALNEARSETSTR, 38, 2, 0,	/* MBAIX_PARC 2*/
	'N', 0, 
/* 01414 */ HB_P_LINEOFFSET, 59,	/* 74 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MTIP */
/* 01425 */ HB_P_LINEOFFSET, 60,	/* 75 */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 01433 */ HB_P_LINEOFFSET, 61,	/* 76 */
	HB_P_LOCALNEARSETSTR, 40, 2, 0,	/* MLINHAS 2*/
	'N', 0, 
/* 01441 */ HB_P_LINEOFFSET, 62,	/* 77 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01479) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01484) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 31,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01535 */ HB_P_LINEOFFSET, 63,	/* 78 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01618 */ HB_P_LINEOFFSET, 64,	/* 79 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01657) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01662) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 34,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 171,	/* 171 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 01858) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01875 */ HB_P_LINEOFFSET, 65,	/* 80 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01914) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01919) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 36,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01983 */ HB_P_LINEOFFSET, 66,	/* 81 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02048 */ HB_P_LINEOFFSET, 67,	/* 82 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02087) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02092) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02120 */ HB_P_LINEOFFSET, 68,	/* 83 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02159) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02164) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02192 */ HB_P_LINEOFFSET, 69,	/* 84 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02231) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02236) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02290 */ HB_P_LINEOFFSET, 70,	/* 85 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MOP_DIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02329) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02334) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'd', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MOP_DIA */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02377) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'q', 'u', 'e', ' ', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', 's', 'e', 'j', 'a', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'D', 'O', '=', '[', 'S', ']', ' ', 'o', 'u', ' ', '[', 'N', ']', 'p', '/', 'n', 'a', 'o', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02469 */ HB_P_LINEOFFSET, 71,	/* 86 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02508) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02513) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02547 */ HB_P_LINEOFFSET, 72,	/* 87 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02586) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02591) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02625 */ HB_P_LINEOFFSET, 73,	/* 88 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02664) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02669) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02701 */ HB_P_LINEOFFSET, 74,	/* 89 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02740) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02745) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MBAIX_PARC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02793) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 34,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 83,	/* 83 */
	HB_P_PUSHSYMNEAR, 35,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', 'o', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'C', ']', 'o', 'm', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'N', ']', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02893 */ HB_P_LINEOFFSET, 75,	/* 90 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 37,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02975) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02992 */ HB_P_LINEOFFSET, 80,	/* 95 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 29, 0,	/* GETLIST */
/* 03014 */ HB_P_LINEOFFSET, 81,	/* 96 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03029) */
	HB_P_JUMP, 91, 14,	/* 3675 (abs: 06701) */
/* 03029 */ HB_P_LINEOFFSET, 84,	/* 99 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 03090) */
/* 03041 */ HB_P_LINEOFFSET, 85,	/* 100 */
	HB_P_LOCALNEARSETSTR, 20, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_JUMP, 39, 3,	/* 807 (abs: 03894) */
/* 03090 */ HB_P_LINEOFFSET, 86,	/* 101 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 03148) */
/* 03102 */ HB_P_LINEOFFSET, 87,	/* 102 */
	HB_P_LOCALNEARSETSTR, 20, 37, 0,	/* MTIT 37*/
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_JUMP, 237, 2,	/* 749 (abs: 03894) */
/* 03148 */ HB_P_LINEOFFSET, 88,	/* 103 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 03487) */
/* 03161 */ HB_P_LINEOFFSET, 89,	/* 104 */
	HB_P_LOCALNEARSETSTR, 20, 37, 0,	/* MTIT 37*/
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03204 */ HB_P_LINEOFFSET, 90,	/* 105 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MCARTAO 0*/
/* 03210 */ HB_P_LINEOFFSET, 91,	/* 106 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03237 */ HB_P_LINEOFFSET, 92,	/* 107 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03281 */ HB_P_LINEOFFSET, 93,	/* 108 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03319) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03324) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTAO */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03378 */ HB_P_LINEOFFSET, 94,	/* 109 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 29, 0,	/* GETLIST */
/* 03400 */ HB_P_LINEOFFSET, 95,	/* 110 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03422) */
/* 03412 */ HB_P_LINEOFFSET, 96,	/* 111 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 118, 247,	/* -2186 (abs: 01233) */
/* 03422 */ HB_P_LINEOFFSET, 99,	/* 114 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 24,	/* OPCAO */
/* 03456 */ HB_P_LINEOFFSET, 100,	/* 115 */
	HB_P_PUSHLOCALNEAR, 24,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03477) */
/* 03467 */ HB_P_LINEOFFSET, 101,	/* 116 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 63, 247,	/* -2241 (abs: 01233) */
/* 03477 */ HB_P_LINEOFFSET, 104,	/* 119 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 154, 1,	/* 410 (abs: 03894) */
/* 03487 */ HB_P_LINEOFFSET, 105,	/* 120 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 95, 1,	/* 351 (abs: 03848) */
/* 03500 */ HB_P_LINEOFFSET, 106,	/* 121 */
	HB_P_LOCALNEARSETSTR, 20, 43, 0,	/* MTIT 43*/
	'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03549 */ HB_P_LINEOFFSET, 107,	/* 122 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MCARTAO 0*/
/* 03555 */ HB_P_LINEOFFSET, 108,	/* 123 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 03583 */ HB_P_LINEOFFSET, 109,	/* 124 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03627 */ HB_P_LINEOFFSET, 110,	/* 125 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 30,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03665) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03670) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTAO */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03708) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 03718) */
	HB_P_PUSHSYMNEAR, 44,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03736 */ HB_P_LINEOFFSET, 111,	/* 126 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 29, 0,	/* GETLIST */
/* 03758 */ HB_P_LINEOFFSET, 112,	/* 127 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03780) */
/* 03770 */ HB_P_LINEOFFSET, 113,	/* 128 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 246,	/* -2544 (abs: 01233) */
/* 03780 */ HB_P_LINEOFFSET, 116,	/* 131 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 24,	/* OPCAO */
/* 03818 */ HB_P_LINEOFFSET, 117,	/* 132 */
	HB_P_PUSHLOCALNEAR, 24,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03839) */
/* 03829 */ HB_P_LINEOFFSET, 118,	/* 133 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 213, 245,	/* -2603 (abs: 01233) */
/* 03839 */ HB_P_LINEOFFSET, 121,	/* 136 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 03894) */
/* 03848 */ HB_P_LINEOFFSET, 123,	/* 138 */
	HB_P_LOCALNEARSETSTR, 20, 40, 0,	/* MTIT 40*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03894 */ HB_P_LINEOFFSET, 125,	/* 140 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* TD_MES 0*/
/* 03900 */ HB_P_LINEOFFSET, 126,	/* 141 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* TP_MES 0*/
/* 03906 */ HB_P_LINEOFFSET, 127,	/* 142 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03949) */
/* 03929 */ HB_P_LINEOFFSET, 128,	/* 143 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '6', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 03949 */ HB_P_LINEOFFSET, 130,	/* 145 */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03992) */
/* 03972 */ HB_P_LINEOFFSET, 131,	/* 146 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 03992 */ HB_P_LINEOFFSET, 133,	/* 148 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 04049) */
/* 04003 */ HB_P_LINEOFFSET, 134,	/* 149 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04075) */
/* 04049 */ HB_P_LINEOFFSET, 136,	/* 151 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTIPO */
/* 04075 */ HB_P_LINEOFFSET, 138,	/* 153 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIT */
/* 04095 */ HB_P_LINEOFFSET, 140,	/* 155 */
	HB_P_PUSHSYMNEAR, 19,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 20,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 1,
/* 04116 */ HB_P_LINEOFFSET, 141,	/* 156 */
	HB_P_PUSHSYMNEAR, 46,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04123 */ HB_P_LINEOFFSET, 143,	/* 158 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 04168) */
/* 04135 */ HB_P_LINEOFFSET, 144,	/* 159 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 48,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 04188) */
/* 04168 */ HB_P_LINEOFFSET, 146,	/* 161 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 48,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 04188 */ HB_P_LINEOFFSET, 148,	/* 163 */
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 04248) */
/* 04197 */ HB_P_LINEOFFSET, 149,	/* 164 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 60, 244,	/* -3012 (abs: 01233) */
/* 04248 */ HB_P_LINEOFFSET, 153,	/* 168 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'f', 'f', 0, 
	HB_P_DOSHORT, 2,
/* 04263 */ HB_P_LINEOFFSET, 154,	/* 169 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04295) */
	HB_P_JUMP, 13, 244,	/* -3059 (abs: 01233) */
/* 04295 */ HB_P_LINEOFFSET, 157,	/* 172 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 04309 */ HB_P_LINEOFFSET, 158,	/* 173 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* PAG 0*/
/* 04315 */ HB_P_LINEOFFSET, 159,	/* 174 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* VENCER 0*/
/* 04321 */ HB_P_LINEOFFSET, 160,	/* 175 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* VENCIDAS 0*/
/* 04327 */ HB_P_LINEOFFSET, 161,	/* 176 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* T_VENCER 0*/
/* 04333 */ HB_P_LINEOFFSET, 162,	/* 177 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* T_VENCIDAS 0*/
/* 04339 */ HB_P_LINEOFFSET, 163,	/* 178 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 55,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 04368) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 04379) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 04381 */ HB_P_LINEOFFSET, 164,	/* 179 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* TOT 0*/
/* 04387 */ HB_P_LINEOFFSET, 165,	/* 180 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* TOT_G 0*/
/* 04393 */ HB_P_LINEOFFSET, 166,	/* 181 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* TOT_GIN 0*/
/* 04399 */ HB_P_LINEOFFSET, 167,	/* 182 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
/* 04407 */ HB_P_LINEOFFSET, 168,	/* 183 */
	HB_P_LOCALNEARSETINT, 46, 0, 0,	/* MTOT_PG 0*/
/* 04413 */ HB_P_LINEOFFSET, 169,	/* 184 */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* PAGAS 0*/
/* 04419 */ HB_P_LINEOFFSET, 170,	/* 185 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* VENC */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04438) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 122, 5,	/* 1402 (abs: 05840) */
/* 04441 */ HB_P_LINEOFFSET, 171,	/* 186 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 04453 */ HB_P_LINEOFFSET, 172,	/* 187 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04471) */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 61, 1,	/* 317 (abs: 04788) */
/* 04474 */ HB_P_LINEOFFSET, 173,	/* 188 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 04480 */ HB_P_LINEOFFSET, 174,	/* 189 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04495) */
/* 04488 */ HB_P_LINEOFFSET, 175,	/* 190 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04495 */ HB_P_LINEOFFSET, 177,	/* 192 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04510 */ HB_P_LINEOFFSET, 178,	/* 193 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04524 */ HB_P_LINEOFFSET, 179,	/* 194 */
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 04639) */
/* 04532 */ HB_P_LINEOFFSET, 180,	/* 195 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04587 */ HB_P_LINEOFFSET, 181,	/* 196 */
	HB_P_PUSHSYMNEAR, 22,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 23,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04639 */ HB_P_LINEOFFSET, 183,	/* 198 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 114,	/* 114 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'g', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 04762 */ HB_P_LINEOFFSET, 184,	/* 199 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04781 */ HB_P_LINEOFFSET, 185,	/* 200 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04788 */ HB_P_LINEOFFSET, 197,	/* 212 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 38,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04811) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 04835) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 38,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04834) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 04866) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 04865) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* COD_FORN */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04888) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04887) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04910) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04909) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 33,	/* MTIP_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* TIP_PG */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04932) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04931) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 39,	/* MTIPO_CLI */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* TIP_CLI */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 04961) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 04960) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCARTAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* NUMERO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 04990) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 04989) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* VENDEDOR */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 05021) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05020) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 05045) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05044) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* BANCO */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05058) */
/* 05047 */ HB_P_LINEOFFSET, 198,	/* 213 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 132, 253,	/* -636 (abs: 04419) */
/* 05058 */ HB_P_LINEOFFSET, 201,	/* 216 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 05126) */
/* 05069 */ HB_P_LINEOFFSET, 202,	/* 217 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05115) */
/* 05093 */ HB_P_LINEOFFSET, 203,	/* 218 */
	HB_P_PUSHSYMNEAR, 74,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 36,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05126) */
/* 05104 */ HB_P_LINEOFFSET, 204,	/* 219 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 75, 253,	/* -693 (abs: 04419) */
/* 05115 */ HB_P_LINEOFFSET, 208,	/* 223 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 64, 253,	/* -704 (abs: 04419) */
/* 05126 */ HB_P_LINEOFFSET, 212,	/* 227 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 05194) */
/* 05137 */ HB_P_LINEOFFSET, 213,	/* 228 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05183) */
/* 05161 */ HB_P_LINEOFFSET, 214,	/* 229 */
	HB_P_PUSHSYMNEAR, 74,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* AREA */
	HB_P_PUSHLOCALNEAR, 37,	/* MAREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05194) */
/* 05172 */ HB_P_LINEOFFSET, 215,	/* 230 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 7, 253,	/* -761 (abs: 04419) */
/* 05183 */ HB_P_LINEOFFSET, 219,	/* 234 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 252,	/* -772 (abs: 04419) */
/* 05194 */ HB_P_LINEOFFSET, 225,	/* 240 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT 1*/
/* 05200 */ HB_P_LINEOFFSET, 226,	/* 241 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* TOT_G 1*/
/* 05206 */ HB_P_LINEOFFSET, 227,	/* 242 */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
/* 05217 */ HB_P_LINEOFFSET, 228,	/* 243 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* VENC */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 30,	/* MDIAS_ATRAS */
/* 05229 */ HB_P_LINEOFFSET, 229,	/* 244 */
	HB_P_LOCALNEARSETINT, 45, 0, 0,	/* MPT 0*/
/* 05235 */ HB_P_LINEOFFSET, 230,	/* 245 */
	HB_P_PUSHSYMNEAR, 78,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* CLI_REC */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 45,	/* MPT */
/* 05250 */ HB_P_LINEOFFSET, 231,	/* 246 */
	HB_P_PUSHLOCALNEAR, 45,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 05271) */
/* 05258 */ HB_P_LINEOFFSET, 232,	/* 247 */
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* CLI_REC */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_DOSHORT, 2,
/* 05271 */ HB_P_LINEOFFSET, 235,	/* 250 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* PAGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 05298) */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 05308) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* DATPAG */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 05371) */
/* 05310 */ HB_P_LINEOFFSET, 236,	/* 251 */
	HB_P_PUSHLOCALNEAR, 46,	/* MTOT_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 46,	/* MTOT_PG */
/* 05321 */ HB_P_LINEOFFSET, 237,	/* 252 */
	HB_P_LOCALNEARADDINT, 47, 1, 0,	/* PAGAS 1*/
/* 05327 */ HB_P_LINEOFFSET, 238,	/* 253 */
	HB_P_LOCALNEARSETINT, 45, 0, 0,	/* MPT 0*/
/* 05333 */ HB_P_LINEOFFSET, 239,	/* 254 */
	HB_P_PUSHSYMNEAR, 78,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CLI_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 45,	/* MPT */
/* 05348 */ HB_P_LINEOFFSET, 240,	/* 255 */
	HB_P_PUSHLOCALNEAR, 45,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 05457) */
/* 05356 */ HB_P_LINEOFFSET, 241,	/* 256 */
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CLI_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 05457) */
/* 05371 */ HB_P_LINEOFFSET, 243,	/* 258 */
	HB_P_PUSHLOCALNEAR, 30,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 05440) */
/* 05379 */ HB_P_LINEOFFSET, 244,	/* 259 */
	HB_P_PUSHLOCALNEAR, 13,	/* T_VENCIDAS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* T_VENCIDAS */
/* 05390 */ HB_P_LINEOFFSET, 245,	/* 260 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* VENCIDAS 1*/
/* 05396 */ HB_P_LINEOFFSET, 246,	/* 261 */
	HB_P_LOCALNEARSETINT, 45, 0, 0,	/* MPT 0*/
/* 05402 */ HB_P_LINEOFFSET, 247,	/* 262 */
	HB_P_PUSHSYMNEAR, 78,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 45,	/* MPT */
/* 05417 */ HB_P_LINEOFFSET, 248,	/* 263 */
	HB_P_PUSHLOCALNEAR, 45,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 05457) */
/* 05425 */ HB_P_LINEOFFSET, 249,	/* 264 */
	HB_P_PUSHSYMNEAR, 28,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 05457) */
/* 05440 */ HB_P_LINEOFFSET, 252,	/* 267 */
	HB_P_PUSHLOCALNEAR, 12,	/* T_VENCER */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCER */
/* 05451 */ HB_P_LINEOFFSET, 253,	/* 268 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* VENCER 1*/
/* 05457 */ HB_P_LINEOFFSET, 255,	/* 270 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 106, 1,	/* 362 (abs: 05828) */
/* 05469 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* FORNEC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05486 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* CLIENTE */
	HB_P_LEFT, 30, 0,	/* 30 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05507 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 83,	/* NUM_PED */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05525 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* NUMERO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05543 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* TIPO */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 84,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* CONTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05570 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* BANCO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05604) */
/* 05584 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'A', 'R', 'T', '.', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 05656) */
/* 05604 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* BANCO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05638) */
/* 05618 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'A', 'N', 'C', 'O', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 05656) */
/* 05638 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05656 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05679 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05702 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* PAGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 05730) */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 05740) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* DATPAG */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 05767) */
/* 05742 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 23,	/* 23 (abs: 05788) */
/* 05767 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05788 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 81,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* VALOR */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05828 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 72,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 118, 250,	/* -1418 (abs: 04419) */
/* 05840 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 57,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 05882) */
/* 05853 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05861 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 05868 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 59,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05882 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05890 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 60,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05905 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 05936 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05944 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06044 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06147 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', '.', '.', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06285 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'A', 'G', 'A', 'S', '.', '.', '.', '.', '.', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* PAGAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MTOT_PG */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MTOT_PG */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06423 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 88,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06487 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 88,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 87,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 88,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 88,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06596 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06604 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 61,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 89,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 06617 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 58,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06625 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 90,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 06635 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 06677 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 91,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 06701 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06709 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06715 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

