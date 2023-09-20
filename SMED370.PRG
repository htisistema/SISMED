*** SMED370.PRG: Consulta de CIRURGIAS
**************************************************
FUNCTION smed370()
***************
LOCAL mprg:='SMED370'
LOCAL mtipo,lci,cci,lba,cba,m_dup:={},m_pos:={},point,mdata1,;
      mdata2,mteladata,mtot_dup,mvlr_dup,mcod_cli,mcod_conv,mcod_cirur,mpag,;
      mcont := 0,i
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := cci := 00
lba := 29
cba := 79
*********************************************
CLOSE ALL
abriarq('smedcirur','cirur')
abriarq('smedcli','cli')
abriarq('smedconv','conv')
abriarq('smedmvci','mvci')
*********************************************
**************
//SELE('mvci');ORDSETFOCUS(1)
***************
op_tela(01,00,29,79,' CONSULTA "Cirurgia por Cliente" ')
WHILE .T.
        exibi_prg(mprg)
        limpa(00,00,30,90)
        mdata1 := mdata2 := CTOD('  /  /  ')
        mcod_cli := mcod_conv := mcod_cirur := mtot_dup := mvlr_dup := 0
        mpag := 1
        ASIZE(m_dup,0)
        ASIZE(m_pos,0)
        setcor(3)
        @ lci+2,cci TO lci+2,cba
        DEVPOS(lci+1,cci+1);DEVOUT('  Data')
        DEVPOS(lci+1,cci+11);DEVOUT('Cliente')
        DEVPOS(lci+1,cci+37);DEVOUT('Cirurgia')
        DEVPOS(lci+1,cci+66);DEVOUT('Valor')
        DEVPOS(lci+1,cci+74);DEVOUT('Conv.')
        *** RESUMO DA CONSULTA ***
        botao(20,00,22,79)
        setcor(1)
        DEVPOS(21,02);DEVOUT('Quantidade de Cirurgia:')
        DEVPOS(21,36);DEVOUT('Total de Cirurgias..R$:')
        mensagem('Digite o periodo que deseja consultar - <ESC> p/retornar')
        op_tela(12,25,18,77)
        DEVPOS(01,01);DEVOUT('Cod.Cliente.:')
        DEVPOS(02,01);DEVOUT('Cod.Convenio:')
        DEVPOS(03,01);DEVOUT('Cod.Cirurgia:')
        DEVPOS(04,01);DEVOUT('Data Inicial:')
        DEVPOS(05,01);DEVOUT('Data Final..:')
        @ 01,15 GET mcod_cli PICT '99999' VALID ver_cli(STRZERO(mcod_cli,5),01,21)
        @ 02,15 GET mcod_conv PICT '99' WHEN EMPTY(mcod_cli) VALID ver_conv(STRZERO(mcod_conv,2),02,21)
        @ 03,15 GET mcod_cirur PICT '999' VALID ver_cirur(STRZERO(mcod_cirur,3),03,21)
        @ 04,15 GET mdata1
        @ 05,15 GET mdata2
        READ
        wvw_lclosewindow()
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF mdata1 > mdata2
                LOOP
        ENDIF
        IF EMPTY(mdata1)
                mdata1 := CTOD('11/11/11')
        ENDIF
        IF EMPTY(mdata2)
                mdata2 := CTOD('31/12/99')
        ENDIF
        opcao := op_simnao('S','Confirma o periodo [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        SETCOLOR('i')
        DEVPOS(lci,cci+2);DEVOUT('Periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2))
        setcor(1)
        mensagem('Aguarde um momento processando a consulta')
        cComm  := "SELECT * FROM smedmvci WHERE DATA_CIRUR >= "+sr_cdbvalue(mdata1)+" AND DATA_CIRUR <= "+sr_cdbvalue(mdata2)
        IF ! EMPTY(mcod_cli)
                ccomm := ccomm + " AND cod_cli = "+sr_cdbvalue(STRZERO(mcod_cli,5))
        ENDIF
        IF ! EMPTY(mcod_conv)
                ccomm := ccomm + " AND cod_conv = "+sr_cdbvalue(STRZERO(mcod_conv,2))
        ENDIF
        IF ! EMPTY(mcod_cirur)
                ccomm := ccomm + " AND cod_cirur = "+sr_cdbvalue(STRZERO(mcod_cirur,3))
        ENDIF
        ccomm := ccomm + " ORDER BY DATA_CIRUR"
        aret:={}
        sr_getconnection():exec(ccomm,,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) = 0
                atencao('Nao existe nenhum CIRURGIA neste periodo')
                LOOP
        ENDIF
        FOR i = 1 TO LEN(aret)
                AADD(m_pos,aret[i,17])
                AADD(m_dup,DTOC(aret[i,1])+' '+aret[i,4]+'-'+LEFT(aret[i,5],20);
                +' '+aret[i,6]+'-'+LEFT(aret[i,7],20)+' '+TRANSFORM(aret[i,15],'999999.99');
                +'     '+aret[i,8])
                mvlr_dup := mvlr_dup + aret[i,15]
                mtot_dup ++
                setcor(3)
                DEVPOS(21,28);DEVOUT(STRZERO(mtot_dup,6))
                DEVPOS(21,60);DEVOUT(TRANSFORM(mvlr_dup,'999,999,999.99'))
                setcor(1)
        NEXT
        WHILE .T.
                CLEAR TYPEAHEAD
                mensagem("<ESC> Retorna - <ENTER> p/Resumo - <F6>mprimir" )
                point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_dup)
                DO CASE
                        CASE LASTKEY()=27
                                opcao := op_simnao('N','Deseja imprimir as cirurgias [s/N]:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        EXIT
                                ENDIF
                                IF ! imp_arq('SMED.REL')
                                        LOOP            
                                ENDIF
                                mensagem('Espere o Final da Impressao OK')
                                cabciru(mpag,mdata1,mdata2)
                                mcont = 7
                                i := 0
                                FOR i = 1 TO LEN(m_dup)
                                        IF mcont >= 58
                                                EJECT
                                                mpag = mpag + 1
                                                cabciru(mpag,mdata1,mdata2)
                                                mcont = 7
                                        ENDIF
                                        @ PROW()+1,01 SAY m_dup[i]
                                        mcont = mcont + 1
                                NEXT
                                IF mcont > 54
                                        cabciru(mpag,mdata1,mdata2)
                                        EJECT
                                ENDIF
                                DEVPOS(PROW()+2,00);DEVOUT('**************** R E S U M O *************')
                                DEVPOS(PROW()+1,00);DEVOUT('Quantidade de Cirurgia: '+TRANSFORM(mtot_dup,'9,999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT('Total de Cirurgias..R$: '+TRANSFORM(mvlr_dup,'9,999,999.99'))
                                @ PROW()+1,00 SAY TIME()+' Hrs.'
                                EJECT
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                                IF mimp_tipo = 2
                                        FCLOSE('HTI.REL')
                                        MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                                ELSEIF mimp_tipo = 1
                                        FCLOSE('HTI.REL')
                                        MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                                ENDIF
                                EXIT
                        CASE LASTKEY() = 13
                                aret:={}
                                sr_getconnection():exec("SELECT * FROM smedmvci WHERE sr_recno = "+sr_cdbvalue(m_pos[point]),,.t.,@aret)
                                sr_getconnection():exec('COMMIT',,.f.)
                                op_tela(09,06,23,70,' CONSULTA "Cirurgia" ')
                                setcor(1)
                                DEVPOS(1,01);DEVOUT('Data Cirurgia....:')
                                DEVPOS(2,01);DEVOUT('Hora.............:')
                                DEVPOS(3,01);DEVOUT('Hrs.Internamento.:')
                                DEVPOS(4,01);DEVOUT('Cliente..........:')
                                DEVPOS(5,01);DEVOUT('Convenio.........:')
                                DEVPOS(6,01);DEVOUT('Cirurgia.........:')
                                DEVPOS(7,01);DEVOUT('Diagnostico......:')
                                DEVPOS(9,01);DEVOUT('Hospital.........:')
                                DEVPOS(10,01);DEVOUT('Equipe Medico....:')
                                DEVPOS(11,01);DEVOUT('Alta da Cirurgia.:')
                                DEVPOS(12,01);DEVOUT('Valor Cirurgia R$:')
                                DEVPOS(13,01);DEVOUT('Observacao.......:')
                                setcor(3)
                                DEVPOS(1,20);DEVOUT(aret[1,1])
                                DEVPOS(2,20);DEVOUT(aret[1,2])
                                DEVPOS(3,20);DEVOUT(aret[1,3])
                                DEVPOS(4,20);DEVOUT(aret[1,4]+'-'+aret[1,5])
                                DEVPOS(5,20);DEVOUT(aret[1,8]+'-'+aret[1,9])
                                DEVPOS(6,20);DEVOUT(aret[1,6]+'-'+aret[1,7])
                                DEVPOS(7,20);DEVOUT(aret[1,10])
                                DEVPOS(8,20);DEVOUT(aret[1,11])
                                DEVPOS(9,20);DEVOUT(aret[1,14])
                                DEVPOS(10,20);DEVOUT(aret[1,12])
                                DEVPOS(11,20);DEVOUT(aret[1,13])
                                DEVPOS(12,20);DEVOUT(TRANSFORM(aret[1,15],'9,999,999.99'))
                                DEVPOS(13,20);DEVOUT(aret[1,16])
                                setcor(1)
                                mensagem('Pressione qualquer tecla p/retornar')
                                INKEY(0)
                                wvw_lclosewindow()
                                LOOP
                ENDCASE
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* FIM **************************************8
* CABECALHO LIST.CIRURGIAS
**************************
FUNCTION cabciru(fpag,fdata1,fdata2)
***********************
LOCAL traco := REPLI('=',80)
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW()+1,31 SAY 'Listagem de Cirurgias'
        @ PROW()+1,02 SAY m_set[1,23]
        @ PROW(),31 SAY 'Periodo de'
        @ PROW(),42 SAY fdata1
        @ PROW(),51 SAY 'a'
        @ PROW(),53 SAY fdata2
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(fpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY traco
        DEVPOS(PROW()+1,1);DEVOUT('  Data')
        DEVPOS(PROW(),11);DEVOUT('Cliente')
        DEVPOS(PROW(),37);DEVOUT('Cirurgia')
        DEVPOS(PROW(),66);DEVOUT('Valor')
        DEVPOS(PROW(),74);DEVOUT('Conv.')
        @ PROW()+1,00 SAY traco
        RETURN NIL
ENDDO
************************** F I M ********************************************

