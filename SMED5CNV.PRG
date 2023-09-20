******************************
* LISTAGEM DE MEDICAMENTOS
******************************
FUNCTION smed5cnv
***********************
LOCAL mpag,mtraco,mcont,mmedica,mopcao
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mtraco := REPLI('-',80)
*********************************************
CLOSE ALL
abriarq('smedconv','conv')
*********************************************
WHILE .T.
        mpag := 1
        mmedica := mcont := opcao := 0
        mopcao := SPACE(1)
        mopcao := op_simnao('S','Confirma Impressao [S/n]:')
        IF LASTKEY() = 27 .OR. mopcao = 'N'
                CLOSE ALL
                RETURN NIL
        ENDIF
        IF ! imp_arq('SMED5CNV.REL')
                CLOSE ALL
                RETURN NIL
        ENDIF
        mensagem('Aguarde o Final da Impressao OK')
        *************
        SELE('conv');ORDSETFOCUS(1)
        *************

        cabcvn(mpag)
        @ PROW()+1,00 SAY 'Codigo'
        @ PROW(),08 SAY 'Descricao'
        @ PROW(),40 SAY '  Valor'
        @ PROW()+1,00 SAY mtraco

        WHILE ! EOF()
                @ PROW()+1,02 SAY codconv
                @ PROW(),08 SAY rsocial
                @ PROW(),40 SAY valor_con PICT '9,999.99'
                mmedica = mmedica + 1
                mcont = mcont + 1
                IF PROW() > 57
                        EJECT
                        mpag = mpag + 1
                        cabcvn(mpag)
                        @ PROW()+1,00 SAY 'Codigo'
                        @ PROW(),08 SAY 'Descricao'
                        @ PROW(),40 SAY '  Valor'
                        @ PROW()+1,00 SAY mtraco
                ENDIF
                SKIP
        ENDDO
        IF mcont = 6
                EJECT
                mpag = mpag + 1
                cabcvn(mpag)
        ENDIF
        @ PROW()+3,02 SAY 'Convenios Cadastrados : '+LTRIM(STR(mmedica))
        @ PROW()+2,56 SAY TIME()+' Hrs.'
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        RETURN NIL
ENDDO
RETURN NIL
************************** F I M ********************************************
FUNCTION cabcvn(rpag)
********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,34 SAY mesp
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(rpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),31 SAY 'Relacao de Convenios Cadastrado'
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO

