#INCLUDE "COMMCTRL.CH"
#include "wvwtools.ch"
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
//SQLRDD***********************************
#include "sqlrdd.ch"
#include "pgs.ch"          // Needed if you plan to use native connection to Postgres
#include "mysql.ch"        // Needed if you plan to use native connection to MySQL
#include "oracle.ch"       // Needed if you plan to use native connection to Oracle
#include "firebird.ch"     // Needed if you plan to use native connection to Firebird
*******************************************
#INCLUDE 'INKEY.CH'
FUNCTION relatori(mrec)
*************************
LOCAL mrecibo,mreceita,mpedido,tela,mquant,mqtd_rece

mrecibo := SPACE(1)
mreceita := SPACE(1)
mpedido := SPACE(1)
mquant := 1
mqtd_rece := 1
tela := SAVESCREEN(00,00,24,79)
WHILE .T.
        IF mrec = 'S'
                setcor(3)
                botao(10,25,18,65)
                setcor(1)
                DEVPOS(11,27);DEVOUT('Deseja Emitir Recibo:')
                DEVPOS(13,27);DEVOUT('Deseja Emitir Receita:')
                DEVPOS(13,52);DEVOUT('Qtd.:')
                DEVPOS(15,27);DEVOUT('Deseja Emitir Exames:')
                DEVPOS(15,52);DEVOUT('Qtd.:')
                SETCOLOR(vcor[2])
                DEVPOS(17,27);DEVOUT('Marque com um <X> as opcoes p/imprimir')
                setcor(1)
                SET INTEN ON
                @ 11,50 GET mrecibo PICT '@!' VALID mrecibo $ 'X, '
                @ 13,50 GET mreceita PICT '@!' VALID mreceita $ 'X, '
                @ 13,58 GET mqtd_rece PICT '99' WHEN mreceita = 'X'
                @ 15,50 GET mpedido PICT '@!' VALID mpedido $ 'X, '
                @ 15,58 GET mquant PICT '99' WHEN mpedido = 'X'
                READ
                IF mrecibo = 'X'
                        recibo(mnome,mdata,mvalor,mcpf)
                ENDIF

                IF mreceita = 'X'
                        smed540(mnome,mdata,mqtd_rece)
                ENDIF
                IF mpedido = 'X'
                        smedexa(mnome,mdata,mquant)
                ENDIF
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ELSE
                setcor(3)
                botao(10,25,16,62)
                setcor(1)
                DEVPOS(11,27);DEVOUT('Deseja Emitir Receita:')
                DEVPOS(11,52);DEVOUT('Qtd.:')
                DEVPOS(13,27);DEVOUT('Deseja Emitir Exames:')
                DEVPOS(13,52);DEVOUT('Qtd.:')
                SETCOLOR(vcor[2])
                DEVPOS(17,27);DEVOUT('Marque com um <X> as opcoes p/imprimir')
                setcor(1)
                SET INTEN ON
                @ 11,50 GET mreceita PICT '@!' VALID mreceita $ 'X, '
                @ 11,58 GET mqtd_rece PICT '99' WHEN mreceita = 'X'
                @ 13,50 GET mpedido PICT '@!' VALID mpedido $ 'X, '
                @ 13,58 GET mquant PICT '99' WHEN mpedido = 'X'
                READ
                IF mreceita = 'X'
                        smed540(mnome,mdata,mqtd_rece)
                ENDIF
                IF mpedido = 'X'
                        smedexa(mnome,mdata,mquant)
                ENDIF
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
ENDDO
*********************************** F I M ************************************
* VERIFICA COD.CONV.
***********************
FUNCTION vcconv(vconv,li,ci,pr)
***********************************
LOCAL teleconv,tela,msele,morde
IF vconv = '00'
        RETURN .T.
ENDIF
msele := SELE()
morde := INDEXORD()
************
SELE('conv');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        SEEK vconv
        IF ! FOUND()
                IF pr = NIL
                        atencao('Codigo nao Existe no Arquivo !!!')
                ENDIF
                vconv = SPACE(2)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
        mrsoc := rsocial
        mmod := modalidade
        mfator := fator
        mprazo := prazo
        mvalor := valor_con
        IF li <> NIL
                setcor(3)
                DEVPOS(li,ci);DEVOUT(mrsoc)
                setcor(1)
        ENDIF
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ENDDO
***************************  F I M ***********************
***********************
* VERIFICA COD.ESPECIALIDADE
***********************

FUNCTION ver_espe(vconv,li,ci)
***********************************

LOCAL msele,morde

IF EMPTY(vconv)
        RETURN .T.
ENDIF

msele := SELE()
morde := INDEXORD()
************
SELE('espe');ORDSETFOCUS(1)
GO TOP
************
IF ! espe->(DBSEEK(STRZERO(vconv,3)))
        atencao('Codigo nao Existe no Arquivo !!!')
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .F.
ENDIF
IF li <> NIL
        setcor(3)
        DEVPOS(li,ci);DEVOUT(espe->espe)
        setcor(1)
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ELSE
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ENDIF
RETURN NIL
************************** F I M ******************************
* VERIFICA COD.CONV.
***********************
FUNCTION ver_conv(vconv,li,ci,v,p)
**********************************
LOCAL msele,morde

IF EMPTY(VAL(vconv))
        RETURN .T.
ENDIF
mprazo := 0
msele := SELE()
morde := INDEXORD()
************
SELE('conv');ORDSETFOCUS(1)
GO TOP
************
WHILE .T.
        SEEK vconv
        IF ! FOUND() .AND. p = NIL
                IF v = NIL .OR. v = 0
                        mvalor := 0
                        mvlr_cirur := 0
                        mprazo := 0
                        mrsoc := ''
                ENDIF
                atencao('Codigo nao Existe no Arquivo !!!')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
        IF v = NIL .OR. v = 0
                mvalor := valor_con
                mvlr_cirur := valor_op
                mprazo := conv->prazo
                mrsoc := conv->rsocial
        ENDIF
        IF li <> NIL
                setcor(3)
                DEVPOS(li,ci);DEVOUT(LEFT(rsocial,25))
                setcor(1)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ELSE
                mrsocial := rsocial
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
ENDDO
RETURN .T.
************************** F I M ******************************
* VERIFICA COD.CLI
***********************
FUNCTION ver_cli(vcli,li,ci)
***********************************
LOCAL msele,morde
IF vcli = '00000'
        RETURN .T.
ENDIF
mprazo := 0
msele := SELE()
morde := INDEXORD()
************
SELE('cli')
ORDSETFOCUS(2)
GO TOP
************
WHILE .T.
        SEEK vcli
        IF ! FOUND()
                atencao('Codigo nao Existe no Arquivo !!!')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
        mcod_conv := VAL(codconv)
        IF li <> NIL
                setcor(3)
                DEVPOS(li,ci);DEVOUT(LEFT(nome,35))
                setcor(1)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
ENDDO
************************** F I M ******************************
* VERIFICA COD.CLI
***********************
FUNCTION vercli(vcli,li,ci)
***********************************
LOCAL msele,morde
MEMVAR mnome,mfone,mdatans
IF EMPTY(vcli)
        RETURN .T.
ENDIF
mprazo := 0
msele := SELE()
morde := INDEXORD()
************
SELE('cli')
ORDSETFOCUS(2)
GO TOP
************
WHILE .T.

        SEEK vcli

        IF ! FOUND()
                atencao('Codigo nao Existe no Arquivo !!!')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
        mcod_conv := codconv
        IF li <> NIL
                setcor(3)
                DEVPOS(li,ci);DEVOUT(LEFT(nome,35))
                setcor(1)
                mnome := cli->nome
                mfone := cli->fone
                mdatans := cli->datans
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
ENDDO
************************** F I M ******************************
***********************
* VERIFICA COD.CIRUR
***********************

FUNCTION ver_cirur(vcirur,li,ci)
***********************************

LOCAL msele,morde

IF vcirur = '000'
        RETURN .T.
ENDIF
msele := SELE()
morde := INDEXORD()
************
SELE('cirur')
ORDSETFOCUS(1)
GO TOP
************
WHILE .T.

        SEEK vcirur

        IF ! FOUND()
                atencao('Codigo nao Existe no Arquivo !!!')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
        IF li <> NIL
                setcor(3)
                DEVPOS(li,ci);DEVOUT(descricao)
                setcor(1)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
ENDDO
************************** F I M ******************************
***********************
* VERIFICA COD.MEDICO
***********************

FUNCTION ver_med(vcod_med,li,ci)
***********************************

LOCAL msele,morde

IF EMPTY(vcod_med)
        RETURN .T.
ENDIF
msele := SELE()
morde := INDEXORD()
IF ! abriarq('smedmed','med');RETURN NIL;ENDIF
************
SELE('med');ORDSETFOCUS(3)
GO TOP
************
SEEK STRZERO(vcod_med,5)

IF ! FOUND()
        atencao('Codigo nao Existe no Arquivo !!!')
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .F.
ENDIF
IF li <> NIL
        setcor(3)
        DEVPOS(li,ci);DEVOUT(med->profission)
        setcor(1)
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ENDIF
************************** F I M ******************************

**************************
* VERIFICA O DIA DA SEMANA
**************************
FUNCTION datseman(dds)
**************************
IF DOW(dds) = 1
        dsemana = 'Domingo'

ELSEIF DOW(dds) = 2
        dsemana = 'Segunda-feira'

ELSEIF DOW(dds) = 3
        dsemana = 'Terca-feira'

ELSEIF DOW(dds) = 4
        dsemana = 'Quarta-feira'

ELSEIF DOW(dds) = 5
        dsemana = 'Quinta-feira'

ELSEIF DOW(dds) = 6
        dsemana = 'Sexta-feira'

ELSEIF DOW(dds) = 7
        dsemana = 'Sabado'

ENDIF
RETURN dsemana


**************************** F I M ************************************
* FUNCAO P/CONSULTAR CONVENIOS
********************************
FUNCTION f3_conv
*****************
LOCAL tela,tela1,lci,cci,lba,cba,pode,point,msele,morde,men,m_codigo:={},m_posicao:={}

lci := 07
cci := 08
lba := 22
cba := 45

tela := SAVESCREEN(00,00,24,79)

msele := SELE()
morde := INDEXORD()
men := SAVESCREEN(24,00,24,79)
setcor(3)
botao(lci,cci,lba,cba)
setcor(1)
DEVPOS(lci+1,cci+1);DEVOUT('Cod')
DEVPOS(lci+1,cci+07);DEVOUT('Convenio')
@ lci+2,cci+1 TO lci+2,cba-1
@ lci+2,cci+05 TO lba-1,cci+05
@ lci+2,cci+05 SAY CHR(194)
@ lba,cci+05 SAY CHR(193)

*************
SELE('conv');ORDSETFOCUS(1)
GO TOP
*************
IF LASTREC() = 0
        atencao('Nao existe nenhum Convenios Cadastrado !!!')
        SELE(msele);ORDSETFOCUS(morde)
        RESTSCREEN(24,00,24,79,men)
        RESTSCREEN(00,00,24,79,tela)
        RETURN NIL
ENDIF
mensagem('Aguarde um momento OK !!!')
ASIZE(m_codigo,0)
WHILE ! EOF()
        AADD(m_codigo,' '+codconv+' '+CHR(179)+' '+rsocial+' ')
        AADD(m_posicao,RECNO())
        SKIP
ENDDO

pode=.T.

WHILE .T.
        mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Confirma" )
        point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo)

        DO CASE
                CASE LASTKEY()=5
                        IF ! BOF()
                                SKIP -1
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=24
                        IF ! EOF() .AND. pode=.T.
                                SKIP
                        ENDIF
                CASE LASTKEY()=27
                        SELE(msele);ORDSETFOCUS(morde)
                        RESTSCREEN(24,00,24,79,men)
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL
                CASE LASTKEY() = 13
                        GO m_posicao[point]
                        mcconv := codconv
                        SELE(msele);ORDSETFOCUS(morde)
                        RESTSCREEN(24,00,24,79,men)
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL

        ENDCASE
ENDDO

******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR MEDICAMENTOS
********************************
FUNCTION f4_med
*****************
LOCAL tela,tela1,lci,cci,lba,cba,pode,point,msele,morde,men,m_codigo:={},m_posicao:={}
lci := 07
cci := 08
lba := 22
cba := 65

tela := SAVESCREEN(00,00,24,79)

msele := SELE()
morde := INDEXORD()
men := SAVESCREEN(24,00,24,79)
setcor(3)
botao(lci,cci,lba,cba)
setcor(1)
DEVPOS(lci+1,cci+1);DEVOUT(' Cod.')
DEVPOS(lci+1,cci+10);DEVOUT('Nome Com.')
DEVPOS(lci+1,cci+28);DEVOUT('Nome Droga')
@ lci+2,cci+1 TO lci+2,cba-1
@ lci+2,cci+08 TO lba-1,cci+08
@ lci+2,cci+26 TO lba-1,cci+26
@ lci+2,cci+08 SAY CHR(194)
@ lba,cci+08 SAY CHR(193)
@ lci+2,cci+26 SAY CHR(194)
@ lba,cci+26 SAY CHR(193)

*************
SELE('dro');ORDSETFOCUS(1)
GO TOP
*************
IF LASTREC() = 0
        atencao('Nao existe nenhum Medicamento Cadastrado !!!')
        SELE(msele);ORDSETFOCUS(morde)
        RESTSCREEN(24,00,24,79,men)
        RESTSCREEN(00,00,24,79,tela)
        RETURN NIL
ENDIF
mensagem('Aguarde um momento OK !!!')
ASIZE(m_codigo,0)
WHILE ! EOF()
        AADD(m_codigo,' '+cod_med+' '+CHR(179)+' '+nomecom+' '+CHR(179)+' '+nomedroga+' ')
        AADD(m_posicao,RECNO())
        SKIP
ENDDO

pode=.T.

WHILE .T.
        mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Confirma" )
        point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo)

        DO CASE
                CASE LASTKEY()=5
                        IF ! BOF()
                                SKIP -1
                                pode=.T.
                        ENDIF
                CASE LASTKEY()=24
                        IF ! EOF() .AND. pode=.T.
                                SKIP
                        ENDIF
                CASE LASTKEY()=27
                        SELE(msele);ORDSETFOCUS(morde)
                        RESTSCREEN(24,00,24,79,men)
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL
                CASE LASTKEY() = 13
                        GO m_posicao[point]
                        mcod_med := cod_med
                        SELE(msele);ORDSETFOCUS(morde)
                        RESTSCREEN(24,00,24,79,men)
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL

        ENDCASE
ENDDO
*********************************** f i m *************************************
* INCLUSAO DE CONVENIO
**********************
FUNCTION convenio
****************
LOCAL lci,cci,lba,cba,opcao,mcconv,mmod,mrsoc,mend,mfonec,mcod,mfat,mdata,tela212,tela1

lci := 12
cci := 12
lba := 21
cba := 63
tela212 := SAVESCREEN(00,00,24,79)
*********************************************
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
/*
IF ! ABRARQ('conv')
        USE smedconv ALIAS conv SHARED NEW
ENDIF
*/
*********************************************
WHILE .T.
        SET CURSOR ON
        opcao := 0
        mcod := 0
        mdata := CTOD('  /  /  ')
        mcconv := SPACE(2)
        mrsoc := SPACE(30)
        mmod := SPACE(2)
        mend := SPACE(35)
        mfonec := SPACE(13)
        mfat := 0

        setcor(3)
        botao(lci,cci,lba,cba)
        @ lba-2,cci+1 TO lba-2,cba-1
        SETCOLOR(vcor[2])
        DEVPOS(lba-1,cci+1);DEVOUT('Modalid.<CR>C/Recibo <SR>S/Recibo <CH>C/Honorarios')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Conv..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Modalidade:')
        DEVPOS(lci+2,cci+22);DEVOUT('Data:')
        DEVPOS(lci+3,cci+2);DEVOUT('Fator.....:')
        DEVPOS(lci+4,cci+2);DEVOUT('Raz.Social:')
        DEVPOS(lci+5,cci+2);DEVOUT('Endereco..:')
        DEVPOS(lci+6,cci+2);DEVOUT('Fone......:')

        *************
        SELE('conv');ORDSETFOCUS(1)
        *************
        GO BOTT
        mcod := VAL(codconv)
        mcod := mcod + 1
        mdata := DATE()
        DEVPOS(lci+1,cci+13);DEVOUT('['+STRZERO(mcod,2,0)+']')

        SET INTEN ON
        @ lci+2,cci+14 GET mmod PICT '@!' VALID mmod $ 'CR,CH,SR'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF EMPTY(mmod)
                LOOP
        ENDIF
        apaga(23,00,23,79)
        @ lci+2,cci+28 GET mdata PICT '  /  /  '
        @ lci+3,cci+14 GET mfat PICT '9.9'
        @ lci+4,cci+14 GET mrsoc PICT '@!'
        @ lci+5,cci+14 GET mend PICT '@!'
        @ lci+6,cci+14 GET mfonec PICT '(999)999-9999'
        READ

        tela1 := SAVESCREEN(17,42-1,21+1,59)
        WHILE .T.

                setcor(3)
                botao(17,42,21,59)
                @ 19,43 TO 19,58 DOUBLE
                setcor(1)
                DEVPOS(18,44);DEVOUT('Confirma Incl.')
                @ 20,46 PROMPT ' Sim '
                @ 20,53 PROMPT ' Nao '
                SET INTEN ON
                MENU TO opcao
                IF LASTKEY() = 27
                        LOOP
                ENDIF

                DO CASE
                        CASE opcao = 1
                                IF ADIREG()
                                        REPLA codconv WITH STRZERO(mcod,2)
                                        REPLA modalidade WITH mmod
                                        REPLA fator WITH mfat,dataini WITH mdata
                                        REPLA rsocial WITH mrsoc,endereco WITH mend
                                        REPLA foneconv WITH mfonec
                                        COMMIT
                                        UNLOCK
                                ELSE
                                        atencao('Nao foi Possivel Acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                RESTSCREEN(00,00,24,79,tela212)
                                setcor(1)
                                CLOSE ALL
                                RETURN NIL
                        CASE opcao = 2
                                EXIT
                ENDCASE
        ENDDO
ENDDO
CLOSE ALL
RETURN NIL
************************** F I M ********************************************
**************************
* ALTERACAO DE TABELA PRECO
**************************
FUNCTION tabpreco
****************
LOCAL lci,cci,lba,cba,opcao,mvlcr,mvlch,mdata,tela226,tela1

lci := 12
cci := 15
lba := 18
cba := 51
tela226 := SAVESCREEN(00,00,24,79)

*********************************************
IF ! abriarq('smedtab','tab');RETURN NIL;ENDIF
*********************************************
WHILE .T.
        *************
        SELE('tab')
        *************
        GO BOTT
        SET CURSOR ON
        mvlcr = 0
        mvlch = 0
        mdata = CTOD('  /  /  ')
        opcao := 0
        apaga(23,00,23,79)
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lba-2,cci+1 TO lba-2,cba-1
        SETCOLOR(vcor[2])
        DEVPOS(lba-1,cci+1);DEVOUT('Valor "CR" e "CH" nao pode ser = 0 ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data da Alteracao :')
        DEVPOS(lci+2,cci+2);DEVOUT('Valor c/Honorario.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor c/Recibo....:')

        SET INTEN ON
        mdata := DATE()
        mvlch := valch
        mvlcr := valcr

        @ lci+1,cci+22 GET mdata PICT '  /  /  '
        @ lci+2,cci+22 GET mvlch PICT '999.99' VALID IIF(mvlch = 0,.F.,.T.)
        @ lci+3,cci+22 GET mvlcr PICT '9,999,999.99' VALID IIF(mvlcr = 0,.F.,.T.)
        READ

        IF LASTKEY() = 27
                LOOP
        ENDIF

        tela1 := SAVESCREEN(17,42-1,21+1,59)

        WHILE .T.

                setcor(3)
                botao(17,42,21,59)
                @ 19,43 TO 19,58 DOUBLE
                setcor(1)
                DEVPOS(18,44);DEVOUT('Confirma Alte.')
                @ 20,46 PROMPT ' Sim '
                @ 20,53 PROMPT ' Nao '
                SET INTEN ON
                MENU TO opcao

                IF LASTKEY() = 27
                        LOOP
                ENDIF

                DO CASE
                        CASE opcao = 1
                                IF ADIREG()
                                        REPLA valcr WITH mvlcr
                                        REPLA valsr WITH mvlcr
                                        REPLA valch WITH mvlch
                                        REPLA dataalt WITH mdata
                                        COMMIT
                                        UNLOCK
                                ELSE
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                                RESTSCREEN(00,00,24,79,tela226)
                                setcor(1)
                                CLOSE ALL
                                RETURN NIL
                        CASE opcao = 2
                                EXIT
                ENDCASE
        ENDDO
ENDDO
RETURN NIL
********************************** F I M **********************************
* EMITE RECIBOS
***************
FUNCTION recibo(rnome,rdata,rvalor,rcpf)
***********************************
LOCAL lci,cci,lba,cba,lin,lin1,lin2,lin3,rpreco,rrecibo,linhas := 0;
      ,opcao,telarec,telaprin,mref,mref1,mref2,mref3,mref4,mref5,mref6

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35),traco

