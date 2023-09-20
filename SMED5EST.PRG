*********************************
* RELATORIO DE ESTATISTICA DE ENDOSCOPIA
****************************************
FUNCTION smed5est
******************
LOCAL tela,lci,cci,lba,cba,opcao,mid1,mid2,msexo,mmotivo,mdiag,mord_id,mord_sx,;
      mord_mot,mord_diag,mpag,mtot_cli,mqtd_cli
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := 10
cci := 10
lba := 17
cba := 78
tela := SAVESCREEN(00,00,24,79)
**********************************
CLOSE ALL
abriarq('smedendo','endo')
* SET INDEX TO smedend1,smedend2,smedend3,smedend4
**********************************
WHILE .T.
        opcao := 'S'
        msexo := SPACE(1)
        mid1 := 0
        mid2 := 0
        mmotivo := SPACE(50)
        mdiag := SPACE(50)
        mord_id := SPACE(1)
        mord_sx := SPACE(1)
        mord_mot := SPACE(1)
        mord_diag := SPACE(1)
        mpag := 0
        mtot_cli := 0
        mqtd_cli := 0
        botao(lci,cci,lba,cba)
        janela(lci,cba,' Estatistica de Endoscopia Per-oral ')
        DEVPOS(lci+1,cci+2);DEVOUT('Idade entre:     e')
        DEVPOS(lci+2,cci+2);DEVOUT('Sexo.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('Motivo.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Diagnostico:')
        @ lci+5,cci+1 TO lci+5,cba-1
        janela(lci+5,cba,' Tipo de Ordem do relatorio ')
        DEVPOS(lci+6,cci+2);DEVOUT('Idade:   Sexo:   Motivo:   Diagnostico:')
        @ lci+1,cci+15 GET mid1 PICT '999'
        @ lci+1,cci+21 GET mid2 PICT '999' WHEN mid1 <> 0 VALID IF(EMPTY(mid2),.F.,.T.)
        @ lci+2,cci+15 GET msexo PICT '@!' VALID msexo $ 'F,M,G, '
        @ lci+3,cci+15 GET mmotivo PICT '@!'
        @ lci+4,cci+15 GET mdiag PICT '@!'
        @ lci+6,cci+09 GET mord_id PICT '@!' VALID mord_id $ 'X, '
        @ lci+6,cci+17 GET mord_sx PICT '@!' VALID mord_sx $ 'X, ' WHEN mord_id = ' '
        @ lci+6,cci+27 GET mord_mot PICT '@!' VALID mord_mot $ 'X, ' WHEN mord_sx = ' ' .AND. mord_id = ' '
        @ lci+6,cci+42 GET mord_diag PICT '@!' VALID mord_diag $ 'X, ' WHEN mord_mot = ' '  .AND. mord_id = ' ' .AND. mord_mot = ' '
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao da Estatistica [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        mensagem('Aguarde um momento gerando relatorio')
        ***********************
        SELE('endo')
        IF mord_id = 'X'
                SET ORDER TO 1
        ELSEIF mord_sx = 'X'
                SET ORDER TO 2
        ELSEIF mord_mot = 'X'
                SET ORDER TO 3
        ELSE
                SET ORDER TO 4
        ENDIF
        ***********************
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        mtit := 'Estatistica de Endoscopia Per-oral'

        IF mid1 > 0
                mtipo := 'Entre Idade: '+STR(mid1)+' e '+STR(mid2)+' '
        ENDIF
        IF msexo <> SPACE(1)
                mtipo := mtipo+'Sexo: '+msexo+' '
        ENDIF
        IF mmotivo <> SPACE(50)
                mtipo := mtipo+'Motivo: '+mmotivo+' '
        ENDIF
        IF mdiag <> SPACE(50)
                mtipo := mtipo+'Diagostico: '+mdiag+' '
        ENDIF
        WHILE ! EOF()
                INKEY(.3)
                IF LASTKEY() = 27
                        DEVPOS(PROW()+2,00);DEVOUT('Impressao cancelada pelo operador')
                        EXIT
                ENDIF
                IF pag=0 .OR. PROW()>=58
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo)
                        imprt(impressora,'C',1)
                        ?? "Cod. Cliente                                    Idade Sexo"
                        ? REPLICATE("=",137)
                ENDIF
                mtot_cli := mtot_cli + 1
                IF ! EMPTY(mid1)
                        IF idade < mid1 .OR. idade > mid2
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF ! EMPTY(msexo)
                        IF sexo <> msexo
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF ! EMPTY(mmotivo)
                        IF mot_exa1 <> mmotivo
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                IF ! EMPTY(mdiag)
                        IF diag1 <> mdiag
                                SKIP
                                LOOP
                        ENDIF
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(cod+'-'+nome+'  '+idade+'   '+sexo)
                mqtd_cli := mqtd_cli + 1
                SKIP
        ENDDO
        DEVPOS(PROW()+2,00);DEVOUT('Quantidade total Geral de Clientes: '+TRANSFORM(mtot_cli,'9,999,999'))
        DEVPOS(PROW()+1,00);DEVOUT('Clientes que atende as condicao...: '+TRANSFORM(mqtd_cli,'9,999,999'))
        DEVPOS(PROW()+1,00);DEVOUT('Percentual (%) correspondente.....: '+TRANSFORM((mqtd_cli/mtot_cli)*100,'9,999,999'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        EJECT
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
ENDDO
