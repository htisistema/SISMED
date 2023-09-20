***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS NORMAL PERSONALIZADA
***********************************************
FUNCTION smed5e21(tipo)
***************************
LOCAL lci,cci,lba,cba,opcao,mempresa,mdescr1,mdescr2,mdescr3,mdescr4,mdescr5,;
      mquantd,m_produto:={},mespaco,mcomprimir,mimp,mfila
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := cci := 0
lba := 18
cba := 79
op_tela(lci,cci,lba,cba,' Opcoes para Etiquetas PADRAO PERSONALIZADAS ')
WHILE .T.
        mdescr1 := SPACE(40)
        mdescr2 := SPACE(40)
        mdescr3 := SPACE(40)
        mdescr4 := SPACE(40)
        mdescr5 := SPACE(40)
        opcao := SPACE(1)
        mquantd := 1
        mespaco := 65
        mcomprimir := '17'
        mfila := 2
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+6,cci+1);DEVOUT('Espaco entre ETIQUETAS....:')
        DEVPOS(lci+7,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+8,cci+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,2].:')
        @ lci+1,cci+17 GET mdescr1
        @ lci+2,cci+17 GET mdescr2
        @ lci+3,cci+17 GET mdescr3
        @ lci+4,cci+17 GET mdescr4
        @ lci+5,cci+17 GET mdescr5
        @ lci+6,cci+29 GET mespaco PICT '999' VALID IF(mespaco<46,.F.,.T.)
        @ lci+7,cci+38 GET mquantd PICT '999999'
        @ lci+8,cci+38 GET mfila PICT '99' VALID IF(mfila<1 .AND. mfila > 2,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os dados para impressao das etiquetas [S/N]:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                AADD(m_produto,{mdescr1,mdescr2,mdescr3,mdescr4,mdescr5})
        NEXT
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        i := 0
        FOR i = 1 TO LEN(m_produto)
                imprt('M','C')
                DEVPOS(PROW(),00);DEVOUT(m_produto[i,1])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,1])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,2])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,3])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,3])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,4])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,4])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,5])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,5])
                ENDIF
                IF mfila == 2
                        i ++
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT(' ')
        NEXT
        imprt('M','N')
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL







