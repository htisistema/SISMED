@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 14/06/2023 @ 08:58:28
REM Compilador .: HTISISTEMAS
REM Destino ....: C:\HTI\SISMED\SISMED.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=C:\Borland\BCC55\Bin;C:\Borland\BCC55\Include;C:\Borland\BCC55\Lib;C:\xHarbour997\bin;C:\xHarbour997\include;C:\xHarbour997\lib;C:\Program Files\ImageMagick-7.1.0-Q16-HDRI;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Windows\System32\OpenSSH\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\Scripts\;C:\Users\Helio\AppData\Local\Programs\Python\Python39\;C:\Users\Helio\AppData\Local\Microsoft\WindowsApps;;C:\Program Files\JetBrains\PyCharm Community Edition 2022.2.3\bin;
 SET INCLUDE=C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;C:\HTI\SISMED\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;
 SET LIB=C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;C:\HTI\SISMED\lib;C:\HTI\SISMED;
 SET OBJ=;C:\HTI\SISMED;

REM - XHarbour.xCompiler.prg(97) @ 08:58:28:471
ECHO .ÿ
ECHO * (001/353) Compilando ATU_SMED.PRG
 harbour.exe ".\ATU_SMED.PRG" /q /o".\ATU_SMED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:28:544
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\ATU_SMED.obj" >> "b32.bc"
 echo ".\ATU_SMED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:28:544
ECHO .ÿ
ECHO * (002/353) Compilando ATU_SMED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:28:609
ECHO .ÿ
ECHO * (003/353) Compilando CON21.PRG
 harbour.exe ".\CON21.PRG" /q /o".\CON21.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:28:679
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON21.obj" >> "b32.bc"
 echo ".\CON21.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:28:679
ECHO .ÿ
ECHO * (004/353) Compilando CON21.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:28:741
ECHO .ÿ
ECHO * (005/353) Compilando CON22.PRG
 harbour.exe ".\CON22.PRG" /q /o".\CON22.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:28:819
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON22.obj" >> "b32.bc"
 echo ".\CON22.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:28:819
ECHO .ÿ
ECHO * (006/353) Compilando CON22.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:28:881
ECHO .ÿ
ECHO * (007/353) Compilando CON24.PRG
 harbour.exe ".\CON24.PRG" /q /o".\CON24.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:28:953
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON24.obj" >> "b32.bc"
 echo ".\CON24.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:28:953
ECHO .ÿ
ECHO * (008/353) Compilando CON24.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:015
ECHO .ÿ
ECHO * (009/353) Compilando CON25.PRG
 harbour.exe ".\CON25.PRG" /q /o".\CON25.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:082
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON25.obj" >> "b32.bc"
 echo ".\CON25.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:082
ECHO .ÿ
ECHO * (010/353) Compilando CON25.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:144
ECHO .ÿ
ECHO * (011/353) Compilando CON41.PRG
 harbour.exe ".\CON41.PRG" /q /o".\CON41.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:212
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON41.obj" >> "b32.bc"
 echo ".\CON41.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:212
ECHO .ÿ
ECHO * (012/353) Compilando CON41.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:275
ECHO .ÿ
ECHO * (013/353) Compilando CON42.PRG
 harbour.exe ".\CON42.PRG" /q /o".\CON42.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:347
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON42.obj" >> "b32.bc"
 echo ".\CON42.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:347
ECHO .ÿ
ECHO * (014/353) Compilando CON42.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:414
ECHO .ÿ
ECHO * (015/353) Compilando CON211.PRG
 harbour.exe ".\CON211.PRG" /q /o".\CON211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:492
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON211.obj" >> "b32.bc"
 echo ".\CON211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:492
ECHO .ÿ
ECHO * (016/353) Compilando CON211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:556
ECHO .ÿ
ECHO * (017/353) Compilando CON212.PRG
 harbour.exe ".\CON212.PRG" /q /o".\CON212.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:636
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON212.obj" >> "b32.bc"
 echo ".\CON212.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:636
ECHO .ÿ
ECHO * (018/353) Compilando CON212.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:700
ECHO .ÿ
ECHO * (019/353) Compilando CON213.PRG
 harbour.exe ".\CON213.PRG" /q /o".\CON213.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:768
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON213.obj" >> "b32.bc"
 echo ".\CON213.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:768
ECHO .ÿ
ECHO * (020/353) Compilando CON213.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:830
ECHO .ÿ
ECHO * (021/353) Compilando CON214.PRG
 harbour.exe ".\CON214.PRG" /q /o".\CON214.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:29:905
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON214.obj" >> "b32.bc"
 echo ".\CON214.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:29:905
ECHO .ÿ
ECHO * (022/353) Compilando CON214.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:29:969
ECHO .ÿ
ECHO * (023/353) Compilando CON241.PRG
 harbour.exe ".\CON241.PRG" /q /o".\CON241.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:30:057
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON241.obj" >> "b32.bc"
 echo ".\CON241.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:30:057
ECHO .ÿ
ECHO * (024/353) Compilando CON241.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:30:139
ECHO .ÿ
ECHO * (025/353) Compilando CON243.PRG
 harbour.exe ".\CON243.PRG" /q /o".\CON243.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:30:213
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON243.obj" >> "b32.bc"
 echo ".\CON243.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:30:213
ECHO .ÿ
ECHO * (026/353) Compilando CON243.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:30:276
ECHO .ÿ
ECHO * (027/353) Compilando CON244.PRG
 harbour.exe ".\CON244.PRG" /q /o".\CON244.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:30:374
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON244.obj" >> "b32.bc"
 echo ".\CON244.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:30:374
ECHO .ÿ
ECHO * (028/353) Compilando CON244.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:30:446
ECHO .ÿ
ECHO * (029/353) Compilando CON251.PRG
 harbour.exe ".\CON251.PRG" /q /o".\CON251.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:30:776
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON251.obj" >> "b32.bc"
 echo ".\CON251.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:30:776
ECHO .ÿ
ECHO * (030/353) Compilando CON251.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:30:847
ECHO .ÿ
ECHO * (031/353) Compilando CON252.PRG
 harbour.exe ".\CON252.PRG" /q /o".\CON252.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:30:929
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON252.obj" >> "b32.bc"
 echo ".\CON252.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:30:929
ECHO .ÿ
ECHO * (032/353) Compilando CON252.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:30:993
ECHO .ÿ
ECHO * (033/353) Compilando CON253.PRG
 harbour.exe ".\CON253.PRG" /q /o".\CON253.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:31:075
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON253.obj" >> "b32.bc"
 echo ".\CON253.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:31:075
ECHO .ÿ
ECHO * (034/353) Compilando CON253.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:31:140
ECHO .ÿ
ECHO * (035/353) Compilando CON411.PRG
 harbour.exe ".\CON411.PRG" /q /o".\CON411.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:31:211
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON411.obj" >> "b32.bc"
 echo ".\CON411.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:31:211
ECHO .ÿ
ECHO * (036/353) Compilando CON411.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:31:274
ECHO .ÿ
ECHO * (037/353) Compilando CON413.PRG
 harbour.exe ".\CON413.PRG" /q /o".\CON413.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:31:348
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON413.obj" >> "b32.bc"
 echo ".\CON413.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:31:348
ECHO .ÿ
ECHO * (038/353) Compilando CON413.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:31:414
ECHO .ÿ
ECHO * (039/353) Compilando CON414.PRG
 harbour.exe ".\CON414.PRG" /q /o".\CON414.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:31:843
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON414.obj" >> "b32.bc"
 echo ".\CON414.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:31:843
ECHO .ÿ
ECHO * (040/353) Compilando CON414.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:31:909
ECHO .ÿ
ECHO * (041/353) Compilando CON416.PRG
 harbour.exe ".\CON416.PRG" /q /o".\CON416.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:31:980
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON416.obj" >> "b32.bc"
 echo ".\CON416.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:31:980
ECHO .ÿ
ECHO * (042/353) Compilando CON416.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:041
ECHO .ÿ
ECHO * (043/353) Compilando CON418.PRG
 harbour.exe ".\CON418.PRG" /q /o".\CON418.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:110
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON418.obj" >> "b32.bc"
 echo ".\CON418.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:110
ECHO .ÿ
ECHO * (044/353) Compilando CON418.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:172
ECHO .ÿ
ECHO * (045/353) Compilando CON419.PRG
 harbour.exe ".\CON419.PRG" /q /o".\CON419.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:245
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON419.obj" >> "b32.bc"
 echo ".\CON419.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:245
ECHO .ÿ
ECHO * (046/353) Compilando CON419.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:308
ECHO .ÿ
ECHO * (047/353) Compilando CON420.PRG
 harbour.exe ".\CON420.PRG" /q /o".\CON420.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:387
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON420.obj" >> "b32.bc"
 echo ".\CON420.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:387
ECHO .ÿ
ECHO * (048/353) Compilando CON420.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:451
ECHO .ÿ
ECHO * (049/353) Compilando CON421.PRG
 harbour.exe ".\CON421.PRG" /q /o".\CON421.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:525
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON421.obj" >> "b32.bc"
 echo ".\CON421.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:525
ECHO .ÿ
ECHO * (050/353) Compilando CON421.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:598
ECHO .ÿ
ECHO * (051/353) Compilando CON423.PRG
 harbour.exe ".\CON423.PRG" /q /o".\CON423.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:781
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON423.obj" >> "b32.bc"
 echo ".\CON423.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:781
ECHO .ÿ
ECHO * (052/353) Compilando CON423.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:32:880
ECHO .ÿ
ECHO * (053/353) Compilando CON424.PRG
 harbour.exe ".\CON424.PRG" /q /o".\CON424.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:32:976
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON424.obj" >> "b32.bc"
 echo ".\CON424.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:32:976
ECHO .ÿ
ECHO * (054/353) Compilando CON424.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:041
ECHO .ÿ
ECHO * (055/353) Compilando CON426.PRG
 harbour.exe ".\CON426.PRG" /q /o".\CON426.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:109
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON426.obj" >> "b32.bc"
 echo ".\CON426.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:109
ECHO .ÿ
ECHO * (056/353) Compilando CON426.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:185
ECHO .ÿ
ECHO * (057/353) Compilando CON428.PRG
 harbour.exe ".\CON428.PRG" /q /o".\CON428.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:256
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON428.obj" >> "b32.bc"
 echo ".\CON428.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:256
ECHO .ÿ
ECHO * (058/353) Compilando CON428.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:322
ECHO .ÿ
ECHO * (059/353) Compilando CON429.PRG
 harbour.exe ".\CON429.PRG" /q /o".\CON429.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:383
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON429.obj" >> "b32.bc"
 echo ".\CON429.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:383
ECHO .ÿ
ECHO * (060/353) Compilando CON429.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:444
ECHO .ÿ
ECHO * (061/353) Compilando errorsys.prg
 harbour.exe ".\errorsys.prg" /q /o".\errorsys.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:502
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\errorsys.obj" >> "b32.bc"
 echo ".\errorsys.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:502
ECHO .ÿ
ECHO * (062/353) Compilando errorsys.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:564
ECHO .ÿ
ECHO * (063/353) Compilando HRBFUN.PRG
 harbour.exe ".\HRBFUN.PRG" /q /o".\HRBFUN.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:825
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\HRBFUN.obj" >> "b32.bc"
 echo ".\HRBFUN.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:825
ECHO .ÿ
ECHO * (064/353) Compilando HRBFUN.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:33:899
ECHO .ÿ
ECHO * (065/353) Compilando SAC63.PRG
 harbour.exe ".\SAC63.PRG" /q /o".\SAC63.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:33:957
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC63.obj" >> "b32.bc"
 echo ".\SAC63.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:33:957
ECHO .ÿ
ECHO * (066/353) Compilando SAC63.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:019
ECHO .ÿ
ECHO * (067/353) Compilando SAC130.PRG
 harbour.exe ".\SAC130.PRG" /q /o".\SAC130.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:088
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC130.obj" >> "b32.bc"
 echo ".\SAC130.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:088
ECHO .ÿ
ECHO * (068/353) Compilando SAC130.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:155
ECHO .ÿ
ECHO * (069/353) Compilando SAC140.PRG
 harbour.exe ".\SAC140.PRG" /q /o".\SAC140.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:216
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC140.obj" >> "b32.bc"
 echo ".\SAC140.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:216
ECHO .ÿ
ECHO * (070/353) Compilando SAC140.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:279
ECHO .ÿ
ECHO * (071/353) Compilando SAC141.PRG
 harbour.exe ".\SAC141.PRG" /q /o".\SAC141.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:346
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC141.obj" >> "b32.bc"
 echo ".\SAC141.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:346
ECHO .ÿ
ECHO * (072/353) Compilando SAC141.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:408
ECHO .ÿ
ECHO * (073/353) Compilando SAC142.PRG
 harbour.exe ".\SAC142.PRG" /q /o".\SAC142.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:465
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC142.obj" >> "b32.bc"
 echo ".\SAC142.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:465
ECHO .ÿ
ECHO * (074/353) Compilando SAC142.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:526
ECHO .ÿ
ECHO * (075/353) Compilando SACCEP.PRG
 harbour.exe ".\SACCEP.PRG" /q /o".\SACCEP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:593
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SACCEP.obj" >> "b32.bc"
 echo ".\SACCEP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:593
ECHO .ÿ
ECHO * (076/353) Compilando SACCEP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:656
ECHO .ÿ
ECHO * (077/353) Compilando SACDESP.PRG
 harbour.exe ".\SACDESP.PRG" /q /o".\SACDESP.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:720
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SACDESP.obj" >> "b32.bc"
 echo ".\SACDESP.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:720
ECHO .ÿ
ECHO * (078/353) Compilando SACDESP.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:783
ECHO .ÿ
ECHO * (079/353) Compilando SACLER.PRG
 harbour.exe ".\SACLER.PRG" /q /o".\SACLER.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:34:851
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SACLER.obj" >> "b32.bc"
 echo ".\SACLER.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:34:851
ECHO .ÿ
ECHO * (080/353) Compilando SACLER.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:34:913
ECHO .ÿ
ECHO * (081/353) Compilando SISMED.PRG
 harbour.exe ".\SISMED.PRG" /q /o".\SISMED.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:039
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SISMED.obj" >> "b32.bc"
 echo ".\SISMED.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:039
ECHO .ÿ
ECHO * (082/353) Compilando SISMED.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:106
ECHO .ÿ
ECHO * (083/353) Compilando SMED00.PRG
 harbour.exe ".\SMED00.PRG" /q /o".\SMED00.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:256
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED00.obj" >> "b32.bc"
 echo ".\SMED00.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:257
ECHO .ÿ
ECHO * (084/353) Compilando SMED00.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:320
ECHO .ÿ
ECHO * (085/353) Compilando SMED2DES.PRG
 harbour.exe ".\SMED2DES.PRG" /q /o".\SMED2DES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:380
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED2DES.obj" >> "b32.bc"
 echo ".\SMED2DES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:380
ECHO .ÿ
ECHO * (086/353) Compilando SMED2DES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:444
ECHO .ÿ
ECHO * (087/353) Compilando SMED2P.PRG
 harbour.exe ".\SMED2P.PRG" /q /o".\SMED2P.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:506
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED2P.obj" >> "b32.bc"
 echo ".\SMED2P.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:506
ECHO .ÿ
ECHO * (088/353) Compilando SMED2P.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:569
ECHO .ÿ
ECHO * (089/353) Compilando SMED2P1.PRG
 harbour.exe ".\SMED2P1.PRG" /q /o".\SMED2P1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:645
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED2P1.obj" >> "b32.bc"
 echo ".\SMED2P1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:645
ECHO .ÿ
ECHO * (090/353) Compilando SMED2P1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:715
ECHO .ÿ
ECHO * (091/353) Compilando SMED3DES.PRG
 harbour.exe ".\SMED3DES.PRG" /q /o".\SMED3DES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:788
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED3DES.obj" >> "b32.bc"
 echo ".\SMED3DES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:788
ECHO .ÿ
ECHO * (092/353) Compilando SMED3DES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:856
ECHO .ÿ
ECHO * (093/353) Compilando SMED5CNV.PRG
 harbour.exe ".\SMED5CNV.PRG" /q /o".\SMED5CNV.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:35:915
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5CNV.obj" >> "b32.bc"
 echo ".\SMED5CNV.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:35:915
ECHO .ÿ
ECHO * (094/353) Compilando SMED5CNV.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:35:977
ECHO .ÿ
ECHO * (095/353) Compilando SMED5COL.PRG
 harbour.exe ".\SMED5COL.PRG" /q /o".\SMED5COL.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:041
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5COL.obj" >> "b32.bc"
 echo ".\SMED5COL.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:041
ECHO .ÿ
ECHO * (096/353) Compilando SMED5COL.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:106
ECHO .ÿ
ECHO * (097/353) Compilando SMED5CON.PRG
 harbour.exe ".\SMED5CON.PRG" /q /o".\SMED5CON.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:174
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5CON.obj" >> "b32.bc"
 echo ".\SMED5CON.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:174
ECHO .ÿ
ECHO * (098/353) Compilando SMED5CON.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:235
ECHO .ÿ
ECHO * (099/353) Compilando SMED5DAT.PRG
 harbour.exe ".\SMED5DAT.PRG" /q /o".\SMED5DAT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:303
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5DAT.obj" >> "b32.bc"
 echo ".\SMED5DAT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:303
ECHO .ÿ
ECHO * (100/353) Compilando SMED5DAT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:364
ECHO .ÿ
ECHO * (101/353) Compilando SMED5DEC.PRG
 harbour.exe ".\SMED5DEC.PRG" /q /o".\SMED5DEC.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:428
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5DEC.obj" >> "b32.bc"
 echo ".\SMED5DEC.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:428
ECHO .ÿ
ECHO * (102/353) Compilando SMED5DEC.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:489
ECHO .ÿ
ECHO * (103/353) Compilando SMED5DES.PRG
 harbour.exe ".\SMED5DES.PRG" /q /o".\SMED5DES.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:552
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5DES.obj" >> "b32.bc"
 echo ".\SMED5DES.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:552
ECHO .ÿ
ECHO * (104/353) Compilando SMED5DES.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:617
ECHO .ÿ
ECHO * (105/353) Compilando SMED5E21.PRG
 harbour.exe ".\SMED5E21.PRG" /q /o".\SMED5E21.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:36:675
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5E21.obj" >> "b32.bc"
 echo ".\SMED5E21.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:36:675
