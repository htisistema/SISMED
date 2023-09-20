@ECHO OFF
CLS
CD\smed
DEL smedBKP.A*
echo Fazendo copia p/ RECEPCAO
COPY *.DBF \\RECEPCAO\C\SMEDBKP
COPY *.DBT \\RECEPCAO\C\SMEDBKP
CLS
echo Fazendo copia p/ SMEDBKP
COPY *.DBF C:\SMEDBKP
COPY *.DBT C:\SMEDBKP

CLS
echo Fazendo copia p/ DISKETES
ARJ A -Y -V1440000 smedBKP *.DBF *.DBT
if not exist \smed\smedbkp.arj goto fim
CLS
ECHO Insira o Disco 1 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.arj A:
ECHO .
if not exist \smed\smedbkp.a01 goto fim
ECHO Insira o Disco 2 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a01 A:
ECHO .
if not exist \smed\smedbkp.a02 goto fim
ECHO Insira o Disco 3 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a02 A:
ECHO .
if not exist \smed\smedbkp.a03 goto fim
ECHO Insira o Disco 4 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a03 A:
ECHO .
if not exist \smed\smedbkp.a04 goto fim
ECHO Insira o Disco 5 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a04 A:
ECHO .
if not exist \smed\smedbkp.a05 goto fim
ECHO Insira o Disco 6 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a05 A:
ECHO .
if not exist \smed\smedbkp.a06 goto fim
ECHO Insira o Disco 7 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a06 A:
ECHO .
if not exist \smed\smedbkp.a07 goto fim
ECHO Insira o Disco 8 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a07 A:
ECHO .
if not exist \smed\smedbkp.a08 goto fim
ECHO Insira o Disco 9 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a08 A:
ECHO .
if not exist \smed\smedbkp.a09 goto fim
ECHO Insira o Disco 10 para fazer o BACKUP
ECHO .
PAUSE
COPY smedbkp.a09 A:


:fim
CLS
ECHO Fim do BACKUP

