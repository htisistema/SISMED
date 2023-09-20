FUNCTION autorizacao(mserie)
****************************
//IF ! EMPTY(ALLTRIM(m_set[1,42]))
//        mserie := SUBSTR(ALLTRIM(m_set[1,42]),15,6)
//ENDIF
//atencao(SUBSTR(ALLTRIM(m_set[1,123]),1,14)+m_qp+SUBSTR(m_set[1,180],14,6)+SUBSTR(m_set[1,180],6,8))
IF ALLTRIM(m_set[1,42]) = '1'+SUBSTR(m_set[1,37],4,1)+SUBSTR(m_set[1,37],2,1)+SUBSTR(m_set[1,37],5,1)+SUBSTR(m_set[1,37],3,1)+SUBSTR(m_set[1,37],1,1)
        RETURN .T.
ELSE
        RETURN .F.
ENDIF
***************************** F I M *********************************************
* FUNCAO PARA CRIPTOGRAFA
*************************
FUNCTION crip(mexp,q,mprod)
***************************
LOCAL mletra:={},maux:={},msenha,i
IF LASTKEY() = 27
        RETURN .F.
ENDIF
msenha := ''
mexp := UPPER(mexp)
i:=0
FOR i = 1 TO LEN(mexp)
        AADD(mletra,SUBSTR(mexp,i,1))
NEXT
i:=0
FOR i = 1 TO LEN(mexp)
        IF mletra[i] = '0'
                AADD(maux,'5')
        ELSEIF mletra[i] = '1'
                AADD(maux,'0')
        ELSEIF mletra[i] = '2'
                AADD(maux,'W')
        ELSEIF mletra[i] = '3'
                AADD(maux,'U')
        ELSEIF mletra[i] = '4'
                AADD(maux,'8')
        ELSEIF mletra[i] = '5'
                AADD(maux,'J')
        ELSEIF mletra[i] = '6'
                AADD(maux,'3')
        ELSEIF mletra[i] = '7'
                AADD(maux,'K')
        ELSEIF mletra[i] = '8'
                AADD(maux,'6')
        ELSEIF mletra[i] = '9'
                AADD(maux,'A')
        ELSE
                atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                msenha := ''
                RETURN msenha
        ENDIF
NEXT
i:=0
IF LEN(mexp) = 1
        msenha := maux[1]
ELSE
        msenha := maux[2] + maux[1]
        FOR i = 3 TO LEN(mexp)
                msenha := msenha + maux[i]
        NEXT
ENDIF
RETURN msenha
*********************** F I M *******************************
* FUNCAO PARA DES-CRIPTOGRAFA
*****************************
FUNCTION dcrip(mexp)
********************
LOCAL mletra:={},maux:={},msenha,i
ASIZE(mletra,0)
ASIZE(maux,0)
msenha := ''
i:=0
FOR i = 1 TO LEN(mexp)
        IF SUBSTR(mexp,i,1) = ' ' .OR. SUBSTR(mexp,i,1) = NIL
                LOOP
        ENDIF
        AADD(mletra,SUBSTR(mexp,i,1))
NEXT
i:=0
IF EMPTY(mletra)
        RETURN NIL
ENDIF
FOR i = 1 TO LEN(mletra)
        IF mletra[i] = '5'
                AADD(maux,'0')
        ELSEIF mletra[i] = '0'
                AADD(maux,'1')
        ELSEIF mletra[i] = 'W'
                AADD(maux,'2')
        ELSEIF mletra[i] = 'U'
                AADD(maux,'3')
        ELSEIF mletra[i] = '8'
                AADD(maux,'4')
        ELSEIF mletra[i] = 'J'
                AADD(maux,'5')
        ELSEIF mletra[i] = '3'
                AADD(maux,'6')
        ELSEIF mletra[i] = 'K'
                AADD(maux,'7')
        ELSEIF mletra[i] = '6'
                AADD(maux,'8')
        ELSEIF mletra[i] = 'A'
                AADD(maux,'9')
        ELSE
                atencao('SENHA DE LIBERACAO Foi digitada errada, verifique tente novamente...')
                msenha := ''
                RETURN msenha
        ENDIF
NEXT
IF LEN(mexp) = 1
        msenha := maux[1]
ELSE
        i:=0
        msenha := maux[2] + maux[1]
        FOR i = 3 TO LEN(maux)
                msenha := msenha + maux[i]
        NEXT
ENDIF
RETURN msenha
************************************* F I M ********************************************
FUNCTION tira_pontos(mpalavra)
******************************
mpalavra := STRTRAN(mpalavra,'.','')
mpalavra := STRTRAN(mpalavra,'-','')
mpalavra := STRTRAN(mpalavra,'/','')
mpalavra := STRTRAN(mpalavra,",","")
RETURN mpalavra
******************************* F I M ******************************************
FUNCTION senha_cesso
********************
LOCAL mdig1,mdig2,mdig3,mdig4,mdig5,mdata:=CTOD('  /  /  '),mqtddias:=''
//M+A+D
IF cod_operado # '999'
        RETURN NIL
ENDIF
op_tela(10,10,13,50,'')
DEVPOS(0,0);DEVOUT('Data Vencimento:')
DEVPOS(1,0);DEVOUT('Senha Nova.....:')
DEVPOS(2,0);DEVOUT('Senha Antiga...:')
@ 0,COL()+1 GET mdata
READ
mdig1 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),1,1)
mdig2 := STRZERO(VAL(SUBSTR(DTOC(DATE()),4,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig3 := STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig4 := STRZERO(VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),1,2)),2)
mdig5 := SUBSTR(STRZERO(VAL(SUBSTR(DTOC(DATE()),7,2))+VAL(SUBSTR(DTOC(DATE()),1,2))+VAL(SUBSTR(DTOC(DATE()),4,2)),2),2,1)
IF ! EMPTY(mdata)
        mqtddias := STRZERO(mdata - DATE(),2)
ENDIF
DEVPOS(1,0);DEVOUT('Senha Nova.....:  '+mdig1+mdig2+mdig3+mdig4+mdig5+mqtddias)
DEVPOS(2,0);DEVOUT('Senha Antiga...:  '+mdig1+mdig3+mdig4+mdig2+mdig5+mqtddias)
        //atencao('SENHA Acesso NOVA....:  '+mdig1+mdig2+mdig3+mdig4+mdig5+m_qp+m_qp+'SENHA Acesso ANTIGA:  '+mdig1+mdig3+mdig4+mdig2+mdig5)
mensagem('Pressione qualquer tecla para SAIR')
INKEY(0)
fecha_tela()
RETURN NIL
********************************** f i m **************************************
