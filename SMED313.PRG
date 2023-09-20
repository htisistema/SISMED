*********************
* USO MEDICO CONSULTA DE CLIENTES
**********************
FUNCTION smed313
****************
LOCAL mprg:='SMED313',;
      lba,cba,mdatn,mresp,mind,mguia,tela1,tela2,;
      mrecib,telahist,opcaohis,mtela,tela313,;
      tela311,opcao,;
      mdata_con,mlin1,mlin2,mlin3,mponto:=0,li,ci,lb,cb,i,linhas,;
      mult_mest1,mpro_nasc1,mdat_nasc1,;
      mult_mest2,mpro_nasc2,mdat_nasc2,;
      mult_mest3,mpro_nasc3,mdat_nasc3,;
      mult_mest4,mpro_nasc4,mdat_nasc4,;
      mult_mest5,mpro_nasc5,mdat_nasc5,;
      nhist1,nhist2,nhist3,nhist4

PRIVATE mvalor,mfator,mmod,mrsoc,mdata,mnome,mreg,mcconv,mcpf

IF ! ver_nivel(mprg,'USO MEDICO CONSULTA DE CLIENTES','12',nivel_acess)
        RETURN NIL
ENDIF
lba := 32
cba := 79
op_tela(00,00,32,65,' CONSULTA DE CLIENTE ')
WHILE .T.
        exibi_prg(mprg)
        opcaohis := 0
        mrsoc := SPACE(30)
        mrecib := SPACE(1)
        mmod := SPACE(2)
        lb := 32
        cb := 79
        tecla := ''
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
        Mensagem('Preencha o Campo ou Tecle <ESC> Retornar')
        setcor(1)
        mreg := cli->registro
        mcconv := cli->codconv
        mnome := cli->nome
        mcpf := cli->cpf
        vcconv(@mcconv)
        //Mensagem('<ESC> Retornar - <ENTER> Confirma - <'+setcim+'> Prox.Reg. - <'+setbaix+'> Reg.Ant.')
        *****************
        SELE('cli');ORDSETFOCUS(1)
        *****************
        DEVPOS(0,1);DEVOUT('Data Cadastro:')
        DEVPOS(1,1);DEVOUT('Registro.....:')
        DEVPOS(2,1);DEVOUT('Nome CLIENTE.:')
        DEVPOS(3,1);DEVOUT('Convenio.....:')
        DEVPOS(4,1);DEVOUT('Dat.Nasc.....:')
        DEVPOS(4,34);DEVOUT('Idade:')
        DEVPOS(5,1);DEVOUT('Responsavel..:')
        DEVPOS(6,1);DEVOUT('Indicado Por.:')
        setcor(3)
        DEVPOS(0,16);DEVOUT(DTOC(cli->data))
        DEVPOS(1,16);DEVOUT(cli->registro)
        DEVPOS(2,16);DEVOUT(cli->nome)
        DEVPOS(3,16);DEVOUT(cli->codconv)
        DEVPOS(3,COL()+2);DEVOUT(mrsoc)
        DEVPOS(4,16);DEVOUT(DTOC(cli->datans))
        DEVPOS(4,41);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(5,16);DEVOUT(cli->resp)
        DEVPOS(6,16);DEVOUT(cli->indica)
        setcor(1)
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
        setcor(1)
        opcaohis := 0
        mdata:=DATE()
        WvW_PBSetFont( NIL, 'Arial Black', 25, 7,)
        nhist1 := wvw_pbCreate(NIL,10,2,13,20,'[R]esumo da Admissao',,{||historico1(cli->registro)},,1,.F.)
        nhist2 := wvw_pbCreate(NIL,15,2,18,20,'[E]ntrevista de Admissao',,{||historico2(cli->registro)},,1,.F.)
        nhist3 := wvw_pbCreate(NIL,20,2,23,20,'Resumo da [A]valiacao',,{||historico3(cli->registro)},,1,.F.)
        nhist3 := wvw_pbCreate(NIL,25,2,28,20,'Evolucao do [T]ratamento',,{||historico4(cli->registro)},,1,.F.)
        //WVW_PBEnable( NIL, nhist1, .t. )
        WHILE .T.
                INKEY(0)
                Mensagem('Escolha a opcao que deseja - <ESC> para SAIR')
                IF LASTKEY() = 27
                        relatori(mrecib)
                        smed700()
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF LASTKEY() = ASC('r') .OR. LASTKEY() = ASC('R')
                        historico1(cli->registro)
                ELSEIF LASTKEY() = ASC('e') .OR. LASTKEY() = ASC('E')
                        historico2(cli->registro)
                ELSEIF LASTKEY() = ASC('a') .OR. LASTKEY() = ASC('A')
                        historico3(cli->registro)
                ELSEIF LASTKEY() = ASC('t') .OR. LASTKEY() = ASC('T')
                        historico4(cli->registro)
                ENDIF
        ENDDO

ENDDO
RETURN NIL
******************************* F I M ******************
