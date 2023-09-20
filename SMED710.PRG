* EMITE DADOS CLINICOS
*************************************
FUNCTION smed710(cnome,creg)
****************************
LOCAL lci,cci,lba,cba,vnome,mdata,vreg,opcao;
      ,mdiag1,mdiag2,mdiag3,mdiag4,mdiag5,mmedica1,mmedica2,mmedica3,mmedica4;
      ,mmedica5,mmedica6
PRIVATE traco

lci := 0
cci := 0
lba := 23
cba := 73
op_tela(0,0,18,65,'DADOS ESTATISTICOS',,1)
IF ! abriarq('smedclin','clin');RETURN NIL;ENDIF
WHILE .T.
        SET INTEN ON
        mdata := CTOD('  /  /  ')
        mdiag1 := SPACE(35)
        mdiag2 := SPACE(35)
        mdiag3 := SPACE(35)
        mdiag4 := SPACE(35)
        mdiag5 := SPACE(35)
        mmedica1 := SPACE(35)
        mmedica2 := SPACE(35)
        mmedica3 := SPACE(35)
        mmedica4 := SPACE(35)
        mmedica5 := SPACE(35)
        mmedica6 := SPACE(35)
        opcao := SPACE(1)
        traco := REPLI('-',80)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Registro No. ....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome ............:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data ............:')
        @ lci+4,cci+1 to lci+4,cba-1
        DEVPOS(lci+5,cci+2);DEVOUT('Diagnosticos A]')
        DEVPOS(lci+6,cci+15);DEVOUT('B]')
        DEVPOS(lci+7,cci+15);DEVOUT('C]')
        DEVPOS(lci+8,cci+15);DEVOUT('D]')
        DEVPOS(lci+9,cci+15);DEVOUT('E]')
        @ lci+10,cci+1 to lci+10,cba-1
        DEVPOS(lci+11,cci+2);DEVOUT('Medicamentos A]')
        DEVPOS(lci+12,cci+15);DEVOUT('B]')
        DEVPOS(lci+13,cci+15);DEVOUT('C]')
        DEVPOS(lci+14,cci+15);DEVOUT('D]')
        DEVPOS(lci+15,cci+15);DEVOUT('E]')
        DEVPOS(lci+16,cci+15);DEVOUT('F]')
        setcor(3)
        DEVPOS(lci+1,cci+21);DEVOUT(STRZERO(mcod_cli,5))
        DEVPOS(lci+2,cci+21);DEVOUT(mnome)
        setcor(1)
        mdata := DATE()
        SET INTEN ON
        @ lci+3,cci+21 GET mdata PICT '  /  /  '
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        @ lci+5,cci+17 GET mdiag1 PICT '@!'
        @ lci+6,cci+17 GET mdiag2 PICT '@!' WHEN mdiag1 <> ' '
        @ lci+7,cci+17 GET mdiag3 PICT '@!' WHEN mdiag2 <> ' '
        @ lci+8,cci+17 GET mdiag4 PICT '@!' WHEN mdiag3 <> ' '
        @ lci+9,cci+17 GET mdiag5 PICT '@!' WHEN mdiag4 <> ' '
        @ lci+11,cci+17 GET mmedica1 PICT '@!'
        @ lci+12,cci+17 GET mmedica2 PICT '@!' WHEN mmedica1 <> ' '
        @ lci+13,cci+17 GET mmedica3 PICT '@!' WHEN mmedica2 <> ' '
        @ lci+14,cci+17 GET mmedica4 PICT '@!' WHEN mmedica3 <> ' '
        @ lci+15,cci+17 GET mmedica5 PICT '@!' WHEN mmedica4 <> ' '
        @ lci+16,cci+17 GET mmedica6 PICT '@!' WHEN mmedica5 <> ' '
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27 .OR.  opcao = 'N'
                LOOP
        ENDIF
        IF opcao = 'S'
                *****************
                SELE('clin')
                *****************
                IF mdiag1 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,diagnost WITH mdiag1
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mdiag2 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,diagnost WITH mdiag2
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mdiag3 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,diagnost WITH mdiag3
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mdiag4 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,diagnost WITH mdiag4
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mdiag5 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,diagnost WITH mdiag5
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica1 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica1
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica2 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica2
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica3 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica3
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica4 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica4
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica5 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica5
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mmedica6 <> ' '
                        IF ADIREG()
                                REPLA nome WITH mnome,registro WITH STRZERO(mcod_cli,5)
                                REPLA data WITH mdata,medica WITH mmedica6
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M  *************************************************

