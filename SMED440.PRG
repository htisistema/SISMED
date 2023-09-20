* MENU AGENDA DE CONSULTA
**************************
FUNCTION smed440
****************
LOCAL mprg:='SMED440',mdia,i,lci,cci,lba,cba,point,mtela1,mmarca_hr,opcao,mpoint,turno2,;
      mdata_cons,magenda:={},mhoras:={},mdados:={},mdata,domingo,mcod_cli

PRIVATE mrsocial,mnome,mfone,mdatans

lci := cci := 0
lba := 35
cba := 75

li := 00
ci := 00
lb := 45
cb := 79
*********************************************
CLOSE ALL
abriarq('smedtab','tab')
abriarq('insopera','sen')
abriarq('smedcli','cli')
abriarq('smedconv','conv')
abriarq('smedcon','cons')
******************************************************************
domingo := 'w/r,x'
op_tela(0,0,lba,75,'AGENDA DE CONSULTA',,1)
WvW_PBSetFont( NIL, 'times', 25, 10,)
nBota := wvw_pbCreate(NIL,lba-3,54,lba-1,74,'Consulta AGENDA',NIL,{||cons_agenda()})
WVW_PBEnable( NIL, nBota, .T. )
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)

WHILE .T.
        exibi_prg(mprg)
        mpoint := 0
        setcor(3)
        @ lci+1,cci+12 TO lba-5,cci+12
        @ lci+1,cci+24 TO lba-5,cci+24
        @ lci+1,cci+36 TO lba-5,cci+36
        @ lci+1,cci+48 TO lba-5,cci+48
        @ lci+1,cci+60 TO lba-5,cci+60
        @ lba-4,cci+1 TO lba-4,cba-1
        //@ lba-2,cci+1 TO lba-2,cba-1
        setcor(1)
        i := 1
        mdata := DATE()
        ********************
        SELE('cons')
        SET ORDER TO 4
        ********************
        WHILE i <= 90
                IF DOW(mdata) = 1
                        SETCOLOR(domingo)
                        mdia := 'D'
                ELSEIF DOW(mdata) = 2
                        mdia := 'S'
                ELSEIF DOW(mdata) = 3
                        mdia := 'T'
                ELSEIF DOW(mdata) = 4
                        mdia := 'Q'
                ELSEIF DOW(mdata) = 5
                        mdia := 'Q'
                ELSEIF DOW(mdata) = 6
                        mdia := 'S'
                ELSE
                        SETCOLOR(domingo)
                        mdia := 'S'
                ENDIF
                *******************
                SEEK DTOS(mdata)
                *******************
                IF FOUND()
                        IF turno = 'FE'
                                SETCOLOR(vcor[6])
                        ENDIF
                ENDIF
                IF DOW(mdata) <> 1 .AND. DOW(mdata) <> 7 .AND. turno <> 'FE'
                        setcor(1)
                ENDIF
                IF i <= 15
                        DEVPOS(lci+i,cci+2);DEVOUT(mdata)
                        DEVPOS(lci+i,cci+11);DEVOUT(mdia)
                        setcor(1)
                ELSEIF i <= 30
                        DEVPOS(lci+i-15,cci+14);DEVOUT(mdata)
                        DEVPOS(lci+i-15,cci+23);DEVOUT(mdia)
                        setcor(1)
                ELSEIF i <= 45
                        DEVPOS(lci+i-30,cci+26);DEVOUT(mdata)
                        DEVPOS(lci+i-30,cci+35);DEVOUT(mdia)
                        setcor(1)
                ELSEIF i <= 60
                        DEVPOS(lci+i-45,cci+38);DEVOUT(mdata)
                        DEVPOS(lci+i-45,cci+47);DEVOUT(mdia)
                        setcor(1)
                ELSEIF i <= 75
                        DEVPOS(lci+i-60,cci+50);DEVOUT(mdata)
                        DEVPOS(lci+i-60,cci+59);DEVOUT(mdia)
                        setcor(1)
                ELSE
                        DEVPOS(lci+i-75,cci+62);DEVOUT(mdata)
                        DEVPOS(lci+i-75,cci+71);DEVOUT(mdia)
                        setcor(1)
                ENDIF
                i ++
                mdata ++
        ENDDO
        SETCOLOR(domingo)
        DEVPOS(lba-3,cci+2);DEVOUT('Fim de Semana')
        setcor(1)
        DEVPOS(lba-3,COL()+1);DEVOUT('-')
        SETCOLOR(vcor[6])
        DEVPOS(lba-3,COL()+1);DEVOUT('Feriados')
        setcor(1)
        DEVPOS(lba-3,COL()+1);DEVOUT('-')
        setcor(1)
        DEVPOS(lba-3,COL()+1);DEVOUT('Dia livre')
        setcor(1)
        WHILE .T.
                ********************
                SELE('cons')
                SET ORDER TO 1
                ********************
                mturno := SPACE(2)
                mdata_cons := CTOD('  /  /  ')
                mensagem('Digite qualquer Data que esteja dentro da tela')
                apaga(lba-1,cci+1,lba-1,cba-1)
                DEVPOS(lba-1,cci+2);DEVOUT('Digite a Data:')
                @ lba-1,COL()+1 GET mdata_cons PICT '  /  /  '
                READ
                IF LASTKEY() = 27
                        CLOSE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF EMPTY(mdata_cons)
                        LOOP
                ENDIF
                IF DOW(mdata_cons) = 1
                        atencao('DOMINGO')
                        LOOP
                ENDIF
                IF DOW(mdata_cons) = 7
                        atencao('SABADO')
                        LOOP
                ENDIF
                IF mdata_cons < DATE()
                        atencao('Esta data nao estar no quadro de CONSULTAS')
                ENDIF
                mpoint := RECNO()
                IF turno = 'FE'
                        atencao('Este dia e Feriado: '+nome)
                        EXIT
                ENDIF
                op_tela(00,00,23,79,'AGENDA DE CONSULTA')
                WHILE .T.
                        *********************
                        SEEK DTOS(mdata_cons)
                        *********************
                        mcod_cli := '     '
                        mmarca_hr := SPACE(5)
                        mnome := SPACE(35)
                        mcod_conv := SPACE(2)
                        mfone := SPACE(13)
                        mdatans := CTOD('  /  /  ')
                        ASIZE(mhoras,0)
                        ASIZE(magenda,0)
                        ASIZE(mdados,0)

                        AADD(magenda,SPACE(15)+'***** P R I M E I R O    T U R N O *****')
                        AADD(magenda,REPLI('-',78))
                        turno2 := ' '
                        WHILE mdata_cons == cons->data
                                mrsocial := SPACE(30)
                                ver_conv(con_conv)
                                AADD(mhoras,hora)
                                AADD(mdados,{hora,nome,con_conv,fone,RECNO(),cod_cli,datans})
                                IF VAL(SUBSTR(hora,1,2)) >= 12 .AND. turno2 = ' '
                                        AADD(magenda,REPLI('-',78))
                                        AADD(magenda,SPACE(15)+'***** S E G U N D O    T U R N O *****')
                                        AADD(magenda,REPLI('-',78))
                                        turno2 := '*'
                                ENDIF
                                AADD(magenda,' '+hora+'³'+cod_cli+nome+'³'+con_conv+'-'+mrsocial)
                                SKIP
                        ENDDO
                        IF LEN(mhoras)==0
                                ASIZE(mhoras,0)
                                ASIZE(magenda,0)
                                ASIZE(mdados,0)

                                AADD(magenda,SPACE(15)+'***** NAO EXISTE NENHUMA CONSULTA MARCADA *****')
                                AADD(magenda,REPLI('-',78))
                        ENDIF
                        CLEAR TYPEAHEAD
                        setcor(3)
                        DEVPOS(li+1,ci+2);DEVOUT('Hora ')
                        DEVPOS(li+1,ci+7);DEVOUT('³')
                        DEVPOS(li+1,ci+9);DEVOUT('Nome')
                        DEVPOS(li+1,ci+43);DEVOUT('³')
                        DEVPOS(li+1,ci+45);DEVOUT('Convenio')
                        setcor(1)
                        @ li+3,ci+7 TO lb-4,ci+7
                        @ li+3,ci+43 TO lb-4,ci+43
                        setcor(3)
                        @ li+2,ci TO li+2,cb
                        @ lb-3,ci TO lb-3,cb
                        setcor(1)
                        mensagem("<ESC>Retorna  <ENTER>p/Incluir, Alteracao e Exclusao" )
                        point := ACHOICE(li+3,ci+1,lb-4,cb-1,magenda)
                        DO CASE
                                CASE LASTKEY()=27
                                        EXIT
                                CASE LASTKEY() = 13
                                        op_tela(00,00,5,79,'AGENDA DE CONSULTA',,1)
                                        mensagem('<CTRL+Y>p/apagar nome p/exclusao da consulta  <ESC>retornar')
                                        DEVPOS(0,1);DEVOUT('Hora....:')
                                        DEVPOS(1,1);DEVOUT('Nome....:')
                                        DEVPOS(2,1);DEVOUT('Convenio:')
                                        DEVPOS(3,1);DEVOUT('Fone....:')
                                        DEVPOS(4,1);DEVOUT('Nasc....:')
                                        @ 0,11 GET mmarca_hr PICT '99:99'
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        mponto := ASCAN(mhoras,mmarca_hr)
                                        IF mponto > 0
                                                mnome := mdados[mponto,2]
                                                mcod_cli := mdados[mponto,6]
                                                mcod_conv := mdados[mponto,3]
                                                mfone := mdados[mponto,4]
                                                mdatans := mdados[mponto,7]
                                        ENDIF
                                        @ 1,11 GET mcod_cli PICT '99999' VALID vercli(mcod_cli,1,17)
                                        @ 1,17 GET mnome PICT '@!'
                                        @ 2,11 GET mcod_conv PICT '99' VALID ver_conv(mcod_conv,2,14) WHEN ver_conv(mcod_conv,2,14) .AND. ! EMPTY(mnome)
                                        @ 3,11 GET mfone PICT '@!' WHEN mnome <> SPACE(35)
                                        @ 4,11 GET mdatans WHEN mnome <> SPACE(35)
                                        READ
                                        IF LASTKEY() = 27
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF mponto > 0 .AND. EMPTY(mnome)
                                                opcao := op_simnao('N','Deseja desmarcar esta consulta [s/N]:')
                                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                                        wvw_lclosewindow()
                                                        LOOP
                                                ENDIF
                                                GO mdados[mponto,5]
                                                IF ! BLOQREG()
                                                        LOOP
                                                ENDIF
                                                DELE
                                                DBUNLOCK()
                                                DBCOMMIT()
                                                wvw_lclosewindow()
                                                LOOP
                                        ELSEIF mponto = 0 .AND. EMPTY(mnome)
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        opcao := op_simnao('S','Confirma os Dados [S/n]:')
                                        IF LASTKEY() = 27 .OR. opcao = 'N'
                                                wvw_lclosewindow()
                                                LOOP
                                        ENDIF
                                        IF mponto > 0
                                                GO mdados[mponto,5]
                                                IF ! BLOQREG()
                                                        atencao('Nao foi possivel acessar o Arquivo')
                                                ENDIF
                                                cons->data := mdata_cons
                                                cons->hora := mmarca_hr
                                                cons->cod_cli := mcod_cli
                                                cons->nome := mnome
                                                cons->con_conv := mcod_conv
                                                cons->datans := mdatans
                                                cons->fone := mfone
                                                DBUNLOCKALL()
                                                DBCOMMITALL()
                                        ELSE
                                                IF ! ADIREG()
                                                        atencao('Nao foi possivel acessar o Arquivo')
                                                ENDIF
                                                cons->data := mdata_cons
                                                cons->hora := mmarca_hr
                                                cons->cod_cli := mcod_cli
                                                cons->nome := mnome
                                                cons->con_conv := mcod_conv
                                                cons->datans := mdatans
                                                cons->fone := mfone
                                                DBUNLOCKALL()
                                                DBCOMMITALL()
                                        ENDIF
                                        wvw_lclosewindow()
                        ENDCASE
                ENDDO
                wvw_lclosewindow()
        ENDDO
