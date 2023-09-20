@ ECHO OFF
CLS
@ ECHO .
@ ECHO Aguarde um momento que estar sendo feito o BACKUP no seu BANCO DE DADOS.....
DEL sismed.bkp
gbak -B -user SYSDBA -password masterkey sismed.gdb sismed.bkp
@ ECHO .
@ ECHO .
PAUSE