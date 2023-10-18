/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SMED400.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISMED\SMED400.PRG /q /oC:\HTI\SISMED\SMED400.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.18 11:23:34 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SMED400.PRG"

HB_FUNC( SMED400 );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( NIVEL );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( APAGA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( SMED480 );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( SMED420 );
HB_FUNC_EXTERN( SMED410 );
HB_FUNC_EXTERN( SMED440 );
HB_FUNC_EXTERN( SMED450 );
HB_FUNC_EXTERN( SMED430 );
HB_FUNC_EXTERN( SMED470 );
HB_FUNC_EXTERN( CON21 );
HB_FUNC_EXTERN( CON22 );
HB_FUNC_EXTERN( CON24 );
HB_FUNC_EXTERN( CON25 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SMED400 )
{ "SMED400", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SMED400 )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( NIVEL )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "APAGA", {HB_FS_PUBLIC}, {HB_FUNCNAME( APAGA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "SMED480", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED480 )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "SMED420", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED420 )}, NULL },
{ "SMED410", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED410 )}, NULL },
{ "SMED440", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED440 )}, NULL },
{ "SMED450", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED450 )}, NULL },
{ "SMED430", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED430 )}, NULL },
{ "SMED470", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMED470 )}, NULL },
{ "CON21", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON21 )}, NULL },
{ "CON22", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON22 )}, NULL },
{ "CON24", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON24 )}, NULL },
{ "CON25", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON25 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SMED400 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SMED400
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SMED400 = hb_vm_SymbolInit_SMED400;
   #pragma data_seg()
#endif

HB_FUNC( SMED400 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'M', 'E', 'D', '4', '0', '0', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_LOCALNEARSETINT, 3, 5, 0,	/* LCI 5*/
/* 00024 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 25, 0,	/* CCI 25*/
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 17, 0,	/* LBA 17*/
/* 00036 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_LOCALNEARSETINT, 6, 48, 0,	/* CBA 48*/
/* 00042 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 7, 8, 0,	/* LI 8*/
/* 00048 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_LOCALNEARSETINT, 8, 6, 0,	/* CI 6*/
/* 00054 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_LOCALNEARSETINT, 9, 20, 0,	/* LB 20*/
/* 00060 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_LOCALNEARSETINT, 10, 77, 0,	/* CB 77*/
/* 00066 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 11,	/* TELA */
/* 00081 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00087 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 00144) */
/* 00104 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00139 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 4,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00153 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 5,	/* APAGA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00167 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00176 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 7,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00191 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 1,
/* 00200 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'a', 'i', 'x', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'C', 'A', 'I', 'X', 'A', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00291 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'*', '*', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00374 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'*', '*', ' ', 'M', 'a', 'r', 'c', 'a', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 's', ' ', 'e', ' ', 'E', 'x', 'c', 'a', 'i', 'x', 'e', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00468 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'M', 'a', 'r', 'c', 'a', ' ', 'F', 'e', 'r', 'i', 'a', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'*', '*', ' ', 'M', 'a', 'r', 'c', 'a', ' ', 'o', 's', ' ', 'F', 'e', 'r', 'i', 'a', 'd', 'o', 's', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00554 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'*', '*', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'o', 's', ' ', 'A', 'g', 'e', 'n', 'd', 'a', ' ', 'C', 'o', 'm', 'p', 'r', 'o', 'm', 'i', 's', 's', 'o', ' ', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00663 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'i', 'r', 'u', 'r', 'g', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00762 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00861 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'B', 'a', 'i', 'x', 'a', 's', ' ', 'D', 'o', 'c', '.', 'A', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'*', '*', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'P', 'a', 'g', 'a', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00958 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01058 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'B', 'a', 'i', 'x', 'a', 's', ' ', 'D', 'o', 'c', '.', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'o', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01157 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 9,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01171 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 10,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 11,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01198) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01203) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 01216 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01270) */
/* 01228 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 13,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 11,	/* TELA */
	HB_P_DOSHORT, 5,
/* 01243 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 14,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 01265 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01270 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01343) */
/* 01278 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01333) */
/* 01295 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 94, 251,	/* -1186 (abs: 00144) */
/* 01333 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 17,	/* SMED480 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 84, 251,	/* -1196 (abs: 00144) */
/* 01343 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 198, 1,	/* 454 (abs: 01804) */
/* 01353 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 18,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'<', 'I', '>', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '-', ' ', '<', 'C', '>', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01404 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01413 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 7,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LI */
	HB_P_PUSHLOCALNEAR, 8,	/* CI */
	HB_P_PUSHLOCALNEAR, 9,	/* LB */
	HB_P_PUSHLOCALNEAR, 10,	/* CB */
	HB_P_DOSHORT, 4,
/* 01428 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01436 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* CI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'o', 'm', 'p', 'r', 'o', 'm', 'i', 's', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01481 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 8,	/* CI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'm', 'p', 'r', 'o', 'm', 'i', 's', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01518 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01527 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* CI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 01554 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSYMNEAR, 6,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01562 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 22,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01570 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01600) */
/* 01582 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 13,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 11,	/* TELA */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 32, 3,	/* 800 (abs: 02397) */
/* 01600 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 23,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01636) */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 23,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'i', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 01700) */
/* 01638 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01693) */
/* 01655 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 175, 254,	/* -337 (abs: 01353) */
/* 01693 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* SMED420 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01700 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 23,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 01736) */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 23,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'c', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 129, 254,	/* -383 (abs: 01353) */
/* 01739 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01794) */
/* 01756 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 74, 254,	/* -438 (abs: 01353) */
/* 01794 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 25,	/* SMED410 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 64, 254,	/* -448 (abs: 01353) */
/* 01804 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01878) */
/* 01813 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01868) */
/* 01830 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 71, 249,	/* -1721 (abs: 00144) */
/* 01868 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHSYMNEAR, 26,	/* SMED440 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 61, 249,	/* -1731 (abs: 00144) */
/* 01878 */ HB_P_LINEOFFSET, 95,	/* 103 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 01952) */
/* 01887 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01942) */
/* 01904 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 253, 248,	/* -1795 (abs: 00144) */
/* 01942 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSYMNEAR, 27,	/* SMED450 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 243, 248,	/* -1805 (abs: 00144) */
/* 01952 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 02026) */
/* 01961 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02016) */
/* 01978 */ HB_P_LINEOFFSET, 103,	/* 111 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 248,	/* -1869 (abs: 00144) */
/* 02016 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHSYMNEAR, 28,	/* SMED430 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 169, 248,	/* -1879 (abs: 00144) */
/* 02026 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 02100) */
/* 02035 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02090) */
/* 02052 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 105, 248,	/* -1943 (abs: 00144) */
/* 02090 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHSYMNEAR, 29,	/* SMED470 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 95, 248,	/* -1953 (abs: 00144) */
/* 02100 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 02174) */
/* 02109 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02164) */
/* 02126 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 31, 248,	/* -2017 (abs: 00144) */
/* 02164 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHSYMNEAR, 30,	/* CON21 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 21, 248,	/* -2027 (abs: 00144) */
/* 02174 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 02248) */
/* 02183 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02238) */
/* 02200 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 213, 247,	/* -2091 (abs: 00144) */
/* 02238 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHSYMNEAR, 31,	/* CON22 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 203, 247,	/* -2101 (abs: 00144) */
/* 02248 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 02322) */
/* 02257 */ HB_P_LINEOFFSET, 126,	/* 134 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02312) */
/* 02274 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 139, 247,	/* -2165 (abs: 00144) */
/* 02312 */ HB_P_LINEOFFSET, 130,	/* 138 */
	HB_P_PUSHSYMNEAR, 32,	/* CON24 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 129, 247,	/* -2175 (abs: 00144) */
/* 02322 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 247,	/* -2185 (abs: 00144) */
/* 02332 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 02387) */
/* 02349 */ HB_P_LINEOFFSET, 133,	/* 141 */
	HB_P_PUSHSYMNEAR, 3,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'c', 'e', 's', 's', 'o', ' ', 'n', 'a', 'o', ' ', 'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 64, 247,	/* -2240 (abs: 00144) */
/* 02387 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_PUSHSYMNEAR, 33,	/* CON25 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 54, 247,	/* -2250 (abs: 00144) */
	HB_P_JUMP, 51, 247,	/* -2253 (abs: 00144) */
	HB_P_ENDPROC
/* 02401 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

