*****************
* MENU FIM
*****************

FUNCTION smed900
****************

LOCAL opcao,lci,cci,lba,cba,tela

lci := 10
cci := 28
lba := 13
cba := 54

tela := SAVESCREEN(00,00,24,79)
opcao := 0

WHILE .T.
        setcor(3)
        botao(lci,cci,lba,cba)
        DEVPOS(lci+1,cci+2);DEVOUT('Confirma fim de Sistema')
        setcor(1)
        @ lci+2,cci+6 PROMPT ' Sim ' MESSAGE '** Sai do sistema **'
        @ lci+2,cci+16 PROMPT ' Nao ' MESSAGE '** Retorna ao sistema **'
        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        SET CURSOR ON
                        *-----------------------------------------------------
                        IF ! abriarq('insopera','sen');RETURN NIL;ENDIF
                        *-----------------------------------------------------
                        *************
                        SELE('sen')
                        ORDSETFOCUS(1)
                        GO TOP
                        *************

                        SEEK CRIPTO(senha_acess)

                        IF ! FOUND()
                                atencao('Operador foi Excluido !!!')
                        ELSE
                                IF BLOQREG()
                                        sen-> shora_fim := TIME()
                                        COMMIT
                                        UNLOCK
                                ELSE
                                        atencao('Nao foi possivel Acessar o Arquivo !!!')
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        UNLOCK
                        SETCOLOR('W/N,X')
                        CLOSE ALL
                        limpa(00,00,24,79)
                        setcor(6)
                        @ 01,01 SAY 'ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ '
                        @ 02,01 SAY '³ ÄÄÄÄÜÜÜÜÜÜÜÜÜÜÄÄÄÄ ³Û'
                        @ 03,01 SAY '³   ÄÄÄÄÄÄÜÜÄÄÄÄÄÄ   ³Û'
                        @ 04,01 SAY '³    ÄÄÄÄÄÜÜÄÄÄÄÄ    ³Û'
                        @ 05,01 SAY '³   ÄÄÄÄÄÄÜÜÄÄÄÄÄÄ   ³Û'
                        @ 06,01 SAY '³ ÄÄÄÄÜÜÜÜÜÜÜÜÜÜÄÄÄÄ ³Û'
                        @ 07,01 SAY 'ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´Û'
                        @ 08,01 SAY '³INSERCOM Inform tica³Û'
                        @ 09,01 SAY 'ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙÛ'
                        @ 10,01 SAY ' ßßßßßßßßßßßßßßßßßßßßßß'
                        SETCOLOR('W+/N,X')
                        @ 01,31 SAY 'ÜÜÜ ÜÜÜ Ü ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜ ÜÜÜÜÜ '
                        @ 02,31 SAY ' Û  Û Û Û ÛÜÜÜ ÛÜ   ÛÜÜÛ Û    Û  Û Û Û Û '
                        @ 03,31 SAY 'ÜÛÜ Û ÛÜÛ ÜÜÜÛ ÛÜÜÜ Û ÛÜ ÛÜÜÜ ÛÜÜÛ Û Û Û '
                        @ 04,31 SAY 'ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ'
                        @ 05,31 SAY '                                         '
                        @ 06,31 SAY 'Rua Barao da Vitoria, 295 - Sl.1007 '
                        @ 07,31 SAY 'Sao Jose - Recife - PE   '
                        @ 08,31 SAY 'TeleFax: (81)224.3987'
                        @ 09,31 SAY 'H‚lio:(81)9975.5923 Tarcisio:(81)9964.8264'
                        @ 10,31 SAY '(internet) e-mail: insercominfo@ig.com.br'
                        setcor(6)
                        DEVPOS(12,00);DEVOUT(PADC('>>> '+'"SMED" - Controle de Consulta Medica '+mversao+' <<<',80))
                        SETCOLOR('W+/N,X')
                        @ 14,02 SAY REPLI('ß',LEN('Copia Exclusiva: '+m_set[1,23]))
                        @ 15,02 SAY 'Copia Exclusiva: '
                        setcor(4)
                        DEVPOS(15,19);DEVOUT(m_set[1,23])
                        SETCOLOR('W+/N,X')
                        @ 16,02 SAY REPLI('Ü',LEN('Copia Exclusiva: '+m_set[1,23]))
                        botao(18,02,21,56)
                        DEVPOS(19,04);DEVOUT('A tentativa de COPIA deste Sistema pode acarretar')
                        DEVPOS(20,04);DEVOUT('Problemas irreversiveis para seu Computador')
                        DEVPOS(22,00);DEVOUT('')
                        SETCOLOR(cor)
                        QUIT
                        RETURN NIL
                CASE opcao = 2
                        RESTSCREEN(00,00,24,79,tela)
                        RETURN NIL
       ENDCASE
ENDDO
RETURN NIL

