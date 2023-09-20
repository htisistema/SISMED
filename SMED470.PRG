* MENU CIRURGIA
*****************
FUNCTION smed470(mcodigo)
****************
LOCAL mprg:='SMED470',;
      opcao,lci,cci,lba,cba,li,ci,lb,cb

lci := cci := 0
lba := 14
cba := 17

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
op_tela(0,0,15,24,'MENU CIRURGIA')
WvW_PBSetFont( NIL, 'times', 25, 7,)
ninclu  := wvw_pbCreate(NIL,01,2,04,22,'Inclusao Cirurgia',,{||smed471(mcodigo)},,1,.F.)
nalter  := wvw_pbCreate(NIL,06,2,09,22,'Alteracao Cirurugia',,{||smed472(mcodigo)},,1,.F.)
nexclu  := wvw_pbCreate(NIL,11,2,14,22,'Exclusao Cirurgia',,{||smed473(mcodigo)},,1,.F.)
WHILE .T.
        exibi_prg(mprg)
        INKEY(.10,250)
        IF LASTKEY() = 27
                EXIT
        ENDIF
/*
        apaga(00,00,30,79)
        setcor(1)
        @ lci+1,cci+1 PROMPT ' Inclusao  ' MESSAGE '** Inclusao de Cirurgia, <ESC> p/Retorno **'
        @ lci+2,cci+1 PROMPT ' Alteracao ' MESSAGE '** Alteracao de Cirurgia, <ESC> p/Retorno **'
        @ lci+3,cci+1 PROMPT ' Exclusao  ' MESSAGE '** Exclusao de Cirurgias, <ESC> p/Retorno **'
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed471(mcodigo)       && INCLUSAO DE CIRURGIAS
                CASE opcao = 2
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed472(mcodigo)       && ALTERACAO DE CIRURGIAS
                CASE opcao = 3
                        IF ! nivel('1','2')
                                atencao('Acesso nao Autorizado !!!')
                                LOOP
                        ENDIF
                        smed473(mcodigo)       && EXCLUSAO DE CIRURGIAS
       ENDCASE
*/
ENDDO
wvw_lclosewindow()
RETURN NIL

