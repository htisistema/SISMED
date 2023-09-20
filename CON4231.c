/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON4231.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\CON4231.PRG /q /oC:\HTI\SISMED\CON4231.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:51 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON4231.PRG"

HB_FUNC( CON4231 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( MENSAGEM1 );
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
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( QQOUT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON4231 )
{ "CON4231", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON4231 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOBRA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAXA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOMPRAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
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
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "BAIX_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AREA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "QQOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QQOUT )}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "COD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "COMPLEMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEL1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON4231 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON4231
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON4231 = hb_vm_SymbolInit_CON4231;
   #pragma data_seg()
#endif

HB_FUNC( CON4231 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 48, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'C', 'O', 'N', '4', '2', '3', '1', 0, 
	HB_P_LOCALNEARSETSTR, 42, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 46,	/* MAREA */
	HB_P_LOCALNEARSETINT, 48, 0, 0,	/* MPONTO 0*/
/* 00038 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOBRA_FIN */
	HB_P_PUSHSYMNEAR, 3,	/* MTAXA_FIN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* MCOMPRAS */
	HB_P_PUSHSYMNEAR, 7,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 8,	/* MCGC */
	HB_P_PUSHSYMNEAR, 9,	/* MCPF */
	HB_P_PUSHSYMNEAR, 10,	/* BANK */
	HB_P_PUSHSYMNEAR, 11,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 12,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 13,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 14,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 15,	/* MARQ */
	HB_P_DOSHORT, 14,
	HB_P_POPVARIABLE, 15, 0,	/* MARQ */
	HB_P_POPVARIABLE, 14, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 6, 0,	/* MCOMPRAS */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
/* 00099 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00189) */
/* 00184 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00189 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00216) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00216 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 't', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00245) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00245 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00274) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00274 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00303) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00303 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00332) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00332 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00359) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00359 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00388) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00388 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00407 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00446 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00490 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00534 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00579 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00624 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00669 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00714 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', 'o', 'u', ' ', 'G', 'e', 'r', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00759 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00804 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00849 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00894 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00939 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', '[', 'S', '/', 'C', '/', 'N', ']', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00984 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MTIPO_IMP */
/* 00993 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 01001 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* BANK */
/* 01012 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MCOD_VEND 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 01023 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MCLIENTE */
/* 01035 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* T_INI */
/* 01055 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 3,	/* T_FIM */
/* 01062 */ HB_P_LINEOFFSET, 43,	/* 56 */
	HB_P_LOCALNEARSETINT, 27, 0, 0,	/* MCARTAO 0*/
	HB_P_PUSHLOCALNEAR, 27,	/* MCARTAO */
	HB_P_POPLOCALNEAR, 4,	/* MOD */
/* 01072 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_LOCALNEARSETSTR, 41, 2, 0,	/* MOP_DIA 2*/
	'S', 0, 
/* 01080 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_LOCALNEARSETSTR, 42, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
/* 01089 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MCAB 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* MCAB */
	HB_P_POPLOCALNEAR, 43,	/* MEND */
/* 01101 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 45,	/* MCIDADE */
/* 01112 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 46,	/* MAREA */
/* 01123 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MBAIX_PARC 2*/
	'N', 0, 
/* 01131 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MTIP */
/* 01142 */ HB_P_LINEOFFSET, 51,	/* 64 */
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
	22, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01180) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01185) */
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
/* 01236 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
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
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_VEND */
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
/* 01319 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 01341 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01364) */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 3,
/* 01364 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
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
	8, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01403) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01408) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01456) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 85,	/* 85 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 01541) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
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
/* 01558 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
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
	HB_P_PUSHVARIABLE, 10, 0,	/* BANK */
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
/* 01623 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
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
	2, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01662) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01667) */
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
/* 01695 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
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
	3, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01734) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01739) */
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
/* 01767 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
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
	28, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01806) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01811) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MTIPO_REL */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01856) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 78,	/* 78 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', '[', 'R', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'r', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', '[', 'G', ']', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', 0, 
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
/* 01951 */ HB_P_LINEOFFSET, 60,	/* 73 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
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
	41, 0,	/* MOP_DIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01990) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01995) */
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
	41, 0,	/* MOP_DIA */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02038) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
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
/* 02130 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
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
	42, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02169) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02174) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 41,	/* 41 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', 0, 
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
/* 02255 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
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
	45, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02294) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02299) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'C', 'I', 'D', 'A', 'D', 'E', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
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
/* 02408 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
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
	46, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02447) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02452) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 67,	/* 67 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'A', 'R', 'E', 'A', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
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
/* 02557 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 27,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
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
	47, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02596) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02601) */
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
	47, 0,	/* MBAIX_PARC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02649) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 83,	/* 83 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 27,	/* 27 */
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
/* 02749 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 02771 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02786) */
	HB_P_JUMP, 163, 32,	/* 8355 (abs: 11138) */
