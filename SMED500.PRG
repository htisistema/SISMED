*****************
* MENU RELATORIOS
*****************
FUNCTION smed500
****************
LOCAL mprg:='SMED500',;
      opcao,lci,cci,lba,cba,tela500,mnome,mdata,msinal,mvalor

lci := 09
cci := 10
lba := 18
cba := 31
tela500 := SAVESCREEN(00,00,24,79)
mnome := SPACE(35)
mdata := DATE()
msinal := SPACE(1)
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
        @ lci+1,cci+1 PROMPT ' Guia Internamento  ' MESSAGE '** Emissao de GUIA de INTERNAMENTO, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT ' Consultas Marcadas ' MESSAGE '** Listagem de Consultas Marcadas, <ESC> p/Retorno **'
        @ lci+3,cci+1 PROMPT ' Emissao Patologias ' MESSAGE '** Emissao de Patologias, <ESC> p/Retorno **'
        @ lci+4,cci+1 PROMPT ' T e x t o          ' MESSAGE '** Editor Textos simples, <ESC> p/Retorno **'
        //IF cab_med = 'MARIO'
        //        @ lci+5,cci+1 PROMPT ' Exame Video        ' MESSAGE '** Exames de videolaringoscopia, rinoscopia e otoscopia, <ESC> p/Retorno **'
        //ENDIF
        IF ver_serie() = '140201' .OR. ver_serie() = '140200'
                @ lci+5,cci+1 PROMPT ' Declaracao Gestante' MESSAGE '** Declaracao para GESTANTES, <ESC> p/Retorno **'
                @ lci+6,cci+1 PROMPT ' Formularios Diver. ' MESSAGE '** Formularios Diversos, <ESC> p/Retorno **'
                @ lci+7,cci+1 PROMPT ' Colposcopia        ' MESSAGE '** Resultado de Exame de Colposcopia, <ESC> p/Retorno **'
                @ lci+8,cci+1 PROMPT ' Datas de Partos    ' MESSAGE '** Relatorio de datas de Partos, <ESC> p/Retorno **'
        ENDIF
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
            RESTSCREEN(00,00,24,79,tela500)
            RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smedguia()               && GUIA DE INTERNAMENTO
                 CASE opcao = 2
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5con()               &&RELATORIO CONSULTAS MARCADAS
                 CASE opcao = 3
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5pat()               && EMISSAO DE PATOLOGIAS
                 CASE opcao = 4
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        texto()               && TEXTOS
                CASE opcao = 5
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        //IF cab_med = 'MARIO'
                        //        smed5vid()
                        IF ver_serie() = '140201' .OR. ver_serie() = '140200'
                                smed5decl()
                        ENDIF
                CASE opcao = 6
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        IF ver_serie() = '140201' .OR. ver_serie() = '140200'
                                smed5frm()
                        ENDIF
                CASE opcao = 7
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5col()
                CASE opcao = 8
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed5dat()
        ENDCASE
ENDDO
RETURN NIL
*********************************** f i m ************************************************
