******************************
* LISTAGEM RECIBOS
*******************************
FUNCTION smed594
****************
LOCAL mprg:='SMED594',lci,cci,lba,cba,opcao,mdata1,mdata2,tdata,mtotal,mpag,mcont,mrecibo

PRIVATE mmod,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mcont := mtotal := mrecibo := 0
mpag := 1
lci := cci := 0
lba :=  15
cba :=  70
*********************************************
abriarq('smedrec','rec')
*********************************************
op_tela(12,31,15,70,'CANHOTO DE RECIBOS')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')
        opcao := SPACE(1)
        mdata1 := mdata2 := CTOD('  /  /  ')
        tdata := 0
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        SET INTEN ON
        @ lci+1,cci+29 GET mdata1 PICT '@D'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mdata1)
                LOOP
        ENDIF
        *********************
        SELE('rec');ORDSETFOCUS(1)
        **********************
        SET SOFTSEEK ON
        SEEK DTOS(mdata1)
        SET SOFTSEEK OFF
        IF EOF()
               GO TOP
        ENDIF
        @ lci+2,cci+29 GET mdata2 PICT '@D'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        tdata = mdata2 - mdata1
        IF tdata < 0
                LOOP
        ENDIF
        IF ! imp_arq('SMED594.REL')
                LOOP
        ENDIF
        cabreci(mpag,mdata1,mdata2)
        mcont = 6
        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                IF mcont >= 60
                        EJECT
                        mpag = mpag + 1
                        cabreci(mpag,mdata1,mdata2)
                        mcont = 6
                ENDIF

                @ PROW()+1,02 SAY nome
                @ PROW(),45 SAY data
                @ PROW(),58 SAY valor PICT '999,999.99'
                @ PROW(),70 SAY operador
                mcont = mcont + 1
                mtotal = mtotal + valor
                mrecibo = mrecibo + 1
                SKIP
                IF EOF()
                        EXIT
                ENDIF
                LOOP

        ENDDO
        IF mcont > 56
                cabreci(mpag,mdata1,mdata2)
                EJECT
        ENDIF
        @ PROW()+3,02 SAY 'Quantidade de Recibos:'
        @ PROW(),25 SAY LTRIM(STR(mrecibo)) PICT '9999'
        @ PROW()+1,02 SAY 'TOTAL em R$:'
        @ PROW(),15 SAY mtotal PICT '99,999,999.99'
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
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** F I M *******************************
* CABECALHO LIST.FATURAS
**************************
FUNCTION cabreci(fpag,fdata1,fdata2)
***********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,31 SAY 'Recibos Emitidos no Periodo'
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(fpag,3)
        @ PROW()+1,02 SAY 'Sistema Controla Medico'
        @ PROW(),37 SAY fdata1
        @ PROW(),46 SAY 'a'
        @ PROW(),48 SAY fdata2
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        @ PROW()+1,02 SAY 'Nome'
        @ PROW(),47 SAY 'Data'
        @ PROW(),63 SAY 'Valor'
        @ PROW(),70 SAY 'Oper.'
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO

************************** F I M ********************************************

