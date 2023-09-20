********************
* MENU DE CONSULTA DE DESEPESAS
********************

FUNCTION smed3des
***************

LOCAL opcao,lci,cci,lba,cba,tela,mquantd

lci = 15
cci = 05
lba = 18
cba = 14
tela = SAVESCREEN(00,00,MAXROW(),79)
opcao = 0
WHILE .T.
        @ 24,00 CLEAR TO 24,79
        setcor(1)
        setcor(3)
        botao(lci,cci,lba,cba)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Geral  ' MESSAGE '** Relatorio de Despesas GERAL - <ESC> Retornar **'
        @ lci+2,cci+1 PROMPT ' Resumo ' MESSAGE '** Relatorio de Despesas RESUMO DAS DESPESAS CADASTRADA - <ESC> Retornar **'
        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        IF ! nivel('1','5')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        ****************************************************
                *          GERAL
                         sac4des1()
                CASE opcao = 2
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        IF ! nivel('1','5')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        ****************************************************
                *          RESUMO
                         sac4des2()
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************
*****************************
* RELATORIO DE DESPESAS GERAL
*****************************

FUNCTION sac4des1
*****************

LOCAL lci,cci,lba,cba,tela,opcao,mdata1,mdata2,m_desp:={},mtotdesp,mtotparc,;
      mcoddesp,mtpdesp,mdia_de,mdia_df,mtot_df,mtot_de,mdia,mpag,mdesp:={},i,;
      mnum_desp,mtotal,mtotal_g,mtipo,mconsulta,mtip

PRIVATE mtraco
PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := 08
cci := 10
lba := 16
cba := 75
mtraco := REPLI('=',80)

tela := SAVESCREEN(00,00,MAXROW(),79)
*--------------------------------------------------------------------------
CLOSE ALL
abriarq('smedde','desp')
abriarq('smedcaix','caix')
*--------------------------------------------------------------------------
WHILE .T.
        mtip := SPACE(1)
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        ASIZE(m_desp,0)
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+3,cci+1 TO lci+3,cba-1
        @ lci+6,cci+1 TO lci+6,cba-1
        setcor(1)
        janela(lci,cba,' Despesas GERAL ')
        mensagem('Digite cod.despesa ou <ENTER>p/todas - <ESC>abandonar')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Despesa.:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data Inicial:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data Final..:')
        DEVPOS(lci+7,cci+2);DEVOUT('[1]Diarias [2]ADM [3]Geral:')
        @ lci+1,cci+16 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp,lci+1,cci+20)
        @ lci+4,cci+16 GET mdata1
        @ lci+5,cci+16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        @ lci+7,cci+30 GET mtip PICT '9' VALID mtip $ '1,2,3' WHEN mcoddesp = 0
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a consulta [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da Consulta OK - [ESC]Abandonar')
        ****************
        SELE('caix')
        ORDSETFOCUS(1)
        GO TOP
        ****************
        SET SOFTSEEK ON

        SEEK DTOS(mdata1)

        SET SOFTSEEK OFF

        IF EOF()
                GO TOP
        ENDIF
        WHILE .T.
                IF ! imp_arq('SMED.REL')
                        LOOP
                ENDIF
                ASIZE(mdesp,0)
                mpag = 1
                mdia_de := 0
                mdia_df := 0
                mtot_de := 0
                mtot_df := 0
                mtpdesp := SPACE(2)
                mtit = 'Relatorio de Despesas GERAL'
                mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                mdia := caix->data
                IF tipo = 'DE'
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('DESPESAS DIARIAS: '+DTOC(mdia),80))
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT(PADC('DESPESAS ADMINISTRATIVAS: '+DTOC(mdia),80))
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ENDIF
                mtpdesp := caix->tipo
                WHILE data <= mdata2 .AND. ! EOF()
                        IF mtip = '1'
                                IF tipo <> 'DE'
                                        SKIP
                                        mdia := caix->data
                                        mtpdesp := caix->tipo
                                        LOOP
                                ENDIF
                        ELSEIF mtip = '2'
                                IF tipo <> 'DF'
                                        SKIP
                                        mdia := caix->data
                                        mtpdesp := caix->tipo
                                        LOOP
                                ENDIF
                        ELSEIF mtip = '3'
                                IF tipo <> 'DF' .AND. tipo <> 'DE'
                                        SKIP
                                        mtpdesp := caix->tipo
                                        mdia := caix->data
                                        LOOP
                                ENDIF
                        ELSE
                                IF STRZERO(mcoddesp,3) <> coddesp
                                        SKIP
                                        mdia := caix->data
                                        mtpdesp := caix->tipo
                                        LOOP
                                ENDIF
                        ENDIF
                        INKEY(.1)
                        IF LASTKEY() = 27
                                DEVPOS(PROW()+2,00);DEVOUT('Impressao cancelada pelo operador !!!')
                                EXIT
                        ENDIF
