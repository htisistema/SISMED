*************************************
* EMITE ENDOSCOPIA PER-ORAL
*************************************
FUNCTION smedendo
*****************
LOCAL opcao,tela1,tela,mcod,mnome,mdata_pul,midade,msexo,msolicit,mmot_exa1,;
      mmot_exa2,mmot_exa3,mmot_exa4,mmetodo,mlaringe1,mlaringe2,mlaringe3,;
      mtraque1,mtraque2,mtraque3,mtraque4,mcarina,mbronq_d1,mbronq_d2,;
      mbronq_d3,mbronq_d4,mbronq_d5,mbronq_e1,mbronq_e2,mbronq_e3,mbronq_e4,;
      mbronq_e5,mmaterial1,mmaterial2,mmaterial3,mdiag1,mdiag2,mdiag3,mdiag4,;
      machou

PRIVATE traco
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := 00
cci := 02
lba := 22
cba := 79

li := 07
ci := 05
lb := 19
cb := 75

traco:=REPLI(CHR(223),80)
tela1 := SAVESCREEN(00,00,24,79)
**********************************
CLOSE ALL
abriarq('smedendo','endo')
* SET INDEX TO smedend1,smedend2,smedend3,smedend4,smedend5,smedend6
**********************************
WHILE .T.
        ***************
        SELE('endo')
        ORDSETFOCUS(6)
        GO TOP
        ***************
        SETCOR(3)
        botao(li,ci,lb,cb)
        @ li+1,ci+1 TO li+1,cb-1
        @ li+1,ci+15 SAY CHR(194)
        @ lb,ci+15 SAY CHR(193)
        @ li+2,ci+15 TO lb-1,ci+15
        SETCOR(1)
        janela(li,cb," Clientes ")
        DEVPOS(li+2,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+2,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+3,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+3,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+4,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+4,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+5,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+5,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+6,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+6,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+7,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+7,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+8,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+8,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+9,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+9,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+10,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+10,ci+17);DEVOUT('Cliente:')
        DEVPOS(li+11,ci+2);DEVOUT('Cod.:')
        DEVPOS(li+11,ci+17);DEVOUT('Cliente:')
        mensagem("<ENTER> para INCLUSAO ou CONSULTA  <ESC>Retorna" )
        point=RECNO()
        FOR f=1 TO 10
                IF ! EOF()
                        setcor(3)
                        @ li+1+f,ci+8 SAY cod
                        @ li+1+f,ci+25 SAY nome
                        setcor(1)
                        SKIP
                ELSE
                        setcor(3)
                        @ li+1+f,ci+8 SAY SPACE(5)
                        @ li+1+f,ci+25 SAY SPACE(40)
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
                CASE LASTKEY()=27
                        RESTSCREEN(00,00,24,79,tela1)
                        CLOSE ALL
                        RETURN NIL
                CASE LASTKEY()=13
                        tela := SAVESCREEN(00,00,24,79)
                        WHILE .T.
                                mcod := SPACE(5)
                                mnome := SPACE(35)
                                mdata_pul := DATE()
                                midade := 0
                                msexo := SPACE(1)
                                msolicit := SPACE(30)
                                mmot_exa1 := SPACE(50)
                                mmot_exa2 := SPACE(50)
                                mmot_exa3  := SPACE(50)
                                mmot_exa4  := SPACE(50)
                                mmetodo  := SPACE(50)
                                mlaringe1  := SPACE(50)
                                mlaringe2  := SPACE(50)
                                mlaringe3  := SPACE(50)
                                mtraque1  := SPACE(50)
                                mtraque2  := SPACE(50)
                                mtraque3  := SPACE(50)
                                mtraque4  := SPACE(50)
                                mcarina  := SPACE(50)
                                mbronq_d1  := SPACE(50)
                                mbronq_d2  := SPACE(50)
                                mbronq_d3  := SPACE(50)
                                mbronq_d4  := SPACE(50)
                                mbronq_d5  := SPACE(50)
                                mbronq_e1  := SPACE(50)
                                mbronq_e2  := SPACE(50)
                                mbronq_e3  := SPACE(50)
                                mbronq_e4  := SPACE(50)
                                mbronq_e5  := SPACE(50)
                                mmaterial1  := SPACE(50)
                                mmaterial2  := SPACE(50)
                                mmaterial3  := SPACE(50)
                                mdiag1  := SPACE(50)
                                mdiag2  := SPACE(50)
                                mdiag3  := SPACE(50)
                                mdiag4  := SPACE(50)
                                machou := SPACE(1)

                                SET INTEN ON
                                opcao := SPACE(1)
                                apaga(24,00,24,79)
                                Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

                                setcor(3)
                                botao(lci,cci,lba,cba)
                                janela(lci,cba,' Resultado Endoscopia Per-oral ')
                                setcor(1)
                                DEVPOS(lci+1,cci+2);DEVOUT('No.:')
                                DEVPOS(lci+1,cci+14);DEVOUT('Nome:')
                                DEVPOS(lci+1,cci+62);DEVOUT('Data:')
                                DEVPOS(lci+2,cci+2);DEVOUT('Idade.......:')
                                DEVPOS(lci+2,cci+22);DEVOUT('Sexo:')
                                DEVPOS(lci+2,cci+30);DEVOUT('Solicitante:')
                                @ lci+3,cci+1 TO lci+3,cba-1
                                DEVPOS(lci+4,cci+2);DEVOUT('Motivo do Exame...:')
                                DEVPOS(lci+8,cci+2);DEVOUT('Metodo............:')
                                DEVPOS(lci+9,cci+2);DEVOUT('LARINGE...........:')
                                DEVPOS(lci+12,cci+2);DEVOUT('TRAQUEIA..........:')
                                DEVPOS(lci+16,cci+2);DEVOUT('CARINA............:')
                                DEVPOS(lci+17,cci+2);DEVOUT('BRONQUIO DIREITO..:')
                                @ lci+1,cci+7 GET mcod PICT '99999'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela)
                                        EXIT
                                ENDIF
                                machou := SPACE(1)
                                IF ! EMPTY(mcod)
                                        ORDSETFOCUS(5)
                                        GO TOP
                                        IF endo->(DBSEEK(mcod))
                                                IF ! BLOQREG()
                                                        atencao('Nao foi possivel acessar o arquivo')
                                                        LOOP
                                                ENDIF
                                                machou := 'X'
                                                mcod := cod
                                                mnome := nome
                                                mdata_pul := data_pul
                                                midade := idade
                                                msexo := sexo
                                                msolicit := solicit
                                                mmot_exa1 := mot_exa1
                                                mmot_exa2 := mot_exa2
                                                mmot_exa3 := mot_exa3
                                                mmot_exa4  := mot_exa4
                                                mmetodo  := metodo
                                                mlaringe1  := laringe1
                                                mlaringe2  := laringe2
                                                mlaringe3  := laringe3
                                                mtraque1  := traque1
                                                mtraque2  := traque2
                                                mtraque3  := traque3
                                                mtraque4  := traque4
                                                mcarina  := carina
                                                mbronq_d1  := bronq_d1
                                                mbronq_d2  := bronq_d2
                                                mbronq_d3  := bronq_d3
                                                mbronq_d4  := bronq_d4
                                                mbronq_d5  := bronq_d5
                                                mbronq_e1  := bronq_e1
                                                mbronq_e2  := bronq_e2
                                                mbronq_e3  := bronq_e3
                                                mbronq_e4  := bronq_e4
                                                mbronq_e5  := bronq_e5
                                                mmaterial1  := material1
                                                mmaterial2  := material2
                                                mmaterial3  := material3
                                                mdiag1  := diag1
                                                mdiag2  := diag2
                                                mdiag3  := diag3
                                                mdiag4  := diag4
                                        ELSE
                                                atencao('Numero da endoscopia nao cadastrado ')
                                                LOOP
                                        ENDIF
                                ELSE
                                        ORDSETFOCUS(5)
                                        GO BOTT
                                        mcod := STRZERO(VAL(cod)+1,5)
                                ENDIF
                                SETCOR(3)
                                DEVPOS(lci+1,cci+7);DEVOUT(mcod)
                                SETCOR(1)
                                @ lci+1,cci+20 GET mnome PICT '@!' VALID IF(EMPTY(mnome),.F.,.T.)
                                @ lci+1,cci+68 GET mdata_pul
                                @ lci+2,cci+16 GET midade PICT '999'
                                @ lci+2,cci+28 GET msexo PICT '@!' VALID msexo $ 'F,M,G'
                                @ lci+2,cci+44 GET msolicit PICT '@!'

                                @ lci+4,cci+22 GET mmot_exa1 PICT '@!'
                                @ lci+5,cci+22 GET mmot_exa2 PICT '@!'
                                @ lci+6,cci+22 GET mmot_exa3 PICT '@!'
                                @ lci+7,cci+22 GET mmot_exa4 PICT '@!'
                                @ lci+8,cci+22 GET mmetodo PICT '@!'
                                @ lci+9,cci+22 GET mlaringe1 PICT '@!'
                                @ lci+10,cci+22 GET mlaringe2 PICT '@!'
                                @ lci+11,cci+22 GET mlaringe3 PICT '@!'
                                @ lci+12,cci+22 GET mtraque1 PICT '@!'
                                @ lci+13,cci+22 GET mtraque2 PICT '@!'
                                @ lci+14,cci+22 GET mtraque3 PICT '@!'
                                @ lci+15,cci+22 GET mtraque4 PICT '@!'
                                @ lci+16,cci+22 GET mcarina PICT '@!'
                                @ lci+17,cci+22 GET mbronq_d1 PICT '@!'
                                @ lci+18,cci+22 GET mbronq_d2 PICT '@!'
                                @ lci+19,cci+22 GET mbronq_d3 PICT '@!'
                                @ lci+20,cci+22 GET mbronq_d4 PICT '@!'
                                @ lci+21,cci+22 GET mbronq_d5 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela)
                                        LOOP
                                ENDIF
                                limpa(lci+4,cci+2,lci+21,cba-1)
                                DEVPOS(lci+4,cci+2);DEVOUT('BRONQUIO ESQUERDO.:')
                                @ lci+9,cci+1 TO lci+9,cba-1
                                DEVPOS(lci+10,cci+2);DEVOUT('MATERIAL COLHIDO..:')
                                @ lci+13,cci+1 TO lci+13,cba-1
                                DEVPOS(lci+14,cci+2);DEVOUT('DIAGNOSTICO.......:')
                                @ lci+18,cci+1 TO lci+18,cba-1
                                @ lci+4,cci+22 GET mbronq_e1 PICT '@!'
                                @ lci+5,cci+22 GET mbronq_e2 PICT '@!'
                                @ lci+6,cci+22 GET mbronq_e3 PICT '@!'
                                @ lci+7,cci+22 GET mbronq_e4 PICT '@!'
                                @ lci+8,cci+22 GET mbronq_e5 PICT '@!'
                                @ lci+10,cci+22 GET mmaterial1 PICT '@!'
                                @ lci+11,cci+22 GET mmaterial2 PICT '@!'
                                @ lci+12,cci+22 GET mmaterial3 PICT '@!'
                                @ lci+14,cci+22 GET mdiag1 PICT '@!'
                                @ lci+15,cci+22 GET mdiag2 PICT '@!'
                                @ lci+16,cci+22 GET mdiag3 PICT '@!'
                                @ lci+17,cci+22 GET mdiag4 PICT '@!'
                                READ
                                IF LASTKEY() = 27
                                        limpa(lci+4,cci+2,lci+21,cba-1)
                                        LOOP
                                ENDIF
                                opcao := op_simnao('S','Confirma Impressao [S/n]:')
                                IF LASTKEY() = 27
                                        limpa(li+4,cci+2,li+21,cba-1)
                                        LOOP
                                ENDIF
                                IF opcao = 'S'
                                        IF machou = ' '
                                                IF ! ADIREG()
                                                        atencao('Nao foi possivel acessar o arquivo')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                        endo->cod := mcod
                                        endo->nome := mnome
                                        endo->data_pul := mdata_pul
                                        endo->idade := midade
                                        endo->sexo := msexo
                                        endo->solicit := msolicit
                                        endo->mot_exa1 := mmot_exa1
                                        endo->mot_exa2 := mmot_exa2
                                        endo->mot_exa3 := mmot_exa3
                                        endo->mot_exa4 := mmot_exa4
                                        endo->metodo := mmetodo
                                        endo->laringe1 := mlaringe1
                                        endo->laringe2 := mlaringe2
                                        endo->laringe3 := mlaringe3
                                        endo->traque1 := mtraque1
                                        endo->traque2 := mtraque2
                                        endo->traque3 := mtraque3
                                        endo->traque4 := mtraque4
                                        endo->carina := mcarina
                                        endo->bronq_d1 := mbronq_d1
                                        endo->bronq_d2 := mbronq_d2
                                        endo->bronq_d3 := mbronq_d3
                                        endo->bronq_d4 := mbronq_d4
                                        endo->bronq_d5 := mbronq_d5
                                        endo->bronq_e1 := mbronq_e1
                                        endo->bronq_e2 := mbronq_e2
                                        endo->bronq_e3 := mbronq_e3
                                        endo->bronq_e4 := mbronq_e4
                                        endo->bronq_e5 := mbronq_e5
                                        endo->material1 := mmaterial1
                                        endo->material2 := mmaterial2
                                        endo->material3 := mmaterial3
                                        endo->diag1 := mdiag1
                                        endo->diag2 := mdiag2
                                        endo->diag3 := mdiag3
                                        endo->diag4 := mdiag4
                                        DBUNLOCKALL()
                                        DBCOMMITALL()
                                        IF ! imp_arq('SMED.REL')
                                                LOOP
                                        ENDIF
                                        mensagem('Espere o Final da Impressao OK')
                                        pitalico(.T.)
                                        @ PROW(),00 SAY CHR(14)
                                        @ PROW(),13 SAY 'ENDOSCOPIA PER-ORAL'
                                        @ PROW()+1,00 SAY CHR(14)
                                        @ PROW(),10 SAY 'VIDEO-FIBROBRONCOSCOPIA'
                                        @ PROW()+1,00 SAY CHR(18)
                                        @ PROW(),00 SAY PADC(m_set[1,23],80)

                                        @ PROW()+2,00 SAY PADL('No.: '+mcod,80)
                                        @ PROW(),00 SAY PADL('No.: '+mcod,80)
                                        @ PROW()+1,00 SAY 'Nome........:'
                                        @ PROW(),14 SAY mnome
                                        @ PROW(),51 SAY 'Data:'
                                        @ PROW(),57 SAY mdata_pul
                                        @ PROW(),00 SAY 'Nome........:'
                                        @ PROW(),51 SAY 'Data:'

                                        @ PROW()+1,00 SAY 'Idade.......:'
                                        @ PROW(),14 SAY midade
                                        @ PROW(),20 SAY 'Sexo:'
                                        @ PROW(),26 SAY msexo
                                        @ PROW(),31 SAY 'Solicitante:'
                                        @ PROW(),44 SAY msolicit
                                        @ PROW(),00 SAY 'Idade.......:'
                                        @ PROW(),20 SAY 'Sexo:'
                                        @ PROW(),31 SAY 'Solicitante:'

                                        @ PROW()+2,00 SAY 'Motivo do Exame...:'
                                        @ PROW(),22 SAY mmot_exa1
                                        @ PROW(),00 SAY 'Motivo do Exame...:'
                                        @ PROW()+1,22 SAY mmot_exa2
                                        @ PROW()+1,22 SAY mmot_exa3
                                        @ PROW()+1,22 SAY mmot_exa4

                                        @ PROW()+2,00 SAY 'Metodo............:'
                                        @ PROW(),22 SAY mmetodo
                                        @ PROW(),00 SAY 'Metodo............:'

                                        @ PROW()+2,00 SAY 'LARINGE...........:'
                                        @ PROW(),22 SAY mlaringe1
                                        @ PROW(),00 SAY 'LARINGE...........:'
                                        @ PROW()+1,22 SAY mlaringe2
                                        @ PROW()+1,22 SAY mlaringe3

                                        @ PROW()+2,00 SAY 'TRAQUEIA..........:'
                                        @ PROW(),22 SAY mtraque1
                                        @ PROW(),00 SAY 'TRAQUEIA..........:'
                                        @ PROW()+1,22 SAY mtraque2
                                        @ PROW()+1,22 SAY mtraque3
                                        @ PROW()+1,22 SAY mtraque4

                                        @ PROW()+2,00 SAY 'CARINA............:'
                                        @ PROW(),22 SAY mcarina
                                        @ PROW(),00 SAY 'CARINA............:'

                                        @ PROW()+2,00 SAY 'BRONQUIO DIREITO..:'
                                        @ PROW(),22 SAY mbronq_d1
                                        @ PROW(),00 SAY 'BRONQUIO DIREITO..:'
                                        @ PROW()+1,22 SAY mbronq_d2
                                        @ PROW()+1,22 SAY mbronq_d3
                                        @ PROW()+1,22 SAY mbronq_d4
                                        @ PROW()+1,22 SAY mbronq_d5

                                        @ PROW()+2,00 SAY 'BRONQUIO ESQUERDO.:'
                                        @ PROW(),22 SAY mbronq_e1
                                        @ PROW(),00 SAY 'BRONQUIO ESQUERDO.:'
                                        @ PROW()+1,22 SAY mbronq_e2
                                        @ PROW()+1,22 SAY mbronq_e3
                                        @ PROW()+1,22 SAY mbronq_e4
                                        @ PROW()+1,22 SAY mbronq_e5

                                        @ PROW()+2,00 SAY 'MATERIAL COLHIDO..:'
                                        @ PROW(),22 SAY mmaterial1
                                        @ PROW(),00 SAY 'MATERIAL COLHIDO..:'
                                        @ PROW()+1,22 SAY mmaterial2
                                        @ PROW()+1,22 SAY mmaterial3

                                        @ PROW()+2,00 SAY 'DIAGNOSTICO.......:'
                                        @ PROW(),22 SAY mdiag1
                                        @ PROW(),00 SAY 'DIAGNOSTICO.......:'
                                        @ PROW()+1,22 SAY mdiag2
                                        @ PROW()+1,22 SAY mdiag3
                                        @ PROW()+1,22 SAY mdiag4

                                        @ PROW()+3,30 SAY 'Recife,'
                                        @ PROW(),37 SAY mdata_pul
                                        @ PROW()+3,00 SAY PADC(REPLI('-',LEN(m_set[1,23])),80)
                                        @ PROW()+1,00 SAY PADC(m_set[1,23],80)
                                        @ PROW(),00 SAY PADC(m_set[1,23],80)
                                        @ PROW()+1,00 SAY PADC(crm,80)
                                        rodape()
                                        @ PROW()+1,90 SAY ' '
                                        EJECT
                                        SET DEVI TO  SCREEN
                                        RESTSCREEN(00,00,24,79,tela)
                                        IF mimp_tipo = 2
                                                FCLOSE('HTI.REL')
                                                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
                                        ELSEIF mimp_tipo = 1
                                                FCLOSE('HTI.REL')
                                                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
                                        ENDIF
                                        EXIT
                                ELSE
                                        LOOP
                                ENDIF
                        ENDDO
        ENDCASE
ENDDO
******************************* F I M  *************************************************

