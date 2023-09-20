**************************
* INCLUSAO DE ESPECIALISTA
**************************

FUNCTION smed231
****************
LOCAL mprg := 'SMED231'
LOCAL lci,cci,lba,cba,opcao,mprof,mesp,mfone,mend,mcep,mcid,tela213,;
      mcod_med:=0,mcrm:=SPACE(15)

lci := cci := 0
lba := 20
cba := 77
op_tela(11,24,20,77,'INCLUSAO DE ESPECIALISTA')
WHILE .T.
        exibi_prg(mprg)
        opca := SPACE(1)
        opcao := SPACE(1)
        mcod_med:=0
        mprof := SPACE(35)
        mesp := SPACE(20)
        mend := SPACE(35)
        mcid := SPACE(20)
        mcep := SPACE(9)
        mfone := SPACE(13)
        mcrm  := SPACE(15)
        Mensagem('Preencha os Campos ou Tecle <ESC> P/Retornar ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Codigo.......:')
        DEVPOS(lci+2,cci+2);DEVOUT('Profissional.:')
        DEVPOS(lci+3,cci+2);DEVOUT('Especialidade:')
        DEVPOS(lci+4,cci+2);DEVOUT('CRM..........:')
        DEVPOS(lci+5,cci+2);DEVOUT('Fone.........:')
        DEVPOS(lci+6,cci+2);DEVOUT('Endereco.....:')
        DEVPOS(lci+7,cci+2);DEVOUT('Cidade.......:')
        DEVPOS(lci+8,cci+2);DEVOUT('CEP..........:')

        *************
        SELE('med');ORDSETFOCUS(3)
        GO BOTT
        *************
        mcod_med := VAL(med->cod_espe)+1
        SET INTEN ON
        @ lci+1,cci+18 GET mcod_med PICT '99999'
        @ lci+2,cci+18 GET mprof PICT '@!'
        READ

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        IF EMPTY(mprof)
                LOOP
        ENDIF
        IF med->(DBSEEK(mprof))
                tela2 := SAVESCREEN(00,00,24,79)
                setcor(3)
                botao(11,15,17,65)
                setcor(1)
                SET ESCAPE OFF

                @ 15,16 TO 15,64 DOUBLE
                SETCOLOR('w+*/n,x')
                DEVPOS(12,17);DEVOUT('Profissional Existente no Arquivo !!!')
                setcor(1)
                DEVPOS(13,17);DEVOUT('Nome:')
                DEVPOS(14,17);DEVOUT('Especiali.:')
                DEVPOS(14,44);DEVOUT('Fone:')
                setcor(3)
                DEVPOS(13,23);DEVOUT(profission)
                DEVPOS(14,29);DEVOUT(especialid)
                DEVPOS(14,50);DEVOUT(fone)
                setcor(1)
                DEVPOS(16,17);DEVOUT('Cadastra Novamente [S/N]:')
                @ 16,44 GET opca PICT '@!' VALID opca $ 'S,N'
                READ
                SET ESCAPE ON

                IF opca = 'N'
                        RESTSCREEN(00,00,24,79,tela2)
                        LOOP
                        opca := SPACE(1)
                ENDIF

                IF opca = 'S'
                        RESTSCREEN(00,00,24,79,tela2)
                        opca := SPACE(1)
                ENDIF
        ENDIF
        @ lci+3,cci+18 GET mesp PICT '@!'
        @ lci+4,cci+18 GET mcrm
        @ lci+5,cci+18 GET mfone
        @ lci+6,cci+18 GET mend PICT '@!'
        @ lci+7,cci+18 GET mcid PICT '@!'
        @ lci+8,cci+18 GET mcep
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        IF LASTKEY() = 27
                LOOP
        ENDIF
        IF opcao = 'S'
                IF ADIREG()
                        med->cod_espe := STRZERO(mcod_med,5)
                        med-> especialid := mesp
                        med-> profission := mprof
                        med-> crm := mcrm
                        med-> fone := mfone
                        med-> endereco := mend
                        med-> cep := mcep
                        med-> cidade := mcid
                        COMMIT
                        UNLOCK
                        LOOP
                ELSE
                        atencao('Nao foi possivel acessar o Arquivo !!!')
                        LOOP
                ENDIF
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL

