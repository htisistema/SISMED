* INCLUSAO DE CIRURGIAS
*******************************
FUNCTION smed471(mc_cli)
************************
LOCAL mprg:='SMED471',;
      opcao,lci,cci,lba,cba,mdat_cirur,mcod_cli,mcod_cirur,mobs_cirur,mhora_cir,;
      mhora_int,mdiag1,mdiag2,mequipe,malta,mhospital

PRIVATE mcod_conv,mvlr_cirur

CLEAR GETS
lci := cci := 0
lba = 21
cba = 78
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
IF ! abriarq('smedcirur','cirur');RETURN NIL;ENDIF
IF ! abriarq('smedmvci','mvci');RETURN NIL;ENDIF
*--------------------------------------------------------------------------
op_tela(08,02,21,78,'INCLUSAO DE CIRURGIAS')

WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mdat_cirur := DATE()
        mcod_cli := mcod_cirur := mcod_conv := mvlr_cirur := 0
        IF mc_cli # NIL
                mcod_cli := mc_cli
        ENDIF
        mobs_cirur := SPACE(40)
        mhora_cir := mhora_int := SPACE(5)
        mdiag1 := mdiag2 := mequipe := malta := mhospital := SPACE(40)
        setcor(3)
        @ lci+1,cci TO lci+1,cba
        setcor(1)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        opcao = 'S'
        DEVPOS(lci+2,cci+2);DEVOUT('Data da Cirurgia....:')
        DEVPOS(lci+2,cci+34);DEVOUT('Hrs.Cirurgia:')
        DEVPOS(lci+2,cci+55);DEVOUT('Hrs.Intern.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Codigo Cliente......:')
        DEVPOS(lci+4,cci+2);DEVOUT('Codigo Convenio.....:')
        DEVPOS(lci+5,cci+2);DEVOUT('Codigo Cirurgias....:')
        DEVPOS(lci+6,cci+2);DEVOUT('Diagnostico Medico..:')
        DEVPOS(lci+8,cci+2);DEVOUT('Hospital............:')
        DEVPOS(lci+9,cci+2);DEVOUT('Equipe Medica.......:')
        DEVPOS(lci+10,cci+2);DEVOUT('Alta da Cirurgia....:')
        DEVPOS(lci+11,cci+2);DEVOUT('Valor Cirurgia R$...:')
        DEVPOS(lci+12,cci+2);DEVOUT('Observacao..........:')

        @ lci+2,cci+24 GET mdat_cirur VALID IF(EMPTY(mdat_cirur),.F.,.T.)
        @ lci+2,cci+48 GET mhora_cir PICT '99:99' //VALID VHORA(mhora_cir)
        @ lci+2,cci+68 GET mhora_int PICT '99:99' //VALID VHORA(mhora_int)
        @ lci+3,cci+24 GET mcod_cli PICT '99999' VALID IF(EMPTY(mcod_cli),.F.,ver_cli(STRZERO(mcod_cli,5),lci+3,cci+31)) .AND. ver_conv(STRZERO(mcod_conv,2),lci+4,cci+31)
        @ lci+4,cci+27 GET mcod_conv PICT '99' VALID IF(EMPTY(mcod_conv),.F.,ver_conv(STRZERO(mcod_conv,2),lci+4,cci+31))
        @ lci+5,cci+26 GET mcod_cirur PICT '999' VALID IF(EMPTY(mcod_cirur),.F.,ver_cirur(STRZERO(mcod_cirur,3),lci+5,cci+31))
        @ lci+6,cci+24 GET mdiag1
        @ lci+7,cci+24 GET mdiag2
        @ lci+8,cci+24 GET mhospital
        @ lci+9,cci+24 GET mequipe
        @ lci+10,cci+24 GET malta
        @ lci+11,cci+24 GET mvlr_cirur PICT '99,999,999.99'
        @ lci+12,cci+24 GET mobs_cirur
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        ********************
        SELE('mvci')
        ORDSETFOCUS(1)
        ********************
        IF mvci->(DBSEEK(DTOS(mdat_cirur)+STRZERO(mcod_cli,5)+STRZERO(mcod_cirur,3)+STRZERO(mcod_conv,2)))
                atencao('Esta cirurgia ja foi cadastrada !!!')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Inclusao da Cirurgias [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF

        IF opcao = 'N'
                LOOP
        ENDIF
        IF ADIREG()
                mvci-> dat_cirur := mdat_cirur
                mvci-> hora_cir := mhora_cir
                mvci-> hora_int := mhora_int
                mvci-> cod_cli := STRZERO(mcod_cli,5)
                mvci-> cliente := cli->nome
                mvci-> cod_conv := STRZERO(mcod_conv,2)
                mvci-> convenio := conv->rsocial
                mvci-> cod_cirur := STRZERO(mcod_cirur,3)
                mvci-> cirurgia := cirur->descricao
                mvci-> diag1 := mdiag1
                mvci-> diag2 := mdiag2
                mvci-> hospital := mhospital
                mvci-> equipe := mequipe
                mvci-> alta := malta
                mvci-> vlr_cirur := mvlr_cirur
                mvci-> obs_cirur := mobs_cirur
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** f i m **********************************
