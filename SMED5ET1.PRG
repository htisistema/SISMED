**************************************
**** smed5etq.PRG: Etiquetas de Cliente
**************************************
FUNCTION smed5et1
******************
LOCAL f_fim,f_ini,esc
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

op_tela(9, 27, 16, 55," Etiquetas Gomadas ")
@ 03,28 TO 03,50
setcor(1)
mensagem('Informe o codigo Inicial e Final ou deixe em branco p/todos')
@ 01, 02 SAY "Cliente Inicio:"
@ 02, 02 SAY "Cliente Final.:"
@ 04, 01 SAY " Etiqueta ³ 1 Coluna   "
@ 05, 01 SAY " Etiqueta ³ 2 Colunas  "
f_ini=0
f_fim=0
@ 01,21 GET f_ini PICT "99999"
@ 02,21 GET f_fim PICT "99999"
READ
IF LASTKEY()=27
        CLOSE ALL
        wvw_lclosewindow()
        RETURN
ENDIF
IF f_ini=0
        f_ini=00000
ENDIF
IF f_fim=0
        f_fim=99999
ENDIF
setcor(3)
DEVPOS(01,21);DEVOUT(STRZERO(f_ini,5))
DEVPOS(02,21);DEVOUT(STRZERO(f_fim,5))
setcor(1)
@ 04, 01 PROMPT " Etiqueta ³ 1 Coluna   "
@ 05, 01 PROMPT " Etiqueta ³ 2 Colunas  "
MENU TO esc
IF esc=0
        CLOSE ALL
        wvw_lclosewindow()
        RETURN
ENDIF
INKEY(0)
IF LASTKEY()=27
        CLOSE ALL
        wvw_lclosewindow()
        RETURN
ENDIF
*---------------------------------------------------------------------
CLOSE ALL
abriarq('smedcli','cli')
* SET INDEX TO cadnome,cadreg
*---------------------------------------------------------------------
**************
SELE('cli')
ORDSETFOCUS(2)
GO TOP
**************
WHILE ! impress()
        atencao("Impressora nao esta Ligada!, ou [ESC] Abandona.")
        IF LASTKEY()=27
                CLOSE ALL
                wvw_lclosewindow()
                RETURN
        ENDIF
ENDDO
mensagem("Espere o final da impressao das Etiquetas. [ESC] Interrompe")
SET DEVI TO PRINTER
SET CONSO off
SET PRINTer to LPT1
imprt('M','C')
DO CASE
        CASE esc=1
                LABEL FORM etiq11 to PRINT for registro>=STRZERO(f_ini,5) .AND. registro<=STRZERO(f_fim,5) WHILE LASTKEY() <> 27
        CASE esc=2
                LABEL FORM etiq12 to PRINT for registro>=STRZERO(f_ini,5) .AND. registro<=STRZERO(f_fim,5) WHILE LASTKEY() <> 27
        CASE esc=3
                LABEL FORM etiq13 to PRINT for registro>=STRZERO(f_ini,5) .AND. registro<=STRZERO(f_fim,5) WHILE LASTKEY() <> 27
ENDCASE
imprt('M','N')
SET DEVI TO SCREEN;SET PRINT TO
SET CONSO on
CLOSE ALL
wvw_lclosewindow()
RETURN

                                                                    
