* ESTATISTICA
**********************
FUNCTION smed700
****************
LOCAL mcirurg,mclinico,tela
mcirurg := SPACE(1)
mclinico := SPACE(1)
tela := SAVESCREEN(00,00,24,79)
WHILE .T.
        setcor(3)
        botao(10,25,14,64)
        janela(10,62,' Dados Estatisticos ')
        setcor(1)
        DEVPOS(11,27);DEVOUT('Tratamento Clinico  :')
        SETCOLOR(vcor[2])
        DEVPOS(13,27);DEVOUT('Marque com um <X> as opcao que deseja')
        setcor(1)
        SET INTEN ON
        @ 11,50 GET mclinico PICT '@!'  && VALID mclinico $ 'X, '
        READ
        IF mclinico = 'X'
                smed710(mnome,mreg)
        ENDIF
        RESTSCREEN(00,00,24,79,tela)
        RETURN NIL
ENDDO
