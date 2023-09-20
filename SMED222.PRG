***********************
* ALTERACAO DE CONVENIO
***********************
FUNCTION smed222
****************
LOCAL mprg := 'SMED222',;
      lba,cba,opcao,mmod,mrsoc,mend,mfonec,;
      mfat,mdata,tela,tela1,mvalor_con,mvalor_op,mtipo

IF ! ver_nivel(mprg,'ALTERACAO DE CONVENIOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba := 19
cba := 75
op_tela(10,14,20,95,'ALTERACAO DE CONVENIOS')
WHILE .T.
        exibi_prg(mprg)
        opcao := SPACE(1)
        mdata := CTOD('  /  /  ')
        mrsoc := SPACE(30)
        mmod := SPACE(2)
        mend := SPACE(35)
        mfonec := SPACE(13)
        mfat := mvalor_con := mvalor_op := mprazo := 0
        mtipo := ' '
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        DEVPOS(1,2);DEVOUT('Codigo Convenio.:')
        DEVPOS(1,25);DEVOUT('Data:')
        DEVPOS(2,2);DEVOUT('Razao Social....:')
        DEVPOS(3,2);DEVOUT('Modalidade......:')
        DrawLabel(3,23,'[CR]Recibo - [SR]S/Recibo - [CH]C/Honor. - [IT]Integral - [PC]Parcial - [AL]alta',,, 'Arial',15,8)
        DEVPOS(4,2);DEVOUT('Tipo............:')
        DrawLabel(4,23,'[F]isica - [J]uridica:',,, 'Arial',15,8)
        DEVPOS(5,2);DEVOUT('Prazo p/Consulta:')
        DEVPOS(6,2);DEVOUT('Valor Consulta..:')
        DEVPOS(7,2);DEVOUT('Valor Cirurgia..:')
        DEVPOS(8,2);DEVOUT('Endereco........:')
        DEVPOS(9,2);DEVOUT('Fone............:')
        Mensagem('Campos liberado para as Alteracoes')

        mmod := modalidade
        mfat := fator
        mrsoc := rsocial
        mend := endereco
        mfonec := foneconv
        mprazo := prazo
        mvalor_con := valor_con
        mvalor_op := valor_op
        mtipo := tipo
        setcor(3)
        DEVPOS(1,20);DEVOUT(STRZERO(mcod_conv,2))
        DEVPOS(1,31);DEVOUT(DTOC(dataini))
        setcor(1)
        @ 2,20 GET mrsoc PICT '@!'
        @ 3,20 GET mmod PICT '@!' VALID mmod $ 'CR,CH,SR,IT,PC,AL'
        @ 4,20 GET mtipo PICT '@!' VALID mtipo $ 'F,J'
        @ 5,20 GET mprazo PICT '99' VALID IF(EMPTY(mprazo),.F.,.T.)
        @ 6,20 GET mvalor_con PICT '99,999.99'
        @ 7,20 GET mvalor_op PICT '99,999.99'
        @ 8,20 GET mend PICT '@!'
        @ 9,20 GET mfonec
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF BLOQREG()
                        REPLA modalidade WITH mmod
                        REPLA tipo WITH mtipo
                        REPLA valor_con WITH mvalor_con
                        REPLA valor_op WITH mvalor_op
                        REPLA rsocial WITH mrsoc,endereco WITH mend
                        REPLA foneconv WITH mfonec
                        REPLA prazo WITH mprazo
                        COMMIT
                        UNLOCK
                        wvw_lclosewindow()
                        RETURN NIL
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
        ELSE
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

