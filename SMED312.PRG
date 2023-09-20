**********************
* RETORNO DE CONSULTA DE CLIENTES
**********************
FUNCTION smed312
****************
LOCAL mprg:='SMED312',;
      lci,cci,lba,cba,tecla,mdatn,mresp,mind,mguia,tela1;
      ,mrecib,telahist,opcaohis,mtela,tela312,opcao,mexame,mradiologia

PRIVATE mvalor,mfator,mmod,mrsoc,mdata,mnome,mreg,mcconv,mcpf
IF ! ver_nivel(mprg,'** RETORNO CONSULTA ** DE CLIENTES PELO MEDICO','1',nivel_acess)
        RETURN NIL
ENDIF

tela1 := SAVESCREEN(00,00,24,79)
WHILE .T.
        mexame := SPACE(1)
        mradiologia := SPACE(1)
        opcao := SPACE(1)
        opcaohis := 0
        mrsoc := SPACE(30)
        mrecib := 'N'
        mmod := SPACE(2)
        lci := 11
        cci := 05
        lba := 19
        cba := 72
        tecla := 0
        mreg := 0
        mdata := CTOD('  /  /  ')
        mcconv := SPACE(2)
        mnome := SPACE(35)
        mdatn := CTOD('  /  /  ')
        mresp := SPACE(30)
        mind := SPACE(30)
        mvalor := 0
        mfator := 0
        mguia := SPACE(16)
        Mensagem('Preencha o Campo ou Tecle <ESC> p/Retornar')
        setcor(1)
        mreg := cli->registro
        mcconv := cli->codconv
        mnome := cli->nome
        mcpf  := cli->cpf
        vcconv(@mcconv)
        @ 03,00 CLEAR TO 22,79
        botao(03,00,22,79)
        @ 04,01 CLEAR TO 04,78
        @ 05,01 TO 05,78 DOUBLE
        setcor(1)
        DEVPOS(04,02);DEVOUT('Reg.:')
        DEVPOS(04,15);DEVOUT('Nome:')
        DEVPOS(04,58);DEVOUT('Idade:')
        setcor(3)
        DEVPOS(04,08);DEVOUT(mreg)
        DEVPOS(04,21);DEVOUT(mnome)
        DEVPOS(04,65);DEVOUT(STR(INT((DATE() - datans)/365),2))
        setcor(1)
        opcaohis := 0

        WHILE .T.
                Mensagem('USE <'+setesq+'> <'+setdir+'>  -  Tecle <ENTER> P/Confirmar')
                @ 06,01 CLEAR TO 06,78
                setcor(3)
                @ 07,01 TO 07,78 DOUBLE
                setcor(1)
                janela(02,79,' Retorno de Consulta ')
                @ 06,02 PROMPT ' Resumo Admissao '
                @ 06,COL()+1 PROMPT ' Entrevista Admissao '
                @ 06,COL()+1 PROMPT ' Resumo Avaliacao '
                @ 06,COL()+1 PROMPT ' Evolucao Tratamento '
                @ 06,COL()+1 PROMPT ' Fim '
                SET INTEN ON
                MENU TO opcaohis
                mtela := SAVESCREEN(00,00,24,79)
                IF LASTKEY() = 27
                        opcaohis := 5
                        LOOP
                ENDIF
                *****************
                SELE('cli')
                *****************
                DO CASE
                        CASE opcaohis = 1
                                historico1(cli->registro)
                        CASE opcaohis = 2
                                historico2(cli->registro)
                        CASE opcaohis = 3
                                historico3(cli->registro)
                        CASE opcaohis = 4
                                historico4(cli->registro)
                        CASE opcaohis = 5
                                opcao := op_simnao('S','Confirma Retorno  [S/n]:')
                                SET INTEN ON
                                IF opcao = 'S'
                                        IF BLOQREG()
                                                cli-> datault := mdata
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                        *****************
                                        SELE('contr')
                                        *****************
                                        IF ADIREG()
                                                contr->datacons := mdata
                                                contr->cadnome := mnome
                                                contr->registro := mreg
                                                contr->situacao := 'R'
                                                contr->codconv := mcconv
                                                contr->modalidade := mmod
                                                contr->recibo := 'N'
                                                COMMIT
                                                UNLOCK
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                                LOOP
                                        ENDIF
                                        relatori(mrecib)
                                        smed700()
                                        RESTSCREEN(00,00,24,79,telahist)
                                        RETURN NIL
                                ENDIF
                                IF opcao = 'N'
                                        RESTSCREEN(00,00,24,79,telahist)
                                        RETURN NIL
                                ENDIF
                ENDCASE
        ENDDO
ENDDO
RETURN NIL
******************************* F I M ******************
