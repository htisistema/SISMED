********************************
* MENU AGENDA DE CONSULTA
********************************

FUNCTION smed440
*****************

LOCAL mdia,i,mdata,lci,cci,lba,cba

PRIVATE tela,mcont,mconsulta,mdata_cons,mturno

lci := 05
cci := 03
lba := 23
cba := 75

tela := SAVESCREEN(00,00,24,79)

*********************************************
CLOSE ALL
abriarq('smedtab','tab')
abriarq('insopera','sen')
* SET INDEX TO sen_sen,sen_cod
abriarq('smedcli','cli')
* SET INDEX TO cadnome,cadreg
abriarq('smedconv','conv')
* SET INDEX TO convcod
abriarq('smedcon','cons')
* SET INDEX TO consdat,conshora,consnome,consturn
******************************************************************

WHILE .T.
        mcont := 0
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+1,cci+12 TO lba-3,cci+12
        @ lci+1,cci+24 TO lba-3,cci+24
        @ lci+1,cci+36 TO lba-3,cci+36
        @ lci+1,cci+48 TO lba-3,cci+48
        @ lci+1,cci+60 TO lba-3,cci+60
        @ lba-2,cci+1 TO lba-2,cba-1
        setcor(1)
        mdata := DATE()
        i := 1
        ********************
        SELE('cons')
        SET ORDER TO 4
        ********************
        WHILE i <= 90
                IF DOW(mdata) = 1
                        SETCOLOR(vcor[6])
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
                        SETCOLOR(vcor[6])
                        mdia := 'S'
                ENDIF
                *******************
                SEEK DTOS(mdata)
                *******************
                IF FOUND()
                        IF turno = 'FE'
                                SETCOLOR(vcor[5])
                        ENDIF
                ENDIF
                IF DOW(mdata) <> 1 .AND. DOW(mdata) <> 7
                        ****************
                        SEEK DTOS(mdata)
                        ****************
                        IF ! FOUND()
                                setcor(1)
                        ELSE
                                WHILE mdata = data
                                        IF turno = 'FE' .OR. turno = 'EN'
                                                SKIP
                                        ENDIF
                                        mcont ++
                                        SKIP
                                ENDDO
                                IF turno = 'T1' .OR. turno = 'T2'
                                        IF mcont >= 13
                                                SETCOLOR(vcor[4])
                                        ENDIF
                                ENDIF
                                IF turno = 'TD'
                                        IF mcont >= 26
                                                SETCOLOR(vcor[4])
                                        ENDIF
                                ENDIF
                        ENDIF
                        mcont := 0
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
        SETCOLOR(vcor[6])
        DEVPOS(lba-1,cci+2);DEVOUT('Fim de Semana')
        setcor(1)
        DEVPOS(lba-1,COL()+1);DEVOUT('-')
        SETCOLOR(vcor[5])
        DEVPOS(lba-1,COL()+1);DEVOUT('Feriados')
        setcor(1)
        DEVPOS(lba-1,COL()+1);DEVOUT('-')
        SETCOLOR(vcor[4])
        DEVPOS(lba-1,COL()+1);DEVOUT('Dia Lotado')
        setcor(1)
        DEVPOS(lba-1,COL()+1);DEVOUT('-')
        setcor(1)
        DEVPOS(lba-1,COL()+1);DEVOUT('Dia com horario livre')
        setcor(1)
        mensagem('<I>ncl. <A>lter. <C>ons. <E>ncaixe e<X>cluir <T>urno <ESC>Abandonar')
        INKEY(0)
        IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                mconsulta := 'I'
        ELSEIF LASTKEY() = ASC('A') .OR. LASTKEY() = ASC('a')
                mconsulta := 'A'
        ELSEIF LASTKEY() = ASC('C') .OR. LASTKEY() = ASC('c')
                mconsulta := 'C'
        ELSEIF LASTKEY() = ASC('E') .OR. LASTKEY() = ASC('e')
                mconsulta := 'E'
        ELSEIF LASTKEY() = ASC('X') .OR. LASTKEY() = ASC('x')
                mconsulta := 'X'
        ELSEIF LASTKEY() = ASC('T') .OR. LASTKEY() = ASC('t')
                mconsulta := 'T'
        ELSEIF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ELSE
                LOOP
        ENDIF
        WHILE .T.
                ********************
                SELE('cons')
                SET ORDER TO 1
                ********************
                mcont := 0
                mturno := SPACE(2)
                mdata_cons := CTOD('  /  /  ')
                mensagem('Digite qualquer Data que esteja dentro da tela')
                apaga(lba-1,cci+1,lba-1,cba-1)
                DEVPOS(lba-1,cci+2);DEVOUT('Digite a Data:')
                @ lba-1,COL()+1 GET mdata_cons PICT '  /  /  ' VALID IF(mdata_cons < DATE(),.F.,.T.)
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                IF DOW(mdata_cons) = 1
                        atencao('DOMINGO')
                        LOOP
                ENDIF
                IF DOW(mdata_cons) = 7
                        atencao('SABADO')
                        LOOP
                ENDIF

                *********************
                SEEK DTOS(mdata_cons)
                *********************

                IF FOUND()
                        IF turno = 'FE'
                                atencao('Este dia e Feriado: '+nome)
                                LOOP
                        ENDIF
                        IF turno = 'EN'
                                WHILE mdata_cons = data .AND. turno = 'EN' .AND. ! EOF()
                                        SKIP
                                        LOOP
                                ENDDO
                        ENDIF
                        mturno := turno
                        IF mconsulta = 'T'
                                mensagem('Altere o tipo de turno que deseja')
                                DEVPOS(lba-1,cci+27);DEVOUT('Digite a Tipo de Turno:')
                                @ lba-1,COL()+1 GET mturno PICT '@!' VALID mturno $ 'T1,T2,TD'
                                READ
                                IF turno = 'T1' .AND. mturno = 'T2'
                                        LOOP
                                ENDIF
                                IF turno = 'T2' .AND. mturno = 'T1'
                                        LOOP
                                ENDIF
                                IF turno = 'TD' .AND. mturno = 'T1'
                                        LOOP
                                ENDIF
                                IF turno = 'TD' .AND. mturno = 'T2'
                                        LOOP
                                ENDIF
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma a Alteracao [S/n]:')
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF BLOQARQ()
                                                REPLA turno WITH mturno WHILE mdata_cons = data
                                                UNLOCK
                                                EXIT
                                        ELSE
                                                atencao('Nao foi possivel acessar o Arquivo')
                                        ENDIF
                                ENDIF
                                LOOP
                        ENDIF
                ELSE
                        IF mconsulta <> 'C' .AND. mconsulta <> 'E' .AND. mconsulta <> 'A'
                                mensagem('"T1" 1o.Turno  -  "T2" 2o.Turno  - "TD" Dois turnos')
                                DEVPOS(lba-1,cci+2);DEVOUT('Digite a Tipo de Turno:')
                                @ lba-1,COL()+1 GET mturno PICT '@!' VALID mturno $ 'T1,T2,TD'
                                READ
                                IF LASTKEY() = 27
                                        LOOP
                                ENDIF
                        ENDIF
                ENDIF
                IF mconsulta = 'E'
                        smed442()
                ELSE
                        smed441()
                ENDIF
                EXIT
        ENDDO