*                       IF coddesp <> '000'
*                               AADD(mdesp,{coddesp,descri1,descri2,valor})
*                       ENDIF
                        AADD(mdesp,{coddesp,descri1,descri2,valor})
                        IF mdia <> caix->data
                                DEVPOS(PROW()+2,00);DEVOUT(REPLI('=',132))
                                DEVPOS(PROW()+1,00);DEVOUT('*********** RESUMO DO DIA: '+DTOC(mdia)+' **********')
                                DEVPOS(PROW()+1,00);DEVOUT('RESUMO DO DIA: '+DTOC(mdia))
                                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS DIARIAS R$........:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS ADMINISTRATIVAS R$:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT('                                          --------------')
                                DEVPOS(PROW()+1,00);DEVOUT('Total do DIA......................... R$:')
                                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df + mdia_de,'999,999,999.99')
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                mdia := caix->data
                                mdia_de := 0
                                mdia_df := 0
                                mtpdesp := caix->tipo
                                IF tipo = 'DE'
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('DESPESAS DIARIAS: '+DTOC(mdia),80))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                                        DEVPOS(PROW()+1,00);DEVOUT(PADC('DESPESAS ADMINISTRATIVAS: '+DTOC(mdia),80))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        IF mtpdesp <> caix->tipo
                                mtpdesp := caix->tipo
                                IF tipo = 'DE'
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('DESPESAS DIARIAS: '+DTOC(mdia),80))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ELSE
                                        DEVPOS(PROW()+2,00);DEVOUT(PADC('DESPESAS ADMINISTRATIVAS: '+DTOC(mdia),80))
                                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                                ENDIF
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(caix->data)
                        DEVPOS(PROW(),10);DEVOUT(caix->coddesp)
                        DEVPOS(PROW(),15);DEVOUT(caix->descri1+caix->descri2)
                        DEVPOS(PROW(),97);DEVOUT(TRANSFORM(caix->valor,'999,999,999.99'))
                        DEVPOS(PROW(),115);DEVOUT(caix->cod_opera)
                        DEVPOS(PROW(),125);DEVOUT(caix->tipo)
                        IF tipo = 'DE'
                                mdia_de := mdia_de + caix->valor
                                mtot_de := mtot_de + caix->valor
                        ELSE
                                mdia_df := mdia_df + caix->valor
                                mtot_df := mtot_df + caix->valor
                        ENDIF
                        SKIP
                ENDDO
                DEVPOS(PROW()+1,00);DEVOUT('RESUMO DO DIA: '+DTOC(mdia))
                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS DIARIAS R$........:')
                DEVPOS(PROW(),42);DEVOUTPICT(mdia_de,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('Total do dia DESPESAS ADMINISTRATIVAS R$:')
                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT('                                          --------------')
                DEVPOS(PROW()+1,00);DEVOUT('Total do DIA......................... R$:')
                DEVPOS(PROW(),42);DEVOUTPICT(mdia_df + mdia_de,'999,999,999.99')
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                mdia := caix->data
                mdia_de := 0
                mdia_df := 0
                mtpdesp := caix->tipo
                DEVPOS(PROW()+2,00);DEVOUT('R E S U M O   G E R A L')
                DEVPOS(PROW()+1,00);DEVOUT('Total das despesas DIARIAS.......:')
                DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_de,'999,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total das despesas ADMINISTRATIVA:')
                DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_df,'999,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('                                   --------------')
                DEVPOS(PROW()+1,00);DEVOUT('Total GERAL DE DESPESAS........R$:')
                DEVPOS(PROW(),34);DEVOUT(TRANSFORM(mtot_de+mtot_df,'999,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))

                DEVPOS(PROW()+2,00);DEVOUT(PADC('RESUMO DAS DESPESAS',80))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                mnum_desp := SPACE(2)
                mtotal := 0
                mtotal_g := 0
                IF LEN(mdesp) = 0
                        SET DEVI TO SCREEN;SET PRINT TO
                        botao(02,00,23,79)
                        janela(02,79,' Consulta Notas Fiscal Emitidas ')
                        mensagem('<TAB>p/Direita - <HOME>p/Esquerda - <ESC>p/abandonar')
                        mconsulta := MEMOREAD('consulta.rel')
                        MEMOEDIT(mconsulta,03,01,22,78,.F.,,160,80)
                        RESTSCREEN(00,00,MAXROW(),79,tela)
                        EXIT
                ENDIF
                ASORT(mdesp,,, {|x,y| x[1] < y[1]})
                mnum_desp := mdesp[1,1]
                IF EMPTY(mdesp[1,1]) .OR. mdesp[1,1] = '000'
                        DEVPOS(PROW()+1,00);DEVOUT('000 - D E S P E S A S   D I V E R S A S                                                R$:')
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT(mdesp[1,1]+' - '+mdesp[1,2]+mdesp[1,3]+' R$:')
                ENDIF
                i := 0
                FOR i = 1 TO LEN(mdesp)
                        IF mnum_desp = mdesp[i,1]
                                mtotal := mtotal + mdesp[i,4]
                                mtotal_g := mtotal_g + mdesp[i,4]
                                LOOP
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                        mtotal := 0
                        mnum_desp := mdesp[i,1]
                        DEVPOS(PROW()+1,00);DEVOUT(mdesp[i,1]+' - '+mdesp[i,2]+mdesp[i,3]+' R$:')
                        mtotal := mtotal + mdesp[i,4]
                        mtotal_g := mtotal_g + mdesp[i,4]
                NEXT
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
                DEVPOS(PROW()+1,61);DEVOUT('TOTAL GERAL DAS DESPESAS  R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_g,'999,999,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(CHR(18))
                DEVPOS(PROW(),00);DEVOUT(TIME())
                EJECT
                SET DEVI TO SCREEN;SET PRINT TO
                botao(02,00,23,79)
                janela(02,79,' Consulta Notas Fiscal Emitidas ')
                mensagem('<TAB>p/Direita - <HOME>p/Esquerda - <ESC>p/abandonar')
                mconsulta := MEMOREAD('consulta.rel')
                MEMOEDIT(mconsulta,03,01,22,78,.F.,,160,80)
                RESTSCREEN(00,00,MAXROW(),79,tela)
                EXIT
        ENDDO
ENDDO
RETURN NIL
************************ F I M ***************************************
*****************************
* RELATORIO DE DESPESAS RESUMO
*****************************

FUNCTION sac4des2
*****************

LOCAL lci,cci,lba,cba,tela,opcao,mdata1,mdata2,m_desp:={},mcoddesp,mtpdesp,mdia,mpag,;
      mdesp:={},i,mnum_desp,mtotal,mtotal_g,mconsulta

PRIVATE mtraco

lci := 08
cci := 10
lba := 14
cba := 75
mtraco := REPLI('=',80)

tela := SAVESCREEN(00,00,MAXROW(),79)
*--------------------------------------------------------------------------
CLOSE ALL
abriarq('smedde','desp')
* SET INDEX TO smedde
abriarq('smedcaix','caix')
* SET INDEX TO smedcx1,smedcx2,smedcx3,smedcx4,smedcx5,smedcx6
*--------------------------------------------------------------------------
WHILE .T.
        mdata1 := mdata_sis - 30
        mdata2 := mdata_sis
        mcoddesp := 0
        ASIZE(m_desp,0)
        setcor(3)
        botao(lci,cci,lba,cba)
        @ lci+3,cci+1 TO lci+3,cba-1
        setcor(1)
        janela(lci,cba,' Despesas RESUMO ')
        mensagem('Digite cod.despesa ou <ENTER>p/todas - <ESC>abandonar')
        DEVPOS(lci+1,cci+2);DEVOUT('Cod.Despesa.:')
        DEVPOS(lci+4,cci+2);DEVOUT('Data Inicial:')
        DEVPOS(lci+5,cci+2);DEVOUT('Data Final..:')
        @ lci+1,cci+16 GET mcoddesp PICT '999' VALID ver_desp(mcoddesp,lci+1,cci+20)
        @ lci+4,cci+16 GET mdata1
        @ lci+5,cci+16 GET mdata2 VALID IF(mdata2 < mdata1,.F.,.T.)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF
        opcao := op_simnao('S','Confirma a consulta [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Espere o Final da consulta OK - [ESC]Abandonar')
        ****************
        SELE('caix')
        ORDSETFOCUS(1)
        GO TOP
        ****************
        SET SOFTSEEK ON

        SEEK DTOS(mdata1)

        SET SOFTSEEK OFF

        IF EOF()
                GO TOP
        ENDIF
        WHILE .T.
                IF ! imp_arq('SMED.REL')
                        LOOP
                ENDIF
                ASIZE(mdesp,0)
                mpag = 1
                mtit = 'Relatorio de Despesas RESUMO'
                mtipo = 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                mdia := caix->data
                mtpdesp := caix->tipo
                mtotal := 0
                mtotal_g := 0
                WHILE caix->data <= mdata2 .AND. ! EOF()
                        IF ! EMPTY(mcoddesp)
                                IF STRZERO(mcoddesp,3) <> coddesp
                                        SKIP
                                        LOOP
                                ENDIF
                        ELSE
                                IF tipo <> 'DE' .AND. tipo <>'DF'
                                        SKIP
                                        LOOP
                                ENDIF
                        ENDIF
                        INKEY(.1)
                        IF LASTKEY() = 27
                                DEVPOS(PROW()+2,00);DEVOUT('Impressao cancelada pelo operador !!!')
                                EXIT
                        ENDIF
                        AADD(mdesp,{coddesp,descri1,descri2,valor})
                        SKIP
                ENDDO
                DEVPOS(PROW()+1,00);DEVOUT(PADC('RESUMO DAS DESPESAS',80))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                mnum_desp := SPACE(2)
                mtotal := 0
                IF LEN(mdesp) = 0
                        SET DEVI TO SCREEN;SET PRINT TO
                        EXIT
                ENDIF
                ASORT(mdesp,,, {|x,y| x[1] < y[1]})
                mnum_desp := mdesp[1,1]
                IF EMPTY(mdesp[1,1]) .OR. mdesp[1,1] = '000'
                        DEVPOS(PROW()+1,00);DEVOUT('000 - D E S P E S A S   D I V E R S A S                                                R$:')
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT(mdesp[1,1]+' - '+mdesp[1,2]+mdesp[1,3]+' R$:')
                ENDIF
                i := 0
                FOR i = 1 TO LEN(mdesp)
                        IF mnum_desp = mdesp[i,1]
                                mtotal := mtotal + mdesp[i,4]
                                mtotal_g := mtotal_g + mdesp[i,4]
                                LOOP
                        ENDIF
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                        mtotal := 0
                        mnum_desp := mdesp[i,1]
                        DEVPOS(PROW()+1,00);DEVOUT(mdesp[i,1]+' - '+mdesp[i,2]+mdesp[i,3]+' R$:')
                        mtotal := mtotal + mdesp[i,4]
                        mtotal_g := mtotal_g + mdesp[i,4]
                NEXT
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal,'999,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',137))
                DEVPOS(PROW()+1,61);DEVOUT('TOTAL GERAL DAS DESPESAS  R$:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtotal_g,'999,999,999.99'))
                DEVPOS(PROW(),00);DEVOUT(TIME())
                SET DEVI TO SCREEN;SET PRINT TO
                botao(02,00,23,79)
                janela(02,79,' Consulta resumo das despesas ')
                mensagem('<TAB>p/Direita - <HOME>p/Esquerda - <ESC>p/abandonar')
                mconsulta := MEMOREAD('consulta.rel')
                MEMOEDIT(mconsulta,03,01,22,78,.F.,,160,80)
                RESTSCREEN(00,00,MAXROW(),79,tela)
                EXIT
        ENDDO
ENDDO
RETURN NIL
************************ F I M ***************************************
