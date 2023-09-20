*************************************
* EMITE RESULTADO DE EXAME COLPOSCOPIA
*************************************
FUNCTION smed5col
LOCAL telaprin,tela,lci,cci,lba,cba,mnome,mparidade,mdata,mcod_con,mlin1,;
      mlin2,mlin3,mlin4,mlin5,mlin6,mlin7,mlin8,mlin9,mlin10,mshil,mdiag,midade,;
      mmedico
PRIVATE traco,mrsoc,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := cci := 0
lba := 21
cba := 78
traco := REPLI('-',80)
op_tela(03,03,21,78,' Exame Colposcopia ')
*********************************************
CLOSE ALL
abriarq('smedconv','conv')
abriarq('smedtab','tab')
abriarq('smedcol','col')
*********************************************
WHILE .T.
        exibi_prg('SMED5COL')
        mnome := SPACE(35)
        mmedico := SPACE(35)
        midade := SPACE(5)
        mparidade := SPACE(20)
        mdata := CTOD('  /  /  ')
        mcod_con := 0
        mlin1 := mlin2 := mlin3 := mlin4 := mlin5 := mlin6 := mlin7 := mlin8 := mlin9 := mlin10 := SPACE(60)
        mshil := mdiag := SPACE(20)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome ............:')
        DEVPOS(lci+1,cci+58);DEVOUT('Idade..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Medico Requisitante:')
        DEVPOS(lci+3,cci+2);DEVOUT('Paridade.........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data - U. M. ....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Convenio .:')
        DEVPOS(lci+6,cci+2);DEVOUT('Macroscopia:')
        DEVPOS(lci+8,cci+2);DEVOUT('Achados Colposcopicos Normais:')
        DEVPOS(lci+13,cci+2);DEVOUT('Achados Colposcopicos Anormais:')
        DEVPOS(lci+16,cci+2);DEVOUT('Schiller.........:')
        DEVPOS(lci+17,cci+2);DEVOUT('Diagnostico......:')
        @ lci+1,cci+21 GET mnome PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mnome)
                LOOP
        ENDIF
        @ lci+1,cci+67 GET midade PICT '999'
        @ lci+2,cci+23 GET mmedico PICT '@!'
        @ lci+3,cci+21 GET mparidade PICT '@!'
        @ lci+4,cci+21 GET mdata PICT '  /  /  '
        @ lci+5,cci+21 GET mcod_con PICT '99' VALID vcconv(STRZERO(mcod_con,2),lci+5,cci+24)
        @ lci+6,cci+15 GET mlin1
        @ lci+7,cci+15 GET mlin2
        @ lci+9,cci+14 GET mlin3
        @ lci+10,cci+14 GET mlin4
        @ lci+11,cci+14 GET mlin5
        @ lci+12,cci+14 GET mlin6
        @ lci+14,cci+14 GET mlin7
        @ lci+15,cci+14 GET mlin8
*       @ lci+14,cci+14 GET mlin9
*       @ lci+15,cci+14 GET mlin10
        @ lci+16,cci+21 GET mshil
        @ lci+17,cci+21 GET mdiag
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        ****************
        SELE('col')
        SET ORDER TO 1
        ****************
        IF ADIREG()
                col-> nome := mnome
                col-> medico := mmedico
                col-> idade := midade
                col-> paridade := mparidade
                col-> data := mdata
                col-> cod_con := STRZERO(mcod_con,2)
                col-> shil := mshil
                col-> diag := mdiag
                col-> lin1 := mlin1
                col-> lin2 := mlin2
                col-> lin3 := mlin3
                col-> lin4 := mlin4
                col-> lin5 := mlin5
                col-> lin6 := mlin6
                col-> lin7 := mlin7
                col-> lin8 := mlin8
                col-> lin9 := mlin9
                col-> lin10 := mlin10
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF

        cabec()
        @ PROW()+1,00 SAY PADC('RESULTADO DA COLPOSCOPIA',80)
        @ PROW(),00 SAY PADC('RESULTADO DA COLPOSCOPIA',80)
        @ PROW()+3,02 SAY 'Nome ..........:'
        @ PROW(),18 SAY mnome
        @ PROW(),18 SAY mnome


        @ PROW(),55 SAY 'Idade...:'
        @ PROW(),65 SAY midade
        @ PROW(),65 SAY midade

        @ PROW()+2,02 SAY 'Medico Requisitante:'
        @ PROW(),23 SAY mmedico
        @ PROW(),23 SAY mmedico

        @ PROW()+2,02 SAY 'Paridade.......:'
        @ PROW(),18 SAY mparidade
        @ PROW(),18 SAY mparidade

        @ PROW()+2,02 SAY 'Data - U.M. ...:'
        @ PROW(),18 SAY mdata
        @ PROW(),18 SAY mdata

        @ PROW()+2,02 SAY 'Cat.da Paciente:'
        @ PROW(),18 SAY mrsoc
        @ PROW(),18 SAY mrsoc

        @ PROW(),50 SAY 'Exame Solicitado:'
        @ PROW(),67 SAY 'COLPOSCOPIA'
        @ PROW(),67 SAY 'COLPOSCOPIA'

        DEVPOS(PROW()+2,02);DEVOUT('Macroscopia')
        DEVPOS(PROW(),02);DEVOUT('Macroscopia')
        @ PROW()+1,10 SAY mlin1
        @ PROW()+1,10 SAY mlin2
        DEVPOS(PROW()+2,02);DEVOUT('Achados Colposcopicos Normais')
        DEVPOS(PROW(),02);DEVOUT('Achados Colposcopicos Normais')
        @ PROW()+1,10 SAY mlin3
        @ PROW()+1,10 SAY mlin4
        @ PROW()+1,10 SAY mlin5
        @ PROW()+1,10 SAY mlin6

        DEVPOS(PROW()+2,02);DEVOUT('Achados Colposcopicos Anormais')
        DEVPOS(PROW(),02);DEVOUT('Achados Colposcopicos Anormais')
        @ PROW()+1,10 SAY mlin7
        @ PROW()+1,10 SAY mlin8

        pitalico(.F.)
        @ PROW()+2,02 SAY 'Schiller.......:'
        @ PROW(),18 SAY mshil
        @ PROW(),18 SAY mshil
        @ PROW(),60 SAY '     __'
        @ PROW()+1,60 SAY '   /    \'

        @ PROW()+1,02 SAY 'Diagnostico....:'
        @ PROW(),18 SAY mdiag
        @ PROW(),18 SAY mdiag
        @ PROW(),60 SAY ' /        \'
        @ PROW()+1,60 SAY ' |        |'
        @ PROW()+1,60 SAY ' \        /'

        @ PROW()+1,35 SAY 'Recife,'
        @ PROW(),42 SAY DATE()
        @ PROW(),60 SAY '   \    / '
        @ PROW()+1,60 SAY '     --'
        pitalico(.T.)
        @ PROW()+5,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
        @ PROW(),00 SAY PADC(m_set[1,23],80)
        @ PROW()+1,00 SAY PADC(crm,80)
        @ 59,58 SAY TIME()+' Hrs.'
        @ 60,00 SAY traco
        @ PROW()+1,90 SAY ' '
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(00,00,24,79,tela)
        CLOSE ALL
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
******************************* F I M  *************************************************

