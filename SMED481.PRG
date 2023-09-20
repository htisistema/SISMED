*************************
* MOVIMENTO DE CAIXA
*************************
***
FUNCTION smed481
*****************
LOCAL mprg:='SMED481',;
      lci,cci,lba,cba,opcao,mdata1,mdata2,mtot_vlr,mtot_qtd,mcod_med,;
      mcod_esp,mtit,mtipo,pag

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtraco:=REPLI('-',132),marq:=SPACE(35)


IF ! ver_nivel(mprg,'RELATORIO DE MOVIMENTACAO DO PERIODO','12',nivel_acess)
        RETURN NIL
ENDIF
lci := cci := 0
lba := 13
cba := 70
*****************************************************
CLOSE ALL
abriarq('smedcli','cli')
abriarq('smedtab','tab')
abriarq('smedconv','conv')
abriarq('smedespe','espe')
abriarq('sacdupr','dupr')
*****************************************************
op_tela(07,10,13,70,' Relatorio de Movimentacao ')

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := 'R'
****************************************************
        limpa(00,00,30,90)
        exibi_prg(mprg)
        opcao:= ' '
        mdata1 := mdata2 := CTOD('  /  /  ')
        mtot_vlr := mtot_qtd := mcod_med := mcod_esp := 0
        DEVPOS(lci+1,cci+1);DEVOUT('Data Inicial.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Data Final.......:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo Medico....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Cod.Especialidade:')
        @ lci+1,cci+20 GET mdata1 VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+20 GET mdata2 VALID IF(EMPTY(mdata2) .OR. mdata2 < mdata1,.F.,.T.)
        @ lci+3,cci+20 GET mcod_med PICT '999' VALID ven(mcod_med,lci+3,cci+24)
        @ lci+4,cci+20 GET mcod_esp PICT '999' VALID ver_espe(mcod_esp,lci+4,cci+24)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ***************************
        SELE('dupr');ORDSETFOCUS(5)
        GO TOP
        ***************************
        dupr->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        IF ! imp_arq('CONTAS.REL','R')
                LOOP
        ENDIF
        pag := 0
        mtit := 'Relatorio de Movimentacao por Periodo'
        mtipo := 'de: '+DTOC(mdata1)+' a '+DTOC(mdata2)
        WHILE dupr->emissao <= mdata2 .AND. ! EOF()
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt('M','C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Med')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cliente'+SPACE(39))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Especialidade')
                        DEVPOS(PROW(),PCOL()+12);DEVOUT('     Valor')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Ope.')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Atend.')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
                IF (! EMPTY(mcod_med) .AND. STRZERO(mcod_med) <> dupr->cod_med);
                   .OR. (! EMPTY(mcod_esp) .AND. STRZERO(mcod_esp) <> dupr->cod_esp)
                        SKIP
                        LOOP
                ENDIF
                imprt('M','C')
                DEVPOS(PROW()+1,00);DEVOUT(dupr->emissao)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->cod_med)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->fornec+'-'+dupr->cliente)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->cod_esp+'-')
                ver_espe(VAL(dupr->cod_esp),PROW(),PCOL()+1)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TRANSFORM(dupr->valor,'9,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(dupr->operador)
                DEVPOS(PROW(),PCOL()+3);DEVOUT(dupr->status)
                mtot_vlr := mtot_vlr + dupr->valor
                mtot_qtd ++
                SKIP
        ENDDO
        imprt('M','N')
        DEVPOS(PROW()+2,00);DEVOUT('************** TOTAL GERAL ***************')
        DEVPOS(PROW()+1,00);DEVOUT('Quantidade de Consultas: '+TRANSFORM(mtot_qtd,'999999'))
        DEVPOS(PROW()+1,00);DEVOUT('Valor Total R$.........: '+TRANSFORM(mtot_vlr,'999,999.99'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        RESTSCREEN(00,00,24,79,tela)
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
