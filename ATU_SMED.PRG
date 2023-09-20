**************************
* ATUALIZACAO DOS ARQUIVOS SMED HISTORICO
*************************
FUNCTION atu_smed
****************
LOCAL lci,cci,lba,cba,opcao,tela570,mtexto,mnome,mquantd,i,linhas,linha,;
      lin,mcont

PRIVATE mtraco,mtipo_imp

lci := 03
cci := 04
lba := 21
cba := 76
tela570 := SAVESCREEN(01,00,24,79)
mtraco := REPLI('=',80)
opcao := SPACE(1)
*----------------------------------------------------
CLOSE ALL
USE smedcli ALIAS cli SHARED NEW
SET INDEX TO cadnome,cadreg 
USE smedhist ALIAS hist SHARED NEW
SET INDEX TO smedhis1
USE smedexam ALIAS exam SHARED NEW
SET INDEX TO smedexa1
USE smedcond ALIAS cond SHARED NEW
SET INDEX TO smedcon1
USE smeddiag ALIAS diag SHARED NEW
SET INDEX TO smeddia1
*----------------------------------------------------
*********************************
SELE('cli');SET ORDER TO 2;GO TOP
********************************
BLOQARQ()
WHILE ! EOF()
        DEVPOS(00,00);DEVOUT(RECNO())
        linhas := 0
        linha := 0
        lin   := 0
        linhas := MLCOUNT(cli->historico,60)
        *********************************
        SELE('hist');SET ORDER TO 1
        ********************************
        IF linhas > 0
                FOR linha = 1 TO  linhas
                        lin := MEMOLINE(cli->historico,60,linha,,)
                        ADIREG()
                        hist->data      := DATE()
                        hist->codcli    := cli->registro
                        hist->descricao := lin
                NEXT
*               DBCOMMITALL()
*               DBUNLOCKALL()
        ENDIF
        linhas := 0
        linha := 0
        lin   := 0
        linhas := MLCOUNT(cli->probinden,60)
        IF linhas > 0
                *********************************
                SELE('exam');SET ORDER TO 1
                ********************************
                FOR linha = 1 TO  linhas
                        lin := MEMOLINE(cli->probinden,60,linha,,)
                        ADIREG()
                        exam->data      := DATE()
                        exam->codcli    := cli->registro
                        exam->descricao := lin
                NEXT
*               DBCOMMITALL()
*               DBUNLOCKALL()
        ENDIF
        linhas := 0
        linha := 0
        lin   := 0
        linhas := MLCOUNT(cli->diagnostic,60)
        IF linhas > 0
                *********************************
                SELE('diag');SET ORDER TO 1
                ********************************
                FOR linha = 1 TO  linhas
                        lin := MEMOLINE(cli->diagnostic,60,linha,,)
                        ADIREG()
                        diag->data      := DATE()
                        diag->codcli    := cli->registro
                        diag->descricao := lin
                NEXT
*               DBCOMMITALL()
*               DBUNLOCKALL()
        ENDIF
        linhas := 0
        linha := 0
        lin   := 0
        linhas := MLCOUNT(cli->presc,60)
        IF linhas > 0
                *********************************
                SELE('cond');SET ORDER TO 1
                ********************************
                FOR linha = 1 TO  linhas
                        lin := MEMOLINE(cli->presc,60,linha,,)
                        ADIREG()
                        cond->data      := DATE()
                        cond->codcli    := cli->registro
                        cond->descricao := lin
                NEXT
*               DBCOMMITALL()
*               DBUNLOCKALL()
        ENDIF
                DBCOMMITALL()
                DBUNLOCKALL()
        *********************************
        SELE('cli');SET ORDER TO 2
        SKIP
        ********************************
ENDDO
RETURN NIL
************************ F I M ************************************************************************