lin1 := '          Recebi do Sr.(a) '
lin2 := ' a importancia de R$ '
lin3 := ' referente a ' 
opcao := SPACE(1)
traco := REPLI('-',80)
lci := cci := 0
lba := 21
cba := 73
*********************************************
IF ! abriarq('smedrec','rec');RETURN NIL;ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(10,05,21,73,'RECIBO')
WHILE .T.
        **************
        SELE('rec');ORDSETFOCUS(1)
        **************
        mref := 'servico medico                                    '
        mref1 := SPACE(50)
        mref2 := SPACE(50)
        mref3 := SPACE(50)
        mref4 := SPACE(50)
        mref5 := SPACE(50)
        mref6 := SPACE(35)
        setcor(3)
        botao(lci,cci,lba,cba)
        SETCOLOR(vcor[2])
        DEVPOS(lci,cci+2);DEVOUT(' R E C I B O ')
        setcor(1)
        SET INTEN ON
        DEVPOS(lci+1,cci+2);DEVOUT('Data.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Nome.......:')
        DEVPOS(lci+3,cci+2);DEVOUT('CPF........:')
        DEVPOS(lci+4,cci+2);DEVOUT('Valor......:')
        DEVPOS(lci+5,cci+2);DEVOUT('Referente a:')
        DEVPOS(lci+11,cci+2);DEVOUT('Prestados a:')
        @ lci+1,cci+15 GET rdata PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                CLOSE rec
                RETURN NIL
        ENDIF
        @ lci+2,cci+15 GET rnome PICT '@!' VALID IF(EMPTY(rnome),.F.,.T.)
        @ lci+3,cci+15 GET rcpf PICT '999.999.999-99'
        @ lci+4,cci+15 GET rvalor PICT '9,999,999.99' VALID IF(EMPTY(rvalor),.F.,.T.)
        @ lci+5,cci+15 GET mref
        @ lci+6,cci+15 GET mref1
        @ lci+7,cci+15 GET mref2
        @ lci+8,cci+15 GET mref3
        @ lci+9,cci+15 GET mref4
        @ lci+10,cci+15 GET mref5
        @ lci+11,cci+15 GET mref6 VALID IF(EMPTY(mref6),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF

        IF EMPTY(rnome)
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('RECIBO.REL')
                LOOP
        ENDIF
        rrecibo := lin1+RTRIM(rnome)+' - CPF:'+rcpf+' '+lin2+LTRIM(TRANSFORM(rvalor,'@E 9,999,999.99'))+' '+'('+extenso(rvalor,.T.)+')'+lin3+RTRIM(mref) + RTRIM(mref1) + RTRIM(mref2) + RTRIM(mref3) + RTRIM(mref4) + RTRIM(mref5) + ' prestados a '+ RTRIM(mref6) + ' nesta data'
                cabec()
                imprt(impressora,'E',4)
                @ PROW(),15 SAY 'R E C I B O'
                imprt(impressora,'N')
                @ PROW()+4,45 SAY 'R$ '
                @ PROW(),49 SAY LTRIM(TRANSFORM(rvalor,'@E 9,999,999.99'))
                @ PROW()+4,01 SAY ' '

                linhas := MLCOUNT(rrecibo,60)

                FOR linha = 1 TO  linhas
                        LIN := MEMOLINE(rrecibo,60,linha,,10)
                        @ PROW()+1,10 SAY PADR(RTRIM(LIN),60)
                        @ PROW()+1,10 SAY ' '
                NEXT

                @ PROW()+5,30 SAY 'Recife,'
                @ PROW(),37 SAY rdata
                @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                @ PROW(),00 SAY PADC(m_set[1,23],80)
                @ PROW()+1,00 SAY PADC(crm,80)
                IF ver_serie() = '140200'
                        @ PROW()+1,00 SAY PADC(cpf,80)
                ENDIF
                rodape()
                @ PROW()+1,90 SAY ' '
        EJECT
        SETPRC(00,00)
        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
        FCLOSE('RECIBO.REL')
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
        *****************
        SELE('rec');ORDSETFOCUS(1)
        *****************
        IF ADIREG()
                rec->cliente := mref6
                rec->nome := rnome
                rec->valor := rvalor
                rec->data := rdata
                rec->operador := cod_operado
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
        wvw_lclosewindow()
        CLOSE rec
        RETURN NIL
ENDDO
******************************** f i m **************************************
****************
* EMITE RECEITAS
****************
FUNCTION receita(rnome,rdata,rquantd)
*************************************
LOCAL mprg:='SMEDROT',lci,cci,lba,cba,opcao,ml1,mquantd,y:=0,i:=0
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,traco,marq:=SPACE(35)

lci := cci := 0
lba := 22
cba := 73
traco := REPLI('-',80)
opcao := SPACE(1)
IF rnome = NIL
        rnome := SPACE(35)
        rdata := DATE()
        rquantd := 1
ENDIF
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
op_tela(06,06,24,73,'EMITE RECEITAS')
y := 0
FOR y = 1 TO rquantd
        limpa(00,00,30,90)
        exibi_prg(mprg)
        mquantd := 1
        ml1 = SPACE(60)
        mensagem('Tecle <F10> p/Imprimir    -   <ESC> p/Abandonar')
        setcor(1)
        SET INTEN ON

        DEVPOS(lci+1,cci+2);DEVOUT('Para:')
        DEVPOS(lci+1,cci+44);DEVOUT('Data:')
        @ lci+1,cci+7 GET rnome PICT '@!'
        @ lci+1,cci+49 GET rdata
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mreceita := ml1

        rreceita := MEMOEDIT(mreceita,lci+2,cci+07,lba-1,cba-1)

        mquantd := VAL(mensagem1('Quantidades de Copias:','1','1,2,3,4'))
        //@ 23,COL()+1 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        //READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        mensagem('Espere o Final da Impressao OK')
        IF ! imp_arq('HTI.REL')
                LOOP
        ENDIF
                FOR i = 1 TO mquantd
                        cabec()
                        imprt(impressora,'N',1)
                        @ PROW(),05 SAY 'Para o Sr.(a).'
                        @ PROW()+2,05 SAY rnome
                        @ PROW()+2,05 SAY ' '
                        linhas := MLCOUNT(rreceita,60)
                        FOR linha = 1 TO  linhas
                                LIN := MEMOLINE(rreceita,60,linha,,)
                                @ PROW(),10 SAY LIN
                                @ PROW()+1,10 SAY ' '
                        NEXT
                        @ PROW()+3,30 SAY 'Recife,'
                        @ PROW(),37 SAY rdata
                        @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
                        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
                        rodape()
                        @ PROW()+1,90 SAY ' '
                        EJECT
                NEXT
        SETPRC(0,0)
        SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
        FCLOSE('HTI.REL')
        conf_impressao('HTI.REL')
NEXT
wvw_lclosewindow()
RETURN NIL
*******************************************************************************************************
*****************************************
* CONSULTA DA AGENDA DE COMPROMISSO
*****************************************
FUNCTION agenda
****************
LOCAL lci,cci,lba,cba,mdatac,mlin1,mlin2,mlin4,mlin5,mlin6,mlin7,mlin8,mlin9,mlin10

mdatac := CTOD('  /  /  ')
lci := cci := 0
lba := 18
cba := 70
mdatac = DATE()
op_tela(06,10,18,75,' Compromisso do Dia: '+DTOC(mdatac)+SPACE(20)+datseman(mdatac))
//op_tela(06,10,18,75,' Compromisso do Dia: '+'['+DTOC(mdatac)+']'+SPACE(20))
*********************************************
CLOSE ALL
IF ! abriarq('smedagen','agen');RETURN NIL;ENDIF
*********************************************
WHILE .T.
        setcor(3)
        DEVPOS(lba+1,cci+12);DEVOUT('Pressione Qualquer Tecla p/Continuar')
        *************
        SELE('agen');ORDSETFOCUS(1)
        GO TOP
        *************
        SET INTEN ON
        SEEK DTOS(mdatac)
        datseman(mdatac)

        IF ! FOUND()
                SETCOLOR('n*/w,x')
                DEVPOS(lci+5,cci+19);DEVOUT('SEM COMPROMISSO P/ HOJE !!!')
                INKEY(1)
                INKEY(0)
                CLOSE ALL
                EXIT
        ENDIF
        DEVPOS(lci+2,cci+7);DEVOUT('['+lin1+']')
        DEVPOS(lci+3,cci+7);DEVOUT('['+lin2+']')
        DEVPOS(lci+4,cci+7);DEVOUT('['+lin3+']')
        DEVPOS(lci+5,cci+7);DEVOUT('['+lin4+']')
        DEVPOS(lci+6,cci+7);DEVOUT('['+lin5+']')
        DEVPOS(lci+7,cci+7);DEVOUT('['+lin6+']')
        DEVPOS(lci+8,cci+7);DEVOUT('['+lin7+']')
        DEVPOS(lci+9,cci+7);DEVOUT('['+lin8+']')
        DEVPOS(lci+10,cci+7);DEVOUT('['+lin9+']')
        DEVPOS(lci+11,cci+7);DEVOUT('['+lin10+']')
        INKEY(1)
        INKEY(0)
        CLOSE ALL
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
************************** f i m **************************8
********************************
* FUNCAO P/CONSULTAR TABELA CID
********************************
FUNCTION f12_cid
****************
LOCAL lci,cci,lba,cba,mcodigo,mdesc,msele,morde,point,tela
*********************************************
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
msele := SELE()
morde := INDEXORD()
IF ! abriarq('smedcid','cid');RETURN NIL;ENDIF
*********************************************
lci := 07
cci := 02
lba := 19
cba := 79
tela := SAVESCREEN(00,00,24,79)
CLEAR GETS
WHILE .T.
        mensagem("Digite o Codigo do DIAGNOSTICO ou DESCRICAO - <ESC> Retorna" )
        mcodigo := SPACE(11)
        mdesc := SPACE(60)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        janela(lci,cba,' CONSULTA Diagnostico da C.I.D. ')
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo')
        DEVPOS(lci+1,cci+20);DEVOUT('Diagnostico')
        @ lci+2,cci+1 TO lci+2,cba-1
        @ lci+2,cci+15 SAY CHR(194)
        @ lba,cci+15 SAY CHR(193)
        @ lci+3,cci+15 TO lba-1,cci+15

        pode=.T.

        *************
        SELE('cid');ORDSETFOCUS(1)
        *************
        @ lci+3,cci+2 GET mcodigo PICT '9999.9/9'
        @ lci+3,cci+16 GET mdesc PICT '@!' WHEN mcodigo = SPACE(8)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLEAR GETS
                SELE(msele);ORDSETFOCUS(morde)
                RETURN NIL
        ENDIF
        IF EMPTY(mcodigo) .AND. EMPTY(mdesc)
                LOOP
        ENDIF
        IF ! EMPTY(mcodigo)
                ORDSETFOCUS(2)
                GO TOP
                SEEK 'D'+mcodigo
        ELSE
                ORDSETFOCUS(1)
                GO TOP
                SEEK 'D'+RTRIM(mdesc)
        ENDIF
        IF ! FOUND()
                atencao('Diagnostico nao cadastrado !!!')
                LOOP
        ENDIF
        WHILE .T.
                mensagem("< ou > Consulta  <ENTER> outro DIAGNOSTICO  <ESC> Retorna" )
                point=RECNO()
                FOR f=1 TO 9
                        IF tipo = 'P'
                                WHILE tipo = 'P' .OR. ! EOF()
                                        SKIP
                                ENDDO
                        ENDIF
                        IF ! EOF()
                                setcor(3)
                                @ lci+2+f,cci+2 SAY codigo
                                @ lci+2+f,cci+16 SAY nome
                                setcor(1)
                                SKIP
                        ELSE
                                setcor(3)
                                @ lci+2+f,cci+2 SAY SPACE(11)
                                @ lci+2+f,cci+16 SAY SPACE(60)
                                setcor(1)
                        ENDIF
                NEXT F
                IF EOF()
                        pode=.F.
                ENDIF
                GO POINT
                INKEY(0)
                DO CASE
                        CASE LASTKEY()=5
                                IF ! BOF()
                                        SKIP -1
                                        pode=.T.
                                ENDIF
                        CASE LASTKEY()=24
                                IF ! EOF() .AND. pode=.T.
                                        SKIP
                                ENDIF
                        CASE LASTKEY()=18
                                IF ! BOF()
                                        SKIP -10
                                        pode=.T.
                                ENDIF
                        CASE LASTKEY()=3
                                IF ! EOF() .AND. pode=.T.
                                        SKIP 10
                                ENDIF
                        CASE LASTKEY()=13
                                EXIT
                        CASE LASTKEY()=27
                                RESTSCREEN(00,00,24,79,tela)
                                CLOSE cid
                                CLEAR GETS
                                SELE(msele);ORDSETFOCUS(morde)
                                RETURN NIL
                ENDCASE
        ENDDO
ENDDO
****************************  F I M ****************************************
**************************
* EMITE TEXTOS
*************************
FUNCTION textosmed
******************
LOCAL lci,cci,lba,cba,opcao,tela570,mtexto,mquantd

PRIVATE traco,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := 06
cci := 10
lba := 21
cba := 73
tela570 := SAVESCREEN(00,00,24,79)
traco := REPLI('=',80)
opcao := SPACE(1)
*----------------------------------------------------
CLOSE ALL
USE texto ALIAS tex SHARED NEW
*----------------------------------------------------
SET KEY -9 TO ctrl_w()
WHILE .T.
        ***********
        SELE('tex')
        ***********
        IF ! BLOQREG()
                LOOP
        ENDIF
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(2)
        janela(lci,cba,'  T E X T O  ')
        setcor(1)
        Mensagem('Tecle <F10> Imprimir - <Ctrl+Y>Apagar linha p/linha - <ESC> p/Abandonar')

        IF ver_serie() = '140200'
                tex-> texto := MEMOEDIT(texto,lci+1,cci+2,lba-1,cba-1,,,,,,7)
        ENDIF
        mtexto := MEMOEDIT(texto,lci+1,cci+2,lba-1,cba-1,,,,,,7)
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela570)
                UNLOCK
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma Impressao [S/n]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        mquantd := 1
        mensagem('Quantidade de Copias:')
        @ 23,COL()+1 GET mquantd PICT '999' VALID IF(EMPTY(mquantd),.F.,.T.)
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                WHILE .T.
                        IF ! imp_arq('SMED.REL')
                                LOOP
                        ENDIF
                        mensagem('Espere o Final da Impressao OK')
                        FOR i = 1 TO mquantd
                                cabec()
                                @ PROW()+2,01 SAY ' '
                                linhas := MLCOUNT(mtexto,60)

                                FOR linha = 1 TO  linhas
                                        LIN := MEMOLINE(mtexto,60,linha,,)
                                        @ PROW()+1,10 SAY LIN
                                        IF PROW() >= 58
                                                EJECT
                                                mcont = 0
                                        ENDIF
                                NEXT
                                @ PROW()+6,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                                @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                                @ PROW()+1,00 SAY PADC(crm,80)
                                rodape()
                                @ PROW()+1,90 SAY ' '
                                EJECT
                                SETPRC(00,00)
                                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        NEXT
                        RESTSCREEN(00,00,24,79,tela570)
                        IF mimp_tipo = 2
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                        ELSEIF mimp_tipo = 1
                                FCLOSE('HTI.REL')
                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                        ENDIF
                        EXIT
                ENDDO
        ELSE
                LOOP
        ENDIF
ENDDO
RETURN NIL
******************************** F I M *************************************
* FUNCAO P/VERIFICAR AUTORIZACAO
********************************
FUNCTION aut_sen(men,mdl,mlin,mnum_cli,mnum_prod,mamb,mnum_pedido)
****************
LOCAL linhas,i,lin,matencao,li,ci,la,ca,mpos,;
      msel_sen,mord_sen,mcont,mok:=' ',linha,msenha,mn_ped:=SPACE(6),;
      mc_cli:=SPACE(5),msel,mord,mcodaux:=SPACE(14),;
      maut_oper:=SPACE(3),msol_aut:=' ',mpoint:=0,mcons_nivel:={}
MEMVAR mautoriza,mnum_ped
PRIVATE mcod_aut:=SPACE(6),mcod_oper:=0
/*
mcons_nivel := {}
sr_getconnection():exec("SELECT * FROM sacconf WHERE modulo = "+sr_cdbvalue(mdl),,.t.,@mcons_nivel)
IF LEN(mcons_nivel) > 0 .AND. SUBSTR(mcons_nivel[1,3],1,1) = '0'
        RETURN .T.
ENDIF
*/
msel_sen := SELE()
mord_sen := INDEXORD()
linha := 18
//IF ! AbriArq('saclog','log');RETURN NIL;ENDIF
IF ! AbriArq('sacconf','conf');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*****************
SELE('sen');ORDSETFOCUS(2)
*****************
mcont := 0
men := RTRIM(men)
IF LEN(men) > 70
        mpos := 70
        ci := 10
ELSEIF LEN(men) < LEN(' MODULO DE LIBERACAO P/SENHA ')
        mpos := LEN(' MODULO DE LIBERACAO P/SENHA ')    //+20
        ci := (90-LEN(' MODULO DE LIBERACAO P/SENHA ')) / 2
ELSE
        mpos := LEN(men)
        ci := (90-LEN(men)) / 2
ENDIF
linhas := MLCOUNT(men,mpos)
li := 12
IF linha <> NIL
        IF linha + linhas + 4 > 24
                li := 24 - (linhas + 4)
        ELSE
                li := linha
        ENDIF
ENDIF
IF mlin <> NIL .AND. mlin < li
        li := mlin
ENDIF
la := li+linhas+6
ca := ci+1+mpos+1
IF ca - ci < 60
        ci := 10
        ca := 80
ENDIF
op_tela(li,ci,la,ca,' MODULO DE LIBERACAO P/SENHA <<Modulo:'+mdl+'>>')
setcor(3)
FOR i = 1 TO  linhas
        LIN := MEMOLINE(men,mpos,i,,)
        //DEVPOS(i,00);DEVOUT(PADC(RTRIM(LIN),mpos))
        DEVPOS(i,00);DEVOUT(RTRIM(LIN),mpos)
NEXT
@ i,0 TO i,100
i++
setcor(5)
DEVPOS(i,00);DEVOUT(PADC('A U T O R I Z A C A O ',mpos))
i++
@ i,0 TO i,100
WHILE mcont < 3
        setcor(1)
        CLEAR GETS
        mok := ' '
        mcod_aut := SPACE(6)
        msol_aut := 'N'
        setcor(1)
        DEVPOS(i+1,00);  DEVOUT('Codigo Operador:')
        DEVPOS(i+2,00);DEVOUT('Senha Liberacao:')
        //DEVPOS(i+3,00);DEVOUT('Solicitar [s/N]:')
        @ i+1,18 GET mcod_oper PICT '999' VALID IF(EMPTY(mcod_oper),.F.,ven(mcod_oper,i+1,22))
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        msenha = ''
        pegasenha(@msenha,i+2,18,setcor(2))
        setcor(1)
        IF msenha = 'NAO'
                EXIT
        ENDIF
        IF ! EMPTY(msenha)
                maut_oper := STRZERO(mcod_oper,3)
        ENDIF
        //@ i+3,18 GET msol_aut PICT '@!' VALID IF(msol_aut = 'S',soli_aut(STRZERO(mcod_oper,3),mnum_cli,mnum_prod,men,mamb),.T.) WHEN EMPTY(msenha)
        //READ
        //IF LASTKEY() = 27
        //        EXIT
        //ENDIF
        /*
        cons_ven:={}
        ccomm := "SELECT scod_aut,ssenha,snivel FROM insopera WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3))
        sr_getconnection():exec(ccomm,,.t.,@cons_ven)
        IF LEN(cons_ven) = 0
                atencao('Operador nao encontrado !!!!')
                mcont ++
                LOOP
        ENDIF
        //DEVPOS(i+3,18);DEVOUT(mcod_aut)
        IF mcod_aut = 'NEGATIVO'
                atencao('Autorizacao NEGADA')
                EXIT
        ENDIF
        mcod_aut := SUBSTR(cons_ven[1,1],1,6)
        IF (! EMPTY(mnum_cli) .OR. ! EMPTY(mnum_prod) .OR. ! EMPTY(mamb)) .AND. ! EMPTY(cons_ven[1,1]) .AND. EMPTY(msenha)
                mcodaux := mcod_aut
                IF ! EMPTY(mnum_cli)
                        mcodaux := mcodaux + mnum_cli
                ELSEIF ! EMPTY(mnum_prod)
                        mcodaux := mcodaux + mnum_prod
                ELSEIF ! EMPTY(mamb)
                        mcodaux := mcodaux + mamb
                ENDIF
                mcodaux := mcodaux+STRZERO(mcod_oper,3)
                IF mcodaux = SUBSTR(cons_ven[1,1],1,14)
                        msenha := ALLTRIM(DCRIPTO(cons_ven[1,2]))
                        ccomm := "UPDATE insopera SET scod_aut = NULL WHERE scod_op = "+sr_cdbvalue(STRZERO(mcod_oper,3))
                        sr_getconnection():exec(ccomm,,.f.)
                        //sr_getconnection():exec('COMMIT',,.f.)
                        mcodaux := cons_ven[1,1]
                        maut_oper := SUBSTR(mcodaux,15,3)
                        ven(VAL(maut_oper))
                        msenha := ALLTRIM(DCRIPTO(cons_ven[1,2]))
                        sr_getconnection():exec('INSERT INTO saclog (data_sis,data,hora,tipo,documento,cod_cli,aut_oper,cod_oper,modulo,descri,cod_aut,terminal'+;
                                ',cod_prod,SR_DELETED )'+;
                                ' VALUES ('+;
                                sr_cdbvalue(DATE()       )+','+; //1
                                sr_cdbvalue(mdata_sis    )+','+; //2
                                sr_cdbvalue(TIME()       )+','+; //3
                                sr_cdbvalue('AUTORIZACA')+','+; //4
                                sr_cdbvalue(mn_ped       )+','+; //5
                                sr_cdbvalue(mc_cli       )+','+; //6
                                sr_cdbvalue(maut_oper    )+','+; //7
                                sr_cdbvalue(cod_operado  )+','+; //8
                                sr_cdbvalue(mcons_nivel[1,1])+','+;//9
                                sr_cdbvalue(SUBSTR(ALLTRIM(mcons_nivel[1,2])+IF(mnum_pedido = NIL,'',' '+mnum_pedido),1,60))+','+;//10
                                sr_cdbvalue(mcodaux      )+','+; //11
                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                sr_cdbvalue(IF(mnum_prod = NIL,'',mnum_prod))+','+; //13
                                sr_cdbvalue(' ')+')',,.f.)
                        sr_getconnection():exec("COMMIT",,.f.)
                        mok:='*'
                        *********************
                        SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
                        *********************
                        wvw_lclosewindow()
                        RETURN .T.
                ELSEIF EMPTY(mcod_aut)
                        msenha = ''
                        pegasenha(@msenha,i+2,18,setcor(2))
                        setcor(1)
                        IF msenha = 'NAO'
                                EXIT
                        ENDIF
                        IF EMPTY(msenha)
                                LOOP
                        ENDIF
                        maut_oper := STRZERO(mcod_oper,3)
                ELSE
                        atencao('Codigo de Autorizacao nao confere !!!')
                        mcont ++
                        LOOP
                ENDIF
        ENDIF
        */
        IF ALLTRIM(msenha) == ALLTRIM(DCRIPTO(sen-> ssenha))
                IF mdl = 'LIB_SALDO'
                        IF(ver_nivel(mdl,'LIBERACAO DE QUANTD.SOLICITADA MAIOR QUE O SALDO DO PRODUTO','15',cons_ven[1,3],1,STRZERO(VAL(maut_oper),3)),mok := '*',' ')
                ENDIF
                atencao('Cod. Operador:'+maut_oper+' - Operador nao Autorizada !!!')
                *********************
                SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
                *********************
                wvw_lclosewindow()
                RETURN .T.
        ELSE
                atencao('Senha nao Autorizada 2 !!!')
                mcont ++
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
*********************
SELE(msel_sen);IF(mord_sen>0,ORDSETFOCUS(mord_sen),)
*********************
RETURN .F.
***************************** F I M ****************************************
/*
* FUNCAO P/VERIFICAR AUTORIZACAO
********************************
FUNCTION aut_sen(men)
****************
LOCAL msele,morde,mcont,li,ci,lba,cba,tela,tela1

msele := SELE()
morde := INDEXORD()

IF ! abriarq('insopera','sen');RETURN NIL;ENDIF

*mensagem('Digite a senha de Autorizacao:')
*****************
SELE('sen');ORDSETFOCUS(1)
*****************
mcont := 0
op_tela(20,20,24,
WHILE mcont <= 3
        mensagem(men)
        GO TOP
        msenha = ''
        pegasenha(@msenha,24,COL()+1)
        IF msenha = 'NAO'
                *********************
                SELE(msele);ORDSETFOCUS(morde)
                *********************
                RETURN .F.
        ENDIF
        IF EMPTY(msenha)
                atencao('Senha nao Autorizada !!!')
                mcont ++
                IF mcont = 3
                        atencao('Senha nao Autorizada !!!')
                        EXIT
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
                IF snivel = '1'
                        EXIT
                ENDIF
                atencao('Senha nao Autorizada !!!')
                mcont ++
                LOOP
        ELSE
                atencao('Senha nao Autorizada !!!')
                mcont ++
                IF mcont = 3
                        EXIT
                ENDIF
                LOOP
        ENDIF
ENDDO
IF mcont = 3 .OR. EOF() .OR. snivel <> '1'
        atencao('Senha nao Autorizada !!!')
        *********************
        SELE(msele);ORDSETFOCUS(morde)
        *********************
        RETURN .F.
ELSE
        mautoriza := SPACE(3)
        mautoriza := scod_op
        *********************
        SELE(msele);ORDSETFOCUS(morde)
        *********************
        RESTSCREEN(24,00,24,79,tela)
        RETURN .T.
ENDIF
RETURN NIL
*/
***************************** F I M ****************************************
* TESTE DE EXISTENCIA DE DESPESAS
**********************************
FUNCTION ver_desp(mcod_des,li,ci)
*********************************
LOCAL msele,morde
IF EMPTY(mcod_des); RETURN .T.;END
msele := SELE()
morde := INDEXORD()
mnome_ven = SPACE(30)
WHILE .T.
        **************
        SELE('desp');ORDSETFOCUS(1)
        GO TOP
        **************
        SEEK STRZERO(mcod_des,3)
        IF .NOT. FOUND()
                atencao('Despesa nao Cadastrada !!!')
                mcod_des = 0
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ELSE
                IF li = NIL
                        mdescri1 = desc1
                        mdescri2 = desc2
                        SELE(msele);ORDSETFOCUS(morde)
                        RETURN .T.
                ELSE
                        mdescri1 = desc1
                        mdescri2 = desc2
                        setcor(3)
                        DEVPOS(li,ci);DEVOUT(mdescri1)
                        DEVPOS(li+1,ci);DEVOUT(mdescri2)
                        setcor(1)
                        SELE(msele);ORDSETFOCUS(morde)
                        RETURN .T.
                ENDIF
        ENDIF
ENDDO
********************************** f i m **************************************
**********************
* VERIFICA SENHAS
**********************
FUNCTION senhaS
***************
LOCAL mcont,msenha

PUBLIC senha_acess,nivel_acess,cod_operado

mcont:=0
*-----------------------------------------------------
CLOSE ALL
IF ! abriarq('insopera','sen');RETURN NIL;ENDIF
*-----------------------------------------------------
WHILE .T.
        *************
        SELE('sen');ORDSETFOCUS(1)
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
FUNCTION alt_senhaS
*******************
LOCAL mcont,msenha,lci,cci,lba,cba,tela,msele,morde,mmen,mcor

mcont:=0
lci := 10
cci := 20
lba := 14
cba := 60
mmen := SAVESCREEN(24,00,24,79)
tela := SAVESCREEN(00,00,24,79)
mcor := SETCOLOR()
msele := SELE()
morde := INDEXORD()
*-----------------------------------------------------
IF ! abriarq('insopera','sen');RETURN NIL;ENDIF
*-----------------------------------------------------
WHILE .T.
        *************
        SELE('sen');ORDSETFOCUS(1)
        GO TOP
        *************

        SEEK CRIPTO(senha_acess)

        IF FOUND()
                IF BLOQREG()
                        sen-> sult_ent := mdata_sis
                        sen-> shora_fim := TIME()
                        COMMIT
                        UNLOCK
                        setcor(4)
                        DEVPOS(04,67);DEVOUT('Operador: '+cod_operado)
                        setcor(1)
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        ENDIF

        WHILE mcont <= 3
                setcor(4)
                botao(lci,cci,lba,cba)
                botao(lci+1,cci+1,lba-1,cba-1)
                limpa(lci+2,cci+2,lci+2,cba-2)
                DEVPOS(lci+2,cci+2);DEVOUT('Digite a Senha de Acesso:')
                msenha = ''
                pegasenha(@msenha,lci+2,COL()+1,setcor(3))
                setcor(1)
                IF msenha = 'NAO'
                        EXIT
                ENDIF
                mcont ++
                GO TOP

                SEEK CRIPTO(msenha)

                IF FOUND()
                        IF BLOQREG()
                                sen-> sult_ent := mdata_sis
                                sen-> shora_ini := TIME()
                                nivel_acess := snivel
                                cod_operado := scod_op
                                senha_acess := msenha
                                COMMIT
                                UNLOCK
                                setcor(4)
                                DEVPOS(04,67);DEVOUT('Operador: '+cod_operado)
                                setcor(1)
                                RESTSCREEN(00,00,24,79,tela)
                                RESTSCREEN(24,00,24,79,mmen)
                                SETCOLOR(mcor)
*                               CLOSE sen
                                SELE(msele);ORDSETFOCUS(morde)
                                RETURN .T.
                        ELSE
                                atencao('Nao foi Possivel Acessar o Arquivo')
                                LOOP
                        ENDIF
                ELSE
                        limpa(lci+2,cci+2,lci+2,cba-2)
                        DEVPOS(lci+2,cci+2);DEVOUT('Senha Incorreta Tente Novamente')
                        TONE(100,6)
                        TONE(1600,6)
                        INKEY(2)
                        IF mcont = 3
                                EXIT
                        ENDIF
                        LOOP
                ENDIF

        ENDDO

        SEEK CRIPTO(senha_acess)

        IF FOUND()
                IF BLOQREG()
                        sen-> sult_ent := mdata_sis
                        sen-> shora_ini := TIME()
                        COMMIT
                        UNLOCK
                        setcor(4)
                        DEVPOS(04,67);DEVOUT('Operador: '+cod_operado)
                        setcor(1)
                        RESTSCREEN(00,00,24,79,tela)
                        RESTSCREEN(24,00,24,79,mmen)
                        SETCOLOR(mcor)
*                       CLOSE sen
                        SELE(msele);ORDSETFOCUS(morde)
                        RETURN .T.
                ELSE
                        atencao('Nao foi Possivel Acessar o Arquivo')
                        LOOP
                ENDIF
        ENDIF

ENDDO
********************************** f i m **************************************
*** SENHA1.PRG:  Menu de Operadores
*********************************************
FUNCTION senha1S
****************
LOCAL tela,tela1,mcod_ven,desc,lci,cci,lba,cba,li,ci,lb,cb,pode,point

lci := 07
cci := 19
lba := 18
cba := 76

li := 20
ci := 19
lb := 22
cb := 76

tela := SAVESCREEN(lci,cci,lba,cba)

tela1 := SAVESCREEN(li,ci,lb,cb)
*-----------------------------------------------------
CLOSE ALL
IF ! abriarq('insopera','sen');RETURN NIL;ENDIF
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
SELE('sen');ORDSETFOCUS(2)
**************

GO TOP

pode=.T.

WHILE .T.
        mensagem("<I>nclus?o  <A>ltera??o  <E>xclus?o  < ou > Consulta  <ESC> Retorna" )
        point=RECNO()
        FOR f=1 TO 9
                IF ! EOF() .AND. scod_op <> '999'
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
                        senha2S()
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
                        senha3S()
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
                        senha4S()
                        GO TOP
                        SKIP
                CASE LASTKEY()=27
                        RESTSCREEN(li,ci,lb,cb,tela1)
                        RESTSCREEN(lci,cci,lba,cba,tela)
                        CLOSE ALL
                        RETURN NIL
        ENDCASE
ENDDO
************************ F I M ************************************************************************
*************************
* MENU INCLUSAO DE SENHAS
*************************

FUNCTION senha2S
***************

LOCAL opcao,mcod_vend,mnome,vsenha1,vsenha,mdata_cad,vnivel,mcomissao

PRIVATE lci,cci,lba,cba

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,24,79)

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
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF

        SET INTEN ON
        ***********
        SELE('sen');ORDSETFOCUS(2)
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
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        ***********
        SELE('sen');ORDSETFOCUS(1)
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
                        opcao := op_simnao('S','Confirma a Inclusao do Operador [S/n]:')
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

FUNCTION senha3S
***************

LOCAL opcao,mcod_vend,mnome,vsenha1,vsenha,mdata_cad,vnivel,mcomissao

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,24,79)

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
        SELE('sen');ORDSETFOCUS(2)
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
                RESTSCREEN(00,00,24,79,tela)
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
        opcao := op_simnao('S','Deseja alterar a senha [s/N]:')
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
        opcao := op_simnao('S','Confirma a Alteracao [S/n]:')
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

FUNCTION senha4S
***************

LOCAL opcao,mcod_vend,vsenha

lci:=10
cci:=23
lba:=17
cba:=72
tela:=SAVESCREEN(00,00,24,79)

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
        SELE('sen');ORDSETFOCUS(2)
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
                RESTSCREEN(00,00,24,79,tela)
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
        opcao := op_simnao('S','Confirma a Exclusao [S/n]:')
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
********************************* F I M **************************
*******************************************
** LIMITE DE DATA P/FUNCIONAMENTO DO SISTEMA
*******************************************

FUNCTION limite_sys

LOCAL mdata,mdata_aux,lci,cci,lba,cba,mtela,msenha

lci := 23
cci := 71
lba := 23
cba := 79
msenha := ''
pegasenha(@msenha,25,COL()+1,setcor(3))
setcor(1)
IF msenha = 'NAO'
        RETURN NIL
        RESTSCREEN(24,00,24,79,mlinha)
ENDIF
IF msenha = 'SYSDAT'
        mtela := SAVESCREEN(lci,cci,lba,cba)
        USE sacsetup ALIAS set SHARED NEW
        IF ! EMPTY(SUBSTR(set->sysdatlm,1,6))
                mdata = CTOD(DCRIPTO(SUBSTR(set->sysdatlm,1,2))+'/'+DCRIPTO(SUBSTR(set->sysdatlm,3,2))+'/'+DCRIPTO(SUBSTR(set->sysdatlm,5,2)))
        ELSE
                mdata := CTOD('  /  /  ')
        ENDIF
        @ lci,cci GET mdata PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(lci,cci,lba,cba,mtela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        IF ! EMPTY(mdata)
                mdata_aux := CRIPTO(SUBSTR(DTOC(mdata),1,2))+CRIPTO(SUBSTR(DTOC(mdata),4,2))+CRIPTO(SUBSTR(DTOC(mdata),7,2)) + SUBSTR(set->sysdatlm,7,6)
        ELSE
                mdata_aux := SPACE(6) + SUBSTR(set->sysdatlm,7,6)
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o registro')
                RETURN NIL
        ENDIF
        set->sysdatlm := mdata_aux
        RESTSCREEN(lci,cci,lba,cba,mtela)
        CLOSE ALL
        RETURN NIL
ELSEIF msenha = 'NAO'
        RETURN NIL
        RESTSCREEN(24,00,24,79,mlinha)
ENDIF
RETURN NIL
********************************* F I M **************************
** LIMITE DE DATA P/FUNCIONAMENTO DO SISTEMA
*******************************************
FUNCTION limite_erro
LOCAL mdata,mdata_aux,lci,cci,lba,cba,mtela,msenha
lci := 23
cci := 71
lba := 23
cba := 79
msenha := ''
pegasenha(@msenha,25,COL()+1,setcor(3))
setcor(1)
IF msenha = 'NAO'
        RETURN NIL
        RESTSCREEN(24,00,24,79,mlinha)
ENDIF
IF msenha = 'SYSDAT'
        mtela := SAVESCREEN(lci,cci,lba,cba)
        USE sacsetup ALIAS set SHARED NEW
        IF ! EMPTY(SUBSTR(set->sysdatlm,7,6))
                mdata = CTOD(DCRIPTO(SUBSTR(set->sysdatlm,7,2))+'/'+DCRIPTO(SUBSTR(set->sysdatlm,9,2))+'/'+DCRIPTO(SUBSTR(set->sysdatlm,11,2)))
        ELSE
                mdata := CTOD('  /  /  ')
        ENDIF
        @ lci,cci GET mdata PICT '99/99/99'
        READ
        IF LASTKEY() = 27
                RESTSCREEN(lci,cci,lba,cba,mtela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        IF ! EMPTY(mdata)
                mdata_aux :=SUBSTR(set->sysdatlm,1,6) + CRIPTO(SUBSTR(DTOC(mdata),1,2))+CRIPTO(SUBSTR(DTOC(mdata),4,2))+CRIPTO(SUBSTR(DTOC(mdata),7,2))
        ELSE
                mdata_aux := SUBSTR(set->sysdatlm,1,6) + SPACE(6)
        ENDIF
        IF ! BLOQREG()
                atencao('Nao foi possivel acessar o registro')
                RETURN NIL
        ENDIF
        set->sysdatlm := mdata_aux
        RESTSCREEN(lci,cci,lba,cba,mtela)
        CLOSE ALL
        RETURN NIL
ELSEIF msenha = 'NAO'
        RETURN NIL
        RESTSCREEN(24,00,24,79,mlinha)
ENDIF
RETURN NIL

*********************** F I M ************************************************
* FUNCAO P/CONSULTAR FORNECEDOR
********************************
FUNCTION f6_forn(mop)
*****************
LOCAL mprg:='F6_FORN',;
      f6tela,f6tela1,f6lci,f6cci,f6lba,f6cba,f6msele,f6morde,f6men,;
      oconsprod,ocolprod[5],f6i,f6nkey,f6opcao,;
      mcod_f,mrazao,mfantasia,mcidade,mendereco,mcpfcnpj,mtelefone,;
      ccomm,cons_m,m_prod,m_poS,point,i,minsc

MEMVAR mcod_forn
IF ! ver_nivel(mprg,'CADASTRO DE FORNECEDOR','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
f6lci := f6cci := 0
f6lba := 33
f6cba := 70
f6msele := SELE()
f6morde := INDEXORD()
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
*************
SELE('forn');ORDSETFOCUS(2)
GO TOP
*************
op_tela(00,20,40,90,m_set[1,23]+SPACE(50)+' FORNECEDOR / DESPESAS'+'  -  Quantidades: '+TRANSFORM(LASTREC(),'999,999'),,'*')
exibi_prg(mprg)
oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
ocolprod[3] := TBCOLUMNNEW('Tipo',{||forn->tipo})	//ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
ocolprod[4] := TBCOLUMNNEW('UF',{||forn->uf})
ocolprod[5] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
f6i:=0
FOR f6i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f6i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f6nkey := 0
        WHILE f6nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                botao(f6lba+2,f6cci+1,f6lba+5,f6cba,,' Detalhe ')
                setcor(3)
                DEVPOS(f6lba+2,f6cci+1);DEVOUT('End.:')
                DEVPOS(f6lba+3,f6cci+1);DEVOUT('Cidade:')
                DEVPOS(f6lba+3,f6cci+30);DEVOUT('UF:')
                DEVPOS(f6lba+3,f6cci+37);DEVOUT('Tel.:')
                setcor(1)
                DEVPOS(f6lba+2,f6cci+6);DEVOUT(forn->endereco+' - '+forn->bairro)
                DEVPOS(f6lba+3,f6cci+8);DEVOUT(forn->cidade)
                DEVPOS(f6lba+3,f6cci+33);DEVOUT(forn->uf)
                DEVPOS(f6lba+3,f6cci+42);DEVOUT(forn->tel1)
                f6nkey := INKEY(0)
        END
        IF f6nkey == K_ESC
                EXIT
        ELSEIF f6nkey = 73 .OR. f6nkey = 105     // I
                sac140()
        ELSEIF f6nkey = 112 .OR. f6nkey = 80
                op_tela(00,00,33,100,m_set[1,23]+SPACE(40)+' CONSULTA DE FORNECEDOR ')
                CLEAR GETS
                WHILE .T.
                        mcod_f       := 0
                        mrazao          := mfantasia := mcidade := mendereco := SPACE(40)
                        mcpfcnpj        := mtelefone := minsc := SPACE(14)
                        limpa(0,0,31,99)
                        mensagem('Digite a descricao ou *descricao p/Pesquisa qualquer lugar da descricao')
                        setcor(1)
                        DEVPOS(00,01);DEVOUT('Cod.Fornecedor:')
                        DEVPOS(01,01);DEVOUT('Razao Social..:')
                        DEVPOS(02,01);DEVOUT('Nome Fantasia.:')
                        DEVPOS(03,01);DEVOUT('Cidade........:')
                        DEVPOS(04,01);DEVOUT('Endereco......:')
                        DEVPOS(05,01);DEVOUT('CPF/CNPJ......:')
                        DEVPOS(05,32);DEVOUT('Inscricao Est.:')
                        DEVPOS(06,01);DEVOUT('Telefone......:')
                        setcor(3)
                        @ 07,00 TO 07,100
                        DEVPOS(08,01);DEVOUT('Razao Social                             Fantasia                                  Codigo  Cidade                 CPF/CNPJ')
                        @ 09,00 TO 09,100
                        @ 32,00 TO 32,100
                        DEVPOS(33,01);DEVOUT('Total Fornecedor.:')
                        DEVPOS(33,27);DEVOUT('Tempo da Pesquisa:')
                        setcor(1)
                        @ 00,17 GET mcod_f PICT '9999'
                        @ 01,17 GET mrazao PICT '@!' WHEN EMPTY(mcod_f)
                        @ 02,17 GET mfantasia PICT '@!' WHEN EMPTY(mcod_f)
                        @ 03,17 GET mcidade PICT '@!' WHEN EMPTY(mcod_f)
                        @ 04,17 GET mendereco PICT '@!' WHEN EMPTY(mcod_f)
                        @ 05,17 GET mcpfcnpj PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco)
                        @ 05,48 GET minsc PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco)  .AND. men_get(0,0,'Digite a INSCRICAO sem pontos e Hifens') VALID  lim_get()
                        @ 06,17 GET mtelefone PICT '@!' WHEN EMPTY(mcod_f) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(minsc)
                        READ
                        IF LASTKEY() = 27
                                CLEAR GETS
                                EXIT
                        ENDIF
                        IF EMPTY(mcod_f) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(mtelefone) .AND. EMPTY(minsc)
                                LOOP
                        ENDIF
                        mhoras := TIME()
                        cComm  := "SELECT * FROM sacforn WHERE cod_forn IS NOT NULL"
                        IF ! EMPTY(mcod_f)
                                ccomm := ccomm + " AND cod_forn = "+sr_cdbvalue(STRZERO(mcod_f,4))
                        ELSE
                                IF ! EMPTY(mcpfcnpj)
                                        IF LEN(ALLTRIM(mcpfcnpj)) < 14
                                                ccomm := ccomm + " AND cpf = "+sr_cdbvalue(ALLTRIM(mcpfcnpj))
                                        ELSE
                                                ccomm := ccomm + " AND cgc = "+sr_cdbvalue(ALLTRIM(mcpfcnpj))
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(minsc)
                                        minsc := STRTRAN(minsc,'.','')
                                        minsc := STRTRAN(minsc,'-','')
                                        minsc := STRTRAN(minsc,'/','')
                                        ccomm := ccomm + " AND insc LIKE "+sr_cdbvalue(ALLTRIM(minsc)+'%')
                                ENDIF
                                IF ! EMPTY(mtelefone)
                                        IF SUBSTR(mtelefone,1,1) = '*'
                                        	ccomm := ccomm + " AND (tel1 LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mtelefone,2))+'%')+" OR tel2 LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mtelefone,2))+'%')+")"
                                        ELSE
                                        	ccomm := ccomm + " AND (tel1 LIKE "+sr_cdbvalue(ALLTRIM(mtelefone)+'%')+" OR tel2 LIKE "+sr_cdbvalue(ALLTRIM(mtelefone)+'%')+")"
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mrazao)
                                        IF SUBSTR(mrazao,1,1) = '*'
                                                ccomm := ccomm + " AND razao LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mrazao,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND razao LIKE "+sr_cdbvalue(ALLTRIM(mrazao)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mfantasia)
                                        IF SUBSTR(mfantasia,1,1) = '*'
                                                ccomm := ccomm + " AND fantasia LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mfantasia,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND fantasia LIKE "+sr_cdbvalue(ALLTRIM(mfantasia)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mcidade)
                                        IF SUBSTR(mcidade,1,1) = '*'
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mcidade,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue(ALLTRIM(mcidade)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mendereco)
                                        IF SUBSTR(mendereco,1,1) = '*'
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mendereco,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue(ALLTRIM(mendereco)+'%')
                                        ENDIF
                                ENDIF
                        ENDIF
                        ccomm := ccomm + " ORDER BY razao"
                        cons_m := {}
                        sr_getconnection():exec(ccomm,,.t.,@cons_m)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_m) = 0
                                atencao('Nao foi encontrado nenhum FORNECEDOR ...')
                                LOOP
                        ENDIF
                        m_prod := {}
                        m_pos  := {}
                        point  := i := 0
                        DEVPOS(33,20);DEVOUT(STRZERO(LEN(cons_m),5))
                        DEVPOS(33,46);DEVOUT(ELAPTIME(mhoras,TIME()))
                        FOR i = 1 TO LEN(cons_m)
                                AADD(m_prod,' '+cons_m[i,2];
                                           +' '+cons_m[i,35];
                                           +'  '+cons_m[i,1];
                                           +'  '+cons_m[i,8];
                                           +'  '+IF(! EMPTY(cons_m[i,16]),cons_m[i,16],cons_m[i,18]))
                                        AADD(m_pos,cons_m[i,36])
                        NEXT
                        point := ACHOICE(10,0,30,100,m_prod,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        *************
                                        SELE('forn');ORDSETFOCUS(2)
                                        *************
                                        GO m_pos[point]
                                        EXIT
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
                *************
                SELE('forn');ORDSETFOCUS(2)
                *************
                oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                ocolprod[3] := TBCOLUMNNEW('Tipo',{||forn->tipo})	//ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                ocolprod[4] := TBCOLUMNNEW('UF',{||forn->uf})
                ocolprod[5] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                f6i:=0
                FOR f6i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f6i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()

        ELSEIF f6nkey == K_ENTER
                mcod_forn := VAL(forn->cod_forn)
                IF mop = '*'
                        f6opcao := mensagem1('Deseja <A>lterar <E>xcluir:','A','A,E')
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF f6opcao = 'A'
                                sac141()
                        ELSEIF f6opcao = 'E'
                                sac142()
                        ENDIF
                ELSE
                        EXIT
                ENDIF
                *************
                SELE('forn');ORDSETFOCUS(2)
                *************
                GO TOP
                oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                ocolprod[3] := TBCOLUMNNEW('Tipo',{||forn->tipo})	//ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                ocolprod[4] := TBCOLUMNNEW('UF',{||forn->uf})
                ocolprod[5] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                f6i:=0
                FOR f6i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f6i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f6nkey,'forn')
                        *************
                        SELE('forn');ORDSETFOCUS(2)
                        *************
                        oconsprod := TBROWSEDB(f6lci,f6cci,f6lba-1,f6cba,'forn')
                        ocolprod[1] := TBCOLUMNNEW('Fornecedor',{||forn->razao})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||forn->cod_forn})
                        ocolprod[3] := TBCOLUMNNEW('Tipo',{||forn->tipo})	//ocolprod[4] := TBCOLUMNNEW('Descricao da Despesa',{||verdesp(forn->tipo,,,,1)})
                        ocolprod[4] := TBCOLUMNNEW('UF',{||forn->uf})
                        ocolprod[5] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(forn->cgc),TRANSFORM(forn->cgc,'@@R 99.999.999/9999-99'),TRANSFORM(forn->cpf,'@@R 999.999.999-99'))})
                        f6i:=0
                        FOR f6i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f6i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f6msele);IF(f6morde>0,ORDSETFOCUS(f6morde),)
