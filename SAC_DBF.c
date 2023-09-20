/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC_DBF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SAC_DBF.PRG /q /oC:\HTI\SISMED\SAC_DBF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.06.14 08:58:53 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC_DBF.PRG"

HB_FUNC( SAC_DBF );
HB_FUNC( ALT_TB );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_COMMITTRANSACTION );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );
HB_FUNC_EXTERN( TRACELOG );
HB_FUNC_EXTERN( VALTOPRG );
HB_FUNC_EXTERN( SR_ROLLBACKTRANSACTION );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC_DBF )
{ "SAC_DBF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC_DBF )}, NULL },
{ "MDATA_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SETUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SENHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_DUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSETUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINSOPERA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_VER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MATUAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTELA_BKP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_ASS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MASS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_TABL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTABL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MMENSAGEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPEDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_PEDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_CID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MATRIZ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MATUALIZA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ALT_TB", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ALT_TB )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "SR_COMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_COMMITTRANSACTION )}, NULL },
{ "E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "VALTOPRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTOPRG )}, NULL },
{ "SR_ROLLBACKTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ROLLBACKTRANSACTION )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC_DBF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC_DBF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC_DBF = hb_vm_SymbolInit_SAC_DBF;
   #pragma data_seg()
#endif

HB_FUNC( SAC_DBF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '_', 'D', 'B', 'F', 0, 
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* MARQ 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* SLINHAS 1*/
	0, 
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 00032 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 31,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MDATA_CLI */
	HB_P_PUSHSYMNEAR, 2,	/* MDATA_DUPR */
	HB_P_PUSHSYMNEAR, 3,	/* MDATA_SETUP */
	HB_P_PUSHSYMNEAR, 4,	/* MDATA_CFG */
	HB_P_PUSHSYMNEAR, 5,	/* MDATA_SENHA */
	HB_P_PUSHSYMNEAR, 4,	/* MDATA_CFG */
	HB_P_PUSHSYMNEAR, 6,	/* MDATA_DUPP */
	HB_P_PUSHSYMNEAR, 7,	/* MDUPR */
	HB_P_PUSHSYMNEAR, 8,	/* MDUPP */
	HB_P_PUSHSYMNEAR, 9,	/* MCLI */
	HB_P_PUSHSYMNEAR, 10,	/* MSETUP */
	HB_P_PUSHSYMNEAR, 11,	/* MCFG */
	HB_P_PUSHSYMNEAR, 12,	/* MINSOPERA */
	HB_P_PUSHSYMNEAR, 13,	/* MDATA_VER */
	HB_P_PUSHSYMNEAR, 14,	/* MATUAL */
	HB_P_PUSHSYMNEAR, 15,	/* MTELA_BKP */
	HB_P_PUSHSYMNEAR, 16,	/* MDATA_ARQ */
	HB_P_PUSHSYMNEAR, 17,	/* MDATA_ASS */
	HB_P_PUSHSYMNEAR, 18,	/* MASS */
	HB_P_PUSHSYMNEAR, 19,	/* MNOME_ARQ */
	HB_P_PUSHSYMNEAR, 20,	/* MDATA_FORN */
	HB_P_PUSHSYMNEAR, 21,	/* MFORN */
	HB_P_PUSHSYMNEAR, 22,	/* MDATA_TABL */
	HB_P_PUSHSYMNEAR, 23,	/* MTABL */
	HB_P_PUSHSYMNEAR, 24,	/* MMENSAGEM */
	HB_P_PUSHSYMNEAR, 25,	/* MPEDE */
	HB_P_PUSHSYMNEAR, 26,	/* MDATA_PEDE */
	HB_P_PUSHSYMNEAR, 27,	/* MCID */
	HB_P_PUSHSYMNEAR, 28,	/* MDATA_CID */
	HB_P_PUSHSYMNEAR, 29,	/* ARET */
	HB_P_PUSHSYMNEAR, 30,	/* MATRIZ */
	HB_P_DOSHORT, 31,
	HB_P_POPVARIABLE, 30, 0,	/* MATRIZ */
	HB_P_POPVARIABLE, 29, 0,	/* ARET */
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_POPVARIABLE, 19, 0,	/* MNOME_ARQ */
/* 00125 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00145) */
/* 00140 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00145 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'0', '1', '/', '1', '0', '/', '2', '0', '0', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 20, 0,	/* MDATA_FORN */
/* 00168 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'0', '1', '/', '1', '0', '/', '2', '0', '0', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MDATA_DUPR */
/* 00191 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'1', '2', '/', '0', '7', '/', '2', '0', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* MDATA_DUPP */
/* 00214 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'2', '4', '/', '0', '9', '/', '2', '0', '1', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MDATA_SENHA */
/* 00237 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'2', '1', '/', '0', '8', '/', '2', '0', '1', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MDATA_CLI */
/* 00260 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'2', '7', '/', '0', '8', '/', '2', '0', '1', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MDATA_SETUP */
/* 00283 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'1', '6', '/', '0', '1', '/', '2', '0', '2', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MDATA_CFG */
/* 00306 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', 'T', 'I', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 197, 1,	/* 453 (abs: 00770) */
/* 00320 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'a', 'r', 'q', 'u', 'i', 'v', 'o', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00372) */
/* 00337 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MFORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 12, 0,	/* MINSOPERA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MCFG */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MSETUP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MCLI */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MDUPP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MDUPR */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
	HB_P_JUMP, 247, 0,	/* 247 (abs: 00616) */
/* 00372 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MFORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 12, 0,	/* MINSOPERA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MCFG */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MSETUP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MCLI */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MDUPP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MDUPR */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00404 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00438) */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 00456) */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 00535) */
/* 00458 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 00616) */
/* 00535 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '2', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* MDATA_VER */
/* 00616 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 2, 0,	/* MDATA_DUPR */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00638) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MDUPR */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00638 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 6, 0,	/* MDATA_DUPP */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00660) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MDUPP */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00660 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 3, 0,	/* MDATA_SETUP */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00682) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MSETUP */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00682 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 5, 0,	/* MDATA_SENHA */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00704) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 12, 0,	/* MINSOPERA */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00704 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 20, 0,	/* MDATA_FORN */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00726) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 21, 0,	/* MFORN */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00726 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 1, 0,	/* MDATA_CLI */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00748) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MCLI */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00748 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MDATA_VER */
	HB_P_PUSHVARIABLE, 4, 0,	/* MDATA_CFG */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00770) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 11, 0,	/* MCFG */
	HB_P_POPVARIABLE, 34, 0,	/* MATUALIZA */
