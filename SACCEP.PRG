***********************
* CONSULTA DE CEP
***********************

FUNCTION saccep
*****************
LOCAL mprg:='SACCEP'
LOCAL opcao,lci,cci,lba,cba,li,ci,la,ca,mcidade,mbairro,mnome,mcep

lci := cci := 0
lba = 14
cba = 30
li := ci := 0
la = 21
ca = 79
op_tela(11,10,14,30,'CONSULTA DE CEP')
opcao = 0
*----------------------------------------------------------------------------
CLOSE ALL
IF ! FILE("saccep.dbf")
        atencao("Entre em contato com a INSERCOM para adiquiri o ARQUIVO DE CEP'S",2)
        RETURN NIL
ENDIF
IF ! FILE("sacceplo.dbf")
        atencao("Entre em contato com a INSERCOM para adiquiri o ARQUIVO DE CEP'S",2)
        RETURN NIL
ENDIF
USE saccep ALIAS cep SHARED NEW
* SET INDEX TO saccep1,saccep2
USE sacceplo ALIAS ceplo SHARED NEW
* SET INDEX TO saccepl1,saccepl2
*----------------------------------------------------------------------------
WHILE .T.
        exibi_prg(mprg)
        @ lci+1,cci+1 PROMPT ' Pernambuco       ' 
        @ lci+2,cci+1 PROMPT ' Interior do Pais '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                        op_tela(16,00,21,79,' Consulta CEP das ruas de Pernambuco ')
                        WHILE .T.
                                setcor(1)
                                mcidade := SPACE(60)
                                mbairro := SPACE(30)
                                mnome   := SPACE(60)
                                mcep    := SPACE(4)
                                @ li+1,ci+12 SAY mcidade PICT '@!'
                                @ li+2,ci+12 SAY mbairro PICT '@!'
                                @ li+3,ci+12 SAY mnome PICT '@!'
                                @ li+4,ci+12 SAY mcep PICT '@@R 99999-999'
                                DEVPOS(li+1,ci+1);DEVOUT('Cidade...:')
                                DEVPOS(li+2,ci+1);DEVOUT('Bairro...:')
                                DEVPOS(li+3,ci+1);DEVOUT('Nome.....:')
                                DEVPOS(li+4,ci+1);DEVOUT('CEP......:')
                                @ li+1,ci+12 GET mcidade PICT '@!'
                                @ li+2,ci+12 GET mbairro PICT '@!' VALID IF(! EMPTY(mcidade) .AND. EMPTY(mbairro),.F.,.T.) WHEN ! EMPTY(mcidade)
                                @ li+3,ci+12 GET mnome PICT '@!' VALID IF(! EMPTY(mcidade) .AND. EMPTY(mnome),.F.,.T.)
                                @ li+4,ci+12 GET mcep PICT '@@R 99999-999' WHEN EMPTY(mcidade) .AND. EMPTY(mbairro) .AND. EMPTY(mnome)
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcidade)
                                        ****************************
                                        SELE('cep');ORDSETFOCUS(1)
                                        GO TOP
                                        ****************************
                                        IF ! cep->(DBSEEK(mnome+mcidade+mbairro))
                                                atencao('Nao foi possivel encontrar este CEP')
                                                LOOP
                                        ENDIF
                                        WHILE .T.
                                                DEVPOS(li+1,ci+12);DEVOUT(local)
                                                DEVPOS(li+2,ci+12);DEVOUT(bairro1)
                                                DEVPOS(li+3,ci+12);DEVOUT(RTRIM(tipo)+' - '+nome)
                                                DEVPOS(li+4,ci+12);DEVOUTPICT(cep8,'@@R 99999-999')
                                                INKEY(0)
                                                IF LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                                IF LASTKEY() = 5
                                                        SKIP
                                                        IF EOF()
                                                                atencao('Fim de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 24
                                                        SKIP -1
                                                        IF BOF()
                                                                atencao('Inicio de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                ELSEIF ! EMPTY(mnome)
                                        ****************************
                                        SELE('cep');ORDSETFOCUS(1)
                                        GO TOP
                                        ****************************
                                        IF ! cep->(DBSEEK(RTRIM(mnome)))
                                                atencao('Nao foi possivel encontrar este CEP')
                                                LOOP
                                        ENDIF
                                        WHILE .T.
                                                DEVPOS(li+1,ci+12);DEVOUT(local)
                                                DEVPOS(li+2,ci+12);DEVOUT(bairro1)
                                                DEVPOS(li+3,ci+12);DEVOUT(RTRIM(tipo)+' - '+nome)
                                                DEVPOS(li+4,ci+12);DEVOUTPICT(cep8,'@@R 99999-999')
                                                INKEY(0)
                                                IF LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                                IF LASTKEY() = 5
                                                        SKIP
                                                        IF EOF()
                                                                atencao('Fim de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 24
                                                        SKIP -1
                                                        IF BOF()
                                                                atencao('Inicio de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                ELSEIF ! EMPTY(mcep)
                                        ****************************
                                        SELE('cep');ORDSETFOCUS(2)
                                        GO TOP
                                        ****************************
                                        IF ! cep->(DBSEEK(RTRIM(mcep)))
                                                atencao('Nao foi possivel encontrar este CEP')
                                                LOOP
                                        ENDIF
                                        WHILE .T.
                                                DEVPOS(li+1,ci+12);DEVOUT(local)
                                                DEVPOS(li+2,ci+12);DEVOUT(bairro1)
                                                DEVPOS(li+3,ci+12);DEVOUT(RTRIM(tipo)+' - '+nome)
                                                DEVPOS(li+4,ci+12);DEVOUTPICT(cep8,'@R 99999-999')
                                                INKEY(0)
                                                IF LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                                IF LASTKEY() = 5
                                                        SKIP
                                                        IF EOF()
                                                                atencao('Fim de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 24
                                                        SKIP -1
                                                        IF BOF()
                                                                atencao('Inicio de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
                CASE opcao = 2
                        op_tela(16,00,21,79,'Consulta CEP das ruas de Pernambuco')
                        WHILE .T.
                                setcor(1)
                                mcidade := SPACE(40)
                                mcep    := SPACE(8)
                                @ li+1,ci+12 SAY mcidade PICT '@!'
                                @ li+2,ci+12 SAY SPACE(2) PICT '@!'
                                @ li+3,ci+12 SAY mcep PICT '@@R 99999-999'
                                DEVPOS(li+1,ci+1);DEVOUT('Cidade...:')
                                DEVPOS(li+2,ci+1);DEVOUT('Estado...:')
                                DEVPOS(li+3,ci+1);DEVOUT('CEP......:')
                                @ li+1,ci+12 GET mcidade PICT '@!'
                                @ li+3,ci+12 GET mcep PICT '@@R 99999-999' WHEN EMPTY(mcidade)
                                READ
                                IF LASTKEY() = 27
                                        EXIT
                                ENDIF
                                IF ! EMPTY(mcidade)
                                        ****************************
                                        SELE('ceplo');ORDSETFOCUS(1)
                                        GO TOP
                                        ****************************
                                        IF ! ceplo->(DBSEEK(RTRIM(mcidade)))
                                                atencao('Nao foi possivel encontrar este CEP')
                                                LOOP
                                        ENDIF
                                        WHILE .T.
                                                DEVPOS(li+1,ci+12);DEVOUT(nome)
                                                DEVPOS(li+2,ci+12);DEVOUT(uf)
                                                DEVPOS(li+3,ci+12);DEVOUTPICT(cep8,'@@R 99999-999')
                                                INKEY(0)
                                                IF LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                                IF LASTKEY() = 5
                                                        SKIP
                                                        IF EOF()
                                                                atencao('Fim de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 24
                                                        SKIP -1
                                                        IF BOF()
                                                                atencao('Inicio de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                ELSEIF ! EMPTY(mcep)
                                        ****************************
                                        SELE('ceplo');ORDSETFOCUS(2)
                                        GO TOP
                                        ****************************
                                        IF ! ceplo->(DBSEEK(RTRIM(mcep)))
                                                atencao('Nao foi possivel encontrar este CEP')
                                                LOOP
                                        ENDIF
                                        WHILE .T.
                                                DEVPOS(li+1,ci+12);DEVOUT(nome)
                                                DEVPOS(li+2,ci+12);DEVOUT(uf)
                                                DEVPOS(li+3,ci+12);DEVOUTPICT(cep8,'@@R 99999-999')
                                                INKEY(0)
                                                IF LASTKEY() = 27
                                                        EXIT
                                                ENDIF
                                                IF LASTKEY() = 5
                                                        SKIP
                                                        IF EOF()
                                                                atencao('Fim de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                                IF LASTKEY() = 24
                                                        SKIP -1
                                                        IF BOF()
                                                                atencao('Inicio de Arquivo !!!')
                                                        ENDIF
                                                        LOOP
                                                ENDIF
                                        ENDDO
                                ENDIF
                        ENDDO
                        wvw_lclosewindow()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

