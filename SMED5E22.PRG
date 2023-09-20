***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS PEQUENAS PERSONALIZADA
***********************************************
FUNCTION smed5e22(tipo)
***************************

LOCAL lci,cci,lba,cba,opcao,mdescr1,mdescr2,mdescr3,mdescr4,;
      mquantd,m_produto:={}
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := cci := 0
lba := 15
cba := 79
op_tela(lci,cci,lba,cba,' Opcoes para Etiquetas PEQUENAS PERSONALIZADA')

WHILE .T.
        mdescr1 := SPACE(17)
        mdescr2 := SPACE(17)
        mdescr3 := SPACE(17)
        mdescr4 := SPACE(17)
        opcao := SPACE(1)
        mquantd := 1
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        @ lci+1,cci+17 GET mdescr1
        @ lci+2,cci+17 GET mdescr2
        @ lci+3,cci+17 GET mdescr3
        @ lci+4,cci+17 GET mdescr4
        @ lci+5,cci+38 GET mquantd PICT '999999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os dados para impressao das etiquetas [S/N]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                AADD(m_produto,{mdescr1,mdescr2,mdescr3,mdescr4})
        NEXT
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        i := 0
        DEVPOS(PROW(),00);DEVOUT(CHR(27)+'0')
        DEVPOS(PROW(),00);DEVOUT(CHR(27)+'M'+CHR(15))
        FOR i = 1 TO LEN(m_produto)
                DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,1],17))
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,1])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,1])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,1])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,1])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],17))
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,2])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,2])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,2])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,2])
                ENDIF

                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2])
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,2])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,2])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,2])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,2])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,4])
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,4])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,4])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,4])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,4])
                ENDIF
                i=i+4
                DEVPOS(PROW()+4,00);DEVOUT(' ')
        NEXT
        DEVPOS(PROW(),00);DEVOUT(CHR(27)+'P')
        DEVPOS(PROW(),00);DEVOUT(CHR(27)+'2')
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





