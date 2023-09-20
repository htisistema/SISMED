*************************************
* INCLUSAO DE PATOLOGIAS
*************************************

FUNCTION smed2p1
****************

LOCAL lci,cci,lba,cba,mpatologia,opcao

lci := cci := 0
lba := 30
cba := 70
op_tela(05,10,30,70,'PATOLOGIA')
WHILE .T.
        limpa(00,00,30,79)
        *************
        SELE('pato');SET ORDER TO 1
        *************
        mpatologia := SPACE(30)
        DEVPOS(lci+1,cci+2);DEVOUT('Patologia:')
        @ lci+2,cci TO lci+2,cba
        @ lci+1,cci+13 GET mpatologia PICT '@!' VALID IF(EMPTY(mpatologia),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF pato->(DBSEEK(mpatologia))

                Mensagem('Tecle <F10> ou <Ctrl+W> p/Gravar    -   <ESC> p/Abandonar')
                IF BLOQREG()
                        REPLA descricao WITH MEMOEDIT(pato->descricao,lci+3,cci+1,lba-1,cba-1)
                        COMMIT
                        UNLOCK
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                opcao := op_simnao('S','Deseja continuar a inclusao [S,n]:')
                IF LASTKEY() = 27 .OR. opcao = 'N'
                        LOOP
                ENDIF
                Mensagem('Tecle <F10> ou <Ctrl+W> p/Gravar    -   <ESC> p/Abandonar')
                IF ADIREG()
                        pato->patologia := mpatologia
                        REPLA descricao WITH MEMOEDIT(pato->descricao,lci+3,cci+1,lba-1,cba-1)
                        COMMIT
                        UNLOCK
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL




