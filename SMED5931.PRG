******************************
* LISTAGEM DAS CIRURGIA
*******************************

FUNCTION smed5931
****************
LOCAL mprg:='SMED5931',lci,cci,lba,cba,opcao,mdata1,mdata2,tdata,mpag,mcont,mcirurg,mtotcir
PRIVATE mmod,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mcont := 0
mpag := 1
lci := cci := 0
lba :=  18
cba :=  70
op_tela(13,31,18,70,'LISTAGEM DAS CIRURGIA')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')
        opcao := SPACE(1)
        mdata1 :=mdata2 := CTOD('  /  /  ')
        tdata := 0
        mcirurg := SPACE(20)
        mtotcir := 0
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        DEVPOS(lci+3,cci+2);DEVOUT('   Tipo  de  Cirurgia')
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
        SELE('cir')
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
        @ lci+4,cci+5 GET mcirurg PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED5931.REL')
                LOOP
        ENDIF
        cabcir(mpag,mdata1,mdata2)
        mcont = 6
        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                IF mcont >= 60
                        EJECT
                        mpag = mpag + 1
                        cabreci(mpag,mdata1,mdata2)
                        mcont = 6
                ENDIF
                *********************************
                LOCATE REST FOR  cirurgia = RTRIM(mcirurg)
                *********************************
                IF FOUND()
                        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                                IF mcont >= 60
                                        EJECT
                                        mpag = mpag + 1
                                        cabcir(mpag,mdata1,mdata2)
                                        mcont = 6
                                ENDIF
                                @ PROW()+1,02 SAY registro
                                @ PROW(),10 SAY nome
                                @ PROW(),48 SAY data
                                @ PROW(),59 SAY cirurgia
                                mcont = mcont + 1
                                mtotcir = mtotcir + 1
                                CONTINUE
                                LOOP
                        ENDDO
                ELSE
                        EXIT
                ENDIF
        ENDDO
        IF mcont > 56
                cabcir(mpag,mdata1,mdata2)
                EJECT
        ENDIF
        @ PROW()+3,02 SAY 'Quantidade de Cirurgias:'
        @ PROW(),27 SAY STRZERO(mtotcir,5,0)
        @ PROW()+3,56 SAY TIME()+' Hrs.'
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
ENDDO
wvw_lclosewindow()
RETURN NIL
****************************** F I M *******************************
**************************
* CABECALHO LIST.FATURAS
**************************
FUNCTION cabcir(fpag,fdata1,fdata2)
***********************
LOCAL traco
traco := REPLI('=',80)
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,31 SAY 'Estatistica CIRURGIAS no Periodo'
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(fpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),37 SAY fdata1
        @ PROW(),46 SAY 'a'
        @ PROW(),48 SAY fdata2
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY traco
        @ PROW()+1,02 SAY 'Registro'
        @ PROW(),12 SAY 'Nome'
        @ PROW(),49 SAY 'Data'
        @ PROW(),59 SAY 'Cirurgia'
        @ PROW()+1,00 SAY traco
        RETURN NIL
ENDDO

************************** F I M ********************************************

