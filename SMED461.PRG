********************************
* CANCELAR DESPESAS
********************************

FUNCTION smed461
*****************

LOCAL tela,lci,cci,lba,cba,point,opcao,m_codigo:={},m_posicao:={},mdata

lci := 06
cci := 02
lba := 22
cba := 77
mdata := mdata_sis
tela := SAVESCREEN(00,00,24,79)
*---------------------------------------------------------------
CLOSE ALL
abriarq('smedcaix','caix')
* SET INDEX TO smedcx1,smedcx2,smedcx3,smedcx4,smedcx5,smedcx6
*---------------------------------------------------------------
WHILE .T.
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+2,cci+13 SAY CHR(194)
        @ lci+2,cci+1 TO lci+2,cba-1
        @ lci+3,cci+13 TO lba-1,cci+13

        @ lci+2,cci+60 SAY CHR(194)
        @ lci+3,cci+60 TO lba-1,cci+60
        setcor(1)
        janela(lci,cba,' Pedidos Pedentes ')
        DEVPOS(lci+1,cci+1);DEVOUT(' Data ')
        DEVPOS(lci+1,cci+13);DEVOUT(' Descricao ')
        DEVPOS(lci+1,cci+56);DEVOUT('     Valor')

        DEVPOS(lci,cci+2);DEVOUT(' Digite a data da despesas: ')
        @ lci,cci+30 GET mdata
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        IF EMPTY(mdata)
                LOOP
        ENDIF

        *************
        SELE('caix')
        ORDSETFOCUS(1)
        DBSETFILTER({|| data = mdata .AND. tipo = 'DE' .OR. data=mdata .AND. tipo = 'DF'})
        GO TOP
        *************
        IF LASTREC() = 0
                atencao('Nao existe nenhuma despesa !!!')
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento OK !!!')
        ASIZE(m_codigo,0)
        ASIZE(m_posicao,0)
        WHILE ! EOF()
                AADD(m_codigo,'  '+DTOC(data)+'  '+CHR(179)+'   '+descri1+'   '+CHR(179)+' '+TRANSFORM(valor,'9,999,999.99'))
                AADD(m_posicao,RECNO())
                SKIP
        ENDDO

        IF LEN(m_codigo) = 0
                atencao('Nenhum despesa')
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF

        mensagem("< ou > Consulta  -  <ESC> Retorna  -  <ENTER> p/Confirma o cancelamento" )
        point := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_codigo)

        DO CASE
                CASE LASTKEY()=27
                        RESTSCREEN(00,00,24,79,tela)
                        CLOSE ALL
                        RETURN NIL
                CASE LASTKEY() = 13
                        IF ! nivel('1','3','5')
                                atencao('Acesso nao Autorizado !!!')
                                IF ! aut_sen('Senha de Liberacao de Ambiente:')
                                        UNLOCK
                                        RESTSCREEN(00,00,24,79,tela)
                                        RETURN NIL
                                ENDIF
                        ENDIF
                        GO m_posicao[point]
                        opcao := op_simnao('N','Confirma Cancelamento da despesa [s/N]:')
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        IF opcao = 'N'
                                EXIT
                        ELSE
                                IF ! BLOQREG()
                                        atencao('Nao foi possivel acessar o Arquivo !!!')
                                        EXIT
                                ENDIF
                                DELE
                                DBCOMMITALL()
                                DBUNLOCKALL()
                        ENDIF
        ENDCASE
ENDDO
************************* F I M ******************************************