/* 00770 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHVARIABLE, 34, 0,	/* MATUALIZA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 63, 6,	/* 1599 (abs: 02379) */
/* 00783 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 38,	/* ALT_TB */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00790 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 12, 0,	/* MINSOPERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00815) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 00981) */
/* 00818 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'N', 'S', 'O', 'P', 'E', 'R', 'A', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 00877 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 00921 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'>', '>', '>', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'p', 'o', 's', 'i', 'c', 'a', 'o', ' ', '=', ' ', '4', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 00971 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 00981 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCID */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01006) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 01075) */
/* 01008 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'C', 'I', 'D', ' ', ' ', ' ', ' ', 'A', ' ', 'L', ' ', 'T', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'R', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01065 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01075 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 0,	/* 169 (abs: 01254) */
/* 01088 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01149 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01193 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'>', '>', '>', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'p', 'o', 's', 'i', 'c', 'a', 'o', ' ', '=', ' ', '1', '4', '5', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01244 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01254 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 8, 0,	/* MDUPP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01279) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 0,	/* 235 (abs: 01514) */
/* 01282 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01344 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01392 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'>', '>', '>', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'p', 'o', 's', 'i', 'c', 'a', 'o', ' ', '=', ' ', '3', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01438 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', ' ', ' ', ' ', ' ', ' ', 'A', ' ', 'L', ' ', 'T', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01504 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01514 */ HB_P_LINEOFFSET, 70,	/* 79 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 7, 0,	/* MDUPR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01539) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 01752) */
/* 01542 */ HB_P_LINEOFFSET, 71,	/* 80 */
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', ' ', 'e', ' ', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01616 */ HB_P_LINEOFFSET, 72,	/* 81 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01660 */ HB_P_LINEOFFSET, 73,	/* 82 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', ' ', ' ', 'e', ' ', ' ', 'S', 'A', 'C', 'C', 'R', 'E', 'D', ' ', ' ', ' ', ' ', ' ', 'A', ' ', 'L', ' ', 'T', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01742 */ HB_P_LINEOFFSET, 75,	/* 84 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01752 */ HB_P_LINEOFFSET, 77,	/* 86 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 21, 0,	/* MFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01777) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 168, 0,	/* 168 (abs: 01945) */
/* 01780 */ HB_P_LINEOFFSET, 78,	/* 87 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'F', 'O', 'R', 'N', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01841 */ HB_P_LINEOFFSET, 79,	/* 88 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01885 */ HB_P_LINEOFFSET, 80,	/* 89 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'>', '>', '>', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'p', 'o', 's', 'i', 'c', 'a', 'o', ' ', '=', ' ', '3', '6', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 01935 */ HB_P_LINEOFFSET, 84,	/* 93 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 01945 */ HB_P_LINEOFFSET, 86,	/* 95 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSETUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01970) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 153, 1,	/* 409 (abs: 02379) */
/* 01973 */ HB_P_LINEOFFSET, 87,	/* 96 */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'*', '*', '*', '*', '*', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'S', 'E', 'T', 'U', 'P', ' ', ' ', ' ', ' ', ' ', 'I', ' ', 'N', ' ', 'C', ' ', 'L', ' ', 'U', ' ', 'I', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', 0, 
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02037 */ HB_P_LINEOFFSET, 88,	/* 97 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02086 */ HB_P_LINEOFFSET, 89,	/* 98 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'>', '>', '>', '>', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', 'p', 'o', 's', 'i', 'c', 'a', 'o', ' ', '=', ' ', '3', '8', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02136 */ HB_P_LINEOFFSET, 90,	/* 99 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', '<', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02183 */ HB_P_LINEOFFSET, 91,	/* 100 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'<', '<', ' ', 'N', 'o', 'm', 'e', ':', ' ', 'S', 'Y', 'S', 'D', 'A', 'T', 'L', 'M', ' ', 'd', 'e', ' ', 'V', 'C', 'H', 'A', 'R', '(', '1', '2', ')', ' ', 'p', 'a', 'r', 'a', ' ', 'V', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02247 */ HB_P_LINEOFFSET, 92,	/* 101 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'<', '<', ' ', 'N', 'o', 'm', 'e', ':', ' ', 'C', 'N', 'P', 'J', ' ', 'd', 'e', ' ', 'V', 'C', 'H', 'A', 'R', '(', '1', '5', ')', ' ', 'p', 'a', 'r', 'a', ' ', 'V', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02307 */ HB_P_LINEOFFSET, 93,	/* 102 */
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'<', '<', ' ', 'N', 'o', 'm', 'e', ':', ' ', 'M', 'E', 'D', 'I', 'C', 'O', ' ', 'd', 'e', ' ', 'V', 'C', 'H', 'A', 'R', '(', '2', '0', ')', ' ', 'p', 'a', 'r', 'a', ' ', 'V', 'C', 'H', 'A', 'R', '(', '4', '0', ')', ' ', '>', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 24, 0,	/* MMENSAGEM */
/* 02369 */ HB_P_LINEOFFSET, 94,	/* 103 */
	HB_P_PUSHSYMNEAR, 40,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MMENSAGEM */
	HB_P_DOSHORT, 1,