ECHO .ÿ
ECHO * (106/353) Compilando SMED5E21.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:36:737
ECHO .ÿ
ECHO * (107/353) Compilando SMED5E22.PRG
 harbour.exe ".\SMED5E22.PRG" /q /o".\SMED5E22.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:022
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5E22.obj" >> "b32.bc"
 echo ".\SMED5E22.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:022
ECHO .ÿ
ECHO * (108/353) Compilando SMED5E22.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:234
ECHO .ÿ
ECHO * (109/353) Compilando SMED5EST.PRG
 harbour.exe ".\SMED5EST.PRG" /q /o".\SMED5EST.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:295
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5EST.obj" >> "b32.bc"
 echo ".\SMED5EST.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:295
ECHO .ÿ
ECHO * (110/353) Compilando SMED5EST.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:356
ECHO .ÿ
ECHO * (111/353) Compilando SMED5ET1.PRG
 harbour.exe ".\SMED5ET1.PRG" /q /o".\SMED5ET1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:420
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5ET1.obj" >> "b32.bc"
 echo ".\SMED5ET1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:420
ECHO .ÿ
ECHO * (112/353) Compilando SMED5ET1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:483
ECHO .ÿ
ECHO * (113/353) Compilando SMED5ET2.PRG
 harbour.exe ".\SMED5ET2.PRG" /q /o".\SMED5ET2.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:538
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5ET2.obj" >> "b32.bc"
 echo ".\SMED5ET2.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:538
ECHO .ÿ
ECHO * (114/353) Compilando SMED5ET2.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:600
ECHO .ÿ
ECHO * (115/353) Compilando SMED5ETQ.PRG
 harbour.exe ".\SMED5ETQ.PRG" /q /o".\SMED5ETQ.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:662
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5ETQ.obj" >> "b32.bc"
 echo ".\SMED5ETQ.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:662
ECHO .ÿ
ECHO * (116/353) Compilando SMED5ETQ.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:722
ECHO .ÿ
ECHO * (117/353) Compilando SMED5FRM.PRG
 harbour.exe ".\SMED5FRM.PRG" /q /o".\SMED5FRM.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:37:789
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5FRM.obj" >> "b32.bc"
 echo ".\SMED5FRM.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:37:790
ECHO .ÿ
ECHO * (118/353) Compilando SMED5FRM.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:37:853
ECHO .ÿ
ECHO * (119/353) Compilando SMED5PAT.PRG
 harbour.exe ".\SMED5PAT.PRG" /q /o".\SMED5PAT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:109
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5PAT.obj" >> "b32.bc"
 echo ".\SMED5PAT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:109
ECHO .ÿ
ECHO * (120/353) Compilando SMED5PAT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:174
ECHO .ÿ
ECHO * (121/353) Compilando SMED5VID.PRG
 harbour.exe ".\SMED5VID.PRG" /q /o".\SMED5VID.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:251
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5VID.obj" >> "b32.bc"
 echo ".\SMED5VID.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:251
ECHO .ÿ
ECHO * (122/353) Compilando SMED5VID.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:319
ECHO .ÿ
ECHO * (123/353) Compilando SMED30.PRG
 harbour.exe ".\SMED30.PRG" /q /o".\SMED30.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:404
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED30.obj" >> "b32.bc"
 echo ".\SMED30.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:404
ECHO .ÿ
ECHO * (124/353) Compilando SMED30.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:473
ECHO .ÿ
ECHO * (125/353) Compilando SMED211.PRG
 harbour.exe ".\SMED211.PRG" /q /o".\SMED211.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:547
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED211.obj" >> "b32.bc"
 echo ".\SMED211.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:547
ECHO .ÿ
ECHO * (126/353) Compilando SMED211.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:611
ECHO .ÿ
ECHO * (127/353) Compilando SMED212.PRG
 harbour.exe ".\SMED212.PRG" /q /o".\SMED212.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:679
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED212.obj" >> "b32.bc"
 echo ".\SMED212.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:679
ECHO .ÿ
ECHO * (128/353) Compilando SMED212.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:741
ECHO .ÿ
ECHO * (129/353) Compilando SMED213.PRG
 harbour.exe ".\SMED213.PRG" /q /o".\SMED213.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:797
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED213.obj" >> "b32.bc"
 echo ".\SMED213.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:797
ECHO .ÿ
ECHO * (130/353) Compilando SMED213.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:858
ECHO .ÿ
ECHO * (131/353) Compilando SMED214.PRG
 harbour.exe ".\SMED214.PRG" /q /o".\SMED214.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:38:923
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED214.obj" >> "b32.bc"
 echo ".\SMED214.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:38:923
ECHO .ÿ
ECHO * (132/353) Compilando SMED214.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:38:984
ECHO .ÿ
ECHO * (133/353) Compilando SMED220.PRG
 harbour.exe ".\SMED220.PRG" /q /o".\SMED220.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:049
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED220.obj" >> "b32.bc"
 echo ".\SMED220.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:049
ECHO .ÿ
ECHO * (134/353) Compilando SMED220.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:114
ECHO .ÿ
ECHO * (135/353) Compilando SMED221.PRG
 harbour.exe ".\SMED221.PRG" /q /o".\SMED221.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:170
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED221.obj" >> "b32.bc"
 echo ".\SMED221.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:170
ECHO .ÿ
ECHO * (136/353) Compilando SMED221.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:232
ECHO .ÿ
ECHO * (137/353) Compilando SMED222.PRG
 harbour.exe ".\SMED222.PRG" /q /o".\SMED222.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:289
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED222.obj" >> "b32.bc"
 echo ".\SMED222.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:289
ECHO .ÿ
ECHO * (138/353) Compilando SMED222.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:355
ECHO .ÿ
ECHO * (139/353) Compilando SMED223.PRG
 harbour.exe ".\SMED223.PRG" /q /o".\SMED223.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:419
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED223.obj" >> "b32.bc"
 echo ".\SMED223.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:419
ECHO .ÿ
ECHO * (140/353) Compilando SMED223.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:481
ECHO .ÿ
ECHO * (141/353) Compilando SMED230.PRG
 harbour.exe ".\SMED230.PRG" /q /o".\SMED230.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:546
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED230.obj" >> "b32.bc"
 echo ".\SMED230.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:546
ECHO .ÿ
ECHO * (142/353) Compilando SMED230.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:609
ECHO .ÿ
ECHO * (143/353) Compilando SMED231.PRG
 harbour.exe ".\SMED231.PRG" /q /o".\SMED231.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:666
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED231.obj" >> "b32.bc"
 echo ".\SMED231.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:666
ECHO .ÿ
ECHO * (144/353) Compilando SMED231.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:728
ECHO .ÿ
ECHO * (145/353) Compilando SMED232.PRG
 harbour.exe ".\SMED232.PRG" /q /o".\SMED232.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:794
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED232.obj" >> "b32.bc"
 echo ".\SMED232.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:794
ECHO .ÿ
ECHO * (146/353) Compilando SMED232.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:856
ECHO .ÿ
ECHO * (147/353) Compilando SMED233.PRG
 harbour.exe ".\SMED233.PRG" /q /o".\SMED233.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:39:910
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED233.obj" >> "b32.bc"
 echo ".\SMED233.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:39:910
ECHO .ÿ
ECHO * (148/353) Compilando SMED233.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:39:972
ECHO .ÿ
ECHO * (149/353) Compilando SMED240.PRG
 harbour.exe ".\SMED240.PRG" /q /o".\SMED240.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:031
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED240.obj" >> "b32.bc"
 echo ".\SMED240.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:031
ECHO .ÿ
ECHO * (150/353) Compilando SMED240.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:095
ECHO .ÿ
ECHO * (151/353) Compilando SMED241.PRG
 harbour.exe ".\SMED241.PRG" /q /o".\SMED241.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:160
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED241.obj" >> "b32.bc"
 echo ".\SMED241.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:161
ECHO .ÿ
ECHO * (152/353) Compilando SMED241.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:232
ECHO .ÿ
ECHO * (153/353) Compilando SMED242.PRG
 harbour.exe ".\SMED242.PRG" /q /o".\SMED242.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:288
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED242.obj" >> "b32.bc"
 echo ".\SMED242.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:288
ECHO .ÿ
ECHO * (154/353) Compilando SMED242.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:350
ECHO .ÿ
ECHO * (155/353) Compilando SMED243.PRG
 harbour.exe ".\SMED243.PRG" /q /o".\SMED243.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:418
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED243.obj" >> "b32.bc"
 echo ".\SMED243.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:418
ECHO .ÿ
ECHO * (156/353) Compilando SMED243.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:481
ECHO .ÿ
ECHO * (157/353) Compilando SMED250.PRG
 harbour.exe ".\SMED250.PRG" /q /o".\SMED250.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:536
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED250.obj" >> "b32.bc"
 echo ".\SMED250.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:537
ECHO .ÿ
ECHO * (158/353) Compilando SMED250.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:600
ECHO .ÿ
ECHO * (159/353) Compilando SMED251.PRG
 harbour.exe ".\SMED251.PRG" /q /o".\SMED251.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:656
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED251.obj" >> "b32.bc"
 echo ".\SMED251.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:656
