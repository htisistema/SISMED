*******************************
* LISTAGEM DOS MEDICAMENTOS
*******************************
FUNCTION smed5933
****************
LOCAL mprg:='SMED5933',lci,cci,lba,cba,opcao,mdata1,mdata2,tdata,mpag,mcont,mmedica,mtotcir

PRIVATE mmod,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mcont := 0
mpag := 1
lci :=  cci :=  0
lba :=  20
cba :=  70
op_tela(15,31,20,70,'ESTATISTICA POR MEDICAMENTO')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')
        opcao := SPACE(1)
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        tdata := 0
        mmedica := SPACE(20)
        mtotcir := 0
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        DEVPOS(lci+3,cci+2);DEVOUT('   Tipo  de  Medicamento')
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
        SELE('clin');ORDSETFOCUS(1)
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
        @ lci+4,cci+5 GET mmedica PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED5933.REL')
                LOOP
        ENDIF

        cabmedi(mpag,mdata1,mdata2)
        mcont = 6
        WHILE data <= mdata2 .AND. data >= mdata1 .AND.  ! EOF()
                IF mcont >= 60
                        EJECT
                        mpag = mpag + 1
                        cabmedi(mpag,mdata1,mdata2)
                        mcont = 6
                ENDIF
                *********************************
                LOCATE REST FOR  medica = RTRIM(mmedica)
                *********************************
                IF FOUND()
                        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                                IF mcont >= 60
                                        EJECT
                                        mpag = mpag + 1
                                        cabmedi(mpag,mdata1,mdata2)
                                        mcont = 6
                                ENDIF
                                @ PROW()+1,02 SAY registro
                                @ PROW(),10 SAY nome
                                @ PROW(),48 SAY data
                                @ PROW(),59 SAY medica
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
                cabmedi(mpag,mdata1,mdata2)
                EJECT
        ENDIF
        @ PROW()+3,02 SAY 'Quantidade de Clientes :'
        @ PROW(),27 SAY STRZERO(mtotcir,5,0)
        @ PROW()+3,56 SAY TIME()+' Hrs.'
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
**************************
* CABECALHO LIST.FATURAS
**************************
FUNCTION cabmedi(fpag,fdata1,fdata2)
***********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,29 SAY 'Estatistica de MEDICAMENTOS no Periodo'
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(fpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),37 SAY fdata1
        @ PROW(),46 SAY 'a'
        @ PROW(),48 SAY fdata2
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        @ PROW()+1,02 SAY 'Registro'
        @ PROW(),12 SAY 'Nome'
        @ PROW(),49 SAY 'Data'
        @ PROW(),59 SAY 'Medicamentos'
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO
************************** F I M ********************************************

