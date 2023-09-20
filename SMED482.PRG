* FECHAMENTO DO DIA
*************************
FUNCTION smed482
*****************
LOCAL mprg:='SMED481',opcao,mdata,mtot_vlr :=0, mtot_qtd := 0
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),mtraco := REPLI('-',80)

IF ! ver_nivel(mprg,'FECHAMENTO DO DIA','1',nivel_acess)
        RETURN NIL
ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
*****************************************************
CLOSE ALL
abriarq('smedcli','cli')
abriarq('smedtab','tab')
abriarq('smedconv','conv')
abriarq('smedespe','espe')
abriarq('sacdupr','dupr')
*****************************************************
op_tela(07,10,13,70,' FECHAMENTO DO DIA ')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'R'
****************************************************
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mtot_vlr := mtot_qtd := 0
        opcao:= ' '
        mdata := DATE()
        DEVPOS(1,1);DEVOUT('Data Fechamento..:')
        @ 1,20 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma Processo [S/N]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        ***************************
        SELE('cli');ORDSETFOCUS(1)
        GO TOP
        ***************************
        msele := SELE()
        morde := INDEXORD()
        WHILE ! EOF()
                ************
                SELE('conv');ORDSETFOCUS(1)
                GO TOP
                ************
                SEEK cli->codconv
                IF ! FOUND()
                        SELE(msele);ORDSETFOCUS(morde)
                        SKIP
                        LOOP
                ELSEIF conv->modalidade # 'IT'
                        SELE(msele);ORDSETFOCUS(morde)
                        SKIP
                        LOOP
                ENDIF
                ***************************
                SELE('dupr');ORDSETFOCUS(2)
                GO TOP
                ***************************
                mdupl := SUBSTR(DTOC(mdata),1,2)+SUBSTR(DTOC(mdata),4,2)+SUBSTR(DTOC(mdata),7)
                dupr->(DBSEEK(cli->registro+' '+mdupl,.T.))
                IF FOUND()
                        SELE(msele);ORDSETFOCUS(morde)
                        SKIP
                        LOOP
                ENDIF
                IF ADIREG()
                        dupr-> conv      := cli->codconv
                        dupr-> fornec    := cli->registro
                        dupr-> cliente   := cli->nome
                        dupr-> tipo      := 'DI'
                        dupr-> duplicata := mdupl
                        dupr-> valor_dup := cli->valor
                        dupr-> c_cpfcnpj := cli->cpf
                        dupr-> emissao   := mdata
                        dupr-> venc      := mdata
                        dupr-> datope    := DATE()
                        dupr-> valor     := cli->valor
                        dupr-> operador  := cod_operado
                        COMMIT
                        UNLOCK
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
                DBCOMMIT();DBUNLOCK()
                SELE(msele);ORDSETFOCUS(morde)
                SKIP
        ENDDO
        ***************************
        SELE('dupr');ORDSETFOCUS(5)
        GO TOP
        ***************************
        dupr->(DBSEEK(DTOS(mdata),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('CONTAS.REL','R')
                LOOP
        ENDIF
        pag := 0
        mtit := 'Relatorio do Fechamento do Dia'
        mtipo := 'DIA: '+DTOC(mdata)
        WHILE dupr->emissao = mdata .AND. ! EOF()
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt('M','C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cliente'+SPACE(39))
                        DEVPOS(PROW(),PCOL()+12);DEVOUT('     Valor')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Ope.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                /*
                IF (! EMPTY(mcod_med) .AND. STRZERO(mcod_med) <> dupr->cod_med);
                   .OR. (! EMPTY(mcod_esp) .AND. STRZERO(mcod_esp) <> dupr->cod_esp)
                        SKIP
                        LOOP
                ENDIF
                */
                imprt('M','C')
                DEVPOS(PROW()+1,00);DEVOUT(dupr->emissao)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->fornec+'-'+dupr->cliente)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupr->valor,'9,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->operador)
                mtot_vlr := mtot_vlr + dupr->valor
                mtot_qtd ++
                SKIP
        ENDDO
        imprt('M','N')
        DEVPOS(PROW()+2,00);DEVOUT('************** TOTAL GERAL ***************')
        DEVPOS(PROW()+1,00);DEVOUT('Quantidade de CLIENTE: '+TRANSFORM(mtot_qtd,'999999'))
        DEVPOS(PROW()+1,00);DEVOUT('Valor Total R$.......: '+TRANSFORM(mtot_vlr,'999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
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