RELEASE f6tela,f6tela1,f6lci,f6cci,f6lba,f6cba,f6msele,f6morde,f6men,oconsprod,ocolprod[7],i,f6nkey,f6opcao
wvw_lclosewindow()
IF f6nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcod_forn
ENDIF
RETURN NIL
******************************* F I M ********************************
FUNCTION VerDesp(mcoddesp,l,c,p,retu)
********************
LOCAL msele,morde,point
msele := SELE()
morde := INDEXORD()
point := RECNO()
IF EMPTY(mcoddesp) .AND. p <> NIL
        RETURN .T.
ENDIF
*****************
SELE('cdesp');ORDSETFOCUS(1)
GO TOP
*****************
SEEK mcoddesp
IF ! FOUND()
        IF p = NIL
                atencao('Codigo de CONTA DE DESPESAS nao encontrado')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
ENDIF
mtipo_conta := cdesp->codigo
IF l <> NIL
        setcor(3)
        DEVPOS(l,c);DEVOUT(cdesp->desc1)
        setcor(1)
ENDIF
SELE(msele);ORDSETFOCUS(morde)
IF retu = NIL
        RETURN .T.
ELSE
        RETURN cdesp->desc1
ENDIF
***************************** F I M ****************************************
* PESQUISA O CGC SE EXISTE
******************************
FUNCTION pesq_cgc(ncgc,narq,condicao)
********************
LOCAL men,msele,morde,opcao := 'S',mpoint

men := SAVESCREEN(24,00,24,79)
msele := SELE()
morde := INDEXORD()
WHILE .T.
        IF EMPTY(ncgc)
                RETURN .T.
        ENDIF
        IF ! VCGC(ncgc)
                IF aut_sen('O CGC nao confere senha de autorizacao:','LIB_AMB')
                        IF LASTKEY() = 27
                                RETURN .F.
                        ENDIF
                        RETURN .T.
                ENDIF
                RETURN .F.
        ENDIF
        mpoint := RECNO()
        ORDSETFOCUS(3)
        *****************

        SEEK ncgc

        IF condicao <> NIL
                IF FOUND()
                        atencao('C.G.C ja cadastrado no Codigo:'+razao)
                        ORDSETFOCUS(morde)
                        GO mpoint
                        RETURN .F.
                ENDIF
        ENDIF
        ORDSETFOCUS(morde)
        GO mpoint
        RETURN .T.
ENDDO
********************************** F I M ***********************************
FUNCTION mensagem1(men,mop,mcond)
**********************
LOCAL linhas,i,lin,matencao,li:=0,ci:=0,la,ca,mpos,cci:=0
men := RTRIM(men)
IF LEN(men) > 60
        mpos := 60
        cci := 10
ELSEIF LEN(men) < LEN('Opcao ['+mcond+']:')
        mpos := LEN('Opcao ['+mcond+']:')
        cci := (80-LEN('Opcao ['+mcond+']:')) / 2
ELSE
        mpos := LEN(men)
        cci := (80-LEN(men)) / 2
ENDIF
linhas := MLCOUNT(men,mpos)
setcor(1)
op_tela(5,cci,05+linhas+2,cci+1+mpos+1)
FOR i = 1 TO  linhas
        LIN := MEMOLINE(men,mpos,i,,)
        DEVPOS(li+i,ci+1);DEVOUT(PADC(RTRIM(LIN),mpos))
NEXT
*setcor(1)
IF mop = NIL
        INKEY(0)
        setcor(1)
        fecha_tela()
        RETURN .T.
ELSE
        setcor(1)
        DEVPOS(li+i,ci+1);DEVOUT('Opcao ['+mcond+']:')
        @ li+i,COL()+1 GET mop PICT '@!' VALID mop $ mcond
        READ
        IF LASTKEY() = 27
                fecha_tela()
                RETURN mop
        ELSE
                fecha_tela()
                RETURN mop
        ENDIF
ENDIF
setcor(1)
fecha_tela()
RETURN .F.
************************** F I M ******************************
FUNCTION v_fornece(vcod,li,ci,p)
***********************
LOCAL msele,morde
msele := SELE()
morde := INDEXORD()
IF EMPTY(vcod)
        mfornece := space(40)
        RETURN .T.
ENDIF

*************
SELE('forn');ORDSETFOCUS(1)
GO TOP
*************

IF ! forn->(DBSEEK(STRZERO(vcod,4)))
        IF p = NIL
                atencao('Codigo Fornecedor nao Existe no Arquivo !!!')
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ELSE
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
ELSE
        IF li = NIL .AND. ci = NIL
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
        setcor(3)
        DEVPOS(li,ci);DEVOUT(forn->razao)
        setcor(1)
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ENDIF
RETURN .T.
******************************** f i m **********************************
***************************** F I M ****************************************
***************
FUNCTION vencim(mv,t,dup,memi)
***************

IF memi = NIL
        memi := memissao
ENDIF

IF t = NIL
        IF mv=ctod("  /  /  ")
                atencao('Data de Vencimento deve ser preenchida! [??] Continua.')
                RETURN .F.
        ENDIF
ENDIF
IF dup = NIL .OR. ! EMPTY(dup)
        IF DTOS(mv)<DTOS(memi)
*       IF DTOS(mv)<DTOS(memissao)
                atencao('Data de Vencimento menor que Data de Emissao! [??] Continua.')
                RETURN .F.
        ENDIF
ENDIF
IF dow(mv)=7 .OR. dow(mv)=1
        atencao('Data de Vencimento cai no fim-de-semana!.')
        ?? chr(7)
ENDIF
RETURN .T.

************************** F I M ***************************************

***************************************************************************
* Recebe um arquivo texto, cria um dbf, grava  neste arquivo e mostra na
* tela, quando sair os arquivos temporarios criados serao apagados.
***************************************************************************
FUNCTION lertexto(arquivo)

MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
RETURN NIL
/*
*Para arquivo
*#INCLUDE "INKEY.CH"
#INCLUDE "SETCURS.CH"
LOCAL local1:= {}
LOCAL acamp:=[15]
LOCAL cor_ant := setcolor()    // Salva cor antiga
LOCAL dbf_veio := select()      // Salva arquivo que estava selecionado
//LOCAL tela_con := SAVESCREEN(00,00,24,79)
op_tela(00,00,32,100,'TELA DE CONSULTA')
 aadd(Local1, {"TELA01", "C", 13, 0})
 aadd(Local1, {"TELA02", "C", 13, 0})
 aadd(Local1, {"TELA03", "C", 13, 0})
 aadd(Local1, {"TELA04", "C", 13, 0})
 aadd(Local1, {"TELA05", "C", 13, 0})
 aadd(Local1, {"TELA06", "C", 13, 0})
 aadd(Local1, {"TELA07", "C", 13, 0})
 aadd(Local1, {"TELA08", "C", 13, 0})
 aadd(Local1, {"TELA09", "C", 13, 0})
 aadd(Local1, {"TELA10", "C", 13, 0})
 aadd(Local1, {"TELA11", "C", 13, 0})
 aadd(Local1, {"TELA12", "C", 13, 0})
 aadd(Local1, {"TELA13", "C", 13, 0})
 aadd(Local1, {"TELA14", "C", 13, 0})
 aadd(Local1, {"TELA15", "C", 13, 0})
 dbcreate("tela", Local1)
 sele 99  // ou comando de rede 
 use tela alias tela
*append from &(ALLTRIM(arquivo)) sdf   //nomecompl_arq sdf
 append from &arquivo sdf   //nomecompl_arq sdf
 goto top
 set cursor off
*botao(00,00,24,79)
 @ 00,00 to 31,99 colo 'w+/n' //BOX CHR(219)
 //               /-------------> Cor do TBrowse
 //              /    /---------> Cor da barra em destaque
 //             /    /      /---> Cor da barra luminosa
 set color to "w+/N,n/w,,,g+/b"
*set color to "w+/b,n/w,,,g+/b"

//oTab := TBrowseDB(02,01,24,78)
oTab := TBrowseDB(00,00,31,99)
oTab:colsep := ""  // CHR(219)+" "
OTAB:HEADSEP:= '?' // CHR(205)+CHR(203)+CHR(205)
OTAB:COLSEP := ''  // CHR(032)+CHR(186)+CHR(032)
OTAB:FOOTSEP:= '?' // CHR(205)+CHR(202)+CHR(205)

for i = 1 to fcount()
 OTAB:ADDCOLUMN(TBCOLUMNNEW("", FIELDWBLOCK(FIELDNAME(i),SELE() )))
next

*@ 01,01 say 'Mensagem: Tecle <C> para congelar as colunas que estao ? direita do cursor     ' colo 'w-/b'
@ 01,01 say 'Mensagem: Tecle <C> para congelar as colunas que estao ? direita do cursor' colo 'w-/n'
lin_br=30
Do while .T.
   nRow := ROW()
   nCol := COL()

   do while !oTab:Stabilize() ; enddo

   oTAB:hilite()

   setpos( nRow, nCol )
   nKey := inkey()

   IF oTAB:stable
      setpos( nRow, nCol )
      nKey := Inkey(0)
   endif
   if nKey == K_F1
   elseif nKey == K_F2
   elseif nKey == K_F3
   elseif nKey == K_F4
   elseif nKey == K_F5
   elseif nKey == K_F6
   elseif nKey == K_F7
   elseif nKey == K_UP         ; oTab:UP()
   elseif nKey == K_DOWN       ; oTab:DOWN()
   elseif nKey == K_LEFT       ; oTab:LEFT()
   elseif nKey == K_CTRL_LEFT  ; oTab:PANLEFT()
   elseif nKey == K_RIGHT      ; oTab:RIGHT()
   elseif nKey == K_CTRL_RIGHT ; oTab:PANRIGHT()
   elseif nKey == K_PGUP       ; oTab:PAGEUP()
   elseif nKey == K_CTRL_PGUP  ; oTab:GOTOP()
   elseif nKey == K_PGDN       ; oTab:PAGEDOWN()
   elseif nKey == K_CTRL_PGDN  ; oTab:GOBOTTOM()
   elseif nKey == K_HOME       ; oTab:HOME()
   elseif nKey == K_CTRL_HOME  ; oTab:PANHOME()
   elseif nKey == K_END        ; oTab:END()
   elseif nKey == K_CTRL_END   ; oTab:PANEND()
   elseif nKey == K_ESC        ; EXIT
   elseif nkey == 99 .or. nkey==67
    if otab:freeze=0
     otab:freeze := otab:colpos -1
     lin_br=21
    else
     otab:freeze = 0    
     lin_br= 30
     otab:panhome()
     otab:refreshall()
    endif
   endif

   oTab:colorRect({1,1,lin_br,oTab:freeze},{2,5})

  enddo
 SET CURSOR ON
   arq=dbf()
   use
   arq_dbf=alltrim(arq)+'.DBF'
   erase &arq_dbf   // apaga o arquivo dbf que mostra na tela a impressao.
**********  erase &arquivo   // apaga o arquivo prn que mostra na tela a impressao.
   sele &dbf_veio   // seleciona novamente o arquivo que estava aberto
   SETCOR(1)
   wvw_lclosewindow()
   //RESTSCREEN(00,00,24,79,tela_con)
*  set color to '&cor_ant.'
*/
***************************** F I M ****************************************
******************************** f i m **********************************
***********************
FUNCTION ver_cl(vcod,li,ci,p)
***********************

LOCAL msele,morde

msele := SELE()
morde := INDEXORD()

IF EMPTY(vcod)
        mcliente := SPACE(40)
        RETURN .T.
ENDIF

*************
SELE('cli');ORDSETFOCUS(2)
GO TOP
*************

SEEK STRZERO(vcod,5)

IF ! FOUND()
        IF p = NIL
                atencao('Codigo Cliente nao Existe no Arquivo !!!')
                vcod := 0
                mcliente := SPACE(40)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ELSE
                mcliente := SPACE(40)
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .F.
        ENDIF
ELSE
        IF li = NIL .AND. ci = NIL
                mcliente := nome
                SELE(msele);ORDSETFOCUS(morde)
                RETURN .T.
        ENDIF
        mcliente := nome
        setcor(3)
        DEVPOS(li,ci);DEVOUT(nome)
        setcor(1)
        SELE(msele);ORDSETFOCUS(morde)
        RETURN .T.
ENDIF
RETURN .T.
******************************** f i m **********************************
***************************************
* FUNCAO PARA RENOMEAR ARQUIVOS
***************************************
FUNCTION ren_arq(marq1,marq2,mali)
WHILE LASTKEY() <> 27
        USE (marq1) ALIAS (mali) EXCLUSIVE NEW
        IF ! NETERR()
                (mali)->(DBCLOSEAREA())
                rename (marq1) TO (marq2)
        ELSE
                atencao('** Nao foi possivel RENOMEAR o ARQUIVO: '+marq1+' ele pode estar sendo USADO por outro TERMINAL  -  <<< Pressione a Tecla [ESC] p/ Abandonar >>> **',2)
                LOOP
        ENDIF
        RETURN .T.
ENDDO
WHILE LASTKEY() <> 13
        mensagem('Tecle <ENTER> p/Continuar !!!')
        INKEY(0)
ENDDO
RETURN .F.
******************************* F I M ***********************************
*********************************** F I M ************************************
**********************************
* TESTE DE EXISTENCIA DE VENDEDOR
**********************************

FUNCTION ven(mcod_ven,li,ci,p)

LOCAL msele,morde
MEMVAR mnome_vend,mcom_ap,mcom_ven

IF EMPTY(mcod_ven); RETURN .T.;END

msele := SELE()
morde := INDEXORD()
mnome_vend = SPACE(30)

IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF

WHILE .T.
        **************
        SELECT('sen');ORDSETFOCUS(2)
        GO TOP
        **************

        IF ! sen->(DBSEEK(STRZERO(mcod_ven,3)))
                IF p = NIL
                        atencao('Operador ou MEDIDO nao Cadastrado !!!')
                ENDIF
                mcod_ven = 0
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .F.
        ELSE
                IF li = NIL
                        mnome_vend = sen->snome
                        mcom_ven := sen->scomissao
                        mcom_ap := sen->scom_praz
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .T.
                ELSE
                        mnome_vend = sen->snome
                        mcom_ven := sen->scomissao
                        mcom_ap := sen->scom_praz
                        setcor(3)
                        DEVPOS(li,ci);DEVOUT(mnome_vend)
                        setcor(1)
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .T.
                ENDIF
        ENDIF
ENDDO
RETURN NIL
******************************* f i m *********************************************
* FUNCAO P/CONSULTAR CLIENTES
********************************
#include "inkey.ch"              // constantes de codigos das teclas
FUNCTION f7_cli(mop)
*****************
LOCAL mprg:='F7_CLI',f7tela,f7tela1,f7lci,f7cci,f7lba,f7cba,f7msele,f7morde,f7men,;
      oconsprod,ocolprod[7],f7i,f7nkey,f7opcao,mcodcli,mponto,mpesquisa:=SPACE(50),;
      mmens:='',c_cli:={},m_cli:={},mcidade:=SPACE(20),point:=0,mcpfcnpj,mtelefone,;
      mativos := ' '

PRIVATE mprazo:=0,mmod,mfator,mrsoc,mvalor,mdata,mconsulta,mrecib,mtp_consulta:=''

MEMVAR mcod_cli

f7lci := 00
f7cci := 00
f7lba := 39
f7cba := 112

IF ! ver_nivel(mprg,'FUNCAO P/CONSULTAR CLIENTES','12',nivel_acess)
        RETURN NIL
ENDIF
f7msele := SELE()
f7morde := INDEXORD()
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
//IF ! abriarq('smedmov','contr');RETURN NIL;ENDIF
/*
IF ! abriarq('smedtab','tab');RETURN NIL;ENDIF
IF ! abriarq('smeddro','dro');RETURN NIL;ENDIF
IF ! abriarq('smedrec','rec');RETURN NIL;ENDIF
IF ! abriarq('smedclin','clin');RETURN NIL;ENDIF
IF ! abriarq('smedrece','rece');RETURN NIL;ENDIF
IF ! abriarq('smedcomp','com');RETURN NIL;ENDIF
IF ! abriarq('smedpulm','pul');RETURN NIL;ENDIF
IF ! abriarq('smedradio','rad');RETURN NIL;ENDIF
IF ! abriarq('smedhist','hist');RETURN NIL;ENDIF
IF ! abriarq('smedexam','exam');RETURN NIL;ENDIF
IF ! abriarq('smeddiag','diag');RETURN NIL;ENDIF
IF ! abriarq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! abriarq('smedcond','cond');RETURN NIL;ENDIF
IF ! AbriArq('saccfg','cfg');RETURN NIL;ENDIF
*/
cons_m := {}
sr_getconnection():exec("SELECT * FROM smedcli WHERE registro IS NOT NULL ORDER BY nome",,.t.,@cons_m)
sr_getconnection():exec('COMMIT',,.f.)
IF ! EMPTY(cons_m)
        mcodcli:=cons_m[LEN(cons_m),1]
ENDIF
***************************
SELE('cli');ORDSETFOCUS(1)
***************************
op_tela(00,00,50,112,' CLIENTES                 Ult.Cliente:'+mcodcli+'        Quantidades: '+TRANSFORM(LEN(cons_m),'999,999'),,1)
mcolor := "B/W*+ , W+/R+ , W*/B , R+/W+ , W*/W+ , RJ/W , W/B , R/N , B+*/W , RW*/W , N+*/W, BG+*/W, RG+*/W"
oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
oconsprod:colorspec := mcolor
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP  := CHR(179)
oconsprod:gotopblock({|| dbGoTop()})
oconsprod:gobottomblock({|| dbGoBottom()})
***brw:skipblock({|_1| MOV_PTR(_1)})
oconsprod:skipBlock:= {|nSkip| DbSkipper(nSkip) }

ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->nome})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||cli->registro})
ocolprod[3] := TBCOLUMNNEW('Dat.Nasc',{||DTOC(cli->datans)})
ocolprod[4] := TBCOLUMNNEW('Sexo',{||cli->sexo})
ocolprod[5] := TBCOLUMNNEW('Dat.Cad.',{||cli->data})
ocolprod[6] := TBCOLUMNNEW('CPF',{||cli->cpf})
ocolprod[7] := TBCOLUMNNEW('Responsavel',{||cli->resp})
f7i:=0
FOR f7i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f7i])
        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(! EMPTY(cli->DATA_AUTA),{6,3},{1,3})}")

NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
WHILE .T.
        exibi_prg('F7_CLI')
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f7nkey := 0
        WHILE f7nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                botao(f7lba+1,f7cci,f7lba+6,f7cba,,' Detalhe ',1)
                setcor(1)
                DEVPOS(f7lba+2,f7cci+1);DEVOUT('Data Cadastro:')
                DEVPOS(f7lba+2,f7cci+31);DEVOUT('Data Nasc:')
                DEVPOS(f7lba+2,f7cci+54);DEVOUT('Idade:')
                DEVPOS(f7lba+3,f7cci+1);DEVOUT('Convenio:')
                DEVPOS(f7lba+3,f7cci+30);DEVOUT('Responsavel:')
                DEVPOS(f7lba+4,f7cci+1);DEVOUT('Indicado:')
                DEVPOS(f7lba+4,f7cci+42);DEVOUT('Profissao:')
                DEVPOS(f7lba+5,f7cci+1);DEVOUT('Data Ultima Cons.:')
                DEVPOS(f7lba+5,f7cci+32);DEVOUT('Data Proxima....:')
                setcor(3)
                vcconv(cli->codconv,,,'*')
                DEVPOS(f7lba+2,f7cci+17);DEVOUT(DTOC(cli->data))
                DEVPOS(f7lba+2,f7cci+42);DEVOUT(DTOC(cli->datans))
                DEVPOS(f7lba+2,f7cci+61);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
                DEVPOS(f7lba+3,f7cci+10);DEVOUT(cli->codconv+'-'+LEFT(conv->rsocial,15))
                DEVPOS(f7lba+3,f7cci+42);DEVOUT(cli->resp)
                DEVPOS(f7lba+4,f7cci+10);DEVOUT(cli->indica)
                DEVPOS(f7lba+4,f7cci+52);DEVOUT(cli->profissao)
                DEVPOS(f7lba+5,f7cci+20);DEVOUT(DTOC(cli->datault))
                DEVPOS(f7lba+5,f7cci+50);DEVOUT(DTOC(cli->datault+conv->prazo))
                WVW_DrawLabel(,39,85,ALLTRIM(cfg->cam_banco)+'C'+cli->registro+'.jpg',,,,, 'terminal',13,4,,,,,)
                botao(40,80,48,97)
                IF FILE(ALLTRIM(cfg->cam_banco)+'C'+cli->registro+'.jpg')
                        WVW_DrawImage( ,40,80,48,97,ALLTRIM(cfg->cam_banco)+'C'+cli->registro+'.jpg',.T.,.F.)
                ELSE
                        WVW_DrawImage( ,40,80,48,97,ALLTRIM(cfg->cam_banco)+'C'+cli->registro+'.bmp',.T.,.F.)
                ENDIF
                WVW_DrawLabel(,49,85,'<ALT+F>p/Ampliar',,,,, 'terminal',13,4,,,,,)
                f7nkey := INKEY(0)
        ENDDO
        IF f7nkey == K_ESC
                EXIT
        ELSEIF f7nkey = 289
                smedalbum('C',cli->registro,cli->nome,'','')
                WVW_SetMousePos(,00,00)
                WVW_SetMouseMove(,.F.)
        ELSEIF f7nkey == K_ENTER
                mcod_cli := VAL(cli->registro)
                IF mop = 'C'
			//uso_cons()
                        smed214(cli->registro)
                        SELE('cli');ORDSETFOCUS(2)
                        EXIT
                ELSEIF mop = '*'
                        op_tela(25,10,27,50)
                        DEVPOS(01,00);DEVOUT('Deseja <A>lterar <E>xcluir:')
                        f7opcao := 'A'
                        @ 01,COL()+1 GET f7opcao PICT '@!' VALID f7opcao $ 'A,E'
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF f7opcao = 'A'
                                smed212(cli->registro)
                        ELSEIF f7opcao = 'E'
                                smed213(cli->registro)
                        ENDIF
                ELSE
                        //smed212()
                        mcod_cli := VAL(cli->registro)
                        CLEAR GETS
                        EXIT
                ENDIF
                oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->nome})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||cli->registro})
                ocolprod[3] := TBCOLUMNNEW('Dat.Nasc',{||DTOC(cli->datans)})
                ocolprod[4] := TBCOLUMNNEW('Sexo',{||cli->sexo})
                ocolprod[5] := TBCOLUMNNEW('Dat.Cad.',{||cli->data})
                ocolprod[6] := TBCOLUMNNEW('CPF',{||cli->cpf})
                ocolprod[7] := TBCOLUMNNEW('Responsavel',{||cli->resp})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
		        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(! EMPTY(cli->DATA_AUTA),{6,3},{1,3})}")
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSEIF f7nkey = ASC('i') .OR. f7nkey = ASC('I')
                CLEAR GETS
                smed211()
                oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->nome})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||cli->registro})
                ocolprod[3] := TBCOLUMNNEW('Dat.Nasc',{||DTOC(cli->datans)})
                ocolprod[4] := TBCOLUMNNEW('Sexo',{||cli->sexo})
                ocolprod[5] := TBCOLUMNNEW('Dat.Cad.',{||cli->data})
                ocolprod[6] := TBCOLUMNNEW('CPF',{||cli->cpf})
                ocolprod[7] := TBCOLUMNNEW('Responsavel',{||cli->resp})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
		        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(! EMPTY(cli->DATA_AUTA),{6,3},{1,3})}")
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
                mcod_cli := VAL(cli->registro)
                CLEAR GETS
        ELSEIF f7nkey = 112 .OR. f7nkey = 80
                op_tela(00,00,43,120,' CONSULTA DE CLIENTES ',,'*')
                CLEAR GETS
                WHILE .T.
                        mcod_cl         := 0
                        mrazao          := mfantasia := mcidade := mendereco := SPACE(40)
                        mcpfcnpj        := mtelefone := minsc := SPACE(14)
	                IF mop = 'C'
                        	mativos         := 'X'
			ELSE
                        	mativos         := ' '
                        ENDIF
                        limpa(0,0,43,100)
                        mensagem('Digite a descricao ou *descricao p/Pesquisa qualquer lugar da descricao')
                        setcor(1)
                        DEVPOS(00,01);DEVOUT('Pesquisa Geral:')
                        DEVPOS(01,01);DEVOUT('Codigo Cliente:')
                        DEVPOS(02,01);DEVOUT('Nome CLIENTE..:')
                        DEVPOS(03,01);DEVOUT('Cidade........:')
                        DEVPOS(04,01);DEVOUT('Endereco......:')
                        DEVPOS(05,01);DEVOUT('CPF...........:')
                        DEVPOS(06,01);DEVOUT('Telefone......:')
                        DEVPOS(07,01);DEVOUT('CLIENTE Ativo.: '+mativos)
                        setcor(3)
                        @ 08,00 TO 08,120
                        DEVPOS(09,01);DEVOUT('Nome CLIENTE                             Codigo  Cidade                 CPF')
                        @ 10,00 TO 10,120
                        @ 42,00 TO 42,120
                        DEVPOS(43,01);DEVOUT('Total de Clientes:')
                        DEVPOS(43,27);DEVOUT('Tempo da Pesquisa:')
                        setcor(1)
                        @ 00,17 GET mpesquisa PICT '@!KS50'
                        @ 01,17 GET mcod_cl PICT '99999' WHEN EMPTY(mpesquisa)
                        @ 02,17 GET mrazao PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mpesquisa)
                        @ 03,17 GET mcidade PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mpesquisa)
                        @ 04,17 GET mendereco PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mpesquisa)
                        @ 05,17 GET mcpfcnpj PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mrazao) .AND. EMPTY(mfantasia) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco) .AND. EMPTY(mpesquisa) .AND. men_get(0,0,'Digite o CNPJ ou CPF sem pontos e Hifens') VALID  lim_get()
                        @ 06,17 GET mtelefone PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(minsc) .AND. EMPTY(mpesquisa)
                        //@ 07,17 GET mativos PICT '@!' WHEN EMPTY(mcod_cl) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(minsc) .AND. EMPTY(mpesquisa)
                        READ
                        IF LASTKEY() = 27
                                CLEAR GETS
                                EXIT
                        ENDIF
                        IF EMPTY(mcod_cl) .AND. EMPTY(mrazao) .AND. EMPTY(mcidade) .AND. EMPTY(mendereco) .AND. EMPTY(mcpfcnpj) .AND. EMPTY(mtelefone) .AND. EMPTY(mpesquisa)
                                LOOP
                        ENDIF
                        mcpfcnpj := STRTRAN(mcpfcnpj,'.','')
                        mcpfcnpj := STRTRAN(mcpfcnpj,'-','')
                        mcpfcnpj := STRTRAN(mcpfcnpj,'/','')

                        minsc := STRTRAN(minsc,'.','')
                        minsc := STRTRAN(minsc,'-','')
                        minsc := STRTRAN(minsc,'/','')
                        mhoras := TIME()
                        cComm  := "SELECT * FROM smedcli WHERE registro IS NOT NULL"
                        IF ! EMPTY(mpesquisa)
                                ccomm := ccomm + " AND nome LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                               + " OR registro = "+sr_cdbvalue(STRZERO(VAL(ALLTRIM(mpesquisa)),5));
                                               + " OR cpf LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                               + " OR fone1 LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" OR fone2 LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" OR fone LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+" OR fone_conj LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                               + " OR cidade LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                               + " OR endereco LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')
                        ELSEIF ! EMPTY(mcod_cl)
                                ccomm := ccomm + " AND registro = "+sr_cdbvalue(STRZERO(mcod_cl,5))
                        ELSE
                                IF ! EMPTY(mcpfcnpj)
                                        ccomm := ccomm + " AND cpf LIKE "+sr_cdbvalue('%'+ALLTRIM(mcpfcnpj)+'%')
                                ENDIF
                                IF ! EMPTY(mtelefone)
                                        ccomm := ccomm + " AND (tel1 LIKE "+sr_cdbvalue('%'+ALLTRIM(mtelefone)+'%')+" OR tel2 LIKE "+sr_cdbvalue('%'+ALLTRIM(mtelefone)+'%')+")"
                                ENDIF
                                IF ! EMPTY(mrazao)
                                        ccomm := ccomm + " AND nome LIKE "+sr_cdbvalue(ALLTRIM(mrazao)+'%')
                                ENDIF
                                IF ! EMPTY(mcidade)
                                        IF SUBSTR(mcidade,1,1) = '*'
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mcidade,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND cidade LIKE "+sr_cdbvalue(ALLTRIM(mcidade)+'%')
                                        ENDIF
                                ENDIF
                                IF ! EMPTY(mendereco)
                                        IF SUBSTR(mendereco,1,1) = '*'
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue('%'+ALLTRIM(SUBSTR(mendereco,2))+'%')
                                        ELSE
                                                ccomm := ccomm + " AND endereco LIKE "+sr_cdbvalue(ALLTRIM(mendereco)+'%')
                                        ENDIF
                                ENDIF
                        ENDIF
	                IF mop = ' '
                                ccomm := ccomm + " AND valor > 0 "
                        ENDIF
                        ccomm := ccomm + " ORDER BY nome"
                        cons_m := {}
                        sr_getconnection():exec(ccomm,,.t.,@cons_m)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_m) = 0
                                atencao('Nao foi encontrado nenhum CLIENTE ...')
                                LOOP
                        ENDIF
                        m_prod := {}
                        m_pos  := {}
                        point  := i := 0
                        DEVPOS(43,20);DEVOUT(STRZERO(LEN(cons_m),5))
                        DEVPOS(43,46);DEVOUT(ELAPTIME(mhoras,TIME()))
                        FOR i = 1 TO LEN(cons_m)
                                AADD(m_prod,' '+cons_m[i,3];
                                           +' '+cons_m[i,1];
                                           +'  '+cons_m[i,11];
                                           +'  '+cons_m[i,55])
                                AADD(m_pos,cons_m[i,76])
                        NEXT
                        point := ACHOICE(11,0,40,120,m_prod,,,point)
                        DO CASE
                                CASE LASTKEY()=27
                                        LOOP
                                CASE LASTKEY() = 13
                                        *************
                                        SELE('cli');ORDSETFOCUS(1)
                                        *************
                                        GO m_pos[point]
                                        EXIT
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
                oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->nome})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||cli->registro})
                ocolprod[3] := TBCOLUMNNEW('Dat.Nasc',{||DTOC(cli->datans)})
                ocolprod[4] := TBCOLUMNNEW('Sexo',{||cli->sexo})
                ocolprod[5] := TBCOLUMNNEW('Dat.Cad.',{||cli->data})
                ocolprod[6] := TBCOLUMNNEW('CPF',{||cli->cpf})
                ocolprod[7] := TBCOLUMNNEW('Responsavel',{||cli->resp})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
                /*
                oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba,'cli')
                oconsprod:colorspec :=mcolor
                ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->razao})
                ocolprod[2] := TBCOLUMNNEW('Nome Fantasia',{||cli->nome})
                ocolprod[3] := TBCOLUMNNEW('Cod.',{||cli->cod_cli})
                ocolprod[4] := TBCOLUMNNEW('Tipo',{||cli->tipo})
                ocolprod[5] := TBCOLUMNNEW('  CNPJ/CPF',{||IF(! EMPTY(cli->cgc),'CNPJ: '+TRANSFORM(cli->cgc,'@@R 99.999.999/9999-99'),'CPF: '+TRANSFORM(cli->cpf,'@@R 999.999.999-99     '))})
                ocolprod[6] := TBCOLUMNNEW('Ult.Atua.',{||DTOC(cli->data_atu)})
                f7i:=0
                FOR f7i=1 TO LEN(ocolprod)
                        //oconsprod:ColorBlock := { || iif( oconsprod:RowPos % 2 > 0, {1,2},{3,4} ) }
                        //oconsprod:ColorBlock := { || if ( mod(recno())>0, {1,2},{3,4} ) }
                        oconsprod:ADDCOLUMN(ocolprod[f7i])
                        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(cli->bloqueio='S','r/W,W/r,,,r/W*',{2,4})}")
                        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(cli->bloqueio='S',{6,3},{1,3})}")
                        oconsprod:getcolumn(f7i):colorblock=&("{||IF(cli->bloqueio='S',{6,3},{1,3})}")
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
                */

        ELSE
                IF genkey(oconsprod,f7nkey,'cli')
                        oconsprod := TBROWSEDB(f7lci,f7cci,f7lba-1,f7cba)
                        ocolprod[1] := TBCOLUMNNEW('Razao Social',{||cli->nome})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||cli->registro})
                        ocolprod[3] := TBCOLUMNNEW('Dat.Nasc',{||DTOC(cli->datans)})
                        ocolprod[4] := TBCOLUMNNEW('Sexo',{||cli->sexo})
                        ocolprod[5] := TBCOLUMNNEW('Dat.Cad.',{||cli->data})
                        ocolprod[6] := TBCOLUMNNEW('CPF',{||cli->cpf})
                        ocolprod[7] := TBCOLUMNNEW('Responsavel',{||cli->resp})
                        f7i:=0
                        FOR f7i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f7i])
			        //oconsprod:getcolumn(f7i):colorblock=&("{||IF(! EMPTY(cli->DATA_AUTA),{6,3},{1,3})}")
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f7msele);IF(f7morde>0,ORDSETFOCUS(f7morde),)
WVW_SetMouseMove(,.T.)
wvw_lclosewindow()
IF f7nkey = K_ESC
        RELEASE f7tela,f7tela1,f7lci,f7cci,f7lba,f7cba,f7msele,f7morde,f7men,oconsprod,ocolprod[8],f7i,f7nkey,f7opcao
        RETURN NIL
ELSE
        RELEASE f7tela,f7tela1,f7lci,f7cci,f7lba,f7cba,f7msele,f7morde,f7men,oconsprod,ocolprod[8],f7i,f7nkey,f7opcao
        CLEAR GETS
        RETURN mcod_cli
ENDIF
RETURN NIL
**************** f i m **********************************
* FUNCAO P/CONSULTAR MERCADORIAS
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION f7_cli1(mop,mpesq)
******************************************************
LOCAL mprg:='F7_CLI',f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4msele,f4morde,f4men,;
      i,mopcao:=' ',cComm,cons_m:={},m_prod:={},;
      mhoras:='',menuid,cons_mov,f4_botao,;
      nBota,mnome:=SPACE(35),mcodconv:=SPACE(2)

PRIVATE mprazo:=0,mmod,mfator,mrsoc:=' ',mvalor:=0,mdata,mconsulta,mrecib,mtp_consulta:='',;
        point:=0,m_pos:={},mvlr_cirur := 0,mpesquisa:=SPACE(50)

MEMVAR mdata_sis,nivel_acess,mcod_cli

Local4:= Space(0)
f4 := '*'
f4lci := 6
f4cci := 0
f4lba := 22
f4cba := 100 //79
f4msele := SELE()
f4morde := INDEXORD()
mcor_ant := SETCOLOR()
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
setcor(1)
exibi_prg('F4_MERC')
op_tela(03,00,48,120,m_set[1,23]+SPACE(10)+' CONSULTA DE CLIENTES ',,1)
//mflag := 0
CLEAR GETS
WvW_PBSetFont( NIL, 'times', 25, 10,)
nBota := wvw_pbCreate(NIL,1,80,2,100,'Inclusao CLIENTES',NIL,{||smed211()})
WVW_PBEnable( NIL, nBota, .T. )
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
IF mpesq # NIL
        mpesquisa := mpesq
ENDIF
WHILE .T.
        exibi_prg(mprg)
        limpa(0,0,50,120)
        mensagem('Tecle: [CTRL+Y]Apagar Descricao')
        setcor(1)
        DEVPOS(00,01);DEVOUT('Pesquisa Geral:')
        DEVPOS(01,01);DEVOUT('Nome Cliente..:')
        DEVPOS(02,01);DEVOUT('Cod.Convenio..:')
        setcor(3)
        @ 04,00 TO 04,120
        DEVPOS(05,01);DEVOUT('Cliente                           Codigo Dt.Nasc. Idade Convenio                           Ult.Cons. Prox.Cons.')
        @ 06,00 TO 06,120
        @ 43,00 TO 43,120
        DEVPOS(44,01);DEVOUT('Total de Produtos:')
        DEVPOS(44,27);DEVOUT('Tempo da Pesquisa:                                                           1->IAT   2->IPPT')
        setcor(1)

        //DEVPOS(04,00);DEVOUT('Cod.Especie...:')
        @ 00,17 GET mpesquisa PICT '@!KS50'
        @ 01,17 GET mnome PICT '@!KS14' WHEN EMPTY(mpesquisa)
        @ 02,17 GET mcodconv PICT '99KS2'  // WHEN EMPTY(mpesquisa)
        READ
        IF LASTKEY() = 27
                wvw_lclosewindow()
                CLEAR GETS
                RETURN ' '
        ENDIF

        IF EMPTY(mnome) .AND. EMPTY(mpesquisa)
                LOOP
        ENDIF

        mhoras := TIME()
        mensagem('Escolha o produto e tecle <ENTER> ou <ESC> p/Abandonar')
        IF mpesquisa = '*'
                cComm  := "SELECT * FROM smedcli "
        ELSE
                cComm  := "SELECT * FROM smedcli WHERE "
                IF ! EMPTY(mcodconv)
                        ccomm := ccomm + " codconv = "+sr_cdbvalue(mcodconv)+" AND "
                ENDIF
                IF ! EMPTY(mpesquisa)
                        ccomm := ccomm + " (registro    LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR nome      LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR cpf       LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR email     LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR codconv   LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR fone      LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+")"
                                       /*
                                       + " OR fone1     LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR fone2     LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR instagram LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR profissao LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR bairro    LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR cidade    LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR conjuge   LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR indica    LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR resp      LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       */
                ELSE
                        ccomm := ccomm + " nome  LIKE "+sr_cdbvalue(ALLTRIM(mnome)+'%')
                ENDIF
        ENDIF
        ccomm := ccomm + " ORDER BY nome"
        //ATENCAO(CCOMM)
        cons_m := {}
        sr_getconnection():exec(ccomm,,.t.,@cons_m)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_m) = 0
                atencao('Nao foi encontrado nenhum CLIENTE..')
                LOOP
        ENDIF
        m_prod := {}
        m_pos  := {}
        point  := 0
        //DEVPOS(44,20);DEVOUT(STRZERO(LEN(cons_m),5))
        //DEVPOS(44,46);DEVOUT(ELAPTIME(mhoras,TIME()))
        i:=0
        FOR i = 1 TO LEN(cons_m)
                mrsoc := SPACE(30)
                mprazo := 0
                ver_conv(cons_m[i,18],,,,1)
                IF EMPTY(cons_m[i,13]) .OR. cons_m[i,17] = CTOD('  /  /  ')
                        cons_m[i,17] := mdata_sis
                ENDIF
                IF EMPTY(cons_m[i,4]) .OR. cons_m[i,4] = CTOD('  /  /  ')
                        cons_m[i,4] := mdata_sis
                ENDIF
                midade := 0
                midade := calc_nasc(cons_m[i,4])
                AADD(m_prod,cons_m[i,3]+' '+cons_m[i,1]+' '+DTOC(cons_m[i,4])+' '+midade;
                           +'   '+cons_m[i,18]+'-'+mrsoc;
                           +'  '+DTOC(cons_m[i,17]);
                           +'  '+DTOC(cons_m[i,17]+mprazo))
                        AADD(m_pos,{cons_m[i,1],cons_m[i,76]})
                DEVPOS(44,20);DEVOUT(STRZERO(i,5))
        NEXT
        DEVPOS(44,46);DEVOUT(ELAPTIME(mhoras,TIME()))
        point := ACHOICE(7,0,42,120,m_prod,,,point)
                //atencao(m_pos[point,1])
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        ***************************
                        SELE('cli');ORDSETFOCUS(1)
                        GO m_pos[point,2]
                        ***************************
                        mcod_cli := VAL(m_pos[point,1])
                        IF mop = 'C'
                                smed214(m_pos[point,1])
                                EXIT
                        ELSEIF mop = '*'
                                op_tela(25,10,27,50)
                                DEVPOS(01,00);DEVOUT('Deseja <A>lterar <E>xcluir:')
                                f7opcao := 'A'
                                @ 01,COL()+1 GET f7opcao PICT '@!' VALID f7opcao $ 'A,E'
                                READ
                                wvw_lclosewindow()
                                IF LASTKEY() = 27
                                        LOOP
                                ELSEIF f7opcao = 'A'
                                        smed212(m_pos[point,1])
                                ELSEIF f7opcao = 'E'
                                        smed213(m_pos[point,1])
                                ENDIF
                        ELSE
                                //smed212()
                                mcod_cli := VAL(m_pos[point,1])
                                CLEAR GETS
                                EXIT
                        ENDIF
        ENDCASE
END
RELEASE f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4msele,f4morde,f4men,mcod,;
        oconsprod,ocolprod[8],i
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.T.)
wvw_lclosewindow()
CLEAR GETS
RETURN ' '
**************** f i m **********************************
* FUNCAO P/CONSULTAR NIVEIS
********************************
FUNCTION f3_nivel(mop)
*****************
LOCAL mprg:='F3_NIVEL'
LOCAL tela,tela1,lci,cci,lba,cba,msele,morde,men,mnivel

LOCAL oconsprod,ocolprod[5],i,nkey,opcao
MEMVAR nivel_acess
IF ! ver_nivel(mprg,'NIVEL DE ACESSOS','1',nivel_acess)
        RETURN NIL
ENDIF

lci := 02
cci := 05
lba := MAXROW()-3
cba := 75

tela := SAVESCREEN(01,00,24,79)

msele := SELE()
morde := INDEXORD()
*************
IF ! AbriArq('sacconf','conf');RETURN NIL;ENDIF
SELE('conf');ORDSETFOCUS(1)
GO TOP
*************
men := SAVESCREEN(24,00,24,79)

botao(lci-1,cci-1,lba,cba+1)
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        mensagem('<P>esquisa <ENTER>p/Alterar Niveis  <ESC>Retornar')
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                CLEAR GETS
                mnivel := conf->nivel
                @ ROW(),66 GET mnivel PICT '9999999999'
*               @ ROW(),COL()+61 GET mnivel PICT '9999999999'
                READ
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Alteracao do Niveis [S/n]:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ELSE
                        BLOQREG()
                        conf->nivel := mnivel
                        conf->data_alt  := mdata_sis
                        conf->oper_alt  := cod_operado
                        DBUNLOCK()
                        DBCOMMIT()
                ENDIF
                oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
                ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
                ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
                ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
                ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
                i:=0
                FOR i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,nkey,'conf')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Descricao',{||conf->descri})
                        ocolprod[2] := TBCOLUMNNEW('Niveis',{||conf->nivel})
                        ocolprod[3] := TBCOLUMNNEW('Modulo',{||conf->modulo})
                        ocolprod[4] := TBCOLUMNNEW('Data Alt.',{||conf->data_alt})
                        ocolprod[5] := TBCOLUMNNEW('Oper.Alt.',{||conf->oper_alt})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RESTSCREEN(24,00,24,79,men)
