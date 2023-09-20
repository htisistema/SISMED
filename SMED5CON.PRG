********************************
* RELATORIO DE CONSUTAS MARCADAS
********************************
FUNCTION smed5con
*****************
LOCAL mprg:='SMED5CON',lci,cci,lba,cba,opcao,mpag,mturno,morde:='1'

PRIVATE mdata,mcont,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := cci := 0
lba := 21
cba := 75
*********************************************
CLOSE ALL
abriarq('smedconv','conv')
abriarq('smedcon','cons')
******************************************************************
op_tela(17,20,21,75,' Consultas Marcadas ')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        opcao := 'S'
        mcont := 0
        mdata := DATE()
        mturno := SPACE(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Digite a Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Turno: [M]anha [T]arde [G]eral........:')
        DEVPOS(lci+3,cci+2);DEVOUT('Ordem de Impressao [1]p/Hora [5]p/Nome:')
        @ lci+1,cci+17 GET mdata PICT '99/99/99'
        @ lci+2,cci+42 GET mturno PICT '@!'
        @ lci+3,cci+42 GET morde PICT '9' VALID morde $ '1,5'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mdata)
                LOOP
        ENDIF
        **************
        SELE('cons')
        SET ORDER TO VAL(morde)
        **************

        SEEK DTOS(mdata)

        IF ! FOUND()
                atencao('Nao tem nanhuma consulta marcada neste dia')
                LOOP
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        mpag := 1
        cab(mpag)
        mcont = 0
        WHILE data <= mdata .AND. ! EOF()
                IF PROW() >= 60
                        EJECT
                        mpag ++
                        cab(mpag)
                ENDIF
                IF mturno = 'M'
                        IF VAL(SUBSTR(hora,1,2)) >= 12
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF mturno = 'T'
                        IF VAL(SUBSTR(hora,1,2)) < 12
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                @ PROW()+2,00 SAY hora
                @ PROW(),06 SAY cod_cli
                @ PROW(),13 SAY nome
                @ PROW(),50 SAY con_conv
                ver_conv(con_conv,PROW(),53)
                @ PROW()+1,00 SAY 'Fone: '+fone
                @ PROW(),21 SAY 'Dta.Nasc.:'+DTOC(datans)
                @ PROW(),42 SAY 'Idade:'+STR(INT((DATE() - datans)/365),3)
                IF INT((DATE() - datans)/365) >= 65
                        @ PROW(),42 SAY 'Idade:'+STR(INT((DATE() - datans)/365),3)
                ENDIF
                @ PROW(),PCOL()+2 SAY 'OBS.:'
                mcont = mcont + 1
                SKIP
        ENDDO
        IF PROW() > 56
                EJECT
        ENDIF
        @ PROW()+1,00 SAY CHR(18)
        @ PROW()+2,00 SAY 'Quantidade de Consulta Marcadas:'
        @ PROW(),33 SAY STRZERO(mcont,5)
        @ PROW()+2,02 SAY TIME()+' Hrs.'
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL
***************************** F I M ********************************************
********************
FUNCTION cab(rpag)
********************
WHILE .T.
        @ PROW(),00 SAY CHR(18)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY 'Controle Medico'
        @ PROW(),00 SAY PADC(mesp,80)
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(rpag,3)
        @ PROW()+1,00 SAY CHR(15)
        @ PROW(),COL() SAY CHR(18)
        @ PROW(),00 SAY PADC('Consultas Marcadas do Dia: '+DTOC(mdata),80)
        @ PROW(),00 SAY PADC('                           '+DTOC(mdata),80)
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        @ PROW()+1,00 SAY 'Hora'
        @ PROW(),06 SAY 'Cod.'
        @ PROW(),13 SAY 'Nome'
        @ PROW(),50 SAY 'Convenio'
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO
