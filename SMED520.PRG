* LISTAGEM DE FATURAS
*******************************
FUNCTION smed520
****************
LOCAL mprg:='SMED520',lci,cci,lba,cba,opcao,mdata1,mdata2,tdata;
      ,mcconv,mtotal,mpag,mcont,mreg,mordem:='D'

PRIVATE mrsoc := ' '
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mreg := mcont := 0
mpag := 1
mcconv := SPACE(2)
mtotal := 0
lci :=  cci :=  0
lba :=  13
cba :=  45
*********************************************
CLOSE ALL
abriarq('saccfg','cfg')
abriarq('smedconv','conv')
abriarq('smedmov','contr')
*********************************************
op_tela(09,06,14,45,'LISTAGEM DE FATURAS')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')

        opcao := SPACE(1)
        mdata1 := mdata2 := CTOD('  /  /  ')
        tdata := 0
        mordem := 'D'
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo do Convenio .....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Ordem [D]ata ou [N]ome..:')
        @ lci+1,cci+29 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        *********************
        SELE('contr');ORDSETFOCUS(1)
        GO TOP
        **********************
        SET SOFTSEEK ON
        SEEK DTOS(mdata1)
        SET SOFTSEEK OFF
        IF EOF()
               GO TOP
        ENDIF
        @ lci+2,cci+29 GET mdata2 VALID IF(EMPTY(mdata2) .OR. mdata2 < mdata1,.F.,.T.)
        READ
        Mensagem('p/Consultar Codigos de Convenios Tecle <F3> ou deixe em branco pra todos')
        @ lci+3,cci+29 GET mcconv PICT '99' VALID IF(EMPTY(mcconv),.T.,vcconv(@mcconv))
        @ lci+4,cci+29 GET mordem PICT '@!' VALID mordem $ 'D,N'
        READ
        IF LASTKEY() = 27 .OR. ! imp_arq('SMED520.REL')
                LOOP
        ENDIF
        cabfatu(mpag,mdata1,mdata2)
        IF mordem = 'D'
                mcont = 7
                WHILE contr->datacons <= mdata2 .AND. contr->datacons >= mdata1 .AND. ! EOF()
                        IF mcont >= 58
                                EJECT
                                mpag = mpag + 1
                                cabfatu(mpag,mdata1,mdata2)
                                mcont = 7
                        ENDIF
                        IF ! EMPTY(mcconv) .AND. mcconv <> contr->codconv;
                           .OR. contr->situacao = 'R'
                                SKIP
                                LOOP
                        ENDIF
                        @ PROW()+1,02 SAY contr->datacons
                        @ PROW(),12 SAY contr->guiano
                        @ PROW(),30 SAY contr->cadnome
                        @ PROW(),PCOL()+1 SAY contr->valor PICT '99,999,999.99'
                        mreg = mreg + 1
                        mcont = mcont + 1
                        mtotal = mtotal + contr->valor
                        SKIP
                        IF EOF()
                                EXIT
                        ENDIF
                        LOOP
                ENDDO
                IF mcont > 54
                        cabfatu(mpag,mdata1,mdata2)
                        EJECT
                ENDIF
                @ PROW()+3,02 SAY 'Quantidade de Cliente Cadastrado:'
                @ PROW(),36 SAY LTRIM(STR(mreg,5))
                @ PROW()+1,02 SAY 'Total da Fatura .............R$:'
                @ PROW(),36 SAY mtotal PICT '99,999,999.99'
                @ PROW()+1,56 SAY TIME()+' Hrs.'
                EJECT
        ELSE
                *********************
                SELE('contr');ORDSETFOCUS(2)
                GO TOP
                **********************
                mcont = 7
                WHILE ! EOF()
                        mensagem(STRZERO(RECNO(),5)+' - Cliente:'+contr->cadnome)
                        IF mcont >= 58
                                EJECT
                                mpag = mpag + 1
                                cabfatu(mpag,mdata1,mdata2)
                                mcont = 7
                        ENDIF
                        IF ! EMPTY(mcconv) .AND. mcconv <> contr->codconv;
                           .OR. contr->situacao = 'R';
                           .OR. (contr->datacons > mdata2 .OR. contr->datacons < mdata1)
                                SKIP
                                LOOP
                        ENDIF
                        @ PROW()+1,02 SAY contr->datacons
                        @ PROW(),12 SAY contr->guiano
                        @ PROW(),30 SAY contr->cadnome
                        @ PROW(),PCOL()+1 SAY contr->valor PICT '99,999,999.99'
                        mreg = mreg + 1
                        mcont = mcont + 1
                        mtotal = mtotal + contr->valor
                        SKIP
                        IF EOF()
                                EXIT
                        ENDIF
                        LOOP
                ENDDO
                IF mcont > 54
                        cabfatu(mpag,mdata1,mdata2)
                        EJECT
                ENDIF
                @ PROW()+3,02 SAY 'Quantidade de Cliente Cadastrado:'
                @ PROW(),36 SAY LTRIM(STR(mreg,5))
                @ PROW()+1,02 SAY 'Total da Fatura .............R$:'
                @ PROW(),36 SAY mtotal PICT '99,999,999.99'
                @ PROW()+1,56 SAY TIME()+' Hrs.'
                EJECT
        ENDIF
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
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
* CABECALHO LIST.FATURAS
**************************
FUNCTION cabfatu(fpag,fdata1,fdata2)
***********************
LOCAL traco
traco := REPLI('=',80)
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW()+1,31 SAY 'Fatura Referente a Consultas'
        @ PROW()+1,02 SAY m_set[1,23]
        @ PROW(),31 SAY 'Periodo de'
        @ PROW(),42 SAY fdata1
        @ PROW(),51 SAY 'a'
        @ PROW(),53 SAY fdata2
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(fpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),31 SAY 'Convenio com '+mrsoc
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY traco
        @ PROW()+1,04 SAY 'Data'
        @ PROW(),16 SAY 'Guia No.'
        @ PROW(),32 SAY 'Nome'
        @ PROW(),70 SAY 'Valor'
        @ PROW()+1,00 SAY traco
        RETURN NIL
ENDDO

************************** F I M ********************************************