/* 02786 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 02847) */
/* 02798 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_LOCALNEARSETSTR, 20, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_JUMP, 38, 3,	/* 806 (abs: 03650) */
/* 02847 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 02905) */
/* 02859 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_LOCALNEARSETSTR, 20, 37, 0,	/* MTIT 37*/
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_JUMP, 236, 2,	/* 748 (abs: 03650) */
/* 02905 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 03244) */
/* 02918 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_LOCALNEARSETSTR, 20, 37, 0,	/* MTIT 37*/
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 02961 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_LOCALNEARSETINT, 27, 0, 0,	/* MCARTAO 0*/
/* 02967 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 02994 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03038 */ HB_P_LINEOFFSET, 78,	/* 91 */
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
	27, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03076) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03081) */
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
	27, 0,	/* MCARTAO */
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
/* 03135 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 03157 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03179) */
/* 03169 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 121, 247,	/* -2183 (abs: 00993) */
/* 03179 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 25,	/* OPCAO */
/* 03213 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHLOCALNEAR, 25,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03234) */
/* 03224 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 66, 247,	/* -2238 (abs: 00993) */
/* 03234 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 153, 1,	/* 409 (abs: 03650) */
/* 03244 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 03604) */
/* 03257 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_LOCALNEARSETSTR, 20, 43, 0,	/* MTIT 43*/
	'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03306 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_LOCALNEARSETINT, 27, 0, 0,	/* MCARTAO 0*/
/* 03312 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03339 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03383 */ HB_P_LINEOFFSET, 95,	/* 108 */
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
	27, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03421) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03426) */
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
	27, 0,	/* MCARTAO */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03464) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 03474) */
	HB_P_PUSHSYMNEAR, 43,	/* VER_FINAN */
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
/* 03492 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 03514 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03536) */
/* 03526 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 20, 246,	/* -2540 (abs: 00993) */
/* 03536 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 42,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 25,	/* OPCAO */
/* 03574 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHLOCALNEAR, 25,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03595) */
/* 03585 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 245,	/* -2599 (abs: 00993) */
/* 03595 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 03650) */
/* 03604 */ HB_P_LINEOFFSET, 108,	/* 121 */
	HB_P_LOCALNEARSETSTR, 20, 40, 0,	/* MTIT 40*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03650 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03671) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 03781) */
/* 03673 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'A', ']', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'O', 'C', '.', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'S', ',', 'T', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 03789) */
/* 03781 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 03789 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 03877) */
/* 03800 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'd', 'o', 's', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '[', 'S', ']', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', 'a', 'o', ' ', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 43,	/* MEND */
/* 03877 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* TD_MES 0*/
/* 03883 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* TP_MES 0*/
/* 03889 */ HB_P_LINEOFFSET, 121,	/* 134 */
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03932) */
/* 03912 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '6', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* T_INI */
/* 03932 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03975) */
/* 03955 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_PUSHSYMNEAR, 25,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_FIM */
/* 03975 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 04032) */
/* 03986 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04058) */
/* 04032 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTIPO */
/* 04058 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 14,	/* 3630 (abs: 07697) */
/* 04070 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIT */
/* 04090 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 1,
/* 04111 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHSYMNEAR, 46,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04118 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 04163) */
/* 04130 */ HB_P_LINEOFFSET, 139,	/* 152 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 48,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
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
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 04183) */
/* 04163 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 48,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 04183 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 04243) */
/* 04192 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_PUSHSYMNEAR, 52,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 81, 243,	/* -3247 (abs: 00993) */
/* 04243 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'o', 'f', 'f', 0, 
	HB_P_DOSHORT, 2,
/* 04258 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04290) */
	HB_P_JUMP, 34, 243,	/* -3294 (abs: 00993) */
/* 04290 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 04304 */ HB_P_LINEOFFSET, 153,	/* 166 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 55,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 04333) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 04344) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 04346 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 56,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 17,	/* L_MES */
/* 04366 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
/* 04374 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 7,	/* PAG */
/* 04426 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_FIM */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04445) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 51, 8,	/* 2099 (abs: 06544) */
/* 04448 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MCLIENTE */
/* 04460 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04478) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 69, 1,	/* 325 (abs: 04803) */
/* 04481 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* PAG 1*/
/* 04487 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04502) */
/* 04495 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04502 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04517 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04531 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 04646) */
/* 04539 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04594 */ HB_P_LINEOFFSET, 170,	/* 183 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04646 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 122,	/* 122 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'S', 'l', 'd', '.', 'D', 'e', 'v', 'e', '.', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04777 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04796 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04803 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 117, 2,	/* 629 (abs: 05441) */
/* 04815 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 85, 2,	/* 597 (abs: 05421) */
/* 04827 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04847) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 41,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 74, 1,	/* 330 (abs: 05177) */
/* 04850 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04959 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05017 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05061 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05105 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05155 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 247, 0,	/* 247 (abs: 05421) */
/* 05177 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 0,	/* 235 (abs: 05421) */
/* 05189 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05246 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05293 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05360 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05421 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MT_DIA 0*/
/* 05427 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_LOCALNEARSETINT, 40, 0, 0,	/* MT_JUROS 0*/
/* 05433 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
/* 05441 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 17,	/* L_MES */
	HB_P_PUSHSYMNEAR, 56,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05472) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 205, 0,	/* 205 (abs: 05677) */
/* 05475 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 170, 0,	/* 170 (abs: 05651) */
/* 05484 */ HB_P_LINEOFFSET, 198,	/* 211 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05601 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05634 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* TOT_DIN 0*/
/* 05640 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 05651 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHSYMNEAR, 56,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 17,	/* L_MES */
/* 05671 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* TOT 0*/
/* 05677 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 47,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05700) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 05724) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 47,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05723) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 05746) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 05745) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 05768) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 05767) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 42,	/* MTIP_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* TIP_PG */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 05797) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 05796) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MCARTAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 05825) */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PAGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 05824) */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 05854) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 05853) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* VENDEDOR */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 05885) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 05884) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 05909) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05908) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* BANCO */
	HB_P_PUSHVARIABLE, 10, 0,	/* BANK */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05922) */
/* 05911 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 43, 250,	/* -1493 (abs: 04426) */
/* 05922 */ HB_P_LINEOFFSET, 219,	/* 232 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 05990) */
/* 05933 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05979) */
/* 05957 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05990) */
/* 05968 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 242, 249,	/* -1550 (abs: 04426) */
/* 05979 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 231, 249,	/* -1561 (abs: 04426) */
/* 05990 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 59,	/* 59 (abs: 06058) */
/* 06001 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 06047) */
/* 06025 */ HB_P_LINEOFFSET, 230,	/* 243 */
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* AREA */
	HB_P_PUSHLOCALNEAR, 46,	/* MAREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 06058) */
/* 06036 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 174, 249,	/* -1618 (abs: 04426) */
/* 06047 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 163, 249,	/* -1629 (abs: 04426) */
/* 06058 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* TOT 1*/
/* 06064 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT_G 1*/
/* 06070 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* TOT_DIN */
/* 06081 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_GIN */
/* 06092 */ HB_P_LINEOFFSET, 243,	/* 256 */
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MT_DIA */
/* 06103 */ HB_P_LINEOFFSET, 244,	/* 257 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_POPLOCALNEAR, 35,	/* MMULTA */
/* 06113 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 37,	/* MDIAS_ATRAS */
/* 06125 */ HB_P_LINEOFFSET, 246,	/* 259 */
	HB_P_PUSHLOCALNEAR, 37,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 06179) */
/* 06133 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHMEMVAR, 83, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 35,	/* MMULTA */
/* 06153 */ HB_P_LINEOFFSET, 248,	/* 261 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHLOCALNEAR, 37,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 83, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS */
/* 06179 */ HB_P_LINEOFFSET, 250,	/* 263 */
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 38,	/* MTOT_JUROS */
/* 06191 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MJUROS_IND */
/* 06203 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_PUSHLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
/* 06220 */ HB_P_LINEOFFSET, 253,	/* 266 */
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 40,	/* MT_JUROS */
/* 06232 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 35, 1,	/* 291 (abs: 06532) */
/* 06244 */ HB_P_LINEOFFSET, 255,	/* 268 */
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 06258 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 6, 0,	/* MCOMPRAS */
/* 06265 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 84,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 48,	/* MPONTO */
/* 06275 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 85,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPONTO */
	HB_P_DOSHORT, 1,
/* 06285 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06302 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* CLIENTE */
	HB_P_LEFT, 30, 0,	/* 30 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06323 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* NUM_PED */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06341 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06359 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 90,	/* CONTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06387 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06410 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06433 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06471 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOMPRAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06504 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', ' ', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06532 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 189, 247,	/* -2115 (abs: 04426) */
/* 06544 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 133, 2,	/* 645 (abs: 07199) */
/* 06557 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 97, 2,	/* 609 (abs: 07176) */
/* 06570 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 06591) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 41,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 80, 1,	/* 336 (abs: 06927) */
/* 06594 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06704 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06763 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06808 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06853 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06904 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 0,	/* 252 (abs: 07176) */
/* 06927 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHLOCALNEAR, 28,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 07176) */
/* 06940 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06998 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07046 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07114 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 65,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 40,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07176 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MT_DIA 0*/
/* 07183 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_LOCALNEARSETINT, 40, 0, 0,	/* MT_JUROS 0*/
/* 07190 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
/* 07199 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 17,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 67,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07322 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07356 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 07398) */
/* 07369 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07377 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* PAG 1*/
/* 07384 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07398 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07406 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07421 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 07452 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07460 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'n', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07655 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07663 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 07676 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07684 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 93,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 50, 13,	/* 3378 (abs: 11072) */
/* 07697 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 07718) */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 26, 13,	/* 3354 (abs: 11072) */
/* 07721 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIT */
/* 07742 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 07817) */
/* 07754 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIT */
/* 07785 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_DOSHORT, 1,
/* 07807 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 46,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 07879) */
/* 07817 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'T', 'I', 'P', 'O', ' ', 'D', 'O', 'C', '.', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTIT */
/* 07850 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 07871 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 46,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07879 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07912) */
	HB_P_JUMP, 252, 228,	/* -6916 (abs: 00993) */
/* 07912 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 07927 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 55,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 07957) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 07968) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 07970 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 56,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 17,	/* L_MES */
/* 07991 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
/* 08000 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 7,	/* PAG */
/* 08038 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 158, 9,	/* 2462 (abs: 10508) */
/* 08049 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 30,	/* MTOT_IND */
/* 08066 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 08098) */
/* 08078 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 29,	/* MCOD_AUX */
/* 08087 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 08116) */
/* 08098 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 29,	/* MCOD_AUX */
/* 08107 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 08116 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 08125 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 29,	/* MCOD_AUX */
	HB_P_PUSHLOCALNEAR, 39,	/* MFORNEC */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 08143) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 51,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 102, 8,	/* 2150 (abs: 10293) */
/* 08146 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08165) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 72, 1,	/* 328 (abs: 08493) */
/* 08168 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* PAG 1*/
/* 08175 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08192) */
/* 08184 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08192 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08208 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08223 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 08341) */
/* 08232 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08288 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08341 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 122,	/* 122 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'S', 'l', 'd', '.', 'D', 'e', 'v', 'e', '.', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08473 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08493 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 47,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08517) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 08541) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 47,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 08540) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* BAIX_PARC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 08570) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 08569) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* COD_FORN */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 08584) */
/* 08572 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 56, 254,	/* -456 (abs: 08125) */
/* 08584 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 63,	/* 63 (abs: 08657) */
/* 08596 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08645) */
/* 08621 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* CIDADE */
	HB_P_PUSHLOCALNEAR, 45,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08657) */
/* 08633 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 251, 253,	/* -517 (abs: 08125) */
/* 08645 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 239, 253,	/* -529 (abs: 08125) */
/* 08657 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 63,	/* 63 (abs: 08730) */
/* 08669 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08718) */
/* 08694 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* AREA */
	HB_P_PUSHLOCALNEAR, 46,	/* MAREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08730) */
/* 08706 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 178, 253,	/* -590 (abs: 08125) */
/* 08718 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 166, 253,	/* -602 (abs: 08125) */
/* 08730 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_FIM */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 08787) */
/* 08742 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08751 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 08775) */
/* 08763 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 238, 5,	/* 1518 (abs: 10290) */
/* 08775 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 109, 253,	/* -659 (abs: 08125) */
/* 08787 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_PUSHLOCALNEAR, 2,	/* T_INI */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 08844) */
/* 08799 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08808 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 08832) */
/* 08820 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 181, 5,	/* 1461 (abs: 10290) */
/* 08832 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 52, 253,	/* -716 (abs: 08125) */
/* 08844 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 08865) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIP */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 08920) */
/* 08867 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08876 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08899) */
/* 08888 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 08908) */
/* 08899 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 08908 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 232, 252,	/* -792 (abs: 08125) */
/* 08920 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 08948) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MCARTAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 09003) */
/* 08950 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08959 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08982) */
/* 08971 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 08991) */
/* 08982 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 08991 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 149, 252,	/* -875 (abs: 08125) */
/* 09003 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PAGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 09030) */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* DATPAG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 09085) */
/* 09032 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 09041 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09064) */
/* 09053 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 09073) */
/* 09064 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 09073 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 67, 252,	/* -957 (abs: 08125) */
/* 09085 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 09113) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* VENDEDOR */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 09168) */
/* 09115 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 09124 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09147) */
/* 09136 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 09156) */
/* 09147 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 09156 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 240, 251,	/* -1040 (abs: 08125) */
/* 09168 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 09198) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 09253) */
/* 09200 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 09209 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09232) */
/* 09221 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 09241) */
/* 09232 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 09241 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 155, 251,	/* -1125 (abs: 08125) */
/* 09253 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 09274) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 42,	/* MTIP_PG */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* TIP_PG */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 09288) */
/* 09276 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 120, 251,	/* -1160 (abs: 08125) */
/* 09288 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 09311) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* BANCO */
	HB_P_PUSHVARIABLE, 10, 0,	/* BANK */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 09366) */
