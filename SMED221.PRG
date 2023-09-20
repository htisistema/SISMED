**********************
* INCLUSAO DE CONVENIO
**********************
FUNCTION smed221
****************
LOCAL mprg:='SMED221'
LOCAL lci,cci,lba,cba,opcao,mmod,mrsoc,mend,mfonec,mcod,mprazo;
      ,mvalor_con,mvalor_op,mdata,tela,mtipo

PRIVATE mcconv

IF ! ver_nivel(mprg,'INCLUSAO DE CONVENIOS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 0
lba := 19
cba := 75
op_tela(10,14,20,95,'INCLUSAO DE CONVENIOS')
WHILE .T.
        exibi_prg(mprg)
        opcao := SPACE(1)
        mcod := 0
        mdata := CTOD('  /  /  ')
        mcconv := SPACE(2)
        mrsoc := SPACE(30)
        mmod := SPACE(2)
        mend := SPACE(35)
        mfonec := SPACE(13)
        mvalor_con := mvalor_op := mprazo := 0
        mtipo := ' '
        Mensagem('Modalidade:<CR>Recibo <SR>S/Recibo <CH> C/Honor. - <ESC>Abandonar')
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
        *************
        SELE('conv');ORDSETFOCUS(1)
        *************
        GO BOTT
        mcod := VAL(codconv) + 1
        mdata := DATE()
        setcor(3)
        DEVPOS(1,20);DEVOUT(STRZERO(mcod,2,0))
        setcor(1)
        SET INTEN ON
        @ 1,31 GET mdata PICT '  /  /  '
        @ 2,20 GET mrsoc PICT '@!'
        @ 3,20 GET mmod PICT '@!' VALID mmod $ 'CR,CH,SR,SC,IT,PC,AL'
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
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF ADIREG()
                        REPLA codconv WITH STRZERO(mcod,2)
                        REPLA modalidade WITH mmod
                        REPLA tipo WITH mtipo
                        REPLA valor_con WITH mvalor_con
                        REPLA valor_op WITH mvalor_op
                        REPLA dataini WITH mdata
                        REPLA rsocial WITH mrsoc
                        REPLA endereco WITH mend
                        REPLA foneconv WITH mfonec
                        REPLA prazo WITH mprazo
                        COMMIT
                        UNLOCK
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

