******************************
* LISTAGEM DOS DIAGNOSTICO/MEDICAMENTOS
*******************************
FUNCTION smed5934
****************
LOCAL lci,cci,lba,cba,opcao,tela530,mdata1,mdata2,tdata,telaprin;
      ,mpag,mcont,mmedica,mdiagno,mtotcir

PRIVATE mmod,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mcont := 0
mpag := 1
lci :=  15
cci :=  31
lba :=  22
cba :=  70
tela530 := SAVESCREEN(00,00,24,79)
WHILE .T.
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')
        opcao := SPACE(1)
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        tdata := 0
        mmedica := SPACE(20)
        mdiagno := SPACE(20)
        mtotcir := 0
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        DEVPOS(lci+3,cci+2);DEVOUT('   Tipo  de  Diagnostico')
        DEVPOS(lci+5,cci+2);DEVOUT('   Tipo  de Medicamento')
        SET INTEN ON
        @ lci+1,cci+29 GET mdata1 PICT '@D'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela530)
                RETURN NIL
        ENDIF
        IF EMPTY(mdata1)
                LOOP
        ENDIF
        *********************
        SELE('clin')
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
        @ lci+4,cci+5 GET mdiagno PICT '@!'
        @ lci+6,cci+5 GET mmedica PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED5934.REL')
                LOOP
        ENDIF
        cabmd(mpag,mdata1,mdata2)
        mcont = 6
        WHILE data <= mdata2 .AND. data >= mdata1 .AND.  ! EOF()
                IF mcont >= 60
                        EJECT
                        mpag = mpag + 1
                        cabmd(mpag,mdata1,mdata2)
                        mcont = 6
                ENDIF
                *********************************
                LOCATE REST FOR  medica = RTRIM(mmedica) .AND. diagnost = RTRIM(mdiagno)
                *********************************
                IF FOUND()
                        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                                IF mcont >= 60
                                        EJECT
                                        mpag = mpag + 1
                                        cabmd(mpag,mdata1,mdata2)
                                        mcont = 6
                                ENDIF
                                @ PROW()+1,02 SAY registro
                                @ PROW(),10 SAY nome
                                @ PROW(),48 SAY data
                                @ PROW(),59 SAY diagnost
                                @ PROW()+1,59 SAY medica
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
                cabmd(mpag,mdata1,mdata2)
                EJECT
        ENDIF
        @ PROW()+3,02 SAY 'Quantidade de Clientes :'
        @ PROW(),27 SAY STRZERO(mtotcir,5,0)
        @ PROW()+3,56 SAY TIME()+' Hrs.'
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        SET ORDER TO 1
        RESTSCREEN(00,00,24,79,tela530)
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        RETURN NIL
ENDDO
****************************** F I M *******************************
* CABECALHO LIST.FATURAS
**************************
FUNCTION cabmd(fpag,fdata1,fdata2)
***********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,29 SAY 'Estatistica DIAG./MEDIC. no Periodo'
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
        @ PROW(),59 SAY 'Diagnost./Medicamento'
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO
************************** F I M ********************************************