/* 02379 */ HB_P_LINEOFFSET, 98,	/* 107 */
	HB_P_PUSHSYMNEAR, 41,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 02399 */ HB_P_LINEOFFSET, 99,	/* 108 */
	HB_P_PUSHSYMNEAR, 42,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MARQ */
/* 02421 */ HB_P_LINEOFFSET, 100,	/* 109 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '1', ' ', 'C', ' ', 'E', 's', 't', 'a', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02467 */ HB_P_LINEOFFSET, 101,	/* 110 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '2', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02517 */ HB_P_LINEOFFSET, 102,	/* 111 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '3', ' ', 'C', ' ', 'm', 'd', '5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02560 */ HB_P_LINEOFFSET, 103,	/* 112 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '4', ' ', 'C', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'D', 'a', 'd', 'o', 's', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02610 */ HB_P_LINEOFFSET, 104,	/* 113 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '5', ' ', 'C', ' ', 'V', 'e', 'r', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 43, 0,	/* MVERSAO */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02657 */ HB_P_LINEOFFSET, 105,	/* 114 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '6', ' ', 'C', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'l', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 39, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02707 */ HB_P_LINEOFFSET, 106,	/* 115 */
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'0', '0', '7', ' ', 'C', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', ' ', ' ', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* SLINHAS */
/* 02753 */ HB_P_LINEOFFSET, 107,	/* 116 */
	HB_P_PUSHSYMNEAR, 44,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MARQ */
	HB_P_PUSHLOCALREF, 4, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 45,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 02772 */ HB_P_LINEOFFSET, 108,	/* 117 */
	HB_P_PUSHSYMNEAR, 41,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 02781 */ HB_P_LINEOFFSET, 110,	/* 119 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 92, 0, 0,	/* 92 (abs: 00002880) */
