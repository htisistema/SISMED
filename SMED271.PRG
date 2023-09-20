****************************
* INCLUSAO DE ESPECIALIDADE
****************************

FUNCTION smed271
****************
LOCAL mprg:='SMED271',;
      lci,cci,lba,cba,opcao,mespe,mvlr:=0,tela213,;
      mcod_espe:=0

lci := cci := 0
lba := 15
cba := 77
tela213 := SAVESCREEN(00,00,24,79)
op_tela(11,24,15,77,'INCLUSAO DE ESPECIALIDADES')
WHILE .T.
        exibi_prg(mprg)
        opcao := SPACE(1)
        mcod_espe:=0
        mespe := SPACE(20)
        mvlr := 0
        Mensagem('Preencha os Campos ou Tecle <ESC> P/Retornar ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor R$.....:')

        *************
        SELE('espe');ORDSETFOCUS(2)
        GO BOTT
        *************
        mcod_espe := VAL(espe->cod_espe)+1
        SET INTEN ON
        @ lci+1,cci+18 GET mcod_espe PICT '999'
        @ lci+2,cci+18 GET mespe PICT '@!' VALID IF(EMPTY(mespe),.F.,.T.)
        @ lci+3,cci+18 GET mvlr PICT '999,999.99'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF espe->(DBSEEK(mespe))
                atencao('Esta Especialidade ja existe...')
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        IF ADIREG()
                espe-> cod_espe := STRZERO(mcod_espe,3)
                espe-> espe := mespe
                espe-> valor := mvlr
                RESTSCREEN(00,00,24,79,tela213)
                COMMIT
                UNLOCK
                LOOP
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

