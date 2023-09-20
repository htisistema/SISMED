**********************
* CONSULTA DE CLIENTES
**********************
FUNCTION smed311
****************
LOCAL mprg:='SMED311',;
      tecla,mdatn,mresp,mind,mguia,mexame,mradiologia,;
      telahist,opcaohis,mtela,tela311,opcao,histmemo,;
      mdata_con,lci,cci,lba,cba,mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mponto:=0,i,linhas,;
      mult_mest1,mpro_nasc1,mdat_nasc1,;
      mult_mest2,mpro_nasc2,mdat_nasc2,;
      mult_mest3,mpro_nasc3,mdat_nasc3,;
      mult_mest4,mpro_nasc4,mdat_nasc4,;
      mult_mest5,mpro_nasc5,mdat_nasc5

PRIVATE mreg,mnome,mcconv,mcpf,m_hist:={},m_ponto:={}

IF ! ver_nivel(mprg,'** CONSULTA ** DE CLIENTES PELO MEDICO','1',nivel_acess)
        RETURN NIL
ENDIF
lci := cci := 00
lba := 32
cba := 79

IF mconsulta = 'C'
        op_tela(00,00,32,79,' Consulta ')
ELSE
        op_tela(00,00,32,79,' Retorno de Consulta ')
ENDIF

WHILE .T.
        exibi_prg(mprg)
        ASIZE(m_ponto,0)
        ASIZE(m_hist,0)
        mlin1 := mlin2 := mlin3 := mlin4 := mlin5 := mlin6 := SPACE(60)
        mexame := SPACE(1)
        mradiologia := SPACE(1)
        opcao := SPACE(1)
        opcaohis := tecla := mreg := 0
        mcconv := SPACE(2)
        mnome := SPACE(35)
        mdatn := CTOD('  /  /  ')
        mresp := SPACE(30)
        mind := SPACE(30)
        mguia := SPACE(16)
        mcpf  := cli->cpf
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        mreg := cli->registro
        mcconv := cli->codconv
        mnome := cli->nome
*        telahist := SAVESCREEN(02,00,23,79)
        setcor(3)
        @ lci+3,cci TO lci+3,cba DOUBLE
        setcor(1)
        @ lci+1,cci CLEAR TO lci+2,cba
        DEVPOS(lci+1,cci+2);DEVOUT('Reg.:')
        DEVPOS(lci+1,cci+15);DEVOUT('Nome:')
        DEVPOS(lci+1,cci+58);DEVOUT('Idade:')
        DEVPOS(lci+2,cci+02);DEVOUT('Convenio:')
        DEVPOS(lci+2,cci+44);DEVOUT('Estado Civil:')
        setcor(3)
        DEVPOS(lci+1,cci+08);DEVOUT(mreg)
        DEVPOS(lci+1,cci+21);DEVOUT(mnome)
        DEVPOS(lci+1,cci+65);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(lci+2,cci+12);DEVOUT(mrsoc)
        IF cli->estcivil = 'C'
                DEVPOS(lci+2,cci+58);DEVOUT('Casada')
        ELSEIF cli->estcivil = 'S'
                DEVPOS(lci+2,cci+58);DEVOUT('Solteira')
        ELSEIF cli->estcivil = 'D'
                DEVPOS(lci+2,cci+58);DEVOUT('Divorciada')
        ELSEIF cli->estcivil = 'V'
                DEVPOS(lci+2,cci+58);DEVOUT('Viuva')
        ELSE
                DEVPOS(lci+2,cci+58);DEVOUT(' ')
        ENDIF

        setcor(1)
        opcaohis := 0
        mult_mest1:=cli->ult_mest1
        mult_mest2:=cli->ult_mest2
        mult_mest3:=cli->ult_mest3
        mult_mest4:=cli->ult_mest4
        mult_mest5:=cli->ult_mest5
        mpro_nasc1:=cli->pro_nasc1
        mpro_nasc2:=cli->pro_nasc2
        mpro_nasc3:=cli->pro_nasc3
        mpro_nasc4:=cli->pro_nasc4
        mpro_nasc5:=cli->pro_nasc5
        mdat_nasc1:=cli->dat_nasc1
        mdat_nasc2:=cli->dat_nasc2
        mdat_nasc3:=cli->dat_nasc3
        mdat_nasc4:=cli->dat_nasc4
        mdat_nasc5:=cli->dat_nasc5
        WHILE .T.
                Mensagem('USE <'+setesq+'> <'+setdir+'>  -  Tecle <ENTER> P/Confirmar')
                setcor(3)
                @ lci+5,cci TO lci+5,cba
                setcor(1)
                @ lci+4,cci+02 PROMPT ' Resumo Admissao '
                @ lci+4,COL()+1 PROMPT ' Entrevista Admissao '
                @ lci+4,COL()+1 PROMPT ' Resumo Avaliacao '
                @ lci+4,COL()+1 PROMPT ' Evolucao Tratamento '
                @ lci+4,COL()+1 PROMPT ' Fim '
                SET INTEN ON
                MENU TO opcaohis
                mtela := SAVESCREEN(00,00,24,79)
                IF LASTKEY() = 27
                        opcaohis := 7
                        LOOP
                ENDIF
                *****************
                SELE('cli');ORDSETFOCUS(1)
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
                                SET INTEN ON
                                opcao := op_simnao('S','Confirma Consulta [S/n]:')
                                IF opcao = 'S'
                                        IF mconsulta = 'C'
                                                *****************
                                                SELE('cli')
                                                *****************
                                                BLOQREG()
                                                cli-> datault := mdata
                                                DBCOMMIT()
                                                DBUNLOCK()
                                                *****************
                                                SELE('contr')
                                                *****************
                                                IF ADIREG()
                                                        contr-> datacons := mdata
                                                        contr-> cadnome := mnome
                                                        contr-> registro := mreg
                                                        contr-> situacao := 'C'
                                                        contr-> codconv := mcconv
                                                        contr-> modalidade := mmod
                                                        contr-> valor := mvalor
                                                        contr-> recibo := mrecib
                                                        DBCOMMIT()
                                                        DBUNLOCK()
                                                ELSE
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                        ELSE
                                                *****************
                                                SELE('contr')
                                                *****************
                                                IF ADIREG()
                                                        contr-> datacons := mdata
                                                        contr-> cadnome := mnome
                                                        contr-> registro := mreg
                                                        contr-> situacao := 'R'
                                                        contr-> codconv := mcconv
                                                        contr-> modalidade := mmod
                                                        contr-> recibo := 'N'
                                                        DBCOMMIT()
                                                        DBUNLOCK()
                                                ELSE
                                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        relatori(mrecib)
                                        smed700()
                                        DBUNLOCKALL()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                IF opcao = 'N' .OR. LASTKEY() = 27
                                        DBUNLOCKALL()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                ENDCASE
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M ******************
***************************************
* VERIFICA DATA PROVAVEL DO NSACIMENTO
***************************************
FUNCTION data_pro(mdt,mpro)
IF EMPTY(mdt)
        mpro := mdt
ELSE
        mpro := mdt+270
ENDIF
RETURN .T.
