**************************************
* RELATORIOS DATAS DE PARTOS
**************************************
FUNCTION smed5dat
****************
LOCAL opcao,lci,cci,lba,cba,tela510,mcont,mreg,mpag,telaprin,mcconv,mend,;
      mdata1,mdata2
PRIVATE mimp_tipo:=0,mtipo_imp:='M',mporta_imp:='LPT1',mop_dat,marq:=SPACE(35)

opcao := SPACE(1)
mcont := 0
mreg := 0
mpag := 1
lci := cci := 0
lba := 14
cba := 65
op_tela(08,06,14,65,'RELATORIO DATA DO PARTO')
*********************************************
CLOSE ALL
abriarq('smedconv','conv')
abriarq('smedcli','cli')
*********************************************
WHILE .T.
        exibi_prg('SMED5DAT')
        mcconv := SPACE(2)
        mend := 'N'
        apaga(23,00,23,79)
        opcao := 0
        mop_dat:= 0
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        mreg := 0
        setcor(3)
        @ lci+2,cci+1 TO lci+2,cba-1
        setcor(1)
        @ lci+3,cci+1 SAY 'Digite o Cod.Convenio:'
        @ lci+4,cci+1 SAY 'Data Inicial.........:'
        @ lci+5,cci+1 SAY 'Data Final...........:'
        @ lci+1,cci+1 PROMPT '    Data do Provavel Parto    ' MESSAGE '** Relatorio dos Provavel Parto no Periodo, <ESC> p/Retorno **'
        @ lci+1,cci+31 PROMPT '     Data do Nascimento     ' MESSAGE '** Relatorio dos Nascimento no Periodo, <ESC> p/Retorno **'
        SET INTEN ON
        MENU TO mop_dat
        IF LASTKEY() = 27
                EXIT
        ENDIF
        *********************
        SELE('cli')
        SET ORDER TO 1
        *********************
        GO TOP
        @ lci+3,cci+24 GET mcconv PICT '99' VALID IF(EMPTY(mcconv),.T.,ver_conv(mcconv,lci+3,cci+27))
        @ lci+4,cci+24 GET mdata1
        @ lci+5,cci+24 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('DAT_PARTO.REL','R')
                LOOP
        ENDIF
        mpag := 0
        WHILE ! EOF()
                IF PROW() >= 58 .OR. mpag = 0
                        EJECT
                        mpag = mpag + 1
                        cabdata(mpag)
                        mcont = 7
                ENDIF
                IF ! EMPTY(mcconv) .AND. mcconv <> codconv
                        SKIP
                        LOOP
                ENDIF
                IF mop_dat = 1
                        IF cli->pro_nasc1 >= mdata1 .AND. cli->pro_nasc1 <= mdata2 .AND. EMPTY(cli->dat_nasc1)
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->ult_mest1
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc1
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->pro_nasc2 >= mdata1 .AND. cli->pro_nasc2 <= mdata2 .AND. EMPTY(cli->dat_nasc2)
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->ult_mest2
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc2
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->pro_nasc3 >= mdata1 .AND. cli->pro_nasc3 <= mdata2 .AND. EMPTY(cli->dat_nasc3)
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->ult_mest3
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc3
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->pro_nasc4 >= mdata1 .AND. cli->pro_nasc4 <= mdata2 .AND. EMPTY(cli->dat_nasc4)
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->ult_mest4
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc4
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->pro_nasc5 >= mdata1 .AND. cli->pro_nasc5 <= mdata2 .AND. EMPTY(cli->dat_nasc5)
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->ult_mest5
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc5
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ENDIF
                        SKIP
                ELSE
                        IF cli->dat_nasc1 >= mdata1 .AND. cli->dat_nasc1 <= mdata2
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc1
                                @ PROW(),PCOL()+1 SAY cli->dat_nasc1
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->dat_nasc2 >= mdata1 .AND. cli->dat_nasc2 <= mdata2
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc2
                                @ PROW(),PCOL()+1 SAY cli->dat_nasc2
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->dat_nasc3 >= mdata1 .AND. cli->dat_nasc3 <= mdata2
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc3
                                @ PROW(),PCOL()+1 SAY cli->dat_nasc3
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->dat_nasc4 >= mdata1 .AND. cli->dat_nasc4 <= mdata2
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc4
                                @ PROW(),PCOL()+1 SAY cli->dat_nasc4
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ELSEIF cli->dat_nasc5 >= mdata1 .AND. cli->dat_nasc5 <= mdata2
                                @ PROW()+1,00 SAY registro
                                @ PROW(),PCOL()+1 SAY nome
                                @ PROW(),PCOL()+1 SAY datans
                                @ PROW(),PCOL()+1 SAY codconv
                                ver_conv(codconv,PROW(),PCOL()+1)
                                @ PROW(),PCOL()+1 SAY cli->pro_nasc5
                                @ PROW(),PCOL()+1 SAY cli->dat_nasc5
                                mreg = mreg + 1
                                mcont = mcont + 1
                                SKIP
                                LOOP
                        ENDIF
                        SKIP
                ENDIF
        ENDDO
        IF mcont > 54
                EJECT
        ENDIF
        @ PROW()+1,PCOL() SAY CHR(18)
        @ PROW()+2,02 SAY 'Quantidade de Clientes Cadastrados:'
        @ PROW(),38 SAY STR(mreg,5)
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
        SET ORDER TO 1
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** F I M *******************************
* CABECALHO LIST.GERAL
**************************
FUNCTION cabdata(cpag)
***********************
WHILE .T.
        @ PROW()+1,00 SAY CHR(18)
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,34 SAY mesp
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(cpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        IF mop_dat = 1
                @ PROW(),30 SAY 'Relacao de Clientes Data Provavel'
        ELSE
                @ PROW(),30 SAY 'Relacao de Clientes Data Nascimento'
        ENDIF
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        @ PROW()+1,00 SAY CHR(15)
        @ PROW(),01 SAY 'Reg.'
        @ PROW(),07 SAY 'Nome'
        @ PROW(),43 SAY ' Nascim.'
        @ PROW(),PCOL()+1 SAY 'Convenio                    '
        IF mop_dat = 1
                @ PROW(),PCOL()+1 SAY 'Ult.Mest'
                @ PROW(),PCOL()+1 SAY 'Provavel'
        ELSE
                @ PROW(),PCOL()+1 SAY 'Provavel'
                @ PROW(),PCOL()+1 SAY 'Nascido '
        ENDIF
        @ PROW()+1,00 SAY CHR(18)
        @ PROW(),00 SAY REPLI('=',80)
        @ PROW(),PCOL() SAY CHR(15)
        RETURN .T.
ENDDO
RETURN NIL
************************** F I M ********************************************
