*****************
* MENU RELATORIOS  ESPECIALISTAS
*****************

FUNCTION smed592
****************
LOCAL mprg:='SMED592'
LOCAL opcao,lci,cci,lba,cba,mnome,mdata,msinal,mvalor
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := cci := 0
lba := 13
cba := 69
mnome := SPACE(35)
mdata := DATE()
msinal := SPACE(1)
opcao := 0
*********************************************
abriarq('smedmed','med')
*********************************************
op_tela(10,47,13,69,'RELATORIOS  ESPECIALISTAS')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Todos Especialistas '  MESSAGE '** Lista TODOS os ESPECIALISTAS, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT ' Por Especialidade   ' MESSAGE '** Lista ESPECIALISTA da ESPECIALIDADE, <ESC> p/Retorno **'

        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        IF ! imp_arq('SMED592.REL')
                                LOOP
                        ENDIF
                        lespger()              && LIST.TODOS ESPECIALISTAS
                        IF mimp_tipo = 2
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                        ELSEIF mimp_tipo = 1
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                        ENDIF
                CASE opcao = 2
                        lespeci()               && LIST.ESPECIALISTA COM ESPECIALIDADE

        ENDCASE
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL
************************** F I M ********************************************
FUNCTION lespger
***********************
LOCAL mpag,mtraco,mcont,mespeci,opcao

opcao := SPACE(1)
mespeci = 0
mcont = 0
mpag := 1
mtraco := REPLI('-',80)
*****************
SELE('med')
*****************
cabesp(mpag)

WHILE ! EOF()
        @ PROW()+2,02 SAY 'Nome ............:'
        @ PROW(),21 SAY profission
        @ PROW(),21 SAY profission
        @ PROW()+1,02 SAY 'Especialidade ...:'
        @ PROW(),21 SAY especialid
        @ PROW()+1,02 SAY 'Endereco ........:'
        @ PROW(),21 SAY endereco
        @ PROW()+1,02 SAY 'Cidade ..........:'
        @ PROW(),21 SAY cidade
        @ PROW()+1,02 SAY 'Cep .............:'
        @ PROW(),21 SAY cep
        @ PROW()+1,02 SAY 'Fone: ...........:'
        @ PROW(),21 SAY fone
        @ PROW()+1,00 SAY mtraco
        mcont = mcont + 1
        mespeci = mespeci + 1
        IF mcont = 7
                mcont = 0
                EJECT
                mpag = mpag + 1
                cabesp(mpag)
        ENDIF
        SKIP(1)
ENDDO
IF mcont = 7
        EJECT
        mpag = mpag + 1
        cabesp(mpag)
ENDIF
@ PROW()+3,02 SAY 'Especialistas Cadastrados : '+LTRIM(STR(mespeci))
@ PROW()+2,56 SAY TIME()+' Hrs.'
EJECT
SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
RETURN NIL
************************** F I M ********************************************
FUNCTION lespeci
***********************
LOCAL mpag,mtraco,mcont,mespeci,lci,cci,cba,lba,mesp,telafund,tela2,opcao

lci := cci := 0
lba = 18
cba = 72
mesp := SPACE(20)
mespeci = 0
mcont = 0
mpag := 1
mtraco := REPLI('-',80)
*****************
SELE('med')
SET ORDER TO 2
*****************
op_tela(15,47,18,72)

WHILE .T.
        opcao := SPACE(1)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Digite a Especialidade')
        SET INTEN ON
        @ lci+2,cci+2 GET mesp PICT '@!'
        READ
        IF LASTKEY() = 27
                SET ORDER TO 1
                EXIT
        ENDIF
        IF EMPTY(mesp)
                LOOP
        ENDIF

        *************
        SEEK mesp
        *************

        IF ! FOUND()
                atencao('Nenhum PROFISSIONAL com essa  *** ESPECIALIDADE ***')
                LOOP
        ENDIF
        IF ! imp_arq('SMED592.REL')
                LOOP
        ENDIF

        cabesp(mpag)

        WHILE especialid = mesp
                @ PROW()+2,02 SAY 'Especialidade ...:'
                @ PROW(),21 SAY especialid
                @ PROW(),21 SAY especialid
                @ PROW()+1,02 SAY 'Nome ............:'
                @ PROW(),21 SAY profission
                @ PROW()+1,02 SAY 'Endereco ........:'
                @ PROW(),21 SAY endereco
                @ PROW()+1,02 SAY 'Cidade ..........:'
                @ PROW(),21 SAY cidade
                @ PROW()+1,02 SAY 'Cep .............:'
                @ PROW(),21 SAY cep
                @ PROW()+1,02 SAY 'Fone: ...........:'
                @ PROW(),21 SAY fone
                @ PROW()+1,00 SAY mtraco
                mcont = mcont + 1
                mespeci = mespeci + 1
                IF mcont = 7
                        mcont = 0
                        EJECT
                        mpag = mpag + 1
                        cabesp(mpag)
                ENDIF
                SKIP(1)
        ENDDO
        IF mcont = 7
                EJECT
                mpag = mpag + 1
                cabesp(mpag)
        ENDIF
        @ PROW()+3,02 SAY 'Especialistas Cadastrados : '+LTRIM(STR(mespeci))
        @ PROW()+2,56 SAY TIME()+' Hrs.'
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        SET ORDER TO 1
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL

****************************** F I M ***********************************
FUNCTION cabesp(rpag)
LOCAL traco:= REPLI('=',80)
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,34 SAY mesp
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(rpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),31 SAY 'Relacao de Especialistas Cadastrado'
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY traco
        RETURN NIL
ENDDO