ECHO .ÿ
ECHO * (160/353) Compilando SMED251.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:717
ECHO .ÿ
ECHO * (161/353) Compilando SMED252.PRG
 harbour.exe ".\SMED252.PRG" /q /o".\SMED252.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:782
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED252.obj" >> "b32.bc"
 echo ".\SMED252.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:782
ECHO .ÿ
ECHO * (162/353) Compilando SMED252.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:843
ECHO .ÿ
ECHO * (163/353) Compilando SMED253.PRG
 harbour.exe ".\SMED253.PRG" /q /o".\SMED253.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:40:907
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED253.obj" >> "b32.bc"
 echo ".\SMED253.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:40:907
ECHO .ÿ
ECHO * (164/353) Compilando SMED253.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:40:969
ECHO .ÿ
ECHO * (165/353) Compilando SMED260.PRG
 harbour.exe ".\SMED260.PRG" /q /o".\SMED260.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:028
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED260.obj" >> "b32.bc"
 echo ".\SMED260.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:028
ECHO .ÿ
ECHO * (166/353) Compilando SMED260.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:091
ECHO .ÿ
ECHO * (167/353) Compilando SMED261.PRG
 harbour.exe ".\SMED261.PRG" /q /o".\SMED261.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:145
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED261.obj" >> "b32.bc"
 echo ".\SMED261.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:145
ECHO .ÿ
ECHO * (168/353) Compilando SMED261.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:206
ECHO .ÿ
ECHO * (169/353) Compilando SMED262.PRG
 harbour.exe ".\SMED262.PRG" /q /o".\SMED262.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:269
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED262.obj" >> "b32.bc"
 echo ".\SMED262.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:269
ECHO .ÿ
ECHO * (170/353) Compilando SMED262.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:333
ECHO .ÿ
ECHO * (171/353) Compilando SMED263.PRG
 harbour.exe ".\SMED263.PRG" /q /o".\SMED263.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:397
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED263.obj" >> "b32.bc"
 echo ".\SMED263.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:397
ECHO .ÿ
ECHO * (172/353) Compilando SMED263.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:463
ECHO .ÿ
ECHO * (173/353) Compilando SMED270.PRG
 harbour.exe ".\SMED270.PRG" /q /o".\SMED270.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:520
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED270.obj" >> "b32.bc"
 echo ".\SMED270.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:520
ECHO .ÿ
ECHO * (174/353) Compilando SMED270.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:582
ECHO .ÿ
ECHO * (175/353) Compilando SMED271.PRG
 harbour.exe ".\SMED271.PRG" /q /o".\SMED271.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:638
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED271.obj" >> "b32.bc"
 echo ".\SMED271.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:638
ECHO .ÿ
ECHO * (176/353) Compilando SMED271.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:698
ECHO .ÿ
ECHO * (177/353) Compilando SMED272.PRG
 harbour.exe ".\SMED272.PRG" /q /o".\SMED272.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:758
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED272.obj" >> "b32.bc"
 echo ".\SMED272.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:758
ECHO .ÿ
ECHO * (178/353) Compilando SMED272.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:821
ECHO .ÿ
ECHO * (179/353) Compilando SMED273.PRG
 harbour.exe ".\SMED273.PRG" /q /o".\SMED273.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:41:875
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED273.obj" >> "b32.bc"
 echo ".\SMED273.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:41:876
ECHO .ÿ
ECHO * (180/353) Compilando SMED273.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:41:935
ECHO .ÿ
ECHO * (181/353) Compilando SMED280.PRG
 harbour.exe ".\SMED280.PRG" /q /o".\SMED280.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:002
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED280.obj" >> "b32.bc"
 echo ".\SMED280.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:002
ECHO .ÿ
ECHO * (182/353) Compilando SMED280.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:064
ECHO .ÿ
ECHO * (183/353) Compilando SMED290.PRG
 harbour.exe ".\SMED290.PRG" /q /o".\SMED290.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:121
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED290.obj" >> "b32.bc"
 echo ".\SMED290.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:121
ECHO .ÿ
ECHO * (184/353) Compilando SMED290.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:184
ECHO .ÿ
ECHO * (185/353) Compilando SMED311.PRG
 harbour.exe ".\SMED311.PRG" /q /o".\SMED311.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:242
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED311.obj" >> "b32.bc"
 echo ".\SMED311.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:242
ECHO .ÿ
ECHO * (186/353) Compilando SMED311.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:305
ECHO .ÿ
ECHO * (187/353) Compilando SMED312.PRG
 harbour.exe ".\SMED312.PRG" /q /o".\SMED312.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:371
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED312.obj" >> "b32.bc"
 echo ".\SMED312.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:371
ECHO .ÿ
ECHO * (188/353) Compilando SMED312.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:435
ECHO .ÿ
ECHO * (189/353) Compilando SMED313.PRG
 harbour.exe ".\SMED313.PRG" /q /o".\SMED313.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:494
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED313.obj" >> "b32.bc"
 echo ".\SMED313.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:494
ECHO .ÿ
ECHO * (190/353) Compilando SMED313.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:559
ECHO .ÿ
ECHO * (191/353) Compilando SMED320.PRG
 harbour.exe ".\SMED320.PRG" /q /o".\SMED320.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:623
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED320.obj" >> "b32.bc"
 echo ".\SMED320.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:623
ECHO .ÿ
ECHO * (192/353) Compilando SMED320.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:689
ECHO .ÿ
ECHO * (193/353) Compilando SMED330.PRG
 harbour.exe ".\SMED330.PRG" /q /o".\SMED330.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:754
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED330.obj" >> "b32.bc"
 echo ".\SMED330.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:754
ECHO .ÿ
ECHO * (194/353) Compilando SMED330.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:818
ECHO .ÿ
ECHO * (195/353) Compilando SMED340.PRG
 harbour.exe ".\SMED340.PRG" /q /o".\SMED340.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:42:880
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED340.obj" >> "b32.bc"
 echo ".\SMED340.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:42:880
ECHO .ÿ
ECHO * (196/353) Compilando SMED340.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:42:944
ECHO .ÿ
ECHO * (197/353) Compilando SMED350.PRG
 harbour.exe ".\SMED350.PRG" /q /o".\SMED350.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:000
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED350.obj" >> "b32.bc"
 echo ".\SMED350.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:000
ECHO .ÿ
ECHO * (198/353) Compilando SMED350.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:061
ECHO .ÿ
ECHO * (199/353) Compilando SMED360.PRG
 harbour.exe ".\SMED360.PRG" /q /o".\SMED360.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:121
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED360.obj" >> "b32.bc"
 echo ".\SMED360.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:121
ECHO .ÿ
ECHO * (200/353) Compilando SMED360.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:376
ECHO .ÿ
ECHO * (201/353) Compilando SMED370.PRG
 harbour.exe ".\SMED370.PRG" /q /o".\SMED370.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:436
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED370.obj" >> "b32.bc"
 echo ".\SMED370.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:436
ECHO .ÿ
ECHO * (202/353) Compilando SMED370.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:502
ECHO .ÿ
ECHO * (203/353) Compilando SMED400.PRG
 harbour.exe ".\SMED400.PRG" /q /o".\SMED400.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:562
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED400.obj" >> "b32.bc"
 echo ".\SMED400.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:562
ECHO .ÿ
ECHO * (204/353) Compilando SMED400.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:624
ECHO .ÿ
ECHO * (205/353) Compilando SMED410.PRG
 harbour.exe ".\SMED410.PRG" /q /o".\SMED410.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:693
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED410.obj" >> "b32.bc"
 echo ".\SMED410.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:693
ECHO .ÿ
ECHO * (206/353) Compilando SMED410.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:756
ECHO .ÿ
ECHO * (207/353) Compilando SMED420.PRG
 harbour.exe ".\SMED420.PRG" /q /o".\SMED420.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:811
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED420.obj" >> "b32.bc"
 echo ".\SMED420.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:812
ECHO .ÿ
ECHO * (208/353) Compilando SMED420.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:874
ECHO .ÿ
ECHO * (209/353) Compilando SMED430.PRG
 harbour.exe ".\SMED430.PRG" /q /o".\SMED430.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:43:937
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED430.obj" >> "b32.bc"
 echo ".\SMED430.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:43:937
ECHO .ÿ
ECHO * (210/353) Compilando SMED430.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:43:998
ECHO .ÿ
ECHO * (211/353) Compilando SMED431.PRG
 harbour.exe ".\SMED431.PRG" /q /o".\SMED431.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:054
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED431.obj" >> "b32.bc"
 echo ".\SMED431.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:054
ECHO .ÿ
ECHO * (212/353) Compilando SMED431.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:116
ECHO .ÿ
ECHO * (213/353) Compilando SMED432.PRG
 harbour.exe ".\SMED432.PRG" /q /o".\SMED432.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:173
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED432.obj" >> "b32.bc"
 echo ".\SMED432.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:173
ECHO .ÿ
ECHO * (214/353) Compilando SMED432.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:235
ECHO .ÿ
ECHO * (215/353) Compilando SMED440.PRG
 harbour.exe ".\SMED440.PRG" /q /o".\SMED440.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:302
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED440.obj" >> "b32.bc"
 echo ".\SMED440.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:302