ENDDO
*************************************************************************
* CONSULTAR (incluir, alterar, excluir,consultar)
***************************************************
FUNCTION consulta(mnome,mhora,mtipo,mpos)
******************************************
LOCAL li,ci,lb,cb,tela,tela1,mcod_conv,opcao,point,mfone
PRIVATE mrsoc,mmod,mfator,mprazo,mvalor

li := 10
ci := 15
lb := 15
cb := 65

tela := SAVESCREEN(00,00,24,79)
tela1 := SAVESCREEN(lci,cci-1,lba+1,cba)
IF mnome = SPACE(35)
        RETURN .T.
ENDIF
IF LASTKEY() = 5
        RETURN .T.
ENDIF
IF LASTKEY() = 24
        RETURN .T.
ENDIF
CLEAR GETS
WHILE .T.
        mfone := SPACE(8)
        mcod_conv := SPACE(2)
        mrsoc := SPACE(30)
        botao(li,ci,lb,cb)
        @ li+1,ci+1 TO li+1,cb-1
        IF mtipo = 'I'
                DEVPOS(li,ci);DEVOUT(' Inclusao de Consulta ')
                DEVPOS(li+2,ci+2);DEVOUT('Nome....:')
                DEVPOS(li+3,ci+2);DEVOUT('Convenio:')
                DEVPOS(li+4,ci+2);DEVOUT('Fone....:')
                @ li+2,ci+12 GET mnome PICT '@!'
                READ
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                IF EMPTY(mnome)
                        LOOP
                ENDIF
                *****************
                SELE('cli')
                SET ORDER TO 1
                *****************
                SEEK mnome
                IF FOUND()
                        mfone := fone
                        mcod_conv := codconv
                        vcconv(mcod_conv)
                        setcor(3)
                        DEVPOS(li+3,ci+12);DEVOUT(mcod_conv+'-'+mrsoc)
                        DEVPOS(li+4,ci+12);DEVOUTPICT(mfone,'999-9999')
                        setcor(1)
                ENDIF
                setcor(3)
                setcor(1)
                @ li+3,ci+12 GET mcod_conv PICT '99' VALID vcconv(mcod_conv)
                READ
                IF EMPTY(mcod_conv)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(li+3,ci+12);DEVOUT(mcod_conv+'-'+mrsoc)
                setcor(1)
                @ li+4,ci+12 GET mfone PICT '999-9999'
                READ
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                *****************
                SELE('cons')
                SET ORDER TO 3
                *****************
                SEEK mnome + DTOS(mdata_cons) + mhora
                IF FOUND()
                        opcao := op_simnao('N','Cliente com consulta marcada deseja marca novamente [s/N]:')
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                        IF opcao = 'N'
                                RESTSCREEN(00,00,24,79,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                ENDIF
                opcao := op_simnao('S','Confirma a Inclusao [S/n]:')
                IF LASTKEY() = 27
                        LOOP
                ENDIF
                IF opcao = 'N'
                        LOOP
                ELSE
                        ************************
                        SELE('cons')
                        SET ORDER TO 1
                        ************************
                        IF ADIREG()
                                REPLA turno WITH mturno
                                REPLA data WITH mdata_cons
                                REPLA hora WITH mhora
                                REPLA nome WITH mnome
                                REPLA con_conv WITH mcod_conv
                                REPLA fone WITH mfone
                                cons->datans := cli->datans
                                COMMIT
                                UNLOCK
                        ENDIF
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
        ELSEIF mtipo = 'A'
                DEVPOS(li,ci);DEVOUT(' Alteracao de Consulta ')
                DEVPOS(li+2,ci+2);DEVOUT('Nome....:')
                DEVPOS(li+3,ci+2);DEVOUT('Convenio:')
                DEVPOS(li+4,ci+2);DEVOUT('Fone....:')
                *****************
                SELE('cons')
                SET ORDER TO 3
                *****************

                SEEK m_nome[mpos] + DTOS(mdata_cons) + mhora

                point := RECNO()

                @ li+2,ci+12 GET m_nome[mpos] PICT '@!'
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                IF EMPTY(m_nome[mpos])
                        LOOP
                ENDIF
                mfone := fone
                mcod_conv := con_conv
                *****************
                SELE('cli')
                SET ORDER TO 1
                *****************
                SEEK m_nome[mpos]
                IF FOUND()
                        mfone := fone
                        mcod_conv := codconv
                        vcconv(mcod_conv)
                        setcor(3)
                        DEVPOS(li+3,ci+12);DEVOUT(mcod_conv+'-'+mrsoc)
                        DEVPOS(li+4,ci+12);DEVOUTPICT(mfone,'999-9999')
                        setcor(1)
                ENDIF
                @ li+3,ci+12 GET mcod_conv PICT '99' VALID vcconv(mcod_conv)
                READ
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                IF EMPTY(mcod_conv)
                        LOOP
                ENDIF
                setcor(3)
                DEVPOS(li+3,ci+12);DEVOUT(mcod_conv+'-'+mrsoc)
                setcor(1)
                @ li+4,ci+12 GET mfone PICT '999-9999'
                READ
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                *****************
                SELE('cons')
                SET ORDER TO 3
                *****************
                SEEK m_nome[mpos] + DTOS(mdata_cons) + mhora
                IF FOUND()
                        opcao := op_simnao('N','Cliente com consulta marcada deseja marca novamente [s/N]:')
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                        IF opcao = 'N'
                                RESTSCREEN(00,00,24,79,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                ENDIF

                GO point

                IF ! BLOQREG()
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma a Alteracao [S/n]:')
                IF LASTKEY() = 27
                        UNLOCK
                        LOOP
                ENDIF
                IF opcao = 'N'
                        UNLOCK
                        LOOP
                ENDIF
                IF opcao = 'S'
                        REPLA nome WITH m_nome[mpos]
                        REPLA con_conv WITH mcod_conv
                        REPLA fone WITH mfone
                        cons->datans := cli->datans
                        COMMIT
                        UNLOCK
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
        ELSEIF mtipo = 'X'
                DEVPOS(li,ci);DEVOUT(' Exclusao de Consulta ')
                DEVPOS(li+2,ci+2);DEVOUT('Nome....:')
                setcor(3)
                DEVPOS(li+2,ci+12);DEVOUT(mnome)
                setcor(1)
                DEVPOS(li+3,ci+2);DEVOUT('Convenio:')
                *****************
                SELE('cons')
                SET ORDER TO 3
                *****************

                SEEK m_nome[mpos] + DTOS(mdata_cons) + mhora

                IF FOUND()
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o Arquivo !!!')
                                LOOP
                        ENDIF
                ENDIF
                vcconv(con_conv)
                setcor(3)
                DEVPOS(li+3,ci+12);DEVOUT(con_conv+'-'+mrsoc)
                setcor(1)
                opcao := op_simnao('S','Confirma a Exclusao [S/n]:')
                IF LASTKEY() = 27
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
                IF opcao = 'N'
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ELSE
                        ADEL(m_nome,mpos)
*                       m_nome[mpos] := SPACE(35)
                        DELE
                        COMMIT
                        UNLOCK
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN .T.
                ENDIF
        ELSE
                DEVPOS(li,ci);DEVOUT(' Consultar ')
                DEVPOS(li+2,ci+2);DEVOUT('Nome....:')
                setcor(3)
                DEVPOS(li+2,ci+12);DEVOUT(mnome)
                setcor(1)
                DEVPOS(li+3,ci+2);DEVOUT('Convenio:')
                DEVPOS(li+4,ci+2);DEVOUT('Fone....:')
                *****************
                SELE('cons')
                SET ORDER TO 3
                *****************

                SEEK m_nome[mpos] + DTOS(mdata_cons) + mhora

                vcconv(con_conv)
                setcor(3)
                DEVPOS(li+3,ci+12);DEVOUT(con_conv+'-'+mrsoc)
                DEVPOS(li+4,ci+12);DEVOUTPICT(fone,'999-9999')
                setcor(1)
                mensagem('Pressione qualquer tecla p/continuar')
                INKEY(0)
                RESTSCREEN(00,00,24,79,tela)
                RETURN .T.
        ENDIF

ENDDO
**************************** F I M **************************************
* VERIFICA SE A HORA JA ESTA PREENCHIDA
****************************************
FUNCTION ver_hora(vhora)
************************
LOCAL msele,morde

msele := SELE()
morde := INDEXORD()
********************
SELE('cons')
SET ORDER TO 2
********************
SEEK vhora + DTOS(mdata_cons)
IF FOUND()
        atencao('Nesta hora e data ja esta preenchida OK!!!')
        SELE(msele)
        SET ORDER TO morde
        RETURN .F.
ELSE
        SELE(msele)
        SET ORDER TO morde
        RETURN .T.
ENDIF
**************************** F I M **************************************
* FUNCAO P/CONSULTAR CLIENTE
********************************
#include "inkey.ch"              // constantes de codigos das teclas

FUNCTION cons_agenda()
******************************************************
LOCAL mprg:='F7_CLI',f4tela,f4tela1,f4lci,f4cci,f4lba,f4cba,f4men,;
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
f4cba := 90 //79
f4msele := SELE()
f4morde := INDEXORD()
mcor_ant := SETCOLOR()
IF ! abriarq('smedcli','cli');RETURN NIL;ENDIF
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
setcor(1)
exibi_prg('SNED440')
op_tela(03,00,48,115,m_set[1,23]+SPACE(10)+' CONSULTA DA AGENDA ',,1)
//mflag := 0
CLEAR GETS
WVW_SetMousePos(,00,00)
WVW_SetMouseMove(,.F.)
WHILE .T.
        exibi_prg(mprg)
        limpa(0,0,50,120)
        setcor(1)
        DEVPOS(00,01);DEVOUT('Pesquisa Geral:')
        DEVPOS(01,01);DEVOUT('Nome Cliente..:')
        DEVPOS(02,01);DEVOUT('Cod.Convenio..:')
        setcor(3)
        @ 04,00 TO 04,120
        DEVPOS(05,01);DEVOUT('Cliente                           Codigo Dt.Agen. Horas Convenio                         Dat.Nasc. Telefone')
        @ 06,00 TO 06,120
        @ 43,00 TO 43,120
        DEVPOS(44,01);DEVOUT('Total de Clientes:')
        DEVPOS(44,27);DEVOUT('Tempo da Pesquisa:')
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
        mensagem('Escolha o Cliente tecle <ENTER> ou <ESC> p/Retornar')
        IF mpesquisa = '*'
                cComm  := "SELECT * FROM smedcon "
        ELSE
                cComm  := "SELECT * FROM smedcon WHERE "
                IF ! EMPTY(mcodconv)
                        ccomm := ccomm + " cod_conv = "+sr_cdbvalue(mcodconv)+" AND "
                ENDIF
                IF ! EMPTY(mpesquisa)
                        ccomm := ccomm + " (cod_cli     LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR nome      LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR datans    LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%');
                                       + " OR fone      LIKE "+sr_cdbvalue('%'+ALLTRIM(mpesquisa)+'%')+")"
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
                ver_conv(cons_m[i,6],,,,1)
                AADD(m_prod,cons_m[i,5]+' '+cons_m[i,4]+' '+DTOC(cons_m[i,2])+' '+cons_m[i,3];
                           +' '+cons_m[i,6]+'-'+mrsoc;
                           +' '+DTOC(cons_m[i,7]);
                           +' '+cons_m[i,8])
                        AADD(m_pos,cons_m[i,9])
                DEVPOS(44,20);DEVOUT(STRZERO(i,5))
        NEXT
        DEVPOS(44,46);DEVOUT(ELAPTIME(mhoras,TIME()))
        point := ACHOICE(7,0,42,120,m_prod,,,point)
        DO CASE
                CASE LASTKEY()=27
                        LOOP
                CASE LASTKEY() = 13
                        LOOP
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
