*************************************
* EMITE FICHA DE INTERNAMENTO
*************************************
FUNCTION smed595
******************
LOCAL mprg:='SMED595',lci,cci,lba,cba,mnome,mhospita,mcirurgi,mdatint;
      ,mhoraint,mdatcir,mtrico,mhoraje,mdatjeju,mobs1,mobs2,opcao,mdata,mqtd:=1

PRIVATE traco,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
lci := cci := 0
lba := 17
cba := 73
op_tela(06,10,17,73,' Ficha de Internamento ')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        SET INTEN ON
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'M'
****************************************************
        mnome := SPACE(35)
        mhospita := SPACE(20)
        mcirurgi := SPACE(35)
        mdata := DATE()
        mdatint := CTOD('  /  /  ')
        mhoraint := SPACE(5)
        mdatcir := CTOD('  /  /  ')
        mtrico := SPACE(20)
        mhoraje := SPACE(5)
        mdatjeju := CTOD('  /  /  ')
        mobs1 := mobs2 := SPACE(35)
        opcao := SPACE(1)
        mqtd := 1
        traco := REPLI('-',80)

        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome ............:')
        DEVPOS(lci+2,cci+2);DEVOUT('Hospital ........:')
        DEVPOS(lci+3,cci+2);DEVOUT('Medico ..........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cirurgia ........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data Emissao.....:')
        DEVPOS(lci+5,cci+31);DEVOUT('Data Internamento:')
        DEVPOS(lci+5,cci+32);DEVOUT('Hora:')
        DEVPOS(lci+6,cci+2);DEVOUT('Data da Cirurgia.:')
        DEVPOS(lci+7,cci+2);DEVOUT('Tricotomia ......:')
        DEVPOS(lci+8,cci+2);DEVOUT('Jejum a partir de:')
        DEVPOS(lci+8,cci+28);DEVOUT('de')
        DEVPOS(lci+9,cci+2);DEVOUT('Observacoes:')
        SETCOLOR('w+,g,x')
        DEVPOS(lci+3,cci+21);DEVOUT(m_set[1,23])
        setcor(1)
        @ lci+1,cci+21 GET mnome PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mdata := DATE()
        @ lci+2,cci+21 GET mhospita PICT '@!'
        @ lci+4,cci+21 GET mcirurgi PICT '@!'
        @ lci+5,cci+21 GET mdata PICT '  /  /  '
        @ lci+5,cci+51 GET mdatint PICT '  /  /  '
        @ lci+5,cci+38 GET mhoraint PICT '99:99'
        @ lci+6,cci+21 GET mdatcir PICT '  /  /  '
        @ lci+7,cci+21 GET mtrico PICT '@!'
        @ lci+8,cci+21 GET mhoraje PICT '99:99'
        @ lci+8,cci+31 GET mdatjeju PICT '  /  /  '
        @ lci+9,cci+15 GET mobs1
        @ lci+10,cci+15 GET mobs2
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Quantidade de Copia:')
        opcao := 'S'
        @ 23,COL()+1 GET mqtd PICT '9' VALID IF(EMPTY(mqtd),.F.,.T.)
        READ
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('SMED595.REL')
                LOOP
        ENDIF
        WHILE .T.
                i := 0
                FOR i = 1 TO mqtd
                        cabec()
                        @ PROW()+4,33 SAY 'FICHA DE INTERNAMENTO'
                        @ PROW(),33 SAY 'FICHA DE INTERNAMENTO'
                        @ PROW()+4,01 SAY ' '
                        @ PROW()+1,22 SAY 'Nome ............:'
                        @ PROW(),22 SAY 'Nome ............:'
                        @ PROW(),41 SAY mnome
                        @ PROW()+2,22 SAY 'Hospital ........:'
                        @ PROW(),22 SAY 'Hospital ........:'
                        @ PROW(),41 SAY mhospita
                        @ PROW()+2,22 SAY 'Medico ..........:'
                        @ PROW(),22 SAY 'Medico ..........:'
                        @ PROW(),41 SAY m_set[1,23]
                        @ PROW()+2,22 SAY 'Cirurgia ........:'
                        @ PROW(),22 SAY 'Cirurgia ........:'
                        @ PROW(),41 SAY mcirurgi
                        @ PROW()+2,22 SAY 'Data Internamento:'
                        @ PROW(),22 SAY 'Data Internamento:'
                        @ PROW(),52 SAY 'Hora:'
                        @ PROW(),52 SAY 'Hora:'
                        @ PROW(),41 SAY mdatint PICT '  /  /  '
                        @ PROW(),58 SAY mhoraint PICT '99:99'
                        @ PROW()+2,22 SAY 'Data da Cirurgia.:'
                        @ PROW(),22 SAY 'Data da Cirurgia.:'
                        @ PROW(),41 SAY mdatcir PICT '  /  /  '
                        @ PROW()+2,22 SAY 'Tricotomia ......:'
                        @ PROW(),22 SAY 'Tricotomia ......:'
                        @ PROW(),41 SAY mtrico
                        @ PROW()+2,22 SAY 'Jejum a partir de:'
                        @ PROW(),22 SAY 'Jejum a partir de:'
                        @ PROW(),48 SAY 'de'
                        @ PROW(),48 SAY 'de'
                        @ PROW(),41 SAY mhoraje PICT '99:99'
                        @ PROW(),51 SAY mdatjeju PICT '  /  /  '
                        @ PROW()+2,22 SAY 'Observacoes:'
                        @ PROW(),22 SAY 'Observacoes:'
                        @ PROW(),35 SAY mobs1
                        @ PROW()+1,35 SAY mobs2

                        @ PROW()+5,35 SAY 'Recife,'
                        @ PROW(),42 SAY mdata
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW(),00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC(crm,80)
                        @ 58,58 SAY TIME()+' Hrs.'
                        @ 59,00 SAY traco
                        rodape()
                        EJECT
                NEXT
                SET DEVI TO  SCREEN;SET PRINT TO;SET PRINT OFF
                IF mimp_tipo = 2
                        FCLOSE('HTI.REL')
                        MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                ELSEIF mimp_tipo = 1
                        FCLOSE('HTI.REL')
                        MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                ENDIF
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M  *************************************************