ECHO .ÿ
ECHO * (216/353) Compilando SMED440.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:366
ECHO .ÿ
ECHO * (217/353) Compilando SMED442.PRG
 harbour.exe ".\SMED442.PRG" /q /o".\SMED442.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:438
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED442.obj" >> "b32.bc"
 echo ".\SMED442.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:438
ECHO .ÿ
ECHO * (218/353) Compilando SMED442.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:502
ECHO .ÿ
ECHO * (219/353) Compilando SMED450.PRG
 harbour.exe ".\SMED450.PRG" /q /o".\SMED450.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:571
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED450.obj" >> "b32.bc"
 echo ".\SMED450.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:571
ECHO .ÿ
ECHO * (220/353) Compilando SMED450.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:641
ECHO .ÿ
ECHO * (221/353) Compilando SMED460.PRG
 harbour.exe ".\SMED460.PRG" /q /o".\SMED460.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:706
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED460.obj" >> "b32.bc"
 echo ".\SMED460.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:706
ECHO .ÿ
ECHO * (222/353) Compilando SMED460.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:767
ECHO .ÿ
ECHO * (223/353) Compilando SMED461.PRG
 harbour.exe ".\SMED461.PRG" /q /o".\SMED461.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:823
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED461.obj" >> "b32.bc"
 echo ".\SMED461.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:823
ECHO .ÿ
ECHO * (224/353) Compilando SMED461.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:44:885
ECHO .ÿ
ECHO * (225/353) Compilando SMED470.PRG
 harbour.exe ".\SMED470.PRG" /q /o".\SMED470.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:44:939
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED470.obj" >> "b32.bc"
 echo ".\SMED470.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:44:940
ECHO .ÿ
ECHO * (226/353) Compilando SMED470.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:002
ECHO .ÿ
ECHO * (227/353) Compilando SMED471.PRG
 harbour.exe ".\SMED471.PRG" /q /o".\SMED471.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:065
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED471.obj" >> "b32.bc"
 echo ".\SMED471.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:066
ECHO .ÿ
ECHO * (228/353) Compilando SMED471.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:127
ECHO .ÿ
ECHO * (229/353) Compilando SMED472.PRG
 harbour.exe ".\SMED472.PRG" /q /o".\SMED472.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:189
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED472.obj" >> "b32.bc"
 echo ".\SMED472.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:189
ECHO .ÿ
ECHO * (230/353) Compilando SMED472.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:252
ECHO .ÿ
ECHO * (231/353) Compilando SMED473.PRG
 harbour.exe ".\SMED473.PRG" /q /o".\SMED473.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:308
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED473.obj" >> "b32.bc"
 echo ".\SMED473.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:308
ECHO .ÿ
ECHO * (232/353) Compilando SMED473.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:371
ECHO .ÿ
ECHO * (233/353) Compilando SMED480.PRG
 harbour.exe ".\SMED480.PRG" /q /o".\SMED480.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:438
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED480.obj" >> "b32.bc"
 echo ".\SMED480.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:438
ECHO .ÿ
ECHO * (234/353) Compilando SMED480.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:504
ECHO .ÿ
ECHO * (235/353) Compilando SMED481.PRG
 harbour.exe ".\SMED481.PRG" /q /o".\SMED481.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:562
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED481.obj" >> "b32.bc"
 echo ".\SMED481.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:563
ECHO .ÿ
ECHO * (236/353) Compilando SMED481.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:627
ECHO .ÿ
ECHO * (237/353) Compilando SMED500.PRG
 harbour.exe ".\SMED500.PRG" /q /o".\SMED500.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:687
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED500.obj" >> "b32.bc"
 echo ".\SMED500.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:687
ECHO .ÿ
ECHO * (238/353) Compilando SMED500.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:751
ECHO .ÿ
ECHO * (239/353) Compilando SMED510.PRG
 harbour.exe ".\SMED510.PRG" /q /o".\SMED510.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:813
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED510.obj" >> "b32.bc"
 echo ".\SMED510.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:813
ECHO .ÿ
ECHO * (240/353) Compilando SMED510.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:875
ECHO .ÿ
ECHO * (241/353) Compilando SMED520.PRG
 harbour.exe ".\SMED520.PRG" /q /o".\SMED520.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:45:937
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED520.obj" >> "b32.bc"
 echo ".\SMED520.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:45:937
ECHO .ÿ
ECHO * (242/353) Compilando SMED520.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:45:998
ECHO .ÿ
ECHO * (243/353) Compilando SMED530.PRG
 harbour.exe ".\SMED530.PRG" /q /o".\SMED530.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:057
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED530.obj" >> "b32.bc"
 echo ".\SMED530.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:057
ECHO .ÿ
ECHO * (244/353) Compilando SMED530.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:118
ECHO .ÿ
ECHO * (245/353) Compilando SMED540.PRG
 harbour.exe ".\SMED540.PRG" /q /o".\SMED540.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:175
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED540.obj" >> "b32.bc"
 echo ".\SMED540.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:175
ECHO .ÿ
ECHO * (246/353) Compilando SMED540.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:241
ECHO .ÿ
ECHO * (247/353) Compilando SMED541.PRG
 harbour.exe ".\SMED541.PRG" /q /o".\SMED541.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:313
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED541.obj" >> "b32.bc"
 echo ".\SMED541.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:313
ECHO .ÿ
ECHO * (248/353) Compilando SMED541.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:375
ECHO .ÿ
ECHO * (249/353) Compilando SMED542.PRG
 harbour.exe ".\SMED542.PRG" /q /o".\SMED542.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:436
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED542.obj" >> "b32.bc"
 echo ".\SMED542.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:436
ECHO .ÿ
ECHO * (250/353) Compilando SMED542.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:500
ECHO .ÿ
ECHO * (251/353) Compilando SMED550.PRG
 harbour.exe ".\SMED550.PRG" /q /o".\SMED550.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:559
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED550.obj" >> "b32.bc"
 echo ".\SMED550.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:559
ECHO .ÿ
ECHO * (252/353) Compilando SMED550.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:622
ECHO .ÿ
ECHO * (253/353) Compilando SMED560.PRG
 harbour.exe ".\SMED560.PRG" /q /o".\SMED560.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:684
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED560.obj" >> "b32.bc"
 echo ".\SMED560.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:684
ECHO .ÿ
ECHO * (254/353) Compilando SMED560.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:750
ECHO .ÿ
ECHO * (255/353) Compilando SMED570.PRG
 harbour.exe ".\SMED570.PRG" /q /o".\SMED570.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:809
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED570.obj" >> "b32.bc"
 echo ".\SMED570.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:809
ECHO .ÿ
ECHO * (256/353) Compilando SMED570.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:870
ECHO .ÿ
ECHO * (257/353) Compilando SMED580.PRG
 harbour.exe ".\SMED580.PRG" /q /o".\SMED580.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:46:937
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED580.obj" >> "b32.bc"
 echo ".\SMED580.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:46:937
ECHO .ÿ
ECHO * (258/353) Compilando SMED580.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:46:999
ECHO .ÿ
ECHO * (259/353) Compilando SMED590.PRG
 harbour.exe ".\SMED590.PRG" /q /o".\SMED590.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:081
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED590.obj" >> "b32.bc"
 echo ".\SMED590.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:081
ECHO .ÿ
ECHO * (260/353) Compilando SMED590.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:145
ECHO .ÿ
ECHO * (261/353) Compilando SMED591.PRG
 harbour.exe ".\SMED591.PRG" /q /o".\SMED591.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:205
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED591.obj" >> "b32.bc"
 echo ".\SMED591.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:205
ECHO .ÿ
ECHO * (262/353) Compilando SMED591.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:267
ECHO .ÿ
ECHO * (263/353) Compilando SMED592.PRG
 harbour.exe ".\SMED592.PRG" /q /o".\SMED592.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:334
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED592.obj" >> "b32.bc"
 echo ".\SMED592.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:335
ECHO .ÿ
ECHO * (264/353) Compilando SMED592.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:397
ECHO .ÿ
ECHO * (265/353) Compilando SMED593.PRG
 harbour.exe ".\SMED593.PRG" /q /o".\SMED593.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:459
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED593.obj" >> "b32.bc"
 echo ".\SMED593.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:459
ECHO .ÿ
ECHO * (266/353) Compilando SMED593.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:522
ECHO .ÿ
ECHO * (267/353) Compilando SMED594.PRG
 harbour.exe ".\SMED594.PRG" /q /o".\SMED594.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:592
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED594.obj" >> "b32.bc"
 echo ".\SMED594.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:592
ECHO .ÿ
ECHO * (268/353) Compilando SMED594.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:656
ECHO .ÿ
ECHO * (269/353) Compilando SMED595.PRG
 harbour.exe ".\SMED595.PRG" /q /o".\SMED595.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:722
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED595.obj" >> "b32.bc"
 echo ".\SMED595.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:722
ECHO .ÿ
ECHO * (270/353) Compilando SMED595.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:786
ECHO .ÿ
ECHO * (271/353) Compilando SMED700.PRG
 harbour.exe ".\SMED700.PRG" /q /o".\SMED700.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:844
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED700.obj" >> "b32.bc"
 echo ".\SMED700.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:844
