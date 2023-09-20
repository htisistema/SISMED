ECHO OFF
del sismed.RAR
RAR A sismed *.PRG *.BAT *.ICO *.X* *.bmp *.jpg
RAR A sismedex sismed.EXE htilogo.jpg hti.ico 999.jpg *.bmp rodape_pinpad.jpg firebird.jpg htiusu.jpg
COPY sismed.RAR F:
COPY sismedex.RAR F:
COPY sismed.GDB F:
COPY sismed.RAR C:\BACKUP_HTI
COPY sismedex.RAR C:\BACKUP_HTI
COPY sismed.RAR %2
COPY sismedex.RAR %3
COPY sismed.RAR %3