RESTSCREEN(01,00,24,79,tela)
IF nkey == K_ESC
        CLOSE conf
        RETURN NIL
ELSE
        CLOSE conf
        RETURN NIL
ENDIF
RETURN NIL
******************************* f i m *********************************************

******************************
* APAGA
******************************

FUNCTION apaga(lci,cci,lba,cba)
**************

@ lci,cci CLEAR TO lba,cba
RETURN NIL
******************************* f i m *********************************************
********************************
* FUNCAO P/CONSULTAR MEDICO
********************************

FUNCTION f8_med(mop)
*****************
LOCAL f8tela,f8tela1,f8lci,f8cci,f8lba,f8cba,f8msele,f8morde,f8men,;
      oconsprod,ocolprod[6],f8i,f8nkey,f8opcao,mcodcli,mponto
MEMVAR mcod_med

f8lci := f8cci := 0
f8lba := 25
f8cba := 80

f8msele := SELE()
f8morde := INDEXORD()
IF ! AbriArq('smedmed','med');RETURN NIL;ENDIF
*************
SELE('med');ORDSETFOCUS(2)
*************
mponto := RECNO()
*************
SELE('med');ORDSETFOCUS(3)
GO BOTT
mcod_med:=med->cod_espe
*************
*************
SELE('med');ORDSETFOCUS(2)
GO mponto
*************
f8men := SAVESCREEN(24,00,24,79)

op_tela(01,01,25,80,' MEDICOS                  Ult.Medico:'+mcod_med+'        Quantidades: '+TRANSFORM(LASTREC(),'999,999'))
oconsprod := TBROWSEDB(f8lci,f8cci,f8lba-1,f8cba)
ocolprod[1] := TBCOLUMNNEW('Medico',{||med->profission})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||med->cod_espe})
ocolprod[3] := TBCOLUMNNEW('Especialidade',{||med->especialid})
ocolprod[4] := TBCOLUMNNEW('Telefone',{||med->fone})
ocolprod[5] := TBCOLUMNNEW('Cidade',{||med->cidade})
ocolprod[6] := TBCOLUMNNEW('Endereco',{||med->endereco})
f8i:=0
FOR f8i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f8i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        exibi_prg('F8_MED')
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f8nkey := 0
        WHILE f8nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f8nkey := INKEY(0)
        ENDDO
        IF f8nkey == K_ESC
                EXIT
        ELSEIF f8nkey == K_ENTER
                mcod_med := VAL(med->cod_espe)
                IF mop = '*'
                        op_tela(25,10,27,40)
                        DEVPOS(01,00);DEVOUT('Deseja <A>lterar <E>xcluir:')
                        f8opcao := 'A'
                        @ 01,COL()+1 GET f8opcao PICT '@!' VALID f8opcao $ 'A,E'
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF f8opcao = 'A'
                                smed232()
                        ELSEIF f8opcao = 'E'
                                smed233()
                        ENDIF
                ELSE
                        CLEAR GETS
                        EXIT
                ENDIF
*               GO TOP
                oconsprod := TBROWSEDB(f8lci,f8cci,f8lba-1,f8cba)
                ocolprod[1] := TBCOLUMNNEW('Medico',{||med->profission})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||med->cod_espe})
                ocolprod[3] := TBCOLUMNNEW('Especialidade',{||med->especialid})
                ocolprod[4] := TBCOLUMNNEW('Telefone',{||med->fone})
                ocolprod[5] := TBCOLUMNNEW('Cidade',{||med->cidade})
                ocolprod[6] := TBCOLUMNNEW('Endereco',{||med->endereco})
                f8i:=0
                FOR f8i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f8i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f8nkey,'med')
                        oconsprod := TBROWSEDB(f8lci,f8cci,f8lba-1,f8cba)
                        ocolprod[1] := TBCOLUMNNEW('Medico',{||med->profission})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||med->cod_espe})
                        ocolprod[3] := TBCOLUMNNEW('Especialidade',{||med->especialid})
                        ocolprod[4] := TBCOLUMNNEW('Telefone',{||med->fone})
                        ocolprod[5] := TBCOLUMNNEW('Cidade',{||med->cidade})
                        ocolprod[6] := TBCOLUMNNEW('Endereco',{||med->endereco})
                        f8i:=0
                        FOR f8i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f8i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f8msele);IF(f8morde>0,ORDSETFOCUS(f8morde),)
wvw_lclosewindow()
IF f8nkey == K_ESC
        RELEASE f8tela,f8tela1,f8lci,f8cci,f8lba,f8cba,f8msele,f8morde,f8men,oconsprod,ocolprod[8],f8i,f8nkey,f8opcao
        RETURN NIL
ELSE
        RELEASE f8tela,f8tela1,f8lci,f8cci,f8lba,f8cba,f8msele,f8morde,f8men,oconsprod,ocolprod[8],f8i,f8nkey,f8opcao
        CLEAR GETS
        RETURN mcod_med
ENDIF
RETURN NIL
******************************* f i m *********************************************
***********************************
* FUNCAO P/CONSULTAR ESPECIALIDADE
***********************************

FUNCTION f9_espe(mop)
*****************
LOCAL f9tela,f9tela1,f9lci,f9cci,f9lba,f9cba,f9msele,f9morde,f9men,;
      oconsprod,ocolprod[3],f9i,f9nkey,f9opcao,mcodcli,mponto

MEMVAR mcod_espe

f9lci := f9cci := 0
f9lba := 20
f9cba := 40

f9msele := SELE()
f9morde := INDEXORD()
IF ! AbriArq('smedespe','espe');RETURN NIL;ENDIF
*************
SELE('espe');ORDSETFOCUS(2)
*************
mponto := RECNO()
*************
SELE('espe');ORDSETFOCUS(1)
GO BOTT
mcod_espe:=espe->cod_espe
*************
*************
SELE('espe');ORDSETFOCUS(2)
GO mponto
*************
op_tela(04,20,20,60,' ESPECIALIDADES')
oconsprod := TBROWSEDB(f9lci,f9cci,f9lba-1,f9cba)
ocolprod[1] := TBCOLUMNNEW('Especialidade',{||espe->espe})
ocolprod[2] := TBCOLUMNNEW('Cod.',{||espe->cod_espe})
ocolprod[3] := TBCOLUMNNEW('    Valor',{||TRANSFORM(espe->valor,'999,999.99')})
f9i:=0
FOR f9i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[f9i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        exibi_prg('F9_ESPE')
        IF mop = '*'
                mensagem('<P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        f9nkey := 0
        WHILE f9nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                f9nkey := INKEY(0)
        ENDDO
        IF f9nkey == K_ESC
                EXIT
        ELSEIF f9nkey == K_ENTER
                mcod_espe := VAL(espe->cod_espe)
                IF mop = '*'
                        op_tela(25,10,27,40)
                        DEVPOS(01,00);DEVOUT('Deseja <A>lterar <E>xcluir:')
                        f9opcao := 'A'
                        @ 01,COL()+1 GET f9opcao PICT '@!' VALID f9opcao $ 'A,E'
                        READ
                        wvw_lclosewindow()
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF f9opcao = 'A'
                                smed272()
                        ELSEIF f9opcao = 'E'
                                smed273()
                        ENDIF
                ELSE
                        CLEAR GETS
                        EXIT
                ENDIF
*               GO TOP
                oconsprod := TBROWSEDB(f9lci,f9cci,f9lba-1,f9cba)
                ocolprod[1] := TBCOLUMNNEW('Especialidade',{||espe->espe})
                ocolprod[2] := TBCOLUMNNEW('Cod.',{||espe->cod_espe})
                ocolprod[3] := TBCOLUMNNEW('    Valor',{||TRANSFORM(espe->valor,'999,999.99')})
                f9i:=0
                FOR f9i=1 TO LEN(ocolprod)
                        oconsprod:ADDCOLUMN(ocolprod[f9i])
                NEXT
                oconsprod:HEADSEP := CHR(196)
                oconsprod:COLSEP := CHR(179)
                oconsprod:FORCESTABLE()
        ELSE
                IF genkey(oconsprod,f9nkey,'espe')
                        oconsprod := TBROWSEDB(f9lci,f9cci,f9lba-1,f9cba)
                        ocolprod[1] := TBCOLUMNNEW('Especialidade',{||espe->espe})
                        ocolprod[2] := TBCOLUMNNEW('Cod.',{||espe->cod_espe})
                        ocolprod[3] := TBCOLUMNNEW('    Valor',{||TRANSFORM(espe->valor,'999,999.99')})
                        f9i:=0
                        FOR f9i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[f9i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(f9msele);IF(f9morde>0,ORDSETFOCUS(f9morde),)
wvw_lclosewindow()
IF f9nkey == K_ESC
        RELEASE f9tela,f9tela1,f9lci,f9cci,f9lba,f9cba,f9msele,f9morde,f9men,oconsprod,ocolprod[8],f9i,f9nkey,f9opcao
        RETURN NIL
ELSE
        RELEASE f9tela,f9tela1,f9lci,f9cci,f9lba,f9cba,f9msele,f9morde,f9men,oconsprod,ocolprod[8],f9i,f9nkey,f9opcao
        CLEAR GETS
        RETURN mcod_espe
ENDIF
RETURN NIL
*********************************************** f i m ************************************************
* TIPO DE IMPRESSAO  ARQUIVOS OU IMPRESSORA
*************************
 FUNCTION imp_arq(imp_arq,mporta,op,linha,comp,mens,msenha_lib,mexcel)
*****************
LOCAL tela,lci,cci,lba,cba,msele,morde
PUBLIC mtp_impre:=0

mimp_tipo :=0
mporta_imp:=mtipo_imp :=' '
mnome_arq := imp_arq
msele := SELE()
morde := INDEXORD()
mnome_arq := '\'+CURDIR()+'\'+marq+SPACE(50-LEN('\'+CURDIR()+'\'+marq))
op_tela(03,10,14,80,' Configuracao de IMPRESSAO - Arquivo: '+ALLTRIM(mnome_arq))
WvW_ClearGetVarList()
lci := cci := 0
lba := 09
cba := 70
IF op = NIL
        op := 'S'
ENDIF
IF mporta = NIL
        mporta := 'R'
ENDIF

mtp_impre:=0
WHILE .T.
        mporta_imp := 'LPT1'
        mimp_tipo := 1
        imp_arq := mnome_arq
	IF mtipo_imp = 'M'
		mtp_impre:=1
	ELSE
		mtp_impre:=2
	ENDIF

        limpa(00,00,30,80)
        setcor(1)
        @ lci+4,cci TO lci+4,cba
        DEVPOS(lci+6,cci+1);DEVOUT('Tipo da Impressora [J]ato [M]atriz...:')
        DEVPOS(lci+8,cci+1);DEVOUT('Nome do Arquivo de impressao.........:')
        DEVPOS(lci+9,cci+1);DEVOUT('Porta Impressora.....................:')
        DEVPOS(lci+10,cci+1);DEVOUT('Diminuir Espacos entre Linhas [s/N]..:')
        botao1(lci+5,cci+40,lci+7,cci+53)
        botao1(lci+5,cci+56,lci+7,cci+69)
        setcor(3)
        DEVPOS(lci+6,cci+41);DEVOUT(' MATRICIAL  ')
        DEVPOS(lci+6,cci+57);DEVOUT(' JATO TINTA ')
        setcor(1)

        botao1(lci+1,cci+02,lci+3,cci+15)
        botao1(lci+1,cci+20,lci+3,cci+33)
        botao1(lci+1,cci+37,lci+3,cci+50)
        botao1(lci+1,cci+55,lci+3,cci+68)
        @ lci+2,cci+03 PROMPT ' IMPRESSORA '
        @ lci+2,cci+21 PROMPT '  CONSULTA  '        //+marq
        @ lci+2,cci+38 PROMPT '  ARQUIVO   '        //+marq
*        setcor(3)
*        DEVPOS(lci+2,cci+21);DEVOUT('  CONSULTA  ')        //+marq
*        setcor(1)
        SET INTEN ON
        MENU TO mimp_tipo
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! mimp_tipo = 3 .AND. ! mimp_tipo = 2
                @ lci+6,cci+41 PROMPT ' MATRICIAL  '
                @ lci+6,cci+57 PROMPT ' JATO TINTA '
                SET INTEN ON
                MENU TO mtp_impre
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF mtp_impre = 1
                        mtipo_imp := 'M'
                ELSE
                        mtipo_imp := 'J'
                ENDIF
        ENDIF
                IF mtipo_imp # 'J' .AND. mimp_tipo = 1
                        @ lci+9,cci+40 GET mporta_imp PICT '@!' WHEN mimp_tipo = 1 VALID mporta_imp $ 'LPT1,LPT2,LPT3,LPT4,LPT5,COM1,COM2,COM3,COM4,PRN ' .AND. IF(EMPTY(mporta_imp),.F.,.T.)
                        @ lci+10,cci+40 GET comp PICT '@!' WHEN comp <> NIL VALID comp $ 'S,N'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                ELSE
                        IF mimp_tipo = 1
                                imp_arq := 'HTI.REL'
			ELSEIF mimp_tipo = 2
                                imp_arq := 'HTI.REL'
				mtipo_imp := 'M'                                
                        ELSEIF mimp_tipo = 3
                                mporta := 'PRN '
                                @ lci+08,cci+40 GET imp_arq PICT '@S30!' VALID IF(EMPTY(imp_arq),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                        ELSEIF mimp_tipo = 4
                                mporta := 'PRN '
                                imp_arq := SUBSTR(imp_arq,1,LEN(ALLTRIM(imp_arq))-4)+'.XLS'+SPACE(10)
                                @ lci+08,cci+40 GET imp_arq PICT '@S30!' VALID IF(EMPTY(imp_arq),.F.,.T.)
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                marq := ALLTRIM(imp_arq)
                        ENDIF
                ENDIF
        IF mimp_tipo > 2
                setcor(3)
                DEVPOS(lci+08,cci+40);DEVOUT(imp_arq)
                setcor(1)
        ENDIF
        op := op_simnao('S','Confirma Impressao/Consulta [S/n]:')
        IF op = 'S'
                wvw_lclosewindow()
                mensagem('Espere o final da impressao !!!')
                IF mimp_tipo = 4
                        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                        RETURN .T.
                ENDIF
                SET DEVI TO PRINT
                IF mtipo_imp # 'J' .AND. mimp_tipo = 1
                        SET PRINT TO (mporta_imp)
                        IF comp <> NIL .AND. comp = 'S'
                                imprt(mtipo_imp,'P8')
                        ENDIF
                ELSE
                        SET PRINT ON
                        SET PRINT TO (imp_arq)
                ENDIF
                SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
                RETURN .T.
        ELSE
                LOOP
        ENDIF
ENDDO
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
wvw_lclosewindow()
RETURN .F.
*************************** f i m *******************************************
*****************************
* VER NUMERO DA SERIE
*****************************
FUNCTION ver_serie
******************
IF ! AbriArq('sacsetup','set');RETURN NIL;ENDIF
RETURN ALLTRIM(set->serie)
**************************** F I M ****************************************
********************************
* FUNCAO P/CONSULTAR CONTA DESPESA
********************************

FUNCTION f9_conta(mop)
*****************

LOCAL tela,lci,cci,lba,cba,msele,morde,men,;
      oconsprod,ocolprod[3],i,nkey,opcao,;
      mdesc1 := SPACE(25),mtipo  := SPACE(1),tela1
MEMVAR mcodconta
lci := 02
cci := 10
lba := 19
cba := 70

tela := SAVESCREEN(01,00,24,79)

msele := SELE()
morde := INDEXORD()
IF ! AbriArq('sacdesp','cdesp');RETURN NIL;ENDIF
*************
SELE('cdesp');ORDSETFOCUS(1)
*************
men := SAVESCREEN(24,00,24,79)

botao(lci-1,cci-1,lba,cba+1)
oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
ocolprod[1] := TBCOLUMNNEW('Codigo',{||cdesp->codigo})
ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||cdesp->desc1})
ocolprod[3] := TBCOLUMNNEW('Tipo',{||cdesp->tipo})
i:=0
FOR i=1 TO LEN(ocolprod)
        oconsprod:ADDCOLUMN(ocolprod[i])
NEXT
oconsprod:HEADSEP := CHR(196)
oconsprod:COLSEP := CHR(179)
WHILE .T.
        IF mop = '*'
                mensagem('< > <P>esquisa <I>nclusao <ENTER>p/Alterar e Excluir <ESC>Retornar')
        ELSE
                mensagem('<> <PGUP> <PGDN> <P>esquisa <I>nclusao <ENTER> Conf. <ESC>Retornar')
        ENDIF
        nkey := 0
        WHILE nkey == 0         //.AND. ! oconsprod:STABLE
                oconsprod:FORCESTABLE()
                nkey := INKEY(0)
        END
        IF nkey == K_ESC
                EXIT
        ELSEIF nkey == K_ENTER
                IF mop = '*'
                        mensagem('Deseja <A>lterar <E>xcluir:')
                        opcao := 'A'
                        @ 23,COL()+1 GET opcao PICT '@!' VALID opcao $ 'A,E'
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ELSEIF opcao = 'A'
                                mensagem('Digite a descricao - <ESC> p/Retornar')
                                mcodconta := SPACE(4)
                                mdesc1 := SPACE(25)
                                mtipo  := SPACE(1)
                                botao(lba+1,cci,lba+3,cba,,' Inclusao Despesas ')
                                DEVPOS(lba+2,cci+2);DEVOUT('Cod.:')
                                DEVPOS(lba+2,cci+15);DEVOUT('Descricao:')
                                DEVPOS(lba+2,cci+53);DEVOUT('Tipo:')
                                setcor(3)
                                DEVPOS(lba+2,cci+8);DEVOUTPICT(cdesp->codigo,'9.99')
                                setcor(1)
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                mdesc1 := cdesp->desc1
                                mtipo  := cdesp->tipo
                                @ lba+2,cci+26 GET mdesc1 PICT '@!'
                                @ lba+2,cci+58 GET mtipo PICT '@!' VALID mtipo $ 'V,F,I, ' .AND. lim_get() WHEN men_get(lba-3,cci+58,'<V>ariavel - <F>ixas - <I>nvestimento - < > em branco')
                                READ
                                IF LASTKEY() = 27 .OR. EMPTY(mdesc1)
                                        EXIT
                                ENDIF
                                opcao := op_simnao('S','Confirma Alteracao [S/n]:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                IF BLOQREG()
                                        Cdesp-> desc1 := mdesc1
                                        Cdesp-> tipo  := mtipo
                                        DBCOMMIT()
                                        DBUNLOCK()
                                ELSE
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        LOOP
                                ENDIF
                        ELSEIF opcao = 'E'
                                opcao := op_simnao('N','Confirma a Exclusao da Conta Despesa:')
                                IF opcao = 'S'
                                        BLOQREG()
                                        DELE
                                        DBUNLOCK()
                                        DBCOMMIT()
                                ENDIF
                        ENDIF
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||cdesp->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||cdesp->desc1})
                        ocolprod[3] := TBCOLUMNNEW('Tipo',{||cdesp->tipo})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ELSE
                        mcodconta := cdesp->codigo
                        EXIT
                ENDIF
        ELSEIF nkey = 105 .OR. nkey = 73
                WHILE .T.
                        mensagem('Digite o Codigo da despesa e faca a descricao - <ESC> p/Retornar')
                        mcodconta := SPACE(4)
                        mdesc1 := SPACE(25)
                        mtipo  := SPACE(1)
                        botao(lba+1,cci,lba+3,cba,,' Inclusao Despesas ')
                        DEVPOS(lba+2,cci+2);DEVOUT('Cod.:')
                        DEVPOS(lba+2,cci+15);DEVOUT('Descricao:')
                        DEVPOS(lba+2,cci+53);DEVOUT('Tipo:')
                        @ lba+2,cci+8 GET mcodconta PICT '@! X.XX'
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        IF EMPTY(mcodconta)
                                LOOP
                        ENDIF
                        *************
                        SELE('cdesp');ORDSETFOCUS(1)
                        GO TOP
                        *************
                        IF cdesp->(DBSEEK(mcodconta))
                                atencao('Conta Despesa ja Cadastrada')
                                LOOP
                        ENDIF
                        @ lba+2,cci+26 GET mdesc1 PICT '@!'
                        @ lba+2,cci+58 GET mtipo PICT '@!' VALID mtipo $ 'V,F,I, ' .AND. lim_get() WHEN men_get(lba-3,cci+58,'<V>ariavel - <F>ixas - <I>nvestimento - < > em branco')
                        READ
                        IF LASTKEY() = 27 .OR. EMPTY(mdesc1)
                                LOOP
                        ENDIF
                        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                LOOP
                        ENDIF
                        IF ADIREG()
                                Cdesp-> codigo := mcodconta
                                Cdesp-> desc1 := mdesc1
                                Cdesp-> tipo  := mtipo
                                COMMIT
                                UNLOCK
                        ELSE
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                ORDSETFOCUS(3)
                                LOOP
                        ENDIF
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||cdesp->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||cdesp->desc1})
                        ocolprod[3] := TBCOLUMNNEW('Tipo',{||cdesp->tipo})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDDO
        ELSE
                IF genkey(oconsprod,nkey,'cdesp')
                        oconsprod := TBROWSEDB(lci,cci,lba-1,cba)
                        ocolprod[1] := TBCOLUMNNEW('Codigo',{||cdesp->codigo})
                        ocolprod[2] := TBCOLUMNNEW('Descricao da Despesa',{||cdesp->desc1})
                        ocolprod[3] := TBCOLUMNNEW('Tipo',{||cdesp->tipo})
                        i:=0
                        FOR i=1 TO LEN(ocolprod)
                                oconsprod:ADDCOLUMN(ocolprod[i])
                        NEXT
                        oconsprod:HEADSEP := CHR(196)
                        oconsprod:COLSEP := CHR(179)
                        oconsprod:FORCESTABLE()
                ENDIF
        ENDIF
END
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RESTSCREEN(24,00,24,79,men)
RESTSCREEN(01,00,24,79,tela)
CLEAR GETS
IF nkey == K_ESC
        RETURN NIL
ELSE
        RETURN mcodconta
ENDIF
RETURN NIL
******************************* f i m *********************************************
****************************
* VERIFICA CARTAO DE CREDITO
****************************

FUNCTION ver_cartao(mcod,li,ci,t)
*******************************

LOCAL msele,morde
MEMVAR mdesc_cart,mprazo_cart,mcartao


msele := SELE()
morde := INDEXORD()
IF ! AbriArq('saccarta','car');RETURN NIL;ENDIF

IF EMPTY(mcod) .AND. t = NIL
        RETURN .T.