ECHO .ÿ
ECHO * (272/353) Compilando SMED700.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:47:906
ECHO .ÿ
ECHO * (273/353) Compilando SMED710.PRG
 harbour.exe ".\SMED710.PRG" /q /o".\SMED710.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:47:971
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED710.obj" >> "b32.bc"
 echo ".\SMED710.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:47:971
ECHO .ÿ
ECHO * (274/353) Compilando SMED710.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:032
ECHO .ÿ
ECHO * (275/353) Compilando SMED720.PRG
 harbour.exe ".\SMED720.PRG" /q /o".\SMED720.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:090
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED720.obj" >> "b32.bc"
 echo ".\SMED720.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:090
ECHO .ÿ
ECHO * (276/353) Compilando SMED720.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:151
ECHO .ÿ
ECHO * (277/353) Compilando SMED900.PRG
 harbour.exe ".\SMED900.PRG" /q /o".\SMED900.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:210
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED900.obj" >> "b32.bc"
 echo ".\SMED900.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:210
ECHO .ÿ
ECHO * (278/353) Compilando SMED900.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:273
ECHO .ÿ
ECHO * (279/353) Compilando SMED5931.PRG
 harbour.exe ".\SMED5931.PRG" /q /o".\SMED5931.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:332
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5931.obj" >> "b32.bc"
 echo ".\SMED5931.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:332
ECHO .ÿ
ECHO * (280/353) Compilando SMED5931.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:394
ECHO .ÿ
ECHO * (281/353) Compilando SMED5932.PRG
 harbour.exe ".\SMED5932.PRG" /q /o".\SMED5932.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:462
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5932.obj" >> "b32.bc"
 echo ".\SMED5932.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:462
ECHO .ÿ
ECHO * (282/353) Compilando SMED5932.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:524
ECHO .ÿ
ECHO * (283/353) Compilando SMED5933.PRG
 harbour.exe ".\SMED5933.PRG" /q /o".\SMED5933.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:585
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5933.obj" >> "b32.bc"
 echo ".\SMED5933.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:585
ECHO .ÿ
ECHO * (284/353) Compilando SMED5933.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:647
ECHO .ÿ
ECHO * (285/353) Compilando SMED5934.PRG
 harbour.exe ".\SMED5934.PRG" /q /o".\SMED5934.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:707
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED5934.obj" >> "b32.bc"
 echo ".\SMED5934.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:708
ECHO .ÿ
ECHO * (286/353) Compilando SMED5934.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:778
ECHO .ÿ
ECHO * (287/353) Compilando SMEDCDX.PRG
 harbour.exe ".\SMEDCDX.PRG" /q /o".\SMEDCDX.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:867
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDCDX.obj" >> "b32.bc"
 echo ".\SMEDCDX.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:867
ECHO .ÿ
ECHO * (288/353) Compilando SMEDCDX.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:48:934
ECHO .ÿ
ECHO * (289/353) Compilando SMEDCONS.PRG
 harbour.exe ".\SMEDCONS.PRG" /q /o".\SMEDCONS.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:48:996
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDCONS.obj" >> "b32.bc"
 echo ".\SMEDCONS.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:48:996
ECHO .ÿ
ECHO * (290/353) Compilando SMEDCONS.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:058
ECHO .ÿ
ECHO * (291/353) Compilando SMEDENDO.PRG
 harbour.exe ".\SMEDENDO.PRG" /q /o".\SMEDENDO.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:131
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDENDO.obj" >> "b32.bc"
 echo ".\SMEDENDO.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:131
ECHO .ÿ
ECHO * (292/353) Compilando SMEDENDO.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:194
ECHO .ÿ
ECHO * (293/353) Compilando SMEDEXA.PRG
 harbour.exe ".\SMEDEXA.PRG" /q /o".\SMEDEXA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:268
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDEXA.obj" >> "b32.bc"
 echo ".\SMEDEXA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:268
ECHO .ÿ
ECHO * (294/353) Compilando SMEDEXA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:333
ECHO .ÿ
ECHO * (295/353) Compilando SMEDGUIA.PRG
 harbour.exe ".\SMEDGUIA.PRG" /q /o".\SMEDGUIA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:402
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDGUIA.obj" >> "b32.bc"
 echo ".\SMEDGUIA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:402
ECHO .ÿ
ECHO * (296/353) Compilando SMEDGUIA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:465
ECHO .ÿ
ECHO * (297/353) Compilando SMEDPNE1.PRG
 harbour.exe ".\SMEDPNE1.PRG" /q /o".\SMEDPNE1.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:535
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDPNE1.obj" >> "b32.bc"
 echo ".\SMEDPNE1.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:536
ECHO .ÿ
ECHO * (298/353) Compilando SMEDPNE1.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:598
ECHO .ÿ
ECHO * (299/353) Compilando SMEDPNEU.PRG
 harbour.exe ".\SMEDPNEU.PRG" /q /o".\SMEDPNEU.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:668
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDPNEU.obj" >> "b32.bc"
 echo ".\SMEDPNEU.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:669
ECHO .ÿ
ECHO * (300/353) Compilando SMEDPNEU.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:733
ECHO .ÿ
ECHO * (301/353) Compilando SMEDRADI.PRG
 harbour.exe ".\SMEDRADI.PRG" /q /o".\SMEDRADI.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:49:791
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDRADI.obj" >> "b32.bc"
 echo ".\SMEDRADI.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:49:791
ECHO .ÿ
ECHO * (302/353) Compilando SMEDRADI.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:49:857
ECHO .ÿ
ECHO * (303/353) Compilando SMEDROT.PRG
 harbour.exe ".\SMEDROT.PRG" /q /o".\SMEDROT.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:50:385
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDROT.obj" >> "b32.bc"
 echo ".\SMEDROT.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:50:385
ECHO .ÿ
ECHO * (304/353) Compilando SMEDROT.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:50:464
ECHO .ÿ
ECHO * (305/353) Compilando SACCFG.PRG
 harbour.exe ".\SACCFG.PRG" /q /o".\SACCFG.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:50:560
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SACCFG.obj" >> "b32.bc"
 echo ".\SACCFG.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:50:560
ECHO .ÿ
ECHO * (306/353) Compilando SACCFG.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:50:623
ECHO .ÿ
ECHO * (307/353) Compilando SMEDDBF.PRG
 harbour.exe ".\SMEDDBF.PRG" /q /o".\SMEDDBF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:50:693
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDDBF.obj" >> "b32.bc"
 echo ".\SMEDDBF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:50:693
ECHO .ÿ
ECHO * (308/353) Compilando SMEDDBF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:50:768
ECHO .ÿ
ECHO * (309/353) Compilando SMED482.PRG
 harbour.exe ".\SMED482.PRG" /q /o".\SMED482.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:50:826
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMED482.obj" >> "b32.bc"
 echo ".\SMED482.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:50:826
ECHO .ÿ
ECHO * (310/353) Compilando SMED482.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:50:886
ECHO .ÿ
ECHO * (311/353) Compilando CON221.PRG
 harbour.exe ".\CON221.PRG" /q /o".\CON221.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:50:951
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON221.obj" >> "b32.bc"
 echo ".\CON221.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:50:951
ECHO .ÿ
ECHO * (312/353) Compilando CON221.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:015
ECHO .ÿ
ECHO * (313/353) Compilando CON2111.PRG
 harbour.exe ".\CON2111.PRG" /q /o".\CON2111.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:073
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON2111.obj" >> "b32.bc"
 echo ".\CON2111.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:073
ECHO .ÿ
ECHO * (314/353) Compilando CON2111.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:136
ECHO .ÿ
ECHO * (315/353) Compilando con215.prg
 harbour.exe ".\con215.prg" /q /o".\con215.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:201
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\con215.obj" >> "b32.bc"
 echo ".\con215.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:201
ECHO .ÿ
ECHO * (316/353) Compilando con215.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:267
ECHO .ÿ
ECHO * (317/353) Compilando CON2511.PRG
 harbour.exe ".\CON2511.PRG" /q /o".\CON2511.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:330
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON2511.obj" >> "b32.bc"
 echo ".\CON2511.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:330
ECHO .ÿ
ECHO * (318/353) Compilando CON2511.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:396
ECHO .ÿ
ECHO * (319/353) Compilando CON425.PRG
 harbour.exe ".\CON425.PRG" /q /o".\CON425.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:465
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON425.obj" >> "b32.bc"
 echo ".\CON425.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:465
ECHO .ÿ
ECHO * (320/353) Compilando CON425.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:531
ECHO .ÿ
ECHO * (321/353) Compilando CON422.PRG
 harbour.exe ".\CON422.PRG" /q /o".\CON422.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:594
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON422.obj" >> "b32.bc"
 echo ".\CON422.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:594
ECHO .ÿ
ECHO * (322/353) Compilando CON422.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:661
ECHO .ÿ
ECHO * (323/353) Compilando CON4201.PRG
 harbour.exe ".\CON4201.PRG" /q /o".\CON4201.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:719
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4201.obj" >> "b32.bc"
 echo ".\CON4201.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:719
ECHO .ÿ
ECHO * (324/353) Compilando CON4201.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:783
ECHO .ÿ
ECHO * (325/353) Compilando CON4202.PRG
 harbour.exe ".\CON4202.PRG" /q /o".\CON4202.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:854
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4202.obj" >> "b32.bc"
 echo ".\CON4202.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:854
ECHO .ÿ
ECHO * (326/353) Compilando CON4202.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:51:917
ECHO .ÿ
ECHO * (327/353) Compilando CON4231.PRG
 harbour.exe ".\CON4231.PRG" /q /o".\CON4231.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:51:983
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4231.obj" >> "b32.bc"
 echo ".\CON4231.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:51:983
ECHO .ÿ
ECHO * (328/353) Compilando CON4231.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:052
ECHO .ÿ
ECHO * (329/353) Compilando CON427.PRG
 harbour.exe ".\CON427.PRG" /q /o".\CON427.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:121
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON427.obj" >> "b32.bc"
 echo ".\CON427.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:121
ECHO .ÿ
ECHO * (330/353) Compilando CON427.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:187
ECHO .ÿ
ECHO * (331/353) Compilando CON4203.PRG
 harbour.exe ".\CON4203.PRG" /q /o".\CON4203.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:248
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4203.obj" >> "b32.bc"
 echo ".\CON4203.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:248
ECHO .ÿ
ECHO * (332/353) Compilando CON4203.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:317
ECHO .ÿ
ECHO * (333/353) Compilando CON4204.PRG
 harbour.exe ".\CON4204.PRG" /q /o".\CON4204.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:382
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4204.obj" >> "b32.bc"
 echo ".\CON4204.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:382
ECHO .ÿ
ECHO * (334/353) Compilando CON4204.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:447
ECHO .ÿ
ECHO * (335/353) Compilando CON4205.PRG
 harbour.exe ".\CON4205.PRG" /q /o".\CON4205.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:507
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4205.obj" >> "b32.bc"
 echo ".\CON4205.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:507
ECHO .ÿ
ECHO * (336/353) Compilando CON4205.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:573
ECHO .ÿ
ECHO * (337/353) Compilando CON4191.PRG
 harbour.exe ".\CON4191.PRG" /q /o".\CON4191.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:631
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON4191.obj" >> "b32.bc"
 echo ".\CON4191.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:631
ECHO .ÿ
ECHO * (338/353) Compilando CON4191.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:696
ECHO .ÿ
ECHO * (339/353) Compilando CON2411.PRG
 harbour.exe ".\CON2411.PRG" /q /o".\CON2411.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:766
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON2411.obj" >> "b32.bc"
 echo ".\CON2411.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:766
ECHO .ÿ
ECHO * (340/353) Compilando CON2411.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:834
ECHO .ÿ
ECHO * (341/353) Compilando con2521.prg
 harbour.exe ".\con2521.prg" /q /o".\con2521.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:52:892
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\con2521.obj" >> "b32.bc"
 echo ".\con2521.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:52:892
ECHO .ÿ
ECHO * (342/353) Compilando con2521.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:52:955
ECHO .ÿ
ECHO * (343/353) Compilando CON241V.PRG
 harbour.exe ".\CON241V.PRG" /q /o".\CON241V.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:53:021
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\CON241V.obj" >> "b32.bc"
 echo ".\CON241V.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:53:021
ECHO .ÿ
ECHO * (344/353) Compilando CON241V.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:53:086
ECHO .ÿ
ECHO * (345/353) Compilando smed483.prg
 harbour.exe ".\smed483.prg" /q /o".\smed483.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:53:267
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\smed483.obj" >> "b32.bc"
 echo ".\smed483.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:53:267
ECHO .ÿ
ECHO * (346/353) Compilando smed483.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:53:342
ECHO .ÿ
ECHO * (347/353) Compilando SAC_DBF.PRG
 harbour.exe ".\SAC_DBF.PRG" /q /o".\SAC_DBF.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:53:856
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAC_DBF.obj" >> "b32.bc"
 echo ".\SAC_DBF.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:53:857
ECHO .ÿ
ECHO * (348/353) Compilando SAC_DBF.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:53:929
ECHO .ÿ
ECHO * (349/353) Compilando SAUTORIZA.PRG
 harbour.exe ".\SAUTORIZA.PRG" /q /o".\SAUTORIZA.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:54:297
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SAUTORIZA.obj" >> "b32.bc"
 echo ".\SAUTORIZA.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:54:297
ECHO .ÿ
ECHO * (350/353) Compilando SAUTORIZA.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(97) @ 08:58:54:375
ECHO .ÿ
ECHO * (351/353) Compilando SMEDHIST.PRG
 harbour.exe ".\SMEDHIST.PRG" /q /o".\SMEDHIST.c"   /M  /N -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(138) @ 08:58:54:467
 echo  -DxHB  -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 > "b32.bc"
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" >> "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" >> "b32.bc"
 echo -o".\SMEDHIST.obj" >> "b32.bc"
 echo ".\SMEDHIST.c" >> "b32.bc"