ENDDO
*************************************************************************
***************************************************
* CONSULTAR (incluir, alterar, excluir,consultar)
***************************************************

FUNCTION consulta(mnome,mhora,mtipo,mpos)
******************************************

LOCAL lci,cci,lba,cba,li,ci,lb,cb,tela,tela1,mcod_conv,opcao,point,mfone

PRIVATE mrsoc,mmod,mfator,mprazo,mvalor

lci := 06
cci := 03
lba := 20
cba := 40

li := 10
ci := 15
lb := 15
cb := 65

tela := SAVESCREEN(li,ci,lb,cb)
tela1 := SAVESCREEN(lci,cci,lba,cba)

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
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                                RESTSCREEN(li,ci,lb,cb,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                        IF opcao = 'N'
                                RESTSCREEN(li,ci,lb,cb,tela)
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
                                COMMIT
                                UNLOCK
                        ENDIF
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                                RESTSCREEN(li,ci,lb,cb,tela)
                                m_nome[mpos] := SPACE(35)
                                RETURN .T.
                        ENDIF
                        IF opcao = 'N'
                                RESTSCREEN(li,ci,lb,cb,tela)
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
                        COMMIT
                        UNLOCK
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                        RESTSCREEN(li,ci,lb,cb,tela)
                        RETURN .T.
                ENDIF
                IF opcao = 'N'
                        RESTSCREEN(li,ci,lb,cb,tela)
                        RETURN .T.
                ELSE
                        ADEL(m_nome,mpos)
*                       m_nome[mpos] := SPACE(35)
                        DELE
                        COMMIT
                        UNLOCK
                        RESTSCREEN(li,ci,lb,cb,tela)
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
                RESTSCREEN(li,ci,lb,cb,tela)
                RETURN .T.
        ENDIF

ENDDO
**************************** F I M **************************************
****************************************
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
