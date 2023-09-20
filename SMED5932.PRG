******************************
* LISTAGEM DOS DIAGNOSTICOS
*******************************

FUNCTION smed5932
****************
LOCAL mprg:='SMED5932',lci,cci,lba,cba,opcao,tela530,mdata1,mdata2,tdata,telaprin,mpag,mcont,mdiagno,mtotcir
PRIVATE mmod,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
mcont := 0
mpag := 1
lci := cci := 0
lba :=  19
cba :=  70
op_tela(14,31,19,70,'ESTATISTICA POR DIAGNOSTICO')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        Mensagem('Preencha as Datas ou Tecle <ESC> p/Retornar')
        opcao := SPACE(1)
        mdata1 := mdata2 := CTOD('  /  /  ')
        tdata := mtotcir := 0
        mdiagno := SPACE(20)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data (Inicio do Periodo):')
        DEVPOS(lci+2,cci+2);DEVOUT('Data (Final do Periodo ):')
        DEVPOS(lci+3,cci+2);DEVOUT('   Tipo  de  Diagnostico')
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
        @ lci+4,cci+5 GET mdiagno PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF ! imp_arq('SMED5932.REL')
                LOOP
        ENDIF
        cabdia(mpag,mdata1,mdata2)
        mcont = 6
        WHILE data <= mdata2 .AND. data >= mdata1 .AND.  ! EOF()
                IF mcont >= 60
                        EJECT
                        mpag = mpag + 1
                        cabdia(mpag,mdata1,mdata2)
                        mcont = 6
                ENDIF
                *********************************
                LOCATE REST FOR  diagnost = RTRIM(mdiagno)
                *********************************
                IF FOUND()
                        WHILE data <= mdata2 .AND. data >= mdata1 .AND. ! EOF()
                                IF mcont >= 60
                                        EJECT
                                        mpag = mpag + 1
                                        cabreci(mpag,mdata1,mdata2)
                                        mcont = 6
                                ENDIF
                                @ PROW()+1,02 SAY registro
                                @ PROW(),10 SAY nome
                                @ PROW(),48 SAY data
                                @ PROW(),59 SAY diagnost
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
                cabdia(mpag,mdata1,mdata2)
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
FUNCTION cabdia(fpag,fdata1,fdata2)
***********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,29 SAY 'Estatistica de DIAGNOSTICOS no Periodo'
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
        @ PROW(),59 SAY 'Diagnostico'
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO
************************** F I M ********************************************

