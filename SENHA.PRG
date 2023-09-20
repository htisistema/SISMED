/*
**********************
* VERIFICA SENHAS
**********************

FUNCTION senha

LOCAL mcont,msenha

PUBLIC senha_acess,nivel_acess,cod_operado

mcont:=0
*-----------------------------------------------------
CLOSE ALL
IF ! ABRARQ('sen')
        USE insopera ALIAS sen SHARED NEW
        ** SET INDEX TO insopera
ENDIF
*-----------------------------------------------------
WHILE .T.
        *************
        SELE('sen')
        ORDSETFOCUS(1)
        *************

        WHILE mcont <= 3
                GO TOP
                setcor(1)
                DEVPOS(24,31);DEVOUT('Digite sua Senha:')
                msenha = ''
                pegasenha(@msenha,24,48,setcor(3))
                setcor(1)
                mcont ++
                IF msenha = 'NAO'
                        SETCOLOR(cor)
                        RETURN .F.
                ENDIF
                IF EMPTY(msenha)
                        limpa(24,31,24,79)
                        DEVPOS(24,31);DEVOUT('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        limpa(24,31,24,79)
                        IF mcont = 3
                                SETCOLOR(cor)
                                RETURN .F.
                        ENDIF
                        LOOP
                ENDIF

                WHILE ! EOF()
                        IF msenha == DCRIPTO(ssenha)
                                EXIT
                        ENDIF
                        SKIP
                ENDDO
                IF ! EOF() .AND. msenha == DCRIPTO(ssenha)
                        IF BLOQREG()
                                sen-> sult_ent := mdata_sis
                                sen-> shora_ini := TIME()
                                nivel_acess := snivel
                                cod_operado := scod_op
                                senha_acess := msenha
                                COMMIT
                                UNLOCK
                                CLOSE sen
                                RETURN .T.
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                ELSE
                        limpa(24,31,24,79)
                        DEVPOS(24,31);DEVOUT('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        limpa(24,31,24,79)
                        IF mcont = 3
                                SETCOLOR(cor)
                                RETURN .F.
                        ENDIF
                        LOOP
                ENDIF

        ENDDO
ENDDO
********************************** f i m **************************************
**********************
* ALTERA A SENHA
**********************

FUNCTION alt_senha

LOCAL mcont,msenha,lci,cci,lba,cba,tela,msele,morde,mmen,mcor

mcont:=0
lci := 12
cci := 20
lba := 14
cba := 60
mmen := SAVESCREEN(23,00,23,79)
tela := SAVESCREEN(lci,cci-1,lba+1,cba)
mcor := SETCOLOR()
msele := SELE()
morde := INDEXORD()
*-----------------------------------------------------
IF ! ABRARQ('sen')
        USE insopera ALIAS sen SHARED NEW
        * SET INDEX TO sen_sen,sen_cod
ENDIF
*-----------------------------------------------------
WHILE .T.
        *************
        SELE('sen')
        ORDSETFOCUS(1)
        GO TOP
        *************

        SEEK CRIPTO(senha_acess)

        IF FOUND()
                IF BLOQREG()
                        sen-> sult_ent := mdata_sis
                        sen-> shora_fim := TIME()
                        nivel_acess := snivel
                        cod_operado := scod_op
                        senha_acess := msenha
                        COMMIT
                        UNLOCK
                        setcor(4)
                        DEVPOS(02,67);DEVOUT('Operador: '+cod_operado)
                        setcor(1)
*                       atencao('Operador: '+cod_operado+'-'+RTRIM(snome))
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        ENDIF

        WHILE .T.
                SETCOLOR('N/W,X')
                botao(lci,cci,lba,cba)
*               botao(lci,cci,lba,cba)
                limpa(lci+1,cci+2,lci+1,cba-2)
                DEVPOS(lci+1,cci+2);DEVOUT('Digite a Senha de Acesso:')
                msenha = ''
                pegasenha(@msenha,lci+1,COL()+1,setcor(3))
                setcor(1)
                IF msenha = 'NAO'
                        LOOP
                ENDIF
                mcont ++
                GO TOP
                IF EMPTY(msenha)
                        limpa(23,31,23,79)
                        DEVPOS(24,31);DEVOUT('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        limpa(23,31,23,79)
                        LOOP
                ENDIF

                WHILE ! EOF()
                        IF msenha == DCRIPTO(ssenha)
                                EXIT
                        ENDIF
                        SKIP
                ENDDO
                IF ! EOF() .AND. msenha == DCRIPTO(ssenha)
                        IF BLOQREG()
                                sen-> sult_ent := mdata_sis
                                sen-> shora_ini := TIME()
                                nivel_acess := snivel
                                cod_operado := scod_op
                                senha_acess := msenha
                                COMMIT
                                UNLOCK
                                RESTSCREEN(lci,cci-1,lba+1,cba,tela)
                                RESTSCREEN(23,00,23,79,mmen)
                                setcor(4)
                                DEVPOS(02,67);DEVOUT('Operador: '+cod_operado)
                                setcor(1)
                                atencao('Operador: '+cod_operado+'-'+RTRIM(snome))
                                SETCOLOR(mcor)
                                SELE(msele)
                                ORDSETFOCUS(morde)
                                RETURN .T.
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                ELSE
                        limpa(lci+1,cci+2,lci+1,cba-2)
                        DEVPOS(lci+2,cci+2);DEVOUT('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        LOOP
                ENDIF
        ENDDO
ENDDO
********************************** f i m **************************************
******************************************
* CRIACAO DO ARQUIVO DE SENHAS
******************************************

FUNCTION arqsenha(ntx)
*******************

LOCAL matsen:={},mdata_sis

mdata_sis := DATE()
IF ! FILE('insopera.dbf')
        matsen:={ }
        AADD(matsen,{'scod_op','C',3,0})
        AADD(matsen,{'snome','C',30,0})
        AADD(matsen,{'ssenha','C',8,0})
        AADD(matsen,{'sdata_cad','D',8,0})
        AADD(matsen,{'scomissao','N',6,2})
        AADD(matsen,{'sult_ent','D',8,0})
        AADD(matsen,{'snivel','C',1,0})
        AADD(matsen,{'shora_ini','C',5,2})
        AADD(matsen,{'shora_fim','C',5,2})
        AADD(matsen,{'sult_e_c','D',8,0})
        AADD(matsen,{'sh_i_c','C',5,2})
        DBCREATE('insopera.dbf',matsen)
ENDIF
IF ntx = NIL
        IF ! FILE('insopera.cdx')
                WHILE .T.
                        USE insopera NEW EXCLUSIVE
                        IF ! NETERR()
                                EXIT
                        ENDIF
                ENDDO
                INDEX ON ssenha TAG senha TO insopera
                INDEX ON scod_op TAG codop TO insopera
                CLOSE ALL
        ENDIF
        WHILE .T.
                USE insopera ALIAS sen SHARED
                ** SET INDEX TO insopera
                IF ! NETERR()
                        EXIT
                ENDIF
        ENDDO
ELSE
        IF ! FILE('sen_sen.ntx')
                WHILE .T.
                        USE insopera NEW EXCLUSIVE
                        IF ! NETERR()
                                EXIT
                        ENDIF
                ENDDO
                INDEX ON ssenha TO sen_sen
                INDEX ON scod_op TO sen_cod
                CLOSE ALL
        ENDIF
        WHILE .T.
                USE insopera ALIAS sen SHARED
                * SET INDEX TO sen_sen,sen_cod
                IF ! NETERR()
                        EXIT
                ENDIF
        ENDDO
ENDIF
IF LASTREC() = 0
        IF ADIREG()
                sen-> scod_op := '999'
                sen-> snome := 'HTI Sistemas'
                sen-> ssenha := CRIPTO('HTI21')
                sen-> sdata_cad := mdata_sis
                sen-> snivel := '1'
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi Possivel Acessar o Arquivo')
                CLOSE sen
                RETURN .T.
        ENDIF
        IF ADIREG()
                sen-> scod_op := '111'
                sen-> snome := 'TROCA DE MERCADORIA'
                sen-> ssenha := CRIPTO('TROC')
                sen-> sdata_cad := mdata_sis
                sen-> snivel := '2'
                COMMIT
                UNLOCK
                CLOSE sen
        ELSE
                atencao('Nao foi Possivel Acessar o Arquivo')
                CLOSE sen
                RETURN .T.
        ENDIF
ENDIF
RETURN NIL
************************ F I M ************************************************************************

*********************************************
*** SENHA1.PRG:  Menu de Operadores
*********************************************

FUNCTION senha1
***************

LOCAL tela,tela1,mcod_ven,desc,lci,cci,lba,cba,li,ci,lb,cb,pode,point

lci := 07
cci := 19
lba := 18
cba := 76

li := 20
ci := 19
lb := 22
cb := 76

tela := SAVESCREEN(00,00,MAXROW(),79)

*-----------------------------------------------------
CLOSE ALL
IF ! ABRARQ('sen')
        USE insopera ALIAS sen SHARED NEW
ENDIF
*-----------------------------------------------------
mcod_ven := 0
desc := SPACE(20)
setcor(3)
botao(lci,cci,lba,cba)
@ lci+1,cci+1 TO lci+1,cba-1
@ lci+1,cci+14 SAY CHR(194)
@ lba,cci+14 SAY CHR(193)
@ lci+2,cci+14 TO lba-1,cci+14
setcor(1)
@ lci,cci+1 SAY " Operadores "

DEVPOS(lci+2,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+2,cci+16);DEVOUT('Operador:')
DEVPOS(lci+3,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+3,cci+16);DEVOUT('Operador:')
DEVPOS(lci+4,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+4,cci+16);DEVOUT('Operador:')
DEVPOS(lci+5,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+5,cci+16);DEVOUT('Operador:')
DEVPOS(lci+6,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+6,cci+16);DEVOUT('Operador:')
DEVPOS(lci+7,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+7,cci+16);DEVOUT('Operador:')
DEVPOS(lci+8,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+8,cci+16);DEVOUT('Operador:')
DEVPOS(lci+9,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+9,cci+16);DEVOUT('Operador:')
DEVPOS(lci+10,cci+2);DEVOUT('Cod.:')
DEVPOS(lci+10,cci+16);DEVOUT('Operador:')

**************
SELE('sen')
ORDSETFOCUS(2)
**************

GO TOP

pode=.T.

WHILE .T.
        mensagem("<I>nclus?o  <A>ltera??o  <E>xclus?o  < ou > Consulta  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 9
                IF ! EOF() .AND. scod_op <> '999' .AND. scod_op <> '111'
                        setcor(3)
                        @ lci+1+f,cci+8 SAY scod_op
                        @ lci+1+f,cci+26 SAY snome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ lci+1+f,cci+8 SAY "   "
                        @ lci+1+f,cci+26 SAY SPACE(30)
                        setcor(1)
                ENDIF
        NEXT F
        IF EOF()
                pode=.F.
        ENDIF
        GO POINT
        INKEY(0)
        DO CASE
                CASE LASTKEY()=ASC("I") .OR. LASTKEY()=ASC("i")
                        IF ! nivel('1')
                                atencao('Acesso nao Autorizado !!!')
                                IF ! aut_sen('Senha de Liberacao de Ambiente:')
                                        UNLOCK
                                        LOOP
                                ENDIF
                        ENDIF
                        senha2()
                        GO TOP
                        SKIP
                CASE LASTKEY()=5
                        IF ! BOF()
                                SKIP -1
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=24
                        IF ! EOF() .AND. pode=.T.
                                SKIP
                        ENDIF
                CASE LASTKEY()=ASC("A") .OR. LASTKEY()=ASC("a")
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        IF ! nivel('1')
                                atencao('Acesso nao Autorizado !!!')
                                IF ! aut_sen('Senha de Liberacao de Ambiente:')
                                        UNLOCK
                                        LOOP
                                ENDIF
                        ENDIF
                        ****************************************************
                        setcor(1)
                        senha3()
                        GO TOP
                        SKIP
                CASE LASTKEY()=ASC("E") .OR. LASTKEY()=ASC("e")
                        IF ! nivel('1')
                                atencao('Acesso nao Autorizado !!!')
                                IF ! aut_sen('Senha de Liberacao de Ambiente:')
                                        UNLOCK
                                        LOOP
                                ENDIF
                        ENDIF
                        senha4()
                        GO TOP
                        SKIP
                CASE LASTKEY()=27
                        RESTSCREEN(00,00,MAXROW(),79,tela)
                        CLOSE ALL
                        RETURN NIL
        ENDCASE
ENDDO
************************ F I M ************************************************************************
*************************
* MENU INCLUSAO DE SENHAS
*************************

FUNCTION senha2
***************

LOCAL opcao,mcod_vend,mnome,vsenha1,vsenha,mdata_cad,vnivel,mcomissao

PRIVATE lci,cci,lba,cba

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,MAXROW(),79)

WHILE .T.
        mcod_vend = 0
        mnome = SPACE(30)
        vsenha = ''
        vnivel = SPACE(1)
        mcomissao := 0
        opcao = 'S'
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        janela(lci,cba,' Inclusao ')
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operador__:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome__________:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nivel_________:')
        DEVPOS(lci+4,cci+2);DEVOUT('Comissao %____:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data__________:')
        DEVPOS(lci+6,cci+2);DEVOUT('Senha_________:')
        @ lci+1,cci+18 GET mcod_vend PICT '999'
        READ
        IF LASTKEY() = 27
                SET CURSOR ON
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF

        SET INTEN ON
        ***********
        SELE('sen')
        ORDSETFOCUS(2)
        ***********
        GO TOP

        SEEK STRZERO(mcod_vend,3)

        IF FOUND()
                atencao('Codigo ja Existe no cadastro !!!')
                LOOP
        ENDIF

        SET INTEN ON
        setcor(3)
        mdata_cad = mdata_sis
        DEVPOS(lci+1,cci+18);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(lci+5,cci+18);DEVOUT(mdata_cad)
        setcor(1)
        @ lci+2,cci+18 GET mnome PICT '@!'
        @ lci+3,cci+18 GET vnivel PICT '9' VALID vnivel $ '1,2,3,4,5,6,7,8,9'
        @ lci+4,cci+18 GET mcomissao PICT '99.99'
        READ

        IF LASTKEY() = 27
                SET CURSOR ON
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF
        ***********
        SELE('sen')
        ORDSETFOCUS(1)
        ***********
        WHILE .T.
                GO TOP
                vsenha = ''
                vsenha1 = ''
                mensagem('Digite sua Senha')
                pegasenha(@vsenha,lci+6,cci+18,setcor(3))
                setcor(1)
                IF LEN(vsenha) <= 1
                        LOOP
                ENDIF
                IF vsenha = 'NAO'
                        EXIT
                ENDIF
                IF EMPTY(vsenha)
                        LOOP
                ENDIF

                WHILE ! EOF()
                        IF vsenha == DCRIPTO(ssenha)
                                EXIT
                        ENDIF
                        SKIP
                ENDDO
                IF ! EOF() .AND. vsenha == DCRIPTO(ssenha)
                        atencao('Senha Invalida, Tente novamente')
                        LOOP
                ENDIF
                mensagem('Digite Novamente sua Senha')
                pegasenha(@vsenha1,lci+6,cci+18,setcor(3))
                setcor(1)
                IF LEN(vsenha1) <= 1
                        LOOP
                ENDIF
                IF vsenha1 = 'NAO'
                        EXIT
                ENDIF
                IF vsenha == vsenha1
                        mensagem('Confirma a Inclusao do Operador [S/n]:')
                        opcao := 'S'
                        @ 23,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        IF opcao = 'N'
                                EXIT
                        ELSE
                                ADIREG()
                                sen-> scod_op := STRZERO(mcod_vend,3)
                                sen-> snome := mnome
                                sen-> ssenha := CRIPTO(vsenha)
                                sen-> sdata_cad := mdata_sis
                                sen-> snivel := vnivel
                                sen-> scomissao := mcomissao
                                COMMIT
                                UNLOCK
                                EXIT
                        ENDIF
                ELSE
                        atencao('Senha Digitada Errada, Tente novamente !!!')
                        LOOP
                ENDIF
        ENDDO
ENDDO
RETURN NIL
*********************** f i m ************************************

*************************
* MENU ALTERACAO DE SENHAS
*************************

FUNCTION senha3
***************

LOCAL opcao,mcod_vend,mnome,vsenha1,vsenha,mdata_cad,vnivel,mcomissao

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,MAXROW(),79)

WHILE .T.
        mcod_vend = 0
        mnome = SPACE(30)
        vnivel = SPACE(1)
        opcao = SPACE(1)
        mcomissao := 0
        vsenha = ''
        vsenha1 = ''
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        janela(lci,cba,' Alteracao ')
        mensagem('Digite o Codigo do Operador a ser Alterado - <ESC> p/Abandonar')
        ***********
        SELE('sen')
        ORDSETFOCUS(2)
        ***********
        GO TOP

        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operador__:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome__________:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nivel_________:')
        DEVPOS(lci+4,cci+2);DEVOUT('Comissao %____:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data__________:')
        DEVPOS(lci+6,cci+2);DEVOUT('Senha_________:')

        @ lci+1,cci+18 GET mcod_vend PICT '999'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_vend)
                LOOP
        ENDIF

        SEEK STRZERO(mcod_vend,3)

        IF ! FOUND()
                atencao('Codigo nao Cadastrado !!!')
                LOOP
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
        vsenha := ''
        mnome := snome
        vnivel := snivel
        mcomissao := scomissao
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(lci+5,cci+18);DEVOUT(sdata_cad )
        setcor(1)
        @ lci+2,cci+18 GET mnome PICT '@!'
        @ lci+3,cci+18 GET vnivel PICT '9' VALID vnivel $ '1,2,3,4,5,6,7,8,9'
        @ lci+4,cci+18 GET mcomissao PICT '99.99'
        READ
        IF LASTKEY() = 27
                UNLOCK
                LOOP
        ENDIF
        mensagem('Deseja alterar a senha [s/N]:')
        opcao := 'N'
        @ 23,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF LASTKEY() = 27
                UNLOCK
                LOOP
        ENDIF
        IF opcao = 'S'
                WHILE .T.
                        vsenha = ''
                        vsenha1 = ''
                        mensagem('Digite sua Senha')
                        pegasenha(@vsenha,lci+6,cci+18,setcor(3))
                        setcor(1)
                        IF LEN(vsenha) <= 1
                                LOOP
                        ENDIF
                        IF vsenha = 'NAO'
                                vsenha := ''
                                EXIT
                        ENDIF
                        IF EMPTY(vsenha)
                                LOOP
                        ENDIF
                        mensagem('Digite Novamente sua Senha')
                        pegasenha(@vsenha1,lci+6,cci+18,setcor(3))
                        setcor(1)
                        IF LEN(vsenha1) <= 1
                                LOOP
                        ENDIF
                        IF vsenha1 = 'NAO'
                                vsenha := ''
                                EXIT
                        ENDIF
                        IF vsenha == vsenha1
                                EXIT
                        ELSE
                                atencao('Senha Digitada Errada, Tente novamente !!!')
                                LOOP
                        ENDIF
                ENDDO
        ENDIF
        mensagem('Confirma a Alteracao [S/n]:')
        opcao := 'S'
        @ 23,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF LASTKEY() = 27
                UNLOCK
                LOOP
        ENDIF
        IF opcao = 'N'
                UNLOCK
                LOOP
        ELSE
                IF vsenha == ''
                        sen-> snome := mnome
                        sen-> snivel := vnivel
                        sen-> scomissao := mcomissao
                ELSE
                        sen-> snome := mnome
                        sen-> snivel := vnivel
                        sen-> scomissao := mcomissao
                        sen-> ssenha := CRIPTO(vsenha)
                ENDIF
                COMMIT
                UNLOCK
                LOOP
        ENDIF
ENDDO
RETURN NIL
*********************** f i m ************************************

*************************
* MENU EXCLUSAO DE SENHAS
*************************

FUNCTION senha4
***************

LOCAL opcao,mcod_vend,vsenha

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,MAXROW(),79)

WHILE .T.
        mcod_vend = 0
        mnome = SPACE(30)
        vsenha := SPACE(8)
        opcao = SPACE(1)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        janela(lci,cba,' Exclusao ')
        mensagem('Digite o Codigo do Operador a ser Excluido - <ESC> p/Abandonar')
        ***********
        SELE('sen')
        ORDSETFOCUS(2)
        ***********
        GO TOP

        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Operador__:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome__________:')
        DEVPOS(lci+3,cci+2);DEVOUT('Nivel_________:')
        DEVPOS(lci+4,cci+2);DEVOUT('Comissao %____:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data__________:')
        DEVPOS(lci+6,cci+2);DEVOUT('Senha_________:')

        @ lci+1,cci+18 GET mcod_vend PICT '999'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF
        IF EMPTY(mcod_vend)
                LOOP
        ENDIF

        SEEK STRZERO(mcod_vend,3)

        IF ! FOUND()
                atencao('Codigo nao Cadastrado !!!')
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(lci+1,cci+18);DEVOUT(STRZERO(mcod_vend,3))
        DEVPOS(lci+2,cci+18);DEVOUT(snome)
        DEVPOS(lci+3,cci+18);DEVOUT(snivel)
        DEVPOS(lci+4,cci+18);DEVOUTPICT(scomissao,'99.99')
        DEVPOS(lci+5,cci+18);DEVOUT(sdata_cad )
        DEVPOS(lci+6,cci+18);DEVOUT(vsenha)
        setcor(1)
        mensagem('Confirma a Exclusao [S/n]:')
        opcao := 'S'
        @ 23,COL()+1 GET opcao PICT '@!' VALID opcao $ 'S,N'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ELSE
                IF BLOQARQ()
                        DELE
                        COMMIT
                        UNLOCK
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ENDIF
ENDDO
RETURN NIL
/*
***************************** F I M *********************************************

