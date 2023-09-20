**********************
* MENU DE UTILITARIOS
**********************

FUNCTION sac6
***************
LOCAL opcao,lci,cci,lba,cba,tela,mdata_sis,mopcao,drverr

lci = 04
cci = 58
lba = 12
cba = 72

tela = SAVESCREEN(00,00,MAXROW(),79)
opcao = 0
DO WHILE .T.
        @ 24,00 CLEAR TO 24,79
        setcor(3)
        botao(lci,cci,lba,cba)
*       DEVPOS(06,61);DEVOUT(CHR(193))
*       DEVPOS(06,68);DEVOUT(CHR(193))
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Muda Data   ' MESSAGE '** Muda a Data do Sistema Operacional, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT '   Setup     ' MESSAGE '** Configurar o Setup do sistema, <ESC> p/Retorno **'
        @ lci+3,cci+1 PROMPT ' Atualizar   ' MESSAGE '** Atualizacao de Arquivos p/melhor performace, <ESC> p/Retorno **'
        @ lci+4,cci+1 PROMPT ' Calculadora ' MESSAGE '** Relatorio de Visitas da INSERCOM, <ESC> p/Retorno **'
        @ lci+5,cci+1 PROMPT ' Calendario  ' MESSAGE '** Relatorio de Visitas da INSERCOM, <ESC> p/Retorno **'
        @ lci+6,cci+1 PROMPT ' Rel.Visita  ' MESSAGE '** Relatorio de Visitas da INSERCOM, <ESC> p/Retorno **'
        @ lci+7,cci+1 PROMPT '   Recibos   ' MESSAGE '** Recibo da HTI SISTEMAS, <ESC> p/Retorno **'
        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                RESTSCREEN(00,00,MAXROW(),79,tela)
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        alt_data()
                CASE opcao = 2
/*
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        * Niveis de sao: 1 e 2
                        ****************************************************
                        IF ! nivel('1','5')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        setcor(1)
                        ****************************************************
                        sac61()
*/
                CASE opcao = 3
                        //atualiza()
                CASE opcao = 4
                        //maqcalc()
                CASE opcao = 5
                        cale()
                CASE opcao = 6
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        * Niveis de sao: 1 e 2
                        ****************************************************
                        IF cod_operado <> '999'
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        setcor(1)
                        ****************************************************
                        //sac62()
                CASE opcao = 7
                        ****************************************************
                        * VERIFICAR NIVEL DE ACESSO DA SENHA
                        ****************************************************
                        * Niveis de sao: 1 e 2
                        ****************************************************
                        IF cod_operado <> '999'
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        setcor(1)
                        ****************************************************
                        sac63()
        ENDCASE
ENDDO
RETURN NIL
**************************** F I M **********************************
