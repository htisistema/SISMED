*************************************
* EMITE CADASTRO CIRURGICO
*************************************

FUNCTION smed720(cnome,creg)
****************************

LOCAL telaprin,tela550,lci,cci,lba,cba,vnome,mdata,vreg,opcao;
      ,mcirurg1,mcirurg2,mcirurg3,mcirurg4,mcirurg5,mcirurg6

PRIVATE traco

lci := 06
cci := 10
lba := 17
cba := 73
tela550 := SAVESCREEN(00,00,24,79)

WHILE .T.
        SET INTEN ON
        mdata := CTOD('  /  /  ')
        mcirurg1 := SPACE(35)
        mcirurg2 := SPACE(35)
        mcirurg3 := SPACE(35)
        mcirurg4 := SPACE(35)
        mcirurg5 := SPACE(35)
        mcirurg6 := SPACE(35)
        opcao := SPACE(1)
        traco := REPLI('-',80)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(3)
        botao(lci,cci,lba,cba)
        janela(lci,cba,' Dados Cirurgicos ')
        setcor(1)

        DEVPOS(lci+1,cci+2);DEVOUT('Registro No. ....:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome ............:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data ............:')
        @ lci+4,cci+1 TO lci+4,cba-1
        DEVPOS(lci+5,cci+2);DEVOUT('Cirurgias A]')
        DEVPOS(lci+6,cci+12);DEVOUT('B]')
        DEVPOS(lci+7,cci+12);DEVOUT('C]')
        DEVPOS(lci+8,cci+12);DEVOUT('D]')
        DEVPOS(lci+9,cci+12);DEVOUT('E]')
        DEVPOS(lci+10,cci+12);DEVOUT('F]')
        setcor(3)
        DEVPOS(lci+1,cci+21);DEVOUT(creg)
        DEVPOS(lci+2,cci+21);DEVOUT(cnome)
        setcor(1)
        mdata := DATE()
        @ lci+3,cci+21 GET mdata PICT '  /  /  '
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela550)
                RETURN NIL
        ENDIF
        @ lci+5,cci+14 GET mcirurg1 PICT '@!'
        @ lci+6,cci+14 GET mcirurg2 PICT '@!' WHEN mcirurg1 <> ' '
        @ lci+7,cci+14 GET mcirurg3 PICT '@!' WHEN mcirurg2 <> ' '
        @ lci+8,cci+14 GET mcirurg4 PICT '@!' WHEN mcirurg3 <> ' '
        @ lci+9,cci+14 GET mcirurg5 PICT '@!' WHEN mcirurg4 <> ' '
        @ lci+10,cci+14 GET mcirurg6 PICT '@!' WHEN mcirurg5 <> ' '
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                *****************
                SELE('cir')
                *****************
                IF mcirurg1 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg1
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mcirurg2 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg2
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mcirurg3 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg3
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mcirurg4 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg4
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mcirurg5 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg5
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                IF mcirurg6 <> ' '
                        IF ADIREG()
                                REPLA nome WITH cnome,registro WITH creg
                                REPLA data WITH mdata,cirurgia WITH mcirurg6
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                RESTSCREEN(00,00,24,79,tela550)
                RETURN NIL
        ELSE
                RESTSCREEN(00,00,24,79,tela550)
                LOOP
        ENDIF
ENDDO
******************************* F I M  *************************************************

