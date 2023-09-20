*******************************
* EXCLUSAO DE CIRURGIAS
*******************************

FUNCTION smed473
*****************
LOCAL mprg:='SMED473'
LOCAL opcao,tela,lci,cci,lba,cba,mdat_cirur,mcod_cli,mcod_cirur,mobs_cirur

PRIVATE mcod_conv,mvlr_cirur,mvlr

CLEAR GETS

lci := cci := 0
lba := 21
cba := 78
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
CLOSE ALL
abriarq('smedcli','cli')
abriarq('smedconv','conv')
abriarq('smedcirur','cirur')
abriarq('smedmvci','mvci')
*--------------------------------------------------------------------------
op_tela(08,02,21,78,'ALTERACAO DE CIRURGIAS')
WHILE .T.
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mdat_cirur := CTOD('  /  /  ')
        mcod_cli := mcod_cirur := mcod_conv := mvlr_cirur := mvlr := 0
        mobs_cirur := SPACE(40)
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+1,cci TO lci+1,cba
        setcor(1)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        opcao = 'S'
        janela(lci,cba,' Exclusao de Cirurgias ')
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

        @ lci+2,cci+24 GET mdat_cirur
        @ lci+3,cci+24 GET mcod_cli PICT '99999' VALID ver_cli(STRZERO(mcod_cli,5),lci+3,cci+31) .AND. ver_conv(STRZERO(mcod_conv,2),lci+4,cci+31)
        @ lci+4,cci+27 GET mcod_conv PICT '99' VALID ver_conv(STRZERO(mcod_conv,2),lci+4,cci+31)
        @ lci+5,cci+26 GET mcod_cirur PICT '999' VALID ver_cirur(STRZERO(mcod_cirur,3),lci+5,cci+31)
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                EXIT
        ENDIF
        ********************
        SELE('mvci')
        ORDSETFOCUS(1)
        ********************
        IF ! mvci->(DBSEEK(DTOS(mdat_cirur)+STRZERO(mcod_cli,5)+STRZERO(mcod_cirur,3)+STRZERO(mcod_conv,2)))
                atencao('Esta cirurgia nao foi cadastrada !!!')
                LOOP
        ENDIF
        DEVPOS(lci+2,cci+24);DEVOUT(dat_cirur)
        DEVPOS(lci+2,cci+48);DEVOUT(hora_cir)
        DEVPOS(lci+2,cci+68);DEVOUT(hora_int)
        DEVPOS(lci+3,cci+24);DEVOUT(cod_cli)
        DEVPOS(lci+4,cci+27);DEVOUT(cod_conv)
        DEVPOS(lci+5,cci+26);DEVOUT(cod_cirur)
        DEVPOS(lci+6,cci+24);DEVOUT(diag1)
        DEVPOS(lci+7,cci+24);DEVOUT(diag2)
        DEVPOS(lci+8,cci+24);DEVOUT(hospital)
        DEVPOS(lci+9,cci+24);DEVOUT(equipe)
        DEVPOS(lci+10,cci+24);DEVOUT(alta)
        DEVPOS(lci+11,cci+24);DEVOUTPICT(vlr_cirur,'99,999,999.99')
        DEVPOS(lci+12,cci+24);DEVOUT(obs_cirur)
        opcao := op_simnao('S','Confirma a Exclusao da Cirurgias [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF

        IF opcao = 'N'
                LOOP
        ENDIF
        IF BLOQREG()
                DELE
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
