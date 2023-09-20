******************************
* LISTAGEM DE MEDICAMENTOS
******************************

FUNCTION smed591
***********************

LOCAL mprg:='SMED591',mpag,mtraco,mcont,mmedica,opcao,lci,cci,lba,cba,mopcao

PRIVATE mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************

lci := cci := 0
lba := 20
cba := 69
mtraco := REPLI('-',80)
*********************************************
CLOSE ALL
abriarq('smeddro','dro')
* SET INDEX TO droncom,drocod
*********************************************
op_tela(17,49,20,69,'LISTAGEM DE MEDICAMENTOS')
WHILE .T.
        exibi_prg(mprg)
        mpag := 1
        mmedica = 0
        mcont = 0
        opcao := 0
        mopcao := SPACE(1)
        mensagem('Escolha a Opcao para ser Impresso - <ESC> p/Retornar')
        setcor(1)
        @ lci+1,cci+1 PROMPT ' p/Ordem Alfabet. '
        @ lci+2,cci+1 PROMPT ' p/Ordem Codigo   '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE opcao = 1
                        *************
                        SELE('dro');ORDSETFOCUS(1)
                        *************
                CASE opcao = 2
                        **************
                        SELE('dro');ORDSETFOCUS(2)
                        ***************
        ENDCASE
        GO TOP
        IF ! imp_arq('SMED591.REL')
                LOOP
        ENDIF

        cabmed(mpag)
        WHILE ! EOF()
                @ PROW()+2,02 SAY 'Cod.Medicamento..:'
                @ PROW(),21 SAY cod_med
                @ PROW()+1,02 SAY 'Uso .............:'
                @ PROW(),21 SAY uso_med
                @ PROW()+1,02 SAY 'Medicamento .....:'
                @ PROW(),21 SAY nomecom
                @ PROW(),21 SAY nomecom
                @ PROW()+1,02 SAY 'Nome da Droga ...:'
                @ PROW(),21 SAY nomedroga
                @ PROW()+1,02 SAY 'Quant./Dose .....:'
                @ PROW(),21 SAY dose_quant
                @ PROW()+1,02 SAY 'Posologia .......:'
                @ PROW(),21 SAY posologia
                @ PROW()+1,02 SAY 'Efeito Colaterais:'
                @ PROW(),21 SAY efeito_col
                @ PROW()+1,02 SAY 'Precaucoes ......:'
                @ PROW(),21 SAY precaucoes
                @ PROW()+1,00 SAY mtraco
                mmedica = mmedica + 1
                mcont = mcont + 1
                IF PROW() = 6
                        mcont = 0
                        EJECT
                        mpag = mpag + 1
                        cabmed(mpag)
                ENDIF
                SKIP
        ENDDO
        IF mcont = 6
                EJECT
                mpag = mpag + 1
                cabmed(mpag)
        ENDIF
        @ PROW()+3,02 SAY 'Medicamentos Cadastrados : '+LTRIM(STR(mmedica))
        @ PROW()+2,56 SAY TIME()+' Hrs.'
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        IF mimp_tipo = 2
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL2 /DEL '+ALLTRIM('')+'HTI.REL')
        ELSEIF mimp_tipo = 1
                FCLOSE('HTI.REL')
                MYRUN('DOSPRINTER /SEL /DEL '+ALLTRIM('')+'HTI.REL')
        ENDIF
ENDDO
CLOSE ALL
wvw_lclosewindow()
RETURN NIL
************************** F I M ********************************************
FUNCTION cabmed(rpag)
********************
WHILE .T.
        @ PROW()+1,34 SAY m_set[1,23]
        @ PROW(),34 SAY m_set[1,23]
        @ PROW()+1,34 SAY mesp
        @ PROW(),72 SAY 'PAG.'
        @ PROW(),77 SAY STRZERO(rpag,3)
        @ PROW()+1,02 SAY 'Sistema Controle Medico'
        @ PROW(),31 SAY 'Relacao de Medicamentos Cadastrado'
        @ PROW(),72 SAY DATE()
        @ PROW()+1,00 SAY REPLI('=',80)
        RETURN NIL
ENDDO