ENDIF
*************
SELE('car');ORDSETFOCUS(1)
GO TOP
*************

IF ! car->(DBSEEK(STRZERO(mcod,3)))
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        IF li <> NIL
                atencao('Cartao nao Cadastrado !!!')
                setcor(3)
                DEVPOS(li,ci);DEVOUT(' - '+SPACE(20))
                setcor(1)
                RETURN .F.
        ENDIF
        RETURN 'CARTAO NAO IDENTIFICADO'
ENDIF
IF li <> NIL
        mdesc_cart := car->desconto
        mprazo_cart := car->prazo
        mcartao := car->cartao
        setcor(3)
        DEVPOS(li,ci);DEVOUT(' - '+mcartao)
        setcor(1)
        SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
        RETURN .T.
ENDIF
SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
RETURN car->cartao
************************ F I M **************************************
FUNCTION cons_doc
RETURN NIL
************************ F I M **************************************
FUNCTION dias_atras
RETURN NIL
************************ F I M **************************************
FUNCTION VER_FINAN
RETURN NIL
************************ F I M **************************************
FUNCTION QTD_CHQ
RETURN NIL
************************ F I M **************************************
FUNCTION SPC
RETURN NIL
************************ F I M **************************************
FUNCTION PESQ_CPF
RETURN NIL
************************ F I M **************************************
FUNCTION VER_COND
RETURN NIL
************************ F I M **************************************
FUNCTION VER_REGI
RETURN NIL
************************ F I M **************************************
FUNCTION TABCLIPROD
RETURN NIL
************************ F I M **************************************
FUNCTION FECHA_TP
RETURN NIL
************************ F I M **************************************
FUNCTION SAC5CAD1
RETURN NIL
************************ F I M **************************************
FUNCTION VER_FAB
RETURN NIL
************************ F I M **************************************
FUNCTION VER_EMP
RETURN NIL
************************ F I M **************************************
FUNCTION VER_TIPDC
RETURN NIL
************************ F I M **************************************
FUNCTION PROG_IMP
RETURN NIL
************************ F I M **************************************
FUNCTION VALOR_PED
RETURN NIL
************************ F I M **************************************
FUNCTION SET_KEY
RETURN NIL
************************ F I M **************************************
FUNCTION cliprod
RETURN NIL
************************ F I M **************************************
FUNCTION f8_cep
RETURN NIL
************************ F I M **************************************
FUNCTION saccid
RETURN NIL
************************ F I M **************************************
FUNCTION v_uf
RETURN NIL
************************ F I M **************************************
FUNCTION testaie
RETURN NIL
************************ F I M **************************************
FUNCTION mcli
RETURN NIL
************************ F I M **************************************
FUNCTION dup_sot
RETURN NIL
************************ F I M **************************************
FUNCTION dup_sam
RETURN NIL
************************ F I M **************************************
FUNCTION oper_ped
RETURN NIL
************************ F I M **************************************
FUNCTION getparm
RETURN NIL
************************ F I M **************************************
FUNCTION bright
RETURN NIL
************************ F I M **************************************
FUNCTION ver_mensa
RETURN NIL
************************ F I M **************************************
FUNCTION ver_cpf(ncpf)
RETURN NIL
******************************* f i m *********************************************
FUNCTION ver_cgc(ncgc)
RETURN NIL
********************************** F I M ***********************************
FUNCTION alt_caixa
RETURN NIL
********************************** F I M ***********************************
FUNCTION chq_corre
RETURN NIL
********************************** F I M ***********************************
FUNCTION aredonda
RETURN NIL
********************************** F I M ***********************************
********************************
* FUNCAO P/CONSULTAR ALBUM DE CLIENTE
********************************
FUNCTION smedalbum(mletra,mcodfoto,mnomefoto,mcam,mcam1)
*****************
LOCAL alb_tela,alb_tela1,alb_lci,alb_cci,alb_lba,alb_cba,alb_msele,alb_morde,alb_men,;
      ocprod,colprod[1],alb_i,alb_nkey,alb_opcao,mcodcli,mponto,stop:=' ' 

alb_lci := alb_cci := 0
alb_lba := 22
alb_cba := 15

alb_msele := SELE()
alb_morde := INDEXORD()
IF ! FILE('MENUFOTO.DBF')
        matriz:={ }
        AADD(matriz,{'smenu','C',40,0})
        AADD(matriz,{'snome','C',40,0})
        DBCREATE('menufoto',matriz,'DBFCDX')
ENDIF
USE 'menufoto' ALIAS 'smenu' EXCLUSIVE NEW VIA 'DBFCDX'
*************
SELE('smenu')
BLOQREG()
ZAP
DBUNLOCK()
*************
m_aux1 := DIRECTORY(mcam+mletra+mcodfoto+'*.jpg','D')
m_aux2 := DIRECTORY(mcam+mletra+mcodfoto+'*.bmp','D')
IF LEN(m_aux1)+LEN(m_aux2) = 0 
	m_aux1 := DIRECTORY(mcam1+mletra+mcodfoto+'*.jpg','D')
	m_aux2 := DIRECTORY(mcam1+mletra+mcodfoto+'*.bmp','D')
	i := 0
	FOR i = 1 TO LEN(m_aux1)
	        ADIREG()
	        smenu->smenu := mcam1+m_aux1[i,1]
	        smenu->snome := m_aux1[i,1]
	NEXT
	i := 0
	FOR i = 1 TO LEN(m_aux2)
	        ADIREG()
	        smenu->smenu := mcam1+m_aux1[i,2]
	        smenu->snome := m_aux1[i,2]
	NEXT
ELSE
	i := 0
	FOR i = 1 TO LEN(m_aux1)
	        ADIREG()
	        smenu->smenu := mcam+m_aux1[i,1]
	        smenu->snome := m_aux1[i,1]
	NEXT
	i := 0
	FOR i = 1 TO LEN(m_aux2)
	        ADIREG()
	        smenu->smenu := mcam+m_aux1[i,2]
	        smenu->snome := m_aux1[i,2]
	NEXT
ENDIF
//atencao(m_aux1)
DBCOMMIT()
DBUNLOCK()
*************
SELE('smenu')
GO TOP
*************
op_tela(00,00,22,15,'ARQUIVOS')
ocprod := TBROWSEDB(alb_lci,alb_cci,alb_lba-1,alb_cba)
colprod[1] := TBCOLUMNNEW('',{||smenu->snome})
alb_i:=0
FOR alb_i=1 TO LEN(colprod)
        ocprod:ADDCOLUMN(colprod[alb_i])
