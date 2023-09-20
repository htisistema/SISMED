*************************************
* EMITE DECLARACAO GESTANTE
*************************************
FUNCTION smed5decl
LOCAL mprg:='SMED5DEC',lin,lin1,lin2,lin3,mdeclara,linhas := 0,mdata,;
      opcao,tela550,mnome,mqtd_dias:=0
PRIVATE traco,mtipo_imp,mimp_tipo:=0,mporta_imp,marq:=SPACE(35)
********* VARIAVEIS DE IMPRESSAO *******************
mtipo_imp := 'M'
****************************************************
lci := cci := 0
lba := 10
cba := 73
op_tela(10,10,14,80,' Declaracao para GESTANTES ')
WHILE .T.
        exibi_prg(mprg)
        mdata := DATE()
        mnome := SPACE(35)
*       lin1 := 'Declaro para os devidos fins que a Sra. '
*       lin2 := ' encontra-se no curso do 8§ mes de gestacao e devera permanecer de repouso durante o periodo de 120 (cento e vinte) dias a partir desta data.'
        opcao := SPACE(1)
        traco := REPLI('-',80)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')
        setcor(1)
        //setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome do Paciente..:')
        DEVPOS(lci+2,cci+2);DEVOUT('Apartir de........:')
        DEVPOS(lci+3,cci+2);DEVOUT('Quantidade de Dias:')
        mdata := DATE()
        @ lci+1,cci+22 GET mnome PICT '@!'
        @ lci+2,cci+22 GET mdata PICT '  /  /  '
        @ lci+3,cci+22 GET mqtd_dias PICT '999'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF EMPTY(mnome)
                LOOP
        ENDIF
        IF ! imp_arq('SMED.REL')
                LOOP
        ENDIF
        lin1 := 'Declaro para os devidos fins que a Sra. '
        lin2 := ' esta fazendo pre-natal e encontra-se no curso do 8§ mes de gestacao devendo entrar em licenca por '+STR(mqtd_dias)+' dias a contar de '
        lin3 := ' de acordo com o artigo 392 das consolidacoes das leis do trabalho'

        mdeclara := lin1+RTRIM(mnome)+lin2+DTOC(mdata)+lin3
        cabec()
        @ PROW()+6,00 SAY PADC('ATESTADO DE LICENCA MARTERNIDADE',80)
        @ PROW()+2,00 SAY PADC('ATESTADO MEDICO',80)
        @ PROW()+5,01 SAY ' '

        linhas := MLCOUNT(mdeclara,60)

        FOR linha = 1 TO  linhas
                LIN := MEMOLINE(mdeclara,60,linha,,10)
                @ PROW()+1,10 SAY PADR(RTRIM(LIN),60)
                @ PROW()+1,10 SAY ' '
        NEXT

        @ PROW()+6,30 SAY 'Recife,'
        @ PROW(),37 SAY mdata
        @ PROW()+6,00 SAY PADC(REPLI('_',LEN(m_set[1,23])),80)
        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,23]),80)
        @ PROW()+1,00 SAY PADC(ALLTRIM(m_set[1,46]),80)
        rodape()
        @ PROW()+1,90 SAY ' '
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('HTI.REL')
        EXIT
ENDDO
wvw_lclosewindow()
RETURN NIL
******************************* F I M  *************************************************