REM - XHarbour.xCompiler.prg(139) @ 08:58:54:467
ECHO .ÿ
ECHO * (352/353) Compilando SMEDHIST.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - XHarbour.xCompiler.prg(285) @ 08:58:54:593
 echo -I"C:\Borland\BCC55\include;C:\MiniGUI\XHarbour\include;C:\xHarbour997\include;C:\xharbour997\include;C:\SQLRDD997\include;.\ch;C:\Borland\BCC55\Include;C:\HTI\SISMED;" + > "b32.bc"
 echo -L"C:\Borland\BCC55\lib;C:\Borland\BCC55\lib\psdk;C:\MiniGUI\XHarbour\lib;C:\xHarbour997\lib;C:\xharbour977\lib;C:\SQLRDD997\lib\BC5;.\lib;C:\HTI\SISMED;;;C:\HTI\SISMED;" + >> "b32.bc"
 echo -Gn -M -m  -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\SISMED.obj"  +  >> "b32.bc"
 echo ".\ATU_SMED.obj"  +  >> "b32.bc"
 echo ".\CON21.obj"  +  >> "b32.bc"
 echo ".\CON22.obj"  +  >> "b32.bc"
 echo ".\CON24.obj"  +  >> "b32.bc"
 echo ".\CON25.obj"  +  >> "b32.bc"
 echo ".\CON41.obj"  +  >> "b32.bc"
 echo ".\CON42.obj"  +  >> "b32.bc"
 echo ".\CON211.obj"  +  >> "b32.bc"
 echo ".\CON212.obj"  +  >> "b32.bc"
 echo ".\CON213.obj"  +  >> "b32.bc"
 echo ".\CON214.obj"  +  >> "b32.bc"
 echo ".\CON241.obj"  +  >> "b32.bc"
 echo ".\CON243.obj"  +  >> "b32.bc"
 echo ".\CON244.obj"  +  >> "b32.bc"
 echo ".\CON251.obj"  +  >> "b32.bc"
 echo ".\CON252.obj"  +  >> "b32.bc"
 echo ".\CON253.obj"  +  >> "b32.bc"
 echo ".\CON411.obj"  +  >> "b32.bc"
 echo ".\CON413.obj"  +  >> "b32.bc"
 echo ".\CON414.obj"  +  >> "b32.bc"
 echo ".\CON416.obj"  +  >> "b32.bc"
 echo ".\CON418.obj"  +  >> "b32.bc"
 echo ".\CON419.obj"  +  >> "b32.bc"
 echo ".\CON420.obj"  +  >> "b32.bc"
 echo ".\CON421.obj"  +  >> "b32.bc"
 echo ".\CON423.obj"  +  >> "b32.bc"
 echo ".\CON424.obj"  +  >> "b32.bc"
 echo ".\CON426.obj"  +  >> "b32.bc"
 echo ".\CON428.obj"  +  >> "b32.bc"
 echo ".\CON429.obj"  +  >> "b32.bc"
 echo ".\errorsys.obj"  +  >> "b32.bc"
 echo ".\HRBFUN.obj"  +  >> "b32.bc"
 echo ".\SAC63.obj"  +  >> "b32.bc"
 echo ".\SAC130.obj"  +  >> "b32.bc"
 echo ".\SAC140.obj"  +  >> "b32.bc"
 echo ".\SAC141.obj"  +  >> "b32.bc"
 echo ".\SAC142.obj"  +  >> "b32.bc"
 echo ".\SACCEP.obj"  +  >> "b32.bc"
 echo ".\SACDESP.obj"  +  >> "b32.bc"
 echo ".\SACLER.obj"  +  >> "b32.bc"
 echo ".\SMED00.obj"  +  >> "b32.bc"
 echo ".\SMED2DES.obj"  +  >> "b32.bc"
 echo ".\SMED2P.obj"  +  >> "b32.bc"
 echo ".\SMED2P1.obj"  +  >> "b32.bc"
 echo ".\SMED3DES.obj"  +  >> "b32.bc"
 echo ".\SMED5CNV.obj"  +  >> "b32.bc"
 echo ".\SMED5COL.obj"  +  >> "b32.bc"
 echo ".\SMED5CON.obj"  +  >> "b32.bc"
 echo ".\SMED5DAT.obj"  +  >> "b32.bc"
 echo ".\SMED5DEC.obj"  +  >> "b32.bc"
 echo ".\SMED5DES.obj"  +  >> "b32.bc"
 echo ".\SMED5E21.obj"  +  >> "b32.bc"
 echo ".\SMED5E22.obj"  +  >> "b32.bc"
 echo ".\SMED5EST.obj"  +  >> "b32.bc"
 echo ".\SMED5ET1.obj"  +  >> "b32.bc"
 echo ".\SMED5ET2.obj"  +  >> "b32.bc"
 echo ".\SMED5ETQ.obj"  +  >> "b32.bc"
 echo ".\SMED5FRM.obj"  +  >> "b32.bc"
 echo ".\SMED5PAT.obj"  +  >> "b32.bc"
 echo ".\SMED5VID.obj"  +  >> "b32.bc"
 echo ".\SMED30.obj"  +  >> "b32.bc"
 echo ".\SMED211.obj"  +  >> "b32.bc"
 echo ".\SMED212.obj"  +  >> "b32.bc"
 echo ".\SMED213.obj"  +  >> "b32.bc"
 echo ".\SMED214.obj"  +  >> "b32.bc"
 echo ".\SMED220.obj"  +  >> "b32.bc"
 echo ".\SMED221.obj"  +  >> "b32.bc"
 echo ".\SMED222.obj"  +  >> "b32.bc"
 echo ".\SMED223.obj"  +  >> "b32.bc"
 echo ".\SMED230.obj"  +  >> "b32.bc"
 echo ".\SMED231.obj"  +  >> "b32.bc"
 echo ".\SMED232.obj"  +  >> "b32.bc"
 echo ".\SMED233.obj"  +  >> "b32.bc"
 echo ".\SMED240.obj"  +  >> "b32.bc"
 echo ".\SMED241.obj"  +  >> "b32.bc"
 echo ".\SMED242.obj"  +  >> "b32.bc"
 echo ".\SMED243.obj"  +  >> "b32.bc"
 echo ".\SMED250.obj"  +  >> "b32.bc"
 echo ".\SMED251.obj"  +  >> "b32.bc"
 echo ".\SMED252.obj"  +  >> "b32.bc"
 echo ".\SMED253.obj"  +  >> "b32.bc"
 echo ".\SMED260.obj"  +  >> "b32.bc"
 echo ".\SMED261.obj"  +  >> "b32.bc"
 echo ".\SMED262.obj"  +  >> "b32.bc"
 echo ".\SMED263.obj"  +  >> "b32.bc"
 echo ".\SMED270.obj"  +  >> "b32.bc"
 echo ".\SMED271.obj"  +  >> "b32.bc"
 echo ".\SMED272.obj"  +  >> "b32.bc"
 echo ".\SMED273.obj"  +  >> "b32.bc"
 echo ".\SMED280.obj"  +  >> "b32.bc"
 echo ".\SMED290.obj"  +  >> "b32.bc"
 echo ".\SMED311.obj"  +  >> "b32.bc"
 echo ".\SMED312.obj"  +  >> "b32.bc"
 echo ".\SMED313.obj"  +  >> "b32.bc"
 echo ".\SMED320.obj"  +  >> "b32.bc"
 echo ".\SMED330.obj"  +  >> "b32.bc"
 echo ".\SMED340.obj"  +  >> "b32.bc"
 echo ".\SMED350.obj"  +  >> "b32.bc"
 echo ".\SMED360.obj"  +  >> "b32.bc"
 echo ".\SMED370.obj"  +  >> "b32.bc"
 echo ".\SMED400.obj"  +  >> "b32.bc"
 echo ".\SMED410.obj"  +  >> "b32.bc"
 echo ".\SMED420.obj"  +  >> "b32.bc"
 echo ".\SMED430.obj"  +  >> "b32.bc"
 echo ".\SMED431.obj"  +  >> "b32.bc"
 echo ".\SMED432.obj"  +  >> "b32.bc"
 echo ".\SMED440.obj"  +  >> "b32.bc"
 echo ".\SMED442.obj"  +  >> "b32.bc"
 echo ".\SMED450.obj"  +  >> "b32.bc"
 echo ".\SMED460.obj"  +  >> "b32.bc"
 echo ".\SMED461.obj"  +  >> "b32.bc"
 echo ".\SMED470.obj"  +  >> "b32.bc"
 echo ".\SMED471.obj"  +  >> "b32.bc"
 echo ".\SMED472.obj"  +  >> "b32.bc"
 echo ".\SMED473.obj"  +  >> "b32.bc"
 echo ".\SMED480.obj"  +  >> "b32.bc"
 echo ".\SMED481.obj"  +  >> "b32.bc"
 echo ".\SMED500.obj"  +  >> "b32.bc"
 echo ".\SMED510.obj"  +  >> "b32.bc"
 echo ".\SMED520.obj"  +  >> "b32.bc"
 echo ".\SMED530.obj"  +  >> "b32.bc"
 echo ".\SMED540.obj"  +  >> "b32.bc"
 echo ".\SMED541.obj"  +  >> "b32.bc"
 echo ".\SMED542.obj"  +  >> "b32.bc"
 echo ".\SMED550.obj"  +  >> "b32.bc"
 echo ".\SMED560.obj"  +  >> "b32.bc"
 echo ".\SMED570.obj"  +  >> "b32.bc"
 echo ".\SMED580.obj"  +  >> "b32.bc"
 echo ".\SMED590.obj"  +  >> "b32.bc"
 echo ".\SMED591.obj"  +  >> "b32.bc"
 echo ".\SMED592.obj"  +  >> "b32.bc"
 echo ".\SMED593.obj"  +  >> "b32.bc"
 echo ".\SMED594.obj"  +  >> "b32.bc"
 echo ".\SMED595.obj"  +  >> "b32.bc"
 echo ".\SMED700.obj"  +  >> "b32.bc"
 echo ".\SMED710.obj"  +  >> "b32.bc"
 echo ".\SMED720.obj"  +  >> "b32.bc"
 echo ".\SMED900.obj"  +  >> "b32.bc"
 echo ".\SMED5931.obj"  +  >> "b32.bc"
 echo ".\SMED5932.obj"  +  >> "b32.bc"
 echo ".\SMED5933.obj"  +  >> "b32.bc"
 echo ".\SMED5934.obj"  +  >> "b32.bc"
 echo ".\SMEDCDX.obj"  +  >> "b32.bc"
 echo ".\SMEDCONS.obj"  +  >> "b32.bc"
 echo ".\SMEDENDO.obj"  +  >> "b32.bc"
 echo ".\SMEDEXA.obj"  +  >> "b32.bc"
 echo ".\SMEDGUIA.obj"  +  >> "b32.bc"
 echo ".\SMEDPNE1.obj"  +  >> "b32.bc"
 echo ".\SMEDPNEU.obj"  +  >> "b32.bc"
 echo ".\SMEDRADI.obj"  +  >> "b32.bc"
 echo ".\SMEDROT.obj"  +  >> "b32.bc"
 echo ".\SACCFG.obj"  +  >> "b32.bc"
 echo ".\SMEDDBF.obj"  +  >> "b32.bc"
 echo ".\SMED482.obj"  +  >> "b32.bc"
 echo ".\CON221.obj"  +  >> "b32.bc"
 echo ".\CON2111.obj"  +  >> "b32.bc"
 echo ".\con215.obj"  +  >> "b32.bc"
 echo ".\CON2511.obj"  +  >> "b32.bc"
 echo ".\CON425.obj"  +  >> "b32.bc"
 echo ".\CON422.obj"  +  >> "b32.bc"
 echo ".\CON4201.obj"  +  >> "b32.bc"
 echo ".\CON4202.obj"  +  >> "b32.bc"
 echo ".\CON4231.obj"  +  >> "b32.bc"
 echo ".\CON427.obj"  +  >> "b32.bc"
 echo ".\CON4203.obj"  +  >> "b32.bc"
 echo ".\CON4204.obj"  +  >> "b32.bc"
 echo ".\CON4205.obj"  +  >> "b32.bc"
 echo ".\CON4191.obj"  +  >> "b32.bc"
 echo ".\CON2411.obj"  +  >> "b32.bc"
 echo ".\con2521.obj"  +  >> "b32.bc"
 echo ".\CON241V.obj"  +  >> "b32.bc"
 echo ".\smed483.obj"  +  >> "b32.bc"
 echo ".\SAC_DBF.obj"  +  >> "b32.bc"
 echo ".\SAUTORIZA.obj"  +  >> "b32.bc"
 echo ".\SMEDHIST.obj", +  >> "b32.bc"
 echo ".\SISMED.EXE", +    >> "b32.bc"
 echo ".\SISMED.map", +    >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbfdbt.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo "C:\xHarbour997\lib\dbfcdx.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\dbffpt.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\tip.lib" +   >> "b32.bc"
 echo "C:\xHarbour997\lib\WVWTOOLS.LIB" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_bc.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\fbclient_ms.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libmysql.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\libpq.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\oci.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\odbccp32.lib" +   >> "b32.bc"
 echo "C:\SQLRDD997\lib\BC5\sql.lib" +   >> "b32.bc"
 echo ".\lib\gtwvt.lib" +   >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo gtwin.lib +  >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo ct.lib +     >> "b32.bc"
 echo tip.lib +     >> "b32.bc"
 echo hsx.lib +     >> "b32.bc"
 echo pcrepos.lib +     >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo , >> "b32.bc"

REM - XHarbour.xCompiler.prg(286) @ 08:58:54:594
ECHO .ÿ
ECHO * (353/353) Linkando SISMED.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