NEXT
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
WHILE .T.
        exibi_prg('SMEDALBUM')
        mensagem('<ESC>Retornar')
        alb_nkey := 0
        WHILE alb_nkey == 0         //.AND. ! ocprod:STABLE
                ocprod:FORCESTABLE()
                IF mletra = 'C'
                        op_tela(00,17,33,100,'ALBUM DO CLIENTE: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,'1',1)
                ELSEIF mletra = 'P'
                        op_tela(00,17,33,100,'ALBUM DO PRODUTOS: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,'1',1)
                ELSEIF mletra = 'R'
                        op_tela(00,17,33,100,'ALBUM DA RACA: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,'1',1)
                ELSE
                        op_tela(00,17,33,100,'ALBUM: '+mcodfoto+'-'+mnomefoto+' - Arquivo: '+smenu->smenu,'1',1)
                ENDIF
                WVW_DrawImage( ,00,00,34,83,smenu->smenu,.T.,.F.)
                setcor(1)
                alb_nkey := INKEY(0)
                wvw_lclosewindow()
                
        ENDDO
        IF alb_nkey == K_ESC
                EXIT
        ELSE
                IF genkey(ocprod,alb_nkey,'smenu')
                        ocprod := TBROWSEDB(alb_lci,alb_cci,alb_lba-1,alb_cba)
                        colprod[1] := TBCOLUMNNEW('Arquivo',{||smenu->snome})
                        alb_i:=0
                        FOR alb_i=1 TO LEN(ocolprod)
                                ocprod:ADDCOLUMN(colprod[alb_i])
                        NEXT
                        ocprod:FORCESTABLE()
                ENDIF
        ENDIF
END
smenu->(DBCLOSEAREA())
SELE(alb_msele);IF(alb_morde>0,ORDSETFOCUS(alb_morde),)
wvw_lclosewindow()
WVW_SetMouseMove(,.T.)
IF alb_nkey == K_ESC
        RELEASE alb_tela,alb_tela1,alb_lci,alb_cci,alb_lba,alb_cba,alb_msele,alb_morde,alb_men,ocprod,ocolprod[8],alb_i,alb_nkey,alb_opcao
        RETURN NIL
ELSE
        RELEASE alb_tela,alb_tela1,alb_lci,alb_cci,alb_lba,alb_cba,alb_msele,alb_morde,alb_men,ocprod,ocolprod[8],alb_i,alb_nkey,alb_opcao
        CLEAR GETS
        RETURN NIL
ENDIF
RETURN NIL
******************************* f i m *********************************************
FUNCTION fecha_tela
*******************
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
Function EXT(xArg1,xArg2,xArg3,xArg4,xArg5)
********************************************
xmsing_:= SubStr("$SIG$Real                    ",6)
xmplur_:= SubStr("$PLU$Reais                   ",6)
xArg2:= IIf(PCount() < 2 .OR. xArg2 = Nil,80,xArg2)
cruz_:= IIf(xArg3 = Nil,.T.,.F.)
xArg4:= IIf(xArg4 = Nil .OR. Empty(xArg4),xmsing_,padr(xArg4,24))
xArg5:= IIf(xArg5 = Nil .OR. Empty(xArg5),xmplur_,padr(xArg5,24))
sexo_:= IIf(Upper(right(Trim(xArg4),1)) = "A","a","o")
silaba:= "zen.tro.cen.nhe.tec.toc.vec.tor.zes.set.zoi.nov.ren.que.sen.ten.ven.vos.t"+sexo_+"s.tav.zad"
xArg1:= Abs(IIf(cruz_,xArg1,Int(xArg1)))
tx_:= "Duzent#s     Trezent#s    Quatrocent#s Quinhent#s   "
tcnd:= tx_+"Seiscent#s   Setecent#s   Oitocent#s   Novecent#s   "
tcnd:= strtran(tcnd,"#",sexo_)
tx_:= "Dez          Onze         Doze         Treze        "
tx_:= tx_+"Quatorze     Quinze       Dezesseis    Dezessete    "
tn_:= tx_+"Dezoito      Dezenove     "
tx_:= "Vinte        Trinta       Quarenta     Cinquenta    "
tndd:= tx_+"Sessenta     Setenta      Oitenta      Noventa      "
tx_:= "Zero         Um           Dois         Tres         "
tx_:= tx_+"Quatro       Cinco        Seis         Sete         "
tnuu:= tx_+"Oito         Nove         "
eh_:= " e "
nn_:= Str(Int(xArg1),15)
x1_:= x2_:= x3_:= x4_:= x5_:= scnd:= cnd:= "Zero"
ni_:= Int(xArg1)
jc_:= SubStr(Str(xArg1-ni_,4,2),3,2)
dc_:= Val(SubStr(jc_,1,1))
uc_:= Val(SubStr(jc_,2,1))
nj_:= IIf(dc_ = 1,"1","0")
ndc_:= IIf(dc_ = 1,Trim(SubStr(tn_,(uc_+1)*13-12,13)),Trim(SubStr(tndd,(dc_-1)*13-12,13)))
nuc_:= Trim(SubStr(tnuu,(uc_+1)*13-12,13))
If (nj_ = "1" .OR. dc_ # 0 .AND. uc_ = 0)
        sec_:= ndc_
Else
        If (dc_ = 0)
                sec_:= nuc_
        Else
                If (dc_ # 0 .AND. uc_ # 0)
                        sec_:= ndc_+eh_+nuc_
                EndIf
        EndIf
EndIf
If (Val(jc_) > 1)
        ce_:= sec_+" Centavos"
Else
        If (Val(jc_) = 1)
                ce_:= sec_+" Centavo"
        Else
                ce_:= ""
        EndIf
EndIf
l:= 15
nv:= 5
ind_ext_:= 0
Do While (nv > 0)
        If (SubStr(nn_,l-ind_ext_-2,3) = "   ")
                nv:= 0
                Loop
        EndIf
        n:= Val(SubStr(nn_,l-ind_ext_-0,1))
        nd:= Val(SubStr(nn_,l-ind_ext_-1,1))
        nc:= Val(SubStr(nn_,l-ind_ext_-2,1))
        If (nc > 1)
                cnd:= Trim(SubStr(tcnd,(nc-1)*13-12,13))
        EndIf
        bhx:= "0"
        If (nd = 1)
                bhx:= "1"
                ndd:= Trim(SubStr(tn_,(n+1)*13-12,13))
        Else
                If (nd > 1)
                        ndd:= Trim(SubStr(tndd,(nd-1)*13-12,13))
                EndIf
        EndIf
        nuu:= Trim(SubStr(tnuu,(n+1)*13-12,13))
        If (bhx = "1" .OR. nd # 0 .AND. n = 0)
                snd:= ndd
        Else
                If (nd = 0)
                        snd:= nuu
                Else
                        If (nd # 0 .AND. n # 0)
                               snd:= ndd+eh_+nuu
                        EndIf
                EndIf
        EndIf
        If (nc = 1)
                scnd:= IIf(nd = 0 .AND. n = 0,"Cem","Cento e "+snd)
        Else
                If (nc = 0)
                        scnd:= snd
                Else
                        If (nc > 1 .AND. (nd # 0 .OR. n # 0))
                                scnd:= cnd+eh_+snd
                        Else
                                If (nc > 1 .AND. nd = 0 .AND. n = 0)
                                        scnd:= cnd
                                EndIf
                        EndIf
                EndIf
        EndIf
        If (ind_ext_ < 3)
                x1_:= scnd
        Else
                If (ind_ext_ > 2 .AND. ind_ext_ < 6)
                        x2_:= scnd
                Else
                        If (ind_ext_ > 5 .AND. ind_ext_ < 9)
                                x3_:= scnd
                        Else
                                If (ind_ext_ > 8 .AND. ind_ext_ < 12)
                                        x4_:= scnd
                                Else
                                        If (ind_ext_ > 11 .AND. ind_ext_ < 15)
                                                x5_:= scnd
                                        Else
                                                If (ind_ext_ > 15)
                                                        Return "NUMERO MAIOR QUE 1 TRILHAO"
                                                EndIf
                                        EndIf
                                EndIf
                        EndIf
                EndIf
        EndIf
        nv:= nv-1
        ind_ext_:= ind_ext_+3
EndDo
nx_:= " "
If (xArg1 > 999999999999 .AND. x5_ # "Zero")
        nx_:= IIf(x5_ = "Um",nx_+"Um Trilhao ",nx_+x5_+" Trilhoes ")
EndIf
If (x4_ # "Zero")
        nx_:= IIf(x4_ = "Um",nx_+"Um Bilhao ",nx_+x4_+" Bilhoes ")
EndIf
If (x3_ # "Zero")
        nx_:= IIf(x3_ = "Um",nx_+"Um Milhao ",nx_+x3_+" Milhoes ")
EndIf
If (x2_ # "Zero")
        nx_:= nx_+x2_+" Mil "
EndIf
If (x1_ # "Zero")
        nx_:= nx_+x1_
EndIf
If (cruz_)
        de_:= IIf(x1_ = "Zero" .AND. x2_ = "Zero"," de ","")
        If (ni_ > 0)
                cz_:= IIf(Int(xArg1) > 1,alltrim(xArg5),alltrim(xArg4))
                ec_:= IIf(xArg1-ni_ > 0," e ","")
        Else
                ec_:= cz_:= de_:= ""
        EndIf
Else
        de_:= cz_:= ec_:= ce_:= ""
EndIf
nx_:= IIf(sexo_ = "a" .AND. right(nx_,2) = "Um",nx_+sexo_,nx_)
nx_:= IIf(sexo_ = "a" .AND. right(nx_,4) = "Dois",Left(nx_,Len(nx_)-3)+"uas",nx_)
nx_:= IIf(cruz_,Trim(nx_+de_+" "+cz_+ec_+ce_),Trim(nx_))
nx_:= LTrim(nx_)
If (xArg2 < 40)
        Return nx_
EndIf
If (Len(nx_) <= xArg2)
        nx_:= padr(nx_,xArg2,"/")
        Return padr(nx_,3*xArg2," ")
Else
        e1:= ""
        Do While (Len(nx_) > xArg2)
                f1:= Left(nx_,xArg2+1)
                ij:= right(f1,3)
                Do While (!(ij $ silaba) .AND. right(f1,1) # " ")
                        f1:= Left(f1,Len(f1)-1)
                        ij:= right(f1,3)
                EndDo
                f1:= IIf(ij $ silaba,Left(f1,Len(f1)-3),Left(f1,Len(f1)-1))
                nx_:= LTrim(SubStr(nx_,Len(f1)+1))
                f1:= IIf(ij $ silaba,f1+"-",f1)
                If (Len(e1) < xArg2)
                        f1:= lpad(f1,xArg2,"/")
                Else
                        If (Len(f1) < xArg2)
                                f1:= strtran(f1," ","  ",1,xArg2-Len(f1))
                        EndIf
                EndIf
                e1:= e1+f1
        EndDo
        e1:= e1+padr(nx_,xArg2,"/")
EndIf
Return padr(e1,3*xArg2," ")
****************************  F I M **********************************
Function LPAD(xArg1,xArg2,xArg3)
********************************
xArg1:= IIf(ValType(xArg1) = "N",Str(xArg1),xArg1)
If (xArg2 = Nil)
        xArg2:= Len(xArg1)
        xArg3:= " "
Else
        If (xArg3 = Nil)
                If (ValType(xArg2) = "C")
                        xArg3:= xArg2
                        xArg2:= Len(xArg1)
                Else
                        xArg3:= " "
                EndIf
        EndIf
EndIf
Return padl(alltrim(xArg1),xArg2,xArg3)
***************************** F I M ****************************************
* VERIFICA A UF DO ESTADO
********************************
FUNCTION vuf(ve_uf)
*********************
IF EMPTY(ve_uf) .OR. AT(ve_uf,'AC,AL,AP,AM,BA,CE,ES,GO,MA,MT,MS,MG,PA,PB,PR,PE,PI,RN,RS,RR,RO,RJ,SC,SE,SP,TO,DF,EX') > 0
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
RETURN NIL
***************************** F I M ****************************************
Function VCGC(xArg1)
********************
If (Empty(xArg1))
        Return .T.
EndIf
xArg1:= Trim(xArg1)
If (Len(xArg1) # 14)
        Return .F.
EndIf
dv1_f:= Val(SubStr(xArg1,13,1))
dv2_f:= Val(SubStr(xArg1,14,1))
num_:= SubStr(xArg1,1,12)
dv1_c:= 0
posi_:= 12
mu_:= "543298765432"
Do While (posi_ > 0)
        dv1_c:= dv1_c+Val(SubStr(num_,posi_,1))*Val(SubStr(mu_,posi_,1))
        posi_--
EndDo
rest_:= dv1_c-Int(dv1_c/11)*11
dv1_c:= IIf(rest_ < 2,0,11-rest_)
dv_:= SubStr(Str(dv1_c,1),1)
num_:= num_+dv_
dv2_c:= 0
mu_:= "6"+mu_
posi_:= 13
Do While (posi_ > 0)
        dv2_c:= dv2_c+Val(SubStr(num_,posi_,1))*Val(SubStr(mu_,posi_,1))
        posi_--
EndDo
rest_:= dv2_c-Int(dv2_c/11)*11
dv2_c:= IIf(rest_ < 2,0,11-rest_)
Return dv1_c = dv1_f .AND. dv1_c = dv1_f .AND. dv2_c = dv2_f

*********************************  F I M *************************************
FUNCTION DrawLabel(linha,coluna,mtexto,mcor_tex,mcor_fundo,mnome_letra,mlargura,maltura)
WVW_DrawLabel(,linha,coluna,mtexto,,,mcor_tex,mcor_fundo,mnome_letra,mlargura,maltura,,FW_BOLD,,,)
RETURN NIL
*********************************  F I M *************************************
* FUNCAO DE DESTRIBUICAO DE CONSULTA
*************************************
FUNCTION menu_cons
******************
IF READVAR() = 'MCOD_CLI'   //.OR. READVAR() = 'MCOD_PRES'
        F7_CLI()
ELSEIF READVAR() = 'MCOD_FORN' .OR. READVAR() = 'MC_FORNECE' .OR. READVAR() = 'MCOD_FOR'
        F6_FORN()
ELSEIF READVAR() = 'MCCONV'
        f3_conv()
ELSEIF READVAR() == 'MCOD_VEND' .OR. READVAR() == 'MCOD_VEN'
        SACSENHA()
ELSE
        atencao('Modulo nao estar configurado para consulta entrar em contato com a HTI Sistemas...')
ENDIF
RETURN NIL
******************************* F I M ********************************
* MENU ALTERACAO FIRMAS
***********************
FUNCTION incl_firma(t)
**********************
LOCAL mprg:='INCL_FIRMA',;
      opcao,mrazao,mende,mbairro,mcidade,mcgc,mserie,mfone,;
      mdataini,mcgc_aux,mlogradouro,mcont_numer,mcont_compl,mcont_bairro,;
      mcont_cep,mcontato,mcont_tel,mnome_cab,;
      minsc,mcep,memail,mcont_cpf,mprodepe,mcodemp,minsc_mun,mcnae,mnumero,mcomplemento,;
      aret:={},m_emp:={}

IF ! ver_nivel(mprg,'INCLUSAO E ALTERACAO DA EMPRESA','1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
op_tela(0,0,29,100,' CONFIGURACAO DO SISTEMA P/FIRMA')
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(m_set) = 0
        sr_getconnection():exec('INSERT INTO sacsetup ('+;
                'SR_RECNO   ,SR_DELETED)'+;
                ' VALUES ('+;
                sr_cdbvalue(' ')+')',,.f.)
                sr_getconnection():exec('COMMIT',,.f.)
ENDIF
mdataini := DATE()
WHILE .T.
        opcao = 'S'
        setcor(1)
        DEVPOS(0, 2);DEVOUT('Data de Inicio............:')
        DEVPOS(1, 2);DEVOUT('Razao Social..............:')
        DEVPOS(2, 2);DEVOUT('CRM.......................:')
        DEVPOS(3, 2);DEVOUT('Especialidade Medica......:')
        DEVPOS(4, 2);DEVOUT('CNPJ/CPF..................:')
        DEVPOS(5, 2);DEVOUT('Inscricao.................:')
        DEVPOS(6, 2);DEVOUT('Inscricao Municipal.......:')
        DEVPOS(7 ,2);DEVOUT('Endereco..................:')
        DEVPOS(8 ,2);DEVOUT('Numero....................:')
        DEVPOS(9 ,2);DEVOUT('Complemento...............:')
        DEVPOS(10,2);DEVOUT('Bairro....................:')
        DEVPOS(11,2);DEVOUT('Cidade ...................:')
        DEVPOS(12,2);DEVOUT('Estado....................:')
        DEVPOS(13,2);DEVOUT('CEP.......................:')
        DEVPOS(14,2);DEVOUT('Telefones e Fax ..........:')
        DEVPOS(15,2);DEVOUT('EMAIL.....................:')
        DEVPOS(16,2);DEVOUT('Codigo de acesso..........:')
        DEVPOS(17,2);DEVOUT('Serie.....................:')
        IF t = NIL
                IF cod_operado = '999'
                        DEVPOS(17,30);DEVOUT(mserie)
                ENDIF
        ENDIF
        //@ lci+1,cci+25 GET mcodemp PICT '999'
        @ 0 ,30 GET mdataini
        @ 1 ,30 GET m_set[1,23] PICT '@!' VALID IF(EMPTY(m_set[1,23]),.F.,.T.)
        @ 2 ,30 GET m_set[1,46] PICT '@!'
        @ 3 ,30 GET m_set[1,47] PICT '@!'
        @ 4 ,30 GET m_set[1,33] PICT '@@r 99.999.999/9999-99' VALID IF(VCGC(m_set[1,33]),.T.,.F.) WHEN cod_operado = '999'
        @ 5 ,30 GET m_set[1,34] PICT '@!'
        @ 6 ,30 GET m_set[1,45] PICT '@!'
        @ 7 ,30 GET m_set[1,24] PICT '@!'
        @ 8 ,30 GET m_set[1,25] PICT '@!'
        @ 9 ,30 GET m_set[1,43] PICT '@!'
        @ 10,30 GET m_set[1,26] PICT '@!'
        @ 11,30 GET m_set[1,27] PICT '@!'
        @ 12,30 GET m_set[1,28] PICT '@!'       //VALID v_uf(m_set[1,28])
        @ 13,30 GET m_set[1,29]
        @ 14,30 GET m_set[1,44]
        @ 15,30 GET m_set[1,30]
        @ 16,30 GET m_set[1,37] WHEN cod_operado = '999'
        READ
        IF LASTKEY() = 27
                SET CURSOR ON
                EXIT
        ENDIF
        //mserie := '1'+SUBSTR(mcod_acess,3,1)+SUBSTR(mcod_acess,1,1)+SUBSTR(mcod_acess,4,1)+SUBSTR(mcod_acess,2,1)+SUBSTR(mcod_acess,5,1)
        mserie := '1'+SUBSTR(m_set[1,37],4,1)+SUBSTR(m_set[1,37],2,1)+SUBSTR(m_set[1,37],5,1)+SUBSTR(m_set[1,37],3,1)+SUBSTR(m_set[1,37],1,1)
        DEVPOS(17,30);DEVOUT(mserie)
        setcor(1)
        opcao := op_simnao('S','Confirma a Inclusao da Firma:')
        IF opcao = 'N'
                EXIT
        ENDIF
        ccomm := "UPDATE sacsetup SET "
        ccomm := ccomm + " dataini    = "+sr_cdbvalue(mdataini    )
        ccomm := ccomm + ",medico     = "+sr_cdbvalue(m_set[1,23] )
        ccomm := ccomm + ",crm        = "+sr_cdbvalue(m_set[1,46] )
        ccomm := ccomm + ",especiali  = "+sr_cdbvalue(m_set[1,47] )
        ccomm := ccomm + ",cnpj       = "+sr_cdbvalue(m_set[1,33] )
        ccomm := ccomm + ",insc       = "+sr_cdbvalue(m_set[1,34] )
        ccomm := ccomm + ",insc_mun   = "+sr_cdbvalue(m_set[1,45] )
        ccomm := ccomm + ",endereco   = "+sr_cdbvalue(m_set[1,24] )
        ccomm := ccomm + ",numero     = "+sr_cdbvalue(m_set[1,25] )
        ccomm := ccomm + ",complemento= "+sr_cdbvalue(m_set[1,43] )
        ccomm := ccomm + ",bairro     = "+sr_cdbvalue(m_set[1,26] )
        ccomm := ccomm + ",cidade     = "+sr_cdbvalue(m_set[1,27] )
        ccomm := ccomm + ",uf         = "+sr_cdbvalue(m_set[1,28] )
        ccomm := ccomm + ",cep        = "+sr_cdbvalue(m_set[1,29] )
        ccomm := ccomm + ",fone       = "+sr_cdbvalue(m_set[1,44] )
        ccomm := ccomm + ",email      = "+sr_cdbvalue(m_set[1,30] )
        ccomm := ccomm + ",cod_acess  = "+sr_cdbvalue(m_set[1,37] )
        ccomm := ccomm + ",serie      = "+sr_cdbvalue(mserie      )
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec('COMMIT',,.f.)
        m_set:={}
        sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
        sr_getconnection():exec('COMMIT',,.f.)
        EXIT
ENDDO
wvw_lclosewindow()
RETURN .T.
************************ F I M ***********************************************
* data: 03/12/2013 SENHA DE LIBERACAO DO SISCOM
***********************************************
FUNCTION senha_lib(mtp_senha)
*****************************
LOCAL mdig1,mdig2,mdig3,mdig4,mdig5,mcod_acesso,mdata_aux,mdias_fecha:=0,mchecar :='  /  /  ',mchecar1 :='  /  /  '
SET CENTURY OFF
mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
sr_getconnection():exec('COMMIT',,.f.)
SET CENTURY ON
IF ! EMPTY(m_set[1,21])
        mdias_fecha := (CTOD(SUBSTR(m_set[1,21],1,2)+'/'+SUBSTR(m_set[1,21],3,2)+'/20'+SUBSTR(m_set[1,21],5,2))) - DATE()
ENDIF
SET CENTURY OFF
setcor(1)
IF (mdias_fecha <= 0 .OR. SUBSTR(m_set[1,21],12,1) = '*') .AND. ! EMPTY(m_set[1,21])
                op_tela(10,10,15,90,'SENHA DE LIBERACAO DO SISTEMA ')
                WHILE .T.
                        mcod_acesso := SPACE(29)
                        setcor(3)
                        DEVPOS(1,1);DEVOUT(' FAVOR ENTRA EM CONTATO COM A  HTI Sistemas - Fone:(81)'+mfone_HTI)
                        DEVPOS(2,1);DEVOUT('    *** PARA SOLICITAR O CODIGO DE LIBERACAO DO SISTEMA ***')
                        setcor(1)
                        DEVPOS(4,1);DEVOUT('Digite o SENHA DE LIBERACAO:')
                        WVW_DrawBoxGet(,4,30,29)
                        @ 4,30 GET mcod_acesso PICT '@!'
                        READ
                        IF LASTKEY() = 27
                                fim(msit_tip,'*')
                                //RETURN NIL
                        ENDIF
                        IF LEN(ALLTRIM(mcod_acesso)) > 20
                                IF EMPTY(SUBSTR(mcod_acesso,1,14))
                                        LOOP
                                ELSEIF mcod_acesso = tira_pontos(mcgc_firm)
                                        mdata_aux := SUBSTR(mcod_acesso,15)
                                        mchecar := CTOD(SUBSTR(mdata_aux,1,2)+'/'+SUBSTR(mdata_aux,3,2)+'/'+SUBSTR(mdata_aux,5,2))
                                        mchecar1 := CTOD(SUBSTR(mdata_aux,9,2)+'/'+SUBSTR(mdata_aux,11,2)+'/'+SUBSTR(mdata_aux,7,2))
                                        //atencao(DTOC(mchecar))
                                        IF (mchecar - mchecar1) # VAL(SUBSTR(mdata_aux,13)) .OR. EMPTY(mchecar)
                                                atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                                                LOOP
                                        ENDIF
                                ELSE
                                        atencao('ESTE CODIGO NAO E PARA ESTA EMPRESA....')
                                        LOOP
                                ENDIF
                                SR_BEGINTRANSACTION()
                                        //TRY
                                                sr_getconnection():exec("UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(SUBSTR(mdata_aux,1,12)),,.f.)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                        //CATCH e
                                SR_ENDTRANSACTION()
                                EXIT
        		ELSEIF SUBSTR(mcod_acesso,1,8) = mdig1+mdig2+mdig3+mdig4+mdig5 .AND. LEN(ALLTRIM(mcod_acesso)) >= 10
                                IF VAL(SUBSTR(mcod_acesso,9)) = 0
                                        mdata_aux :=SPACE(11)
                                ELSE
                                        //mdata_sen := DATE() + VAL(SUBSTR(mcod_acesso,7))
                                        mdata_sen := DATE() + VAL(SUBSTR(mcod_acesso,9))
                                        //mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(mcod_acesso,1,6)
                                        mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(DTOC(DATE()),7,2)+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)
                                ENDIF
                                SR_BEGINTRANSACTION()
                                                sr_getconnection():exec("UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(mdata_aux),,.f.)
                                                sr_getconnection():exec('COMMIT',,.f.)
                                SR_ENDTRANSACTION()
                                EXIT
                        ELSE
                                atencao('CODIGO DE ACESSO NAO CONFERE....')
                                LOOP
                        ENDIF
                ENDDO
                fecha_tela()
ELSEIF (mdias_fecha <= 3 .AND. ! EMPTY(m_set[1,21])) .OR. mtp_senha # NIL  //.AND. ! EMPTY(CTOD(SUBSTR(m_set[1,21],1,2)+'/'+SUBSTR(m_set[1,21],3,2)+'/'+SUBSTR(m_set[1,21],5,2)))
        op_tela(10,10,15,90,'SENHA DE LIBERACAO DO SISTEMA ')
        WHILE .T.
                mcod_acesso := SPACE(29)
                botao(0,0,7,90)
                limpa(0,0,7,90)
                WVW_DrawImage( ,0,3,5,12,'HTI.JPG',.T.,.F.)
                setcor(3)
                DEVPOS(1,13);DEVOUT(PADC('ESTAR FALTANDO << '+STRZERO(mdias_fecha,2)+' DIAS >> PARA EXPIRAR O SISTEMA',60))
                DEVPOS(2,13);DEVOUT(PADC('ENTRE EM CONTATO COM A HTI Sistemas - Fone:(81)'+mfone_firm,60))
                setcor(1)
                DEVPOS(4,21);DEVOUT('Digite o SENHA DE LIBERACAO:')
                WVW_DrawBoxGet(,4,50,29)
                @ 4,50 GET mcod_acesso PICT '@!' VALID lim_get() WHEN men_get(0,0,'Digite CODIGO DE ACESSO, DEIXE EM BRANCO ou <ESC> p/PROSSEGUIR')
                READ
                IF LASTKEY() = 27 .OR. EMPTY(mcod_acesso)
                        EXIT
                ENDIF
                //atencao(dcrip(mcod_acesso))
                /*
                mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
                mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
                mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
                mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
                mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)
                */
                IF LEN(ALLTRIM(mcod_acesso)) > 20
                        IF EMPTY(SUBSTR(dcrip(mcod_acesso),1,14))
                                LOOP
                        ELSEIF SUBSTR(dcrip(mcod_acesso),1,14) = tira_pontos(mcgc_firm)
                                //atencao(SUBSTR(dcrip(mcod_acesso),15,12))
                                mdata_aux := SUBSTR(mcod_acesso,15)
                                mchecar := CTOD(SUBSTR(mdata_aux,1,2)+'/'+SUBSTR(mdata_aux,3,2)+'/'+SUBSTR(mdata_aux,5,2))
                                mchecar1 := CTOD(SUBSTR(mdata_aux,9,2)+'/'+SUBSTR(mdata_aux,11,2)+'/'+SUBSTR(mdata_aux,7,2))
                                //atencao(DTOC(mchecar))
                                IF (mchecar - mchecar1) # VAL(SUBSTR(mdata_aux,13)) .OR. EMPTY(mchecar)
                                        atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                                        LOOP
                                ENDIF
                        ELSE
                                atencao('ESTE CODIGO NAO E PARA ESTA EMPRESA....')
                                LOOP
                        ENDIF
                        SR_BEGINTRANSACTION()
                                        sr_getconnection():exec("UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(SUBSTR(mdata_aux,1,12)),,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                        SR_ENDTRANSACTION()
                        EXIT
                ELSEIF SUBSTR(mcod_acesso,1,8) = mdig1+mdig2+mdig3+mdig4+mdig5 .AND. LEN(ALLTRIM(mcod_acesso)) >= 10
                        IF VAL(SUBSTR(mcod_acesso,9)) = 0
                                mdata_aux :=SPACE(11)
                        ELSE
                                //mdata_sen := DATE() + VAL(SUBSTR(mcod_acesso,7))
                                mdata_sen := DATE() + VAL(SUBSTR(mcod_acesso,9))
                                //mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(mcod_acesso,1,6)
                                mdata_aux := SUBSTR(DTOC(mdata_sen),1,2)+SUBSTR(DTOC(mdata_sen),4,2)+SUBSTR(DTOC(mdata_sen),7,2) + SUBSTR(DTOC(DATE()),7,2)+SUBSTR(DTOC(DATE()),1,2)+SUBSTR(DTOC(DATE()),4,2)
                        ENDIF
                        SR_BEGINTRANSACTION()
                                sr_getconnection():exec("UPDATE sacsetup SET sysdatlm = "+sr_cdbvalue(mdata_aux),,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        SR_ENDTRANSACTION()
                        atencao('CODIGO DE ACESSO EFETUADO COM SUCESSO.... BOM TRABALHO')
                        EXIT
                ELSE
                        atencao('CODIGO DE ACESSO NAO CONFERE....')
                        LOOP
                ENDIF
        ENDDO
        fecha_tela()
ENDIF
RETURN NIL
**************************  F I M *******************************************
* FECHA AS CONEXOES COM O DB
****************************
FUNCTION fecha_conexaoDB
************************
IF nCnn = 0
        RETURN NIL
ENDIF
SR_BEGINTRANSACTION()
TRY
        SR_EndConnection(SR_GetActiveConnection(  ))
CATCH e
        SR_ENDTRANSACTION()
END
RETURN NIL
***************************  F I M ***********************************
FUNCTION ver_dia(mv)
***************
LOCAL mdia
IF dow(mv)=1
        mdia := 'DOMINGO'
ELSEIF dow(mv)=2
        mdia := 'SEGUNDA FEIRA'
ELSEIF dow(mv)=3
        mdia := 'TERCA FEIRA'
ELSEIF dow(mv)=4
        mdia := 'QUARTA FEIRA'
ELSEIF dow(mv)=5
        mdia := 'QUINTA FEIRA'
ELSEIF dow(mv)=6
        mdia := 'SEXTA FEIRA'
ELSEIF dow(mv)=7
        mdia := 'SABADO'
ENDIF
RETURN mdia
************************** F I M ***************************************
* mensagem dos GET'S
********************
FUNCTION men_get(men_li,men_ci,mensagem,mcol)
WVW_SBSetText(,1,'Mensagem: '+mensagem)
RETURN .T.
************************** F I M ***************************************8
* LIMPA mensagem dos GET'S
**************************
FUNCTION lim_get
****************
WVW_SBSetText(,1,' ')
RETURN .T.
******************************* F I M ********************************
* USO MEDICO OU CONSULTA
*************************
FUNCTION uso_cons()
*****************
LOCAL mprg:='SMEDROT',mop:=''
op_tela(10,30,20,80,'CONSULTA OU USO MEDICO',,1)
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
CLEAR GETS
WHILE .T.
        vcconv(cli->codconv)
        IF conv->modalidade = 'CH' .OR. conv->modalidade = 'SR'
                mrecib = 'N'
        ENDIF
        IF conv->modalidade = 'CR'
                mrecib = 'S'
        ENDIF
        uso_med := wvw_pbCreate(NIL,01,02,04,22,'[U]so Medico',,{||USO_CONSULTA('U')},,1,.F.)
        consult := wvw_pbCreate(NIL,01,25,04,45,'[C]onsulta',,{||USO_CONSULTA('C')},,1,.F.)
        DEVPOS(6,1);DEVOUT('Data Ultima Consulta.:')
        DEVPOS(7,1);DEVOUT('Data Proxima Consulta:')
        DEVPOS(8,1);DEVOUT('Data da Consulta.....:')
        DEVPOS(6,24);DEVOUT(DTOC(cli->datault))
        DEVPOS(7,24);DEVOUT(DTOC(cli->datault+conv->prazo))
        setcor(3)
        DEVPOS(10,1);DEVOUT('Nao foi informa o tipo de CONSULTA escolha')
        setcor(1)
        mop := INKEY(0)
        IF LASTKEY() = ASC('u') .OR. LASTKEY() = ASC('U')
                USO_CONSULTA('U')
        ELSEIF LASTKEY() = ASC('c') .OR. LASTKEY() = ASC('C')
                USO_CONSULTA('C')
        ENDIF
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mtp_consulta)
                atencao('Nao foi informa o tipo de CONSULTA escolha....')
                LOOP
        ENDIF
        @ 8,24 GET mdata_cons VALID IF(EMPTY(mdata_cons),.F.,.T.)
        READ
        IF mtp_consulta = 'C'
                IF mmod = 'CH' .OR. mmod = 'SR'
                        mrecib = 'N'
                ENDIF
                IF mmod = 'CR'
                        mrecib = 'S'
                ENDIF
                IF mdata_cons - cli->datault >= mprazo
                        mconsulta := 'C'
                ELSE
                        mconsulta := 'R'
                ENDIF

        ENDIF
        EXIT
ENDDO
WVW_PBDestroy( NIL, uso_med, .t. )
WVW_PBDestroy( NIL, consult, .t. )
WVW_SetMouseMove(,.T.)
wvw_lclosewindow()
RETURN NIL
//PRIVATE mprazo:=0,mmod,mfator,mrsoc,mvalor,mdata,mconsulta,mrecib
/*
op_tela(07,08,19,75,' CONSULTA DE CLIENTES PELO MEDICO ')
pode=.T.
WHILE .T.
        mvalor := 0
        mdata := DATE()
        mregistro := 0
        mnome := SPACE(35)
        mconsulta := SPACE(1)
        point=RECNO()
        mregistro := VAL(cli->registro)
        setcor(1)
        mreg := cli->registro
        mcconv := cli->codconv
        mnome := cli->nome
        vcconv(cli->codconv)
        mvalor := conv->valor_con
        DEVPOS(1,1 );DEVOUT('Data de Cadastro..........:')
        DEVPOS(2,1 );DEVOUT('Registro..................:')
        DEVPOS(3,1 );DEVOUT('Codigo Convenio...........:')
        DEVPOS(4,1 );DEVOUT('Data de Nascimento........:')
        DEVPOS(5,1 );DEVOUT('Idade.....................:')
        DEVPOS(6,1 );DEVOUT('Responsavel...............:')
        DEVPOS(7,1 );DEVOUT('Indicado Por..............:')
        DEVPOS(8,1 );DEVOUT('Profissao ................:')
        DEVPOS(9,1 );DEVOUT('Ultima Consulta...........:')
        DEVPOS(10,1);DEVOUT('Proxima Consulta..........:')
        DEVPOS(11,1);DEVOUT('[C]onsulta ou [U]so medico:')
        DEVPOS(12,1);DEVOUT('Data da Consulta..........:')
        setcor(3)
        DEVPOS(1,29);DEVOUT(DTOC(cli->data))
        DEVPOS(2,29);DEVOUT(cli->registro)
        DEVPOS(2,COL());DEVOUT('-'+cli->nome)
        DEVPOS(3,29);DEVOUT(mrsoc)
        DEVPOS(4,29);DEVOUT(DTOC(cli->datans))
        DEVPOS(5,29);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(6,29);DEVOUT(cli->resp)
        DEVPOS(7,29);DEVOUT(cli->indica)
        DEVPOS(8,29);DEVOUT(cli->profissao)
        DEVPOS(9,29);DEVOUT(DTOC(cli->datault))
        DEVPOS(10,29);DEVOUT(DTOC(cli->datault+mprazo))
        mensagem("<C>onsulta - <U>so Medico - <ESC>Retorna" )
        opcao := 'U'
        @ 11,29 GET opcao PICT '@!' VALID opcao $ 'C,U'
        READ
        IF opcao = "C"
                mtp_consulta:='C'
                IF mmod = 'CH' .OR. mmod = 'SR'
                        mrecib = 'N'
                ENDIF
                IF mmod = 'CR'
                        mrecib = 'S'
                ENDIF
                @ 12,29 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        UNLOCK
                        LOOP
                ENDIF
                IF mdata - cli->datault >= mprazo
                        mconsulta := 'C'
                ELSE
                        mconsulta := 'R'
                ENDIF
                EXIT
                //smed311()
        ELSEIF opcao="U"
                mtp_consulta:='U'
                @ 12,29 GET mdata VALID IF(EMPTY(mdata),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        UNLOCK
                        LOOP
                ENDIF
                EXIT
        ELSEIF LASTKEY()=27
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* f i m *********************************************
*/
FUNCTION USO_CONSULTA(mtipo_cons)
*********************************
mtp_consulta := mtipo_cons
setcor(3)
DEVPOS(10,0);DEVOUT(IF(mtp_consulta='U','** USO MEDICO ** ','** CONSULTA ** ')+'Presione qualquer tecla para continuar....')
setcor(1)
RETURN NIL
******************************* f i m *********************************************
FUNCTION exibi_foto(f_lci,f_cci,f_lba,f_cba,mcaminho,c_tipo,mc_cli)
*******************************************************************
limpa(f_lci,f_cci,f_lba,f_cba)
botao(f_lci,f_cci,f_lba,f_cba)
IF FILE(ALLTRIM(mcaminho)+ALLTRIM(c_tipo+mc_cli+'.jpg'))
        WVW_DrawImage( ,f_lci,f_cci,f_lba,f_cba,ALLTRIM(mcaminho)+c_tipo+mc_cli+'.jpg',.T.,.F.)
ELSEIF FILE(ALLTRIM(mcaminho)+ALLTRIM(c_tipo+mc_cli+'.bmp'))
        WVW_DrawImage( ,f_lci,f_cci,f_lba,f_cba,ALLTRIM(mcaminho)+c_tipo+mc_cli+'.bmp',.T.,.F.)
ELSE
        WVW_DrawImage( ,f_lci,f_cci,f_lba,f_cba,ALLTRIM(mcaminho)+'htiusu.jpg',.T.,.F.)
ENDIF
WVW_DrawLabel(,f_lba+2,f_cci+5,c_tipo+mc_cli+'.jpg',,,,, 'lucida console',15,7,,,,,)
