*************************************
* EMITE DECLARACAO DE COMPARECIMENTOS
*************************************
FUNCTION smedguia
*****************
LOCAL mprg:='SMEDGUIA',lin,lin1,lin2,lin3,lin4,mdeclara,linhas := 0,mdata,i;
      ,mclinica,mhospital,mdiag1,mdiag2,mdiag3,mdiag4,mconduta1,mconduta2,;
      mconduta3,mconduta4,mdias,opcao,tela550,mnome,obs1,obs2,obs3,obs4,obs5,mqtd:=0

PRIVATE traco,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := cci := 0
lba := 22
cba := 73
op_tela(03,05,22,73,' Solicitacao de Guia Internamento ')

WHILE .T.
        SET INTEN ON
        mclinica := mhospital := SPACE(30)
        mdiag1 := mdiag2 := mdiag3 := mdiag4 := SPACE(50)
        mconduta1 := mconduta2 := mconduta3 := mconduta4 := SPACE(50)
        obs1 := obs2 := obs3 := obs4 := obs5 := SPACE(50)
        mdias := SPACE(4)
        mdata := CTOD('  /  /  ')
        mnome := SPACE(35)
        lin1 := '         '
        lin2 := 'Solicito guia de internamento na Clinica '
        lin3 := ' do Hospital '
        lin4 := ', para Sr.(a): '
        mqtd := 0
        opcao := SPACE(1)
        traco := REPLI('-',80)
        apaga(23,00,23,79)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome........:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data .......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Clinica.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Hospital....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Diagnostico.:')
        DEVPOS(lci+9,cci+2);DEVOUT('Conduta.....:')
        DEVPOS(lci+13,cci+2);DEVOUT('No.de Dias..:')
        DEVPOS(lci+14,cci+2);DEVOUT('Obs.........:')
        mdata := DATE()
        @ lci+1,cci+16 GET mnome PICT '@!'
        @ lci+2,cci+16 GET mdata PICT '  /  /  '
        @ lci+3,cci+16 GET mclinica PICT '@!'
        @ lci+4,cci+16 GET mhospital PICT '@!'
        @ lci+5,cci+16 GET mdiag1 PICT '@!'
        @ lci+6,cci+16 GET mdiag2 PICT '@!'
        @ lci+7,cci+16 GET mdiag3 PICT '@!'
        @ lci+8,cci+16 GET mdiag4 PICT '@!'
        @ lci+9,cci+16 GET mconduta1 PICT '@!'
        @ lci+10,cci+16 GET mconduta2 PICT '@!'
        @ lci+11,cci+16 GET mconduta3 PICT '@!'
        @ lci+12,cci+16 GET mconduta4 PICT '@!'
        @ lci+13,cci+16 GET mdias PICT '9999'
        @ lci+14,cci+16 GET obs1 PICT '@!'
        @ lci+15,cci+16 GET obs2 PICT '@!'
        @ lci+16,cci+16 GET obs3 PICT '@!'
        @ lci+17,cci+16 GET obs4 PICT '@!'
        @ lci+18,cci+16 GET obs5 PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Quatidade de Copias:')
        @ 23,COL()+1 GET mqtd PICT '9' VALID IF(EMPTY(mqtd),.F.,.T.)
        READ
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        mdeclara := lin1+lin2+IF(EMPTY(mclinica),mclinica,RTRIM(mclinica))+lin3+IF(EMPTY(mhospital),mhospital,RTRIM(mhospital))+lin4+IF(EMPTY(mnome),mnome,RTRIM(mnome))
        i := 0
        FOR i = 1 TO mqtd
                cabec()
                @ PROW()+4,20 SAY 'SOLICITACAO DE GUIA INTERNAMENTO'
                @ PROW(),20 SAY 'SOLICITACAO DE GUIA INTERNAMENTO'
                @ PROW()+3,01 SAY ' '

                linhas := MLCOUNT(mdeclara,60)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(mdeclara,60,linha,,10)
                        @ PROW()+1,10 SAY PADR(RTRIM(LIN),60)
                        @ PROW()+1,10 SAY ' '
                NEXT

                @ PROW()+2,10 SAY 'Diagnostico:'
                @ PROW(),23 SAY mdiag1
                @ PROW()+1,23 SAY mdiag2
                @ PROW()+1,23 SAY mdiag3
                @ PROW()+1,23 SAY mdiag4
                @ PROW()+2,10 SAY 'Conduta....:'
                @ PROW(),23 SAY mconduta1
                @ PROW()+1,23 SAY mconduta2
                @ PROW()+1,23 SAY mconduta3
                @ PROW()+1,23 SAY mconduta4
                @ PROW()+2,10 SAY 'No.de Dias.:'
                @ PROW(),23 SAY mdias
                @ PROW()+2,10 SAY 'OBS........:'
                @ PROW(),23 SAY obs1
                @ PROW()+1,23 SAY obs2
                @ PROW()+1,23 SAY obs3
                @ PROW()+1,23 SAY obs4
                @ PROW()+1,23 SAY obs5

                @ PROW()+6,30 SAY 'Recife,'
                @ PROW(),37 SAY mdata
                @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                @ PROW(),00 SAY PADC(m_set[1,23],80)
                @ PROW()+1,00 SAY PADC(crm,80)
                rodape()
                EJECT
        NEXT
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
******************************* F I M  *************************************************