/* 09313 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 09322 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09345) */
/* 09334 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 09354) */
/* 09345 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
/* 09354 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_POPLOCALNEAR, 23,	/* MDIA */
	HB_P_JUMP, 42, 251,	/* -1238 (abs: 08125) */
/* 09366 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHLOCALNEAR, 43,	/* MEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 72, 1,	/* 328 (abs: 09704) */
/* 09379 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 50, 1,	/* 306 (abs: 09695) */
/* 09392 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHSYMNEAR, 33,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 09695) */
/* 09418 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 95,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 96,	/* RAZAO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 97,	/* NOME */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09481 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 99,	/* ENDERECO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 100,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 100,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 101,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 09576) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 100,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 101,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 09579) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 102,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 103,	/* UF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'T', 'e', 'l', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 104,	/* TEL1 */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09645 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 105,	/* OBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 09695) */
/* 09659 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 79,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 105,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09695 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MCAB 2*/
	'*', 0, 
/* 09704 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 78,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 09719 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 6, 0,	/* MCOMPRAS */
/* 09726 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 84,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 48,	/* MPONTO */
/* 09736 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 85,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPONTO */
	HB_P_DOSHORT, 1,
/* 09746 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09763 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* CLIENTE */
	HB_P_LEFT, 30, 0,	/* 30 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09784 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* NUM_PED */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09802 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09820 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 90,	/* CONTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09848 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09871 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09894 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09932 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOMPRAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09965 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', ' ', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09993 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 32,	/* MSUB_IND */
/* 10005 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* MTOT_IND 1*/
/* 10012 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT_G 1*/
/* 10019 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_POPLOCALNEAR, 35,	/* MMULTA */
/* 10030 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHMEMVAR, 26, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* VENC */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 37,	/* MDIAS_ATRAS */
/* 10043 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHLOCALNEAR, 37,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 10100) */
/* 10052 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHMEMVAR, 83, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 35,	/* MMULTA */
/* 10073 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHLOCALNEAR, 37,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 83, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS */
/* 10100 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 38,	/* MTOT_JUROS */
/* 10113 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MJUROS_IND */
/* 10126 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
/* 10144 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_GIN */
/* 10156 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10194 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* VALOR */
	HB_P_PUSHLOCALNEAR, 35,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10230 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 86,	/* QQOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* TIP_PG */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10248 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHSYMNEAR, 77,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 10257 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHLOCALNEAR, 34,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 10281) */
/* 10269 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* FORNEC */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 151, 247,	/* -2153 (abs: 08125) */
/* 10281 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 47,	/* DUPR */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_POPLOCALNEAR, 39,	/* MFORNEC */
	HB_P_JUMP, 139, 247,	/* -2165 (abs: 08125) */
/* 10293 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 39, 247,	/* -2265 (abs: 08038) */
/* 10306 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10326 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10468 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10488 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_JUMP, 93, 246,	/* -2467 (abs: 08038) */
/* 10508 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 10550) */
/* 10521 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10529 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* PAG 1*/
/* 10536 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 60,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* PAG */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 21,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 10550 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 202, 0,	/* 202 (abs: 10762) */
/* 10563 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10583 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10725 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10745 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 33,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 30,	/* MTOT_IND */
/* 10762 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10770 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 61,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10785 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 10816 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10824 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'n', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 38,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11033 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11041 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 62,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 11054 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 59,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11062 */ HB_P_LINE, 47, 2,	/* 559 */
	HB_P_PUSHSYMNEAR, 93,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 11072 */ HB_P_LINE, 49, 2,	/* 561 */
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
/* 11114 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHSYMNEAR, 106,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 11138 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11146 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 11152 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

