**************************************
* RELATORIOS GERAL P/ORDEM (ALFA/REG.)
**************************************

FUNCTION smed510
****************

LOCAL mprg:='SMED510',opcao,lci,cci,lba,cba,mcont,mreg,mpag,;
      mcconv,mend

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

opcao := SPACE(1)
mcont := mreg := 0
mpag := 1
lci := cci := 0
lba := 13
cba := 65

*********************************************
CLOSE ALL
abriarq('smedconv','conv')
abriarq('smedcli','cli')
*********************************************
op_tela(08,06,13,65,'RELATORIOS GERAL P/ORDEM (ALFA/REG.)')

WHILE .T.
        exibi_prg(mprg)
        mcconv := SPACE(2)
        mend := 'N'
        apaga(00,00,30,79)
        opcao := 0
        setcor(3)
        @ lci+2,cci TO lci+2,cba
        setcor(1)
        @ lci+3,cci+1 SAY 'Digite o Cod.Convenio:'
        @ lci+4,cci+1 SAY 'Com Endereco [s/N]...:'
        @ lci+1,cci+1 PROMPT '      p/Ordem Alfabetica      ' MESSAGE '** Emiti Listagem Geral por ordem Alfabetica, <ESC> p/Retorno **'
        @ lci+1,cci+31 PROMPT '      p/Ordem Registro      ' MESSAGE '** Emiti Listagem Geral por ordem de Registro, <ESC> p/Retorno **'
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        *********************
                        SELE('cli')
                        SET ORDER TO 1
                        *********************
                        GO TOP
                CASE opcao = 2
                        **********************
                        SELE('cli')
                        SET ORDER TO 2
                        **********************
                        GO TOP
        ENDCASE
        @ lci+3,cci+24 GET mcconv PICT '99' VALID ver_conv(mcconv,lci+3,cci+27)
        @ lci+4,cci+24 GET mend PICT '@!' VALID mend $ 'S,N'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        cabgeral(mpag)
        mcont = 7
        WHILE ! EOF()
                IF mcont >= 58
                        EJECT
                        mpag = mpag + 1
                        cabgeral(mpag)
                        mcont = 7
                ENDIF
                IF ! EMPTY(mcconv) .AND. mcconv <> codconv
                        SKIP;LOOP
                ENDIF
                @ PROW()+1,00 SAY registro
                @ PROW(),06 SAY nome
                @ PROW(),43 SAY sexo
                @ PROW(),48 SAY data
                @ PROW(),58 SAY datans
                @ PROW(),68 SAY datault
                @ PROW(),78 SAY fone
                @ PROW(),93 SAY codconv
                ver_conv(codconv,PROW(),PCOL()+1,,'*')
                IF mend = 'S'
                        @ PROW()+1,00 SAY 'End.: '+RTRIM(endereco)+' - '+RTRIM(cidade)+' - '+RTRIM(est)+' - CEP.: '+cep
                        @ PROW()+1,00 SAY REPLI('-',132)
                ENDIF
                mreg = mreg + 1
                mcont = mcont + 1
                SKIP
                LOOP
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
        RESTSCREEN(00,00,24,79,tela510)
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        CLOSE ALL
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** F I M *******************************
**************************
* CABECALHO LIST.GERAL
**************************

FUNCTION cabgeral(cpag)
***********************

LOCAL traco

traco := REPLI('=',80)

WHILE .T.

        @ PROW()+1,00 SAY CHR(18)
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,02 SAY m_set[1,23]
        @ PROW(),34 SAY mesp
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(cpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),30 SAY 'Relacao de Clientes Cadastrados'
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY traco
        @ PROW()+1,00 SAY CHR(15)
        @ PROW(),01 SAY 'Reg.'
        @ PROW(),07 SAY 'Nome'
        @ PROW(),43 SAY 'Sexo'
        @ PROW(),49 SAY 'Cadast.'
        @ PROW(),59 SAY 'Nascim.'
        @ PROW(),69 SAY 'Ult.Cons'
        @ PROW(),80 SAY 'Fone'
        @ PROW(),94 SAY 'Convenio'
        @ PROW()+1,01 SAY CHR(18)
        @ PROW(),00 SAY traco
        @ PROW(),PCOL() SAY CHR(15)
        RETURN NIL
ENDDO
************************** F I M ********************************************