/* 02792 */ HB_P_LINEOFFSET, 112,	/* 121 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'S', 'E', 'T', ' ', 'v', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 49,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* MVERSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02845 */ HB_P_LINEOFFSET, 113,	/* 122 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02869 */ HB_P_LINEOFFSET, 114,	/* 123 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02876 */ HB_P_TRYEND, 18, 0, 0,	/* 18 (abs: 00002894) */
/* 02880 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002880) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 02887 */ HB_P_LINEOFFSET, 116,	/* 125 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02894 */ HB_P_LINEOFFSET, 118,	/* 127 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02899 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ALT_TB )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 133, 0,	/* 133 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 12, 0,	/* MINSOPERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00026) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 00253) */
/* 00029 */ HB_P_LINEOFFSET, 1,	/* 134 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 80, 0, 0,	/* 80 (abs: 00000116) */
/* 00040 */ HB_P_LINEOFFSET, 3,	/* 136 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'A', 'D', 'D', ' ', 'S', 'M', 'E', 'N', 'S', 'A', 'G', 'E', 'M', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '5', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00105 */ HB_P_LINEOFFSET, 4,	/* 137 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00112 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000142) */
/* 00116 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000116) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00123 */ HB_P_LINEOFFSET, 6,	/* 139 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00135 */ HB_P_LINEOFFSET, 7,	/* 140 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00000220) */
/* 00146 */ HB_P_LINEOFFSET, 10,	/* 143 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'A', 'D', 'D', ' ', 'S', 'A', 'M', 'B', 'I', 'E', 'N', 'T', 'E', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00209 */ HB_P_LINEOFFSET, 11,	/* 144 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00216 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000246) */
/* 00220 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000220) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00227 */ HB_P_LINEOFFSET, 13,	/* 146 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00239 */ HB_P_LINEOFFSET, 14,	/* 147 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00246 */ HB_P_LINEOFFSET, 16,	/* 149 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00253 */ HB_P_LINEOFFSET, 18,	/* 151 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCFG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00278) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 00397) */
/* 00280 */ HB_P_LINEOFFSET, 19,	/* 152 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00000364) */
/* 00291 */ HB_P_LINEOFFSET, 21,	/* 154 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'c', 'f', 'g', ' ', 'A', 'D', 'D', ' ', 'c', 'a', 'n', '_', 'f', 'o', 't', 'o', 's', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00353 */ HB_P_LINEOFFSET, 22,	/* 155 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00360 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000390) */
/* 00364 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000364) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00371 */ HB_P_LINEOFFSET, 24,	/* 157 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00383 */ HB_P_LINEOFFSET, 25,	/* 158 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00390 */ HB_P_LINEOFFSET, 27,	/* 160 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00397 */ HB_P_LINEOFFSET, 29,	/* 162 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 175, 2,	/* 687 (abs: 01094) */
/* 00410 */ HB_P_LINEOFFSET, 30,	/* 163 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00000494) */
/* 00421 */ HB_P_LINEOFFSET, 32,	/* 165 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'D', '_', 'P', 'R', 'O', 'F', 'I', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00483 */ HB_P_LINEOFFSET, 33,	/* 166 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00490 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000520) */
/* 00494 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000494) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00501 */ HB_P_LINEOFFSET, 35,	/* 168 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00513 */ HB_P_LINEOFFSET, 36,	/* 169 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00000594) */
/* 00524 */ HB_P_LINEOFFSET, 39,	/* 172 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '6', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00583 */ HB_P_LINEOFFSET, 40,	/* 173 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00590 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000620) */
/* 00594 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000594) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00601 */ HB_P_LINEOFFSET, 42,	/* 175 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00613 */ HB_P_LINEOFFSET, 43,	/* 176 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 71, 0, 0,	/* 71 (abs: 00000691) */
/* 00624 */ HB_P_LINEOFFSET, 46,	/* 179 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'd', 'a', 't', 'a', '_', 'a', 'u', 't', 'a', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00680 */ HB_P_LINEOFFSET, 47,	/* 180 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00687 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000717) */
/* 00691 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000691) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00698 */ HB_P_LINEOFFSET, 49,	/* 182 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00710 */ HB_P_LINEOFFSET, 50,	/* 183 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00000794) */
/* 00721 */ HB_P_LINEOFFSET, 53,	/* 186 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'O', 'B', 'S', '_', 'A', 'U', 'T', 'A', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00783 */ HB_P_LINEOFFSET, 54,	/* 187 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00790 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000820) */
/* 00794 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000794) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00801 */ HB_P_LINEOFFSET, 56,	/* 189 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00813 */ HB_P_LINEOFFSET, 57,	/* 190 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 78, 0, 0,	/* 78 (abs: 00000898) */
/* 00824 */ HB_P_LINEOFFSET, 60,	/* 193 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'O', 'B', 'S', '_', 'A', 'U', 'T', 'A', '1', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '5', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00887 */ HB_P_LINEOFFSET, 61,	/* 194 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00894 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00000924) */
/* 00898 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00000898) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 00905 */ HB_P_LINEOFFSET, 63,	/* 196 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 00917 */ HB_P_LINEOFFSET, 64,	/* 197 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 137, 0, 0,	/* 137 (abs: 00001061) */
/* 00928 */ HB_P_LINEOFFSET, 67,	/* 200 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '6', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00987 */ HB_P_LINEOFFSET, 68,	/* 201 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'm', 'e', 'd', 'c', 'l', 'i', ' ', 'A', 'D', 'D', ' ', 'I', 'N', 'S', 'T', 'A', 'G', 'R', 'A', 'M', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '3', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01050 */ HB_P_LINEOFFSET, 69,	/* 202 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01057 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001087) */
/* 01061 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001061) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01068 */ HB_P_LINEOFFSET, 71,	/* 204 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01080 */ HB_P_LINEOFFSET, 72,	/* 205 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01087 */ HB_P_LINEOFFSET, 74,	/* 207 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01094 */ HB_P_LINEOFFSET, 76,	/* 209 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 8, 0,	/* MDUPP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01119) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 209, 0,	/* 209 (abs: 01328) */
/* 01122 */ HB_P_LINEOFFSET, 77,	/* 210 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 69, 0, 0,	/* 69 (abs: 00001198) */
/* 01133 */ HB_P_LINEOFFSET, 79,	/* 212 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'A', 'D', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', 'o', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01187 */ HB_P_LINEOFFSET, 80,	/* 213 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01194 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001224) */
/* 01198 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001198) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01205 */ HB_P_LINEOFFSET, 82,	/* 215 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01217 */ HB_P_LINEOFFSET, 83,	/* 216 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 71, 0, 0,	/* 71 (abs: 00001295) */
/* 01228 */ HB_P_LINEOFFSET, 86,	/* 219 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'A', 'D', 'D', ' ', 'D', 'A', 'T', '_', 'R', 'E', 'C', 'E', 'B', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01284 */ HB_P_LINEOFFSET, 87,	/* 220 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01291 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001321) */
/* 01295 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001295) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01302 */ HB_P_LINEOFFSET, 89,	/* 222 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01314 */ HB_P_LINEOFFSET, 90,	/* 223 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01321 */ HB_P_LINEOFFSET, 92,	/* 225 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01328 */ HB_P_LINEOFFSET, 94,	/* 227 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 7, 0,	/* MDUPR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01353) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 219, 0,	/* 219 (abs: 01572) */
/* 01356 */ HB_P_LINEOFFSET, 95,	/* 228 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 75, 0, 0,	/* 75 (abs: 00001438) */
/* 01367 */ HB_P_LINEOFFSET, 97,	/* 230 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'A', 'D', 'D', ' ', 'H', 'O', 'R', 'A', '_', 'B', 'X', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '8', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01427 */ HB_P_LINEOFFSET, 98,	/* 231 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01434 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001464) */
/* 01438 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001438) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01445 */ HB_P_LINEOFFSET, 100,	/* 233 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01457 */ HB_P_LINEOFFSET, 101,	/* 234 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 75, 0, 0,	/* 75 (abs: 00001539) */
/* 01468 */ HB_P_LINEOFFSET, 104,	/* 237 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'M', '_', 'S', 'E', 'M', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01528 */ HB_P_LINEOFFSET, 105,	/* 238 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01535 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001565) */
/* 01539 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001539) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01546 */ HB_P_LINEOFFSET, 107,	/* 240 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01558 */ HB_P_LINEOFFSET, 108,	/* 241 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01565 */ HB_P_LINEOFFSET, 110,	/* 243 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01572 */ HB_P_LINEOFFSET, 112,	/* 245 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 21, 0,	/* MFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01597) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 01817) */
/* 01600 */ HB_P_LINEOFFSET, 113,	/* 246 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 74, 0, 0,	/* 74 (abs: 00001681) */
/* 01611 */ HB_P_LINEOFFSET, 115,	/* 248 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'A', 'D', 'D', ' ', 'A', 'P', 'P', '.', '.', '.', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01670 */ HB_P_LINEOFFSET, 116,	/* 249 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01677 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001707) */
/* 01681 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001681) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01688 */ HB_P_LINEOFFSET, 118,	/* 251 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01700 */ HB_P_LINEOFFSET, 119,	/* 252 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00001784) */
/* 01711 */ HB_P_LINEOFFSET, 122,	/* 255 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'A', 'D', 'D', ' ', 'f', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01773 */ HB_P_LINEOFFSET, 123,	/* 256 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01780 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001810) */
/* 01784 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001784) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01791 */ HB_P_LINEOFFSET, 125,	/* 258 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01803 */ HB_P_LINEOFFSET, 126,	/* 259 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01810 */ HB_P_LINEOFFSET, 128,	/* 261 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01817 */ HB_P_LINEOFFSET, 130,	/* 263 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSETUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01842) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 187, 2,	/* 699 (abs: 02541) */
/* 01845 */ HB_P_LINEOFFSET, 131,	/* 264 */
	HB_P_PUSHSYMNEAR, 46,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 79, 0, 0,	/* 79 (abs: 00001931) */
