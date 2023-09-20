* RETIRADA DE DESPESAS DIARIAS
*******************************
FUNCTION smed460
*****************
LOCAL opcao,tela,lci,cci,lba,cba,i,mdata,mvalor,mtraco,mcoddesp

PRIVATE mdescri1,mdescri2

CLEAR GETS
lci = 15
cci = 21
lba = 22
cba = 79
tela = SAVESCREEN(00,00,24,79)
mtraco := REPLI('=',80)
*--------------------------------------------------------------------------
CLOSE ALL
abriarq('smedde','desp')
* SET INDEX TO smedde
abriarq('smedcaix','caix')
* SET INDEX TO smedcx1,smedcx2,smedcx3,smedcx4,smedcx5,smedcx6
*--------------------------------------------------------------------------
WHILE .T.
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+1,cci+1 TO lci+1,cba-1
        setcor(1)
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/Retornar ')
        mdata := mdata_sis
        mvalor := 0
        mcoddesp := 0
        mdescri1 := SPACE(40)
        mdescri2 := SPACE(40)
        opcao = 'S'
        janela(lci,cba,' Retirada de Despesas ')
        DEVPOS(lci+2,cci+2);DEVOUT('Data_______:')
        DEVPOS(lci+3,cci+2);DEVOUT('Valor R$___:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod.Despesa:')
        DEVPOS(lci+5,cci+2);DEVOUT('Descricao__:')

        @ lci+2,cci+15 GET mdata
        @ lci+3,cci+15 GET mvalor PICT '99,999,999.99' VALID IF(EMPTY(mvalor),.F.,.T.)
        @ lci+4,cci+15 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela)
                CLOSE ALL
                RETURN NIL
        ENDIF
        @ lci+5,cci+15 GET mdescri1 PICT '@!'
        @ lci+6,cci+15 GET mdescri2 PICT '@!'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma a Despesas [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF

        IF opcao = 'N'
                LOOP
        ENDIF

        ********************
        SELE('caix')
        ORDSETFOCUS(1)
        ********************

        IF ADIREG()
                caix-> tipo := 'DE'
                caix-> data := mdata
                caix-> venci := mdata
                caix-> documento := '9999999999'
                caix-> valor := mvalor * -1
                caix-> coddesp := STRZERO(mcoddesp,3)
                caix-> descri1 := mdescri1
                caix-> descri2 := mdescri2
                caix-> cod_opera := cod_operado
                COMMIT
                UNLOCK
        ELSE
                atencao('Nao foi possivel acessar o Arquivo !!!')
                LOOP
        ENDIF
/*
        IF ! impress()
                LOOP
        ENDIF
        FOR i = 1 TO 2
                SET DEVI TO PRINT
                SET PRINTER TO LPT1
                imprt(impressora,'E',2)
*                DEVPOS(PROW()+2,00);DEVOUT(CHR(14))
                DEVPOS(PROW(),01);DEVOUT(m_set[1,23])
                imprt(impressora,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mend_firm)
                DEVPOS(PROW()+1,00);DEVOUT(mcid_firm +' - '+ mfone_firm)
                DEVPOS(PROW()+1,00);DEVOUT('Inscr. '+minsc_firm+' -  C.G.C.: '+mcgc_firm)
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)

                DEVPOS(PROW()+2,25);DEVOUT('D E S P E S A S')
                DEVPOS(PROW(),25);DEVOUT('D E S P E S A S')

                DEVPOS(PROW()+2,00);DEVOUT('Data da Despesa:')
                DEVPOS(PROW(),17);DEVOUT(mdata)

                DEVPOS(PROW()+2,00);DEVOUT('Valor Despesa__:')
                DEVPOS(PROW(),17);DEVOUT(LTRIM(TRANSFORM(mvalor,'99,999,999.99')))

                IF ! EMPTY(mcoddesp)
                        DEVPOS(PROW()+2,00);DEVOUT('Descricao'+' ('+STRZERO(mcoddesp,3)+'):')
                ELSE
                        DEVPOS(PROW()+2,00);DEVOUT('Descricao______:')
                ENDIF
                DEVPOS(PROW(),17);DEVOUT(mdescri1)
                DEVPOS(PROW()+1,17);DEVOUT(mdescri2)

                DEVPOS(PROW()+4,00);DEVOUT(PADC('___________________________           ____________________________',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC('         C A I X A                              Solicitante       ',80))

                DEVPOS(PROW()+2,00);DEVOUT(mtraco)
                DEVPOS(PROW()+2,00);DEVOUT(REPLI('-',80))
                IF i = 1
                        DEVPOS(PROW()+3,00);DEVOUT(PADC('Corte Aqui...',80))
                ENDIF
                DEVPOS(PROW()+6,00);DEVOUT(' ')
        NEXT
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN
*/
ENDDO
RETURN NIL
********************************** f i m **********************************
