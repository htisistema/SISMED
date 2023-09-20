*****************
* MENU MOVIMENTO
*****************

FUNCTION smed400
****************
LOCAL mprg:='SMED400',;
      opcao,lci,cci,lba,cba,li,ci,lb,cb,tela

lci := 05
cci := 25
lba := 17
cba := 48

li := 08
ci := 06
lb := 20
cb := 77

tela := SAVESCREEN(00,00,24,79)
opcao := 0
****************************************************
* VERIFICAR NIVEL DE ACESSO DA SENHA
****************************************************
* Niveis de acesso: 1 e 2
****************************************************
IF ! nivel('1','2')
        atencao('Acesso nao Autorizado !!!')
        RETURN NIL
ENDIF
****************************************************

WHILE .T.
        exibi_prg(mprg)
        apaga(23,00,23,79)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(9)
        @ lci+1,cci+1 PROMPT ' Caixa                ' MESSAGE '** Movimentacao do CAIXA - <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT ' Agenda Pessoal       ' MESSAGE '** Agenda Pessoal, <ESC> p/Retorno **'
        @ lci+3,cci+1 PROMPT ' Agenda Consultas     ' MESSAGE '** Marca Consultas e Excaixe, <ESC> p/Retorno **'
        @ lci+4,cci+1 PROMPT ' Marca Feriados       ' MESSAGE '** Marca os Feriados, <ESC> p/Retorno **'
        @ lci+5,cci+1 PROMPT ' Exclusao             ' MESSAGE '** Excluir os Agenda Compromisso e Consulta, <ESC> p/Retorno **'
        @ lci+6,cci+1 PROMPT ' Cirurgias            ' MESSAGE '** Inclusao, Alteracao e Exclusao, <ESC> p/Retorno **'
        @ lci+7,cci+1 PROMPT ' Contas A Apagar      ' MESSAGE '** Inclusao, Alteracao e Exclusao, <ESC> p/Retorno **'
        @ lci+8,cci+1 PROMPT ' Baixas Doc.A Apagar  ' MESSAGE '** Baixa de Documentos A Pagar - <ESC> p/Retorno **'
        @ lci+9,cci+1 PROMPT ' Contas A Receber     ' MESSAGE '** Inclusao, Alteracao e Exclusao - <ESC> p/Retorno **'
        @ lci+10,cci+1 PROMPT ' Baixas Doc.A Receber ' MESSAGE '** Baixa de Documentos A Receber - <ESC> p/Retorno **'
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed480()       // MOVIMENTO DE CAIXA
                CASE opcao = 2
                        WHILE .T.
                                mensagem('<I>nclusao - <C>onsulta - <ESC> Abandonar')
                                setcor(3)
                                botao(li,ci,lb,cb)
                                setcor(1)
                                DEVPOS(li+1,ci+2);DEVOUT('Data do Compromisso:')
                                DEVPOS(li+2,ci+2);DEVOUT('Compromisso:')

                                setcor(3)
                                DEVPOS(li+1,ci+24);DEVOUT(DATE())
                                setcor(1)
                                INKEY(0)

                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela)
                                        EXIT
                                ENDIF
                                IF LASTKEY() = ASC('I') .OR. LASTKEY() = ASC('i')
                                        IF ! nivel('1','2')
                                                atencao('Acesso nao Autorizado !!!')
                                                LOOP
                                        ENDIF
                                        smed420()       && INCLUSAO AGENDA
                                ENDIF
                                IF LASTKEY() = ASC('C') .OR. LASTKEY() = ASC('c')
                                        IF ! nivel('1','2')
                                                atencao('Acesso nao Autorizado !!!')
                                                LOOP
                                        ENDIF
                                        smed410()       && CONSULTA AGENDA
                                ENDIF
                        ENDDO
                CASE opcao = 3
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed440()       && MARCAR CONSULTAS
                CASE opcao = 4
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed450()       && MARCAR FERIADOS
                CASE opcao = 5
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed430()       && EXCLUSAO AGENDA
                CASE opcao = 6
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed470()       && AGENDA DE CIRURGIAS
                CASE opcao = 7
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        con21()
                CASE opcao = 8
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        con22()
                CASE opcao = 9
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        con24()
                CASE opcao = 10
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        con25()
       ENDCASE
ENDDO
RETURN NIL