/* 01856 */ HB_P_LINEOFFSET, 133,	/* 266 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'D', 'I', 'A', '_', 'V', 'E', 'N', 'C', ' ', 'D', 'E', 'C', 'I', 'M', 'A', 'L', '(', '2', ',', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01920 */ HB_P_LINEOFFSET, 134,	/* 267 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01927 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00001957) */
/* 01931 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00001931) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 01938 */ HB_P_LINEOFFSET, 136,	/* 269 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01950 */ HB_P_LINEOFFSET, 137,	/* 270 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 77, 0, 0,	/* 77 (abs: 00002034) */
/* 01961 */ HB_P_LINEOFFSET, 140,	/* 273 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'C', 'O', 'N', 'S', '_', 'C', 'L', 'I', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02023 */ HB_P_LINEOFFSET, 141,	/* 274 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02030 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002060) */
/* 02034 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002034) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 02041 */ HB_P_LINEOFFSET, 143,	/* 276 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02053 */ HB_P_LINEOFFSET, 144,	/* 277 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 192, 1, 0,	/* 448 (abs: 00002508) */
/* 02064 */ HB_P_LINEOFFSET, 147,	/* 280 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'S', 'E', 'R', 'I', 'E', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02124 */ HB_P_LINEOFFSET, 148,	/* 281 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02190 */ HB_P_LINEOFFSET, 149,	/* 282 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'f', 'o', 'n', 'e', '_', 'c', 'l', 'i', 'n', 'i', 'c', 'a', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '1', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02257 */ HB_P_LINEOFFSET, 150,	/* 283 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'i', 'n', 's', 'c', '_', 'm', 'u', 'n', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02320 */ HB_P_LINEOFFSET, 151,	/* 284 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'C', 'R', 'M', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '2', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02378 */ HB_P_LINEOFFSET, 152,	/* 285 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'E', 'S', 'P', 'E', 'C', 'I', 'A', 'L', 'I', ' ', 'V', 'A', 'R', 'C', 'H', 'A', 'R', '(', '4', '0', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02442 */ HB_P_LINEOFFSET, 153,	/* 286 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'A', 'L', 'T', 'E', 'R', ' ', 'T', 'A', 'B', 'L', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'A', 'D', 'D', ' ', 'd', 'a', 't', 'a', 'i', 'n', 'i', ' ', 'D', 'A', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02497 */ HB_P_LINEOFFSET, 154,	/* 287 */
	HB_P_PUSHSYMNEAR, 50,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02504 */ HB_P_TRYEND, 30, 0, 0,	/* 30 (abs: 00002534) */
/* 02508 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002508) */
	HB_P_POPVARIABLE, 51, 0,	/* E */
/* 02515 */ HB_P_LINEOFFSET, 156,	/* 289 */
	HB_P_PUSHSYMNEAR, 53,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 02527 */ HB_P_LINEOFFSET, 157,	/* 290 */
	HB_P_PUSHSYMNEAR, 55,	/* SR_ROLLBACKTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02534 */ HB_P_LINEOFFSET, 160,	/* 293 */
	HB_P_PUSHSYMNEAR, 52,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02541 */ HB_P_LINEOFFSET, 162,	/* 295 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02565 */ HB_P_LINEOFFSET, 163,	/* 296 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02570 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

