*************************************
* EMITE RESULTADO DE EXAME COLPOSCOPIA
*************************************
FUNCTION smed360
****************
LOCAL mprg:='SMED360'
LOCAL lci,cci,lba,cba,mnome

PRIVATE traco,mrsoc
PRIVATE mimp_tipo:=0,mtipo_imp:='M',mporta_imp:='LPT1',mop_dat,marq:=SPACE(35)

lci := cci := 0
lba := 23
cba := 78

traco := REPLI('-',80)

*********************************************
CLOSE ALL
abriarq('smedconv','conv')
abriarq('smedcol','col')
abriarq('smedtab','tab')
*********************************************
op_tela(05,03,23,78,' Exame Colposcopia ')

WHILE .T.
        SET INTEN ON
        mnome := SPACE(35)
        Mensagem('Digite o nome da Cliente a ser consultada <ESC> p/Retornar')
        exibi_prg(mprg)
        limpa(00,00,30,90)
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
                CLOSE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mnome)
                LOOP
        ENDIF
        ********************
        SELE('col');SET ORDER TO 1
        GO TOP
        ********************
        IF ! col->(DBSEEK(RTRIM(mnome)))
                atencao('Nome nao encontrado no arquivo !!!')
                LOOP
        ENDIF
        Mensagem('<'+setcim+'> Prox.Reg. - <'+setbaix+'> Registro Ant. - <I>p/Imprimir - <ESC>Abandonar')
        WHILE .T.
                setcor(3)
                DEVPOS(lci+1,cci+21);DEVOUT(col->nome)
                DEVPOS(lci+1,cci+67);DEVOUT(col->idade)
                DEVPOS(lci+2,cci+23);DEVOUT(col->medico)
                DEVPOS(lci+3,cci+21);DEVOUT(col->paridade)
                DEVPOS(lci+4,cci+21);DEVOUT(col->data)
                DEVPOS(lci+5,cci+21);DEVOUT(col->cod_con)
                vcconv(col->cod_con,lci+5,cci+24)
                setcor(3)
                DEVPOS(lci+6,cci+15);DEVOUT(col->lin1)
                DEVPOS(lci+7,cci+15);DEVOUT(col->lin2)
                DEVPOS(lci+9,cci+14);DEVOUT(col->lin3)
                DEVPOS(lci+10,cci+14);DEVOUT(col->lin4)
                DEVPOS(lci+11,cci+14);DEVOUT(col->lin5)
                DEVPOS(lci+12,cci+14);DEVOUT(col->lin6)
                DEVPOS(lci+14,cci+14);DEVOUT(col->lin7)
                DEVPOS(lci+15,cci+14);DEVOUT(col->lin8)
*               DEVPOS(lci+14,cci+14);DEVOUT(col->lin9)
*               DEVPOS(lci+15,cci+14);DEVOUT(col->lin10)
                DEVPOS(lci+16,cci+21);DEVOUT(col->shil)
                DEVPOS(lci+17,cci+21);DEVOUT(col->diag)
                setcor(1)
                INKEY(0)

                IF LASTKEY() = 27
                        SET CURSOR ON
                        EXIT
                ENDIF
                IF LASTKEY() = 5
                        SKIP
                        IF EOF()
                                SKIP -1
                                atencao('Fim do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF

                IF LASTKEY() = 24
                        SKIP -1
                        IF BOF()
                                atencao('Inicio do Arquivo !!!')
                        ENDIF
                        LOOP
                ENDIF
                IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                        mensagem('Espere o Final da Impressao OK')
                        IF ! imp_arq('COLPOS.REL','R')
                                LOOP
                        ENDIF
                        cabec()
                        @ PROW()+3,00 SAY PADC('RESULTADO DA COLPOSCOPIA',80)
                        @ PROW(),00 SAY PADC('RESULTADO DA COLPOSCOPIA',80)
                        @ PROW()+3,02 SAY 'Nome ..........:'
                        @ PROW(),18 SAY col->nome

                        @ PROW(),55 SAY 'Idade...:'
                        @ PROW(),65 SAY col->idade

                        @ PROW()+2,02 SAY 'Medico Requisitante:'
                        @ PROW(),23 SAY col->medico

                        @ PROW()+2,02 SAY 'Paridade.......:'
                        @ PROW(),18 SAY col->paridade

                        @ PROW()+2,02 SAY 'Data - U.M. ...:'
                        @ PROW(),18 SAY col->data

                        @ PROW()+2,02 SAY 'Cat.da Paciente:'
                        @ PROW(),18 SAY mrsoc

                        @ PROW(),50 SAY 'Exame Solicitado:'
                        @ PROW(),67 SAY 'COLPOSCOPIA'
                        @ PROW(),67 SAY 'COLPOSCOPIA'

                        @ PROW()+2,02 SAY 'Descricao...:'
                        @ PROW(),02 SAY 'Descricao...:'
                        @ PROW(),17 SAY col->lin1
                        @ PROW()+1,17 SAY col->lin2
                        @ PROW()+1,17 SAY col->lin3
                        @ PROW()+1,17 SAY col->lin4
                        @ PROW()+1,17 SAY col->lin5
                        @ PROW()+1,17 SAY col->lin6
                        @ PROW()+1,17 SAY col->lin7
                        @ PROW()+1,17 SAY col->lin8
                        @ PROW()+1,17 SAY col->lin9
                        @ PROW()+1,17 SAY col->lin10

                        @ PROW()+3,02 SAY 'Schiller.......:'
                        @ PROW(),18 SAY col->shil

                        @ PROW()+3,02 SAY 'Diagnostico....:'
                        @ PROW(),18 SAY col->diag


                        @ PROW()+5,35 SAY 'Recife,'
                        @ PROW(),42 SAY DATE()
                        @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                        @ PROW()+1,00 SAY PADC(crm,80)
                        @ 59,58 SAY TIME()+' Hrs.'
                        @ 60,00 SAY traco
                        @ PROW()+1,90 SAY ' '
                        EJECT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        IF mimp_tipo = 2
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                        ELSEIF mimp_tipo = 1
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                        ENDIF
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ENDDO
ENDDO
******************************* F I M  *************************************************

