* INCLUSAO DE CLIENTES MARCA CONSULTA
**************************************
FUNCTION smed441
****************
LOCAL tela1,li,ci,lb,cb,opcao,i,mcont
PRIVATE m_nome:={},m_horas:={}

li := 06
ci := -1
lb := 20
cb := 80
tela1 := SAVESCREEN(00,00,24,79)
WHILE .T.
        WHILE .T.
                mcont := 0
                ASIZE(m_nome,0)
                ASIZE(m_horas,0)
                mensagem('Digite o Nome do Cliente ou <ESC>p/Retornar')
                setcor(3)
                botao(li,ci,lb,cb)
                setcor(1)
                DEVPOS(li+1,ci+1);DEVOUT('08:00')
                DEVPOS(li+2,ci+1);DEVOUT('08:15')
                DEVPOS(li+3,ci+1);DEVOUT('08:30')
                DEVPOS(li+4,ci+1);DEVOUT('08:45')
                DEVPOS(li+5,ci+1);DEVOUT('09:00')
                DEVPOS(li+6,ci+1);DEVOUT('09:15')
                DEVPOS(li+7,ci+1);DEVOUT('09:30')
                DEVPOS(li+8,ci+1);DEVOUT('09:45')
                DEVPOS(li+9,ci+1);DEVOUT('10:00')
                DEVPOS(li+10,ci+1);DEVOUT('10:15')
                DEVPOS(li+11,ci+1);DEVOUT('10:30')
                DEVPOS(li+12,ci+1);DEVOUT('10:45')
                DEVPOS(li+13,ci+1);DEVOUT('11:00')

                DEVPOS(li+1,ci+42);DEVOUT('15:00')
                DEVPOS(li+2,ci+42);DEVOUT('15:15')
                DEVPOS(li+3,ci+42);DEVOUT('15:30')
                DEVPOS(li+4,ci+42);DEVOUT('15:45')
                DEVPOS(li+5,ci+42);DEVOUT('16:00')
                DEVPOS(li+6,ci+42);DEVOUT('16:15')
                DEVPOS(li+7,ci+42);DEVOUT('16:30')
                DEVPOS(li+8,ci+42);DEVOUT('16:45')
                DEVPOS(li+9,ci+42);DEVOUT('17:00')
                DEVPOS(li+10,ci+42);DEVOUT('17:15')
                DEVPOS(li+11,ci+42);DEVOUT('17:30')
                DEVPOS(li+12,ci+42);DEVOUT('17:45')
                DEVPOS(li+13,ci+42);DEVOUT('18:00')
                AADD(m_horas,'08:00')
                AADD(m_horas,'08:15')
                AADD(m_horas,'08:30')
                AADD(m_horas,'08:45')
                AADD(m_horas,'09:00')
                AADD(m_horas,'09:15')
                AADD(m_horas,'09:30')
                AADD(m_horas,'09:45')
                AADD(m_horas,'10:00')
                AADD(m_horas,'10:15')
                AADD(m_horas,'10:30')
                AADD(m_horas,'10:45')
                AADD(m_horas,'11:00')
                AADD(m_horas,'15:00')
                AADD(m_horas,'15:15')
                AADD(m_horas,'15:30')
                AADD(m_horas,'15:45')
                AADD(m_horas,'16:00')
                AADD(m_horas,'16:15')
                AADD(m_horas,'16:30')
                AADD(m_horas,'16:45')
                AADD(m_horas,'17:00')
                AADD(m_horas,'17:15')
                AADD(m_horas,'17:30')
                AADD(m_horas,'17:45')
                AADD(m_horas,'18:00')
                IF mturno = SPACE(2)
                        atencao('Nao tem nenhuma consulta marcada')
                        RESTSCREEN(00,00,24,79,tela1)
                        RETURN NIL
                ENDIF
                IF mturno = 'TD'
                        ***********************
                        SELE('cons')
                        SET ORDER TO 2
                        **********************
                        i = 0
                        FOR i = 1 TO 26
                                *************************
                                SEEK m_horas[i]+DTOS(mdata_cons)
                                *************************
                                IF FOUND()
                                        mcont ++
                                        AADD(m_nome,nome)
                                ELSE
                                        AADD(m_nome,SPACE(35))
                                ENDIF
                        NEXT
                        IF mcont = 0 .AND. mconsulta = 'X'
                                atencao('Nao existe cliente marcado para esta data')
                                RESTSCREEN(00,00,24,79,tela1)
                                RETURN NIL
                        ENDIF
                        setcor(3)
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+6);DEVOUT(m_nome[i])
                        NEXT
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+47);DEVOUT(m_nome[i+13])
                        NEXT
                        setcor(1)
                        IF mconsulta = 'I'
                                IF mcont >= 26
                                        atencao('Este dia ja esta lotado. So p/Encaixe')
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                                IF EMPTY(m_nome[1])
                                        @ li+1,ci+6 GET m_nome[1] PICT '@!' VALID consulta(m_nome[1],m_horas[1],mconsulta,1)
                                ENDIF
                                IF EMPTY(m_nome[2])
                                        @ li+2,ci+6 GET m_nome[2] PICT '@!' VALID consulta(m_nome[2],m_horas[2],mconsulta,2)
                                ENDIF
                                IF EMPTY(m_nome[3])
                                        @ li+3,ci+6 GET m_nome[3] PICT '@!' VALID consulta(m_nome[3],m_horas[3],mconsulta,3)
                                ENDIF
                                IF EMPTY(m_nome[4])
                                        @ li+4,ci+6 GET m_nome[4] PICT '@!' VALID consulta(m_nome[4],m_horas[4],mconsulta,4)
                                ENDIF
                                IF EMPTY(m_nome[5])
                                        @ li+5,ci+6 GET m_nome[5] PICT '@!' VALID consulta(m_nome[5],m_horas[5],mconsulta,5)
                                ENDIF
                                IF EMPTY(m_nome[6])
                                        @ li+6,ci+6 GET m_nome[6] PICT '@!' VALID consulta(m_nome[6],m_horas[6],mconsulta,6)
                                ENDIF
                                IF EMPTY(m_nome[7])
                                        @ li+7,ci+6 GET m_nome[7] PICT '@!' VALID consulta(m_nome[7],m_horas[7],mconsulta,7)
                                ENDIF
                                IF EMPTY(m_nome[8])
                                        @ li+8,ci+6 GET m_nome[8] PICT '@!' VALID consulta(m_nome[8],m_horas[8],mconsulta,8)
                                ENDIF
                                IF EMPTY(m_nome[9])
                                        @ li+9,ci+6 GET m_nome[9] PICT '@!' VALID consulta(m_nome[9],m_horas[9],mconsulta,9)
                                ENDIF
                                IF EMPTY(m_nome[10])
                                        @ li+10,ci+6 GET m_nome[10] PICT '@!' VALID consulta(m_nome[10],m_horas[10],mconsulta,10)
                                ENDIF
                                IF EMPTY(m_nome[11])
                                        @ li+11,ci+6 GET m_nome[11] PICT '@!' VALID consulta(m_nome[11],m_horas[11],mconsulta,11)
                                ENDIF
                                IF EMPTY(m_nome[12])
                                        @ li+12,ci+6 GET m_nome[12] PICT '@!' VALID consulta(m_nome[12],m_horas[12],mconsulta,12)
                                ENDIF
                                IF EMPTY(m_nome[13])
                                        @ li+13,ci+6 GET m_nome[13] PICT '@!' VALID consulta(m_nome[13],m_horas[13],mconsulta,13)
                                ENDIF

                                IF EMPTY(m_nome[14])
                                        @ li+1,ci+47 GET m_nome[14] PICT '@!' VALID consulta(m_nome[14],m_horas[14],mconsulta,14)
                                ENDIF
                                IF EMPTY(m_nome[15])
                                        @ li+2,ci+47 GET m_nome[15] PICT '@!' VALID consulta(m_nome[15],m_horas[15],mconsulta,15)
                                ENDIF
                                IF EMPTY(m_nome[16])
                                        @ li+3,ci+47 GET m_nome[16] PICT '@!' VALID consulta(m_nome[16],m_horas[16],mconsulta,16)
                                ENDIF
                                IF EMPTY(m_nome[17])
                                        @ li+4,ci+47 GET m_nome[17] PICT '@!' VALID consulta(m_nome[17],m_horas[17],mconsulta,17)
                                ENDIF
                                IF EMPTY(m_nome[18])
                                        @ li+5,ci+47 GET m_nome[18] PICT '@!' VALID consulta(m_nome[18],m_horas[18],mconsulta,18)
                                ENDIF
                                IF EMPTY(m_nome[19])
                                        @ li+6,ci+47 GET m_nome[19] PICT '@!' VALID consulta(m_nome[19],m_horas[19],mconsulta,19)
                                ENDIF
                                IF EMPTY(m_nome[20])
                                        @ li+7,ci+47 GET m_nome[20] PICT '@!' VALID consulta(m_nome[20],m_horas[20],mconsulta,20)
                                ENDIF
                                IF EMPTY(m_nome[21])
                                        @ li+8,ci+47 GET m_nome[21] PICT '@!' VALID consulta(m_nome[21],m_horas[21],mconsulta,21)
                                ENDIF
                                IF EMPTY(m_nome[22])
                                        @ li+9,ci+47 GET m_nome[22] PICT '@!' VALID consulta(m_nome[22],m_horas[22],mconsulta,22)
                                ENDIF
                                IF EMPTY(m_nome[23])
                                        @ li+10,ci+47 GET m_nome[23] PICT '@!' VALID consulta(m_nome[23],m_horas[23],mconsulta,23)
                                ENDIF
                                IF EMPTY(m_nome[24])
                                        @ li+11,ci+47 GET m_nome[24] PICT '@!' VALID consulta(m_nome[24],m_horas[24],mconsulta,24)
                                ENDIF
                                IF EMPTY(m_nome[25])
                                        @ li+12,ci+47 GET m_nome[25] PICT '@!' VALID consulta(m_nome[25],m_horas[25],mconsulta,25)
                                ENDIF
                                IF EMPTY(m_nome[26])
                                        @ li+13,ci+47 GET m_nome[26] PICT '@!' VALID consulta(m_nome[26],m_horas[26],mconsulta,26)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ELSE

                                IF ! EMPTY(m_nome[1])
                                        @ li+1,ci+6 GET m_nome[1] PICT '@!' VALID consulta(m_nome[1],m_horas[1],mconsulta,1)
                                ENDIF
                                IF ! EMPTY(m_nome[2])
                                        @ li+2,ci+6 GET m_nome[2] PICT '@!' VALID consulta(m_nome[2],m_horas[2],mconsulta,2)
                                ENDIF
                                IF ! EMPTY(m_nome[3])
                                        @ li+3,ci+6 GET m_nome[3] PICT '@!' VALID consulta(m_nome[3],m_horas[3],mconsulta,3)
                                ENDIF
                                IF ! EMPTY(m_nome[4])
                                        @ li+4,ci+6 GET m_nome[4] PICT '@!' VALID consulta(m_nome[4],m_horas[4],mconsulta,4)
                                ENDIF
                                IF ! EMPTY(m_nome[5])
                                        @ li+5,ci+6 GET m_nome[5] PICT '@!' VALID consulta(m_nome[5],m_horas[5],mconsulta,5)
                                ENDIF
                                IF ! EMPTY(m_nome[6])
                                        @ li+6,ci+6 GET m_nome[6] PICT '@!' VALID consulta(m_nome[6],m_horas[6],mconsulta,6)
                                ENDIF
                                IF ! EMPTY(m_nome[7])
                                        @ li+7,ci+6 GET m_nome[7] PICT '@!' VALID consulta(m_nome[7],m_horas[7],mconsulta,7)
                                ENDIF
                                IF ! EMPTY(m_nome[8])
                                        @ li+8,ci+6 GET m_nome[8] PICT '@!' VALID consulta(m_nome[8],m_horas[8],mconsulta,8)
                                ENDIF
                                IF ! EMPTY(m_nome[9])
                                        @ li+9,ci+6 GET m_nome[9] PICT '@!' VALID consulta(m_nome[9],m_horas[9],mconsulta,9)
                                ENDIF
                                IF ! EMPTY(m_nome[10])
                                        @ li+10,ci+6 GET m_nome[10] PICT '@!' VALID consulta(m_nome[10],m_horas[10],mconsulta,10)
                                ENDIF
                                IF ! EMPTY(m_nome[11])
                                        @ li+11,ci+6 GET m_nome[11] PICT '@!' VALID consulta(m_nome[11],m_horas[11],mconsulta,11)
                                ENDIF
                                IF ! EMPTY(m_nome[12])
                                        @ li+12,ci+6 GET m_nome[12] PICT '@!' VALID consulta(m_nome[12],m_horas[12],mconsulta,12)
                                ENDIF
                                IF ! EMPTY(m_nome[13])
                                        @ li+13,ci+6 GET m_nome[13] PICT '@!' VALID consulta(m_nome[13],m_horas[13],mconsulta,13)
                                ENDIF

                                IF ! EMPTY(m_nome[14])
                                        @ li+1,ci+47 GET m_nome[14] PICT '@!' VALID consulta(m_nome[14],m_horas[14],mconsulta,14)
                                ENDIF
                                IF ! EMPTY(m_nome[15])
                                        @ li+2,ci+47 GET m_nome[15] PICT '@!' VALID consulta(m_nome[15],m_horas[15],mconsulta,15)
                                ENDIF
                                IF ! EMPTY(m_nome[16])
                                        @ li+3,ci+47 GET m_nome[16] PICT '@!' VALID consulta(m_nome[16],m_horas[16],mconsulta,16)
                                ENDIF
                                IF ! EMPTY(m_nome[17])
                                        @ li+4,ci+47 GET m_nome[17] PICT '@!' VALID consulta(m_nome[17],m_horas[17],mconsulta,17)
                                ENDIF
                                IF ! EMPTY(m_nome[18])
                                        @ li+5,ci+47 GET m_nome[18] PICT '@!' VALID consulta(m_nome[18],m_horas[18],mconsulta,18)
                                ENDIF
                                IF ! EMPTY(m_nome[19])
                                        @ li+6,ci+47 GET m_nome[19] PICT '@!' VALID consulta(m_nome[19],m_horas[19],mconsulta,19)
                                ENDIF
                                IF ! EMPTY(m_nome[20])
                                        @ li+7,ci+47 GET m_nome[20] PICT '@!' VALID consulta(m_nome[20],m_horas[20],mconsulta,20)
                                ENDIF
                                IF ! EMPTY(m_nome[21])
                                        @ li+8,ci+47 GET m_nome[21] PICT '@!' VALID consulta(m_nome[21],m_horas[21],mconsulta,21)
                                ENDIF
                                IF ! EMPTY(m_nome[22])
                                        @ li+9,ci+47 GET m_nome[22] PICT '@!' VALID consulta(m_nome[22],m_horas[22],mconsulta,22)
                                ENDIF
                                IF ! EMPTY(m_nome[23])
                                        @ li+10,ci+47 GET m_nome[23] PICT '@!' VALID consulta(m_nome[23],m_horas[23],mconsulta,23)
                                ENDIF
                                IF ! EMPTY(m_nome[24])
                                        @ li+11,ci+47 GET m_nome[24] PICT '@!' VALID consulta(m_nome[24],m_horas[24],mconsulta,24)
                                ENDIF
                                IF ! EMPTY(m_nome[25])
                                        @ li+12,ci+47 GET m_nome[25] PICT '@!' VALID consulta(m_nome[25],m_horas[25],mconsulta,25)
                                ENDIF
                                IF ! EMPTY(m_nome[26])
                                        @ li+13,ci+47 GET m_nome[26] PICT '@!' VALID consulta(m_nome[26],m_horas[26],mconsulta,26)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ENDIF
                ENDIF
                IF mturno = 'T1'
                        ***********************
                        SELE('cons')
                        SET ORDER TO 2
                        **********************
                        i = 0
                        FOR i = 1 TO 26
                                *************************
                                SEEK m_horas[i]+DTOS(mdata_cons)+mturno
                                *************************
                                IF FOUND()
                                        mcont ++
                                        AADD(m_nome,nome)
                                ELSE
                                        IF i > 13
                                                AADD(m_nome,'Nao atende neste Horario')
                                        ELSE
                                                AADD(m_nome,SPACE(35))
                                        ENDIF
                                ENDIF
                        NEXT
                        setcor(3)
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+6);DEVOUT(m_nome[i])
                        NEXT
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+47);DEVOUT(m_nome[i+13])
                        NEXT
                        setcor(1)
                        IF mconsulta = 'I'
                                IF mcont >= 13
                                        atencao('Este dia ja esta lotado. So p/Encaixe')
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                                IF EMPTY(m_nome[1])
                                        @ li+1,ci+6 GET m_nome[1] PICT '@!' VALID consulta(m_nome[1],m_horas[1],mconsulta,1)
                                ENDIF
                                IF EMPTY(m_nome[2])
                                        @ li+2,ci+6 GET m_nome[2] PICT '@!' VALID consulta(m_nome[2],m_horas[2],mconsulta,2)
                                ENDIF
                                IF EMPTY(m_nome[3])
                                        @ li+3,ci+6 GET m_nome[3] PICT '@!' VALID consulta(m_nome[3],m_horas[3],mconsulta,3)
                                ENDIF
                                IF EMPTY(m_nome[4])
                                        @ li+4,ci+6 GET m_nome[4] PICT '@!' VALID consulta(m_nome[4],m_horas[4],mconsulta,4)
                                ENDIF
                                IF EMPTY(m_nome[5])
                                        @ li+5,ci+6 GET m_nome[5] PICT '@!' VALID consulta(m_nome[5],m_horas[5],mconsulta,5)
                                ENDIF
                                IF EMPTY(m_nome[6])
                                        @ li+6,ci+6 GET m_nome[6] PICT '@!' VALID consulta(m_nome[6],m_horas[6],mconsulta,6)
                                ENDIF
                                IF EMPTY(m_nome[7])
                                        @ li+7,ci+6 GET m_nome[7] PICT '@!' VALID consulta(m_nome[7],m_horas[7],mconsulta,7)
                                ENDIF
                                IF EMPTY(m_nome[8])
                                        @ li+8,ci+6 GET m_nome[8] PICT '@!' VALID consulta(m_nome[8],m_horas[8],mconsulta,8)
                                ENDIF
                                IF EMPTY(m_nome[9])
                                        @ li+9,ci+6 GET m_nome[9] PICT '@!' VALID consulta(m_nome[9],m_horas[9],mconsulta,9)
                                ENDIF
                                IF EMPTY(m_nome[10])
                                        @ li+10,ci+6 GET m_nome[10] PICT '@!' VALID consulta(m_nome[10],m_horas[10],mconsulta,10)
                                ENDIF
                                IF EMPTY(m_nome[11])
                                        @ li+11,ci+6 GET m_nome[11] PICT '@!' VALID consulta(m_nome[11],m_horas[11],mconsulta,11)
                                ENDIF
                                IF EMPTY(m_nome[12])
                                        @ li+12,ci+6 GET m_nome[12] PICT '@!' VALID consulta(m_nome[12],m_horas[12],mconsulta,12)
                                ENDIF
                                IF EMPTY(m_nome[13])
                                        @ li+13,ci+6 GET m_nome[13] PICT '@!' VALID consulta(m_nome[13],m_horas[13],mconsulta,13)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ELSE
                                IF ! EMPTY(m_nome[1])
                                        @ li+1,ci+6 GET m_nome[1] PICT '@!' VALID consulta(m_nome[1],m_horas[1],mconsulta,1)
                                ENDIF
                                IF ! EMPTY(m_nome[2])
                                        @ li+2,ci+6 GET m_nome[2] PICT '@!' VALID consulta(m_nome[2],m_horas[2],mconsulta,2)
                                ENDIF
                                IF ! EMPTY(m_nome[3])
                                        @ li+3,ci+6 GET m_nome[3] PICT '@!' VALID consulta(m_nome[3],m_horas[3],mconsulta,3)
                                ENDIF
                                IF ! EMPTY(m_nome[4])
                                        @ li+4,ci+6 GET m_nome[4] PICT '@!' VALID consulta(m_nome[4],m_horas[4],mconsulta,4)
                                ENDIF
                                IF ! EMPTY(m_nome[5])
                                        @ li+5,ci+6 GET m_nome[5] PICT '@!' VALID consulta(m_nome[5],m_horas[5],mconsulta,5)
                                ENDIF
                                IF ! EMPTY(m_nome[6])
                                        @ li+6,ci+6 GET m_nome[6] PICT '@!' VALID consulta(m_nome[6],m_horas[6],mconsulta,6)
                                ENDIF
                                IF ! EMPTY(m_nome[7])
                                        @ li+7,ci+6 GET m_nome[7] PICT '@!' VALID consulta(m_nome[7],m_horas[7],mconsulta,7)
                                ENDIF
                                IF ! EMPTY(m_nome[8])
                                        @ li+8,ci+6 GET m_nome[8] PICT '@!' VALID consulta(m_nome[8],m_horas[8],mconsulta,8)
                                ENDIF
                                IF ! EMPTY(m_nome[9])
                                        @ li+9,ci+6 GET m_nome[9] PICT '@!' VALID consulta(m_nome[9],m_horas[9],mconsulta,9)
                                ENDIF
                                IF ! EMPTY(m_nome[10])
                                        @ li+10,ci+6 GET m_nome[10] PICT '@!' VALID consulta(m_nome[10],m_horas[10],mconsulta,10)
                                ENDIF
                                IF ! EMPTY(m_nome[11])
                                        @ li+11,ci+6 GET m_nome[11] PICT '@!' VALID consulta(m_nome[11],m_horas[11],mconsulta,11)
                                ENDIF
                                IF ! EMPTY(m_nome[12])
                                        @ li+12,ci+6 GET m_nome[12] PICT '@!' VALID consulta(m_nome[12],m_horas[12],mconsulta,12)
                                ENDIF
                                IF ! EMPTY(m_nome[13])
                                        @ li+13,ci+6 GET m_nome[13] PICT '@!' VALID consulta(m_nome[13],m_horas[13],mconsulta,13)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ENDIF
                ENDIF
                IF mturno = 'T2'
                        ***********************
                        SELE('cons')
                        SET ORDER TO 2
                        **********************
                        i = 0
                        FOR i = 1 TO 26
                                *************************
                                SEEK m_horas[i]+DTOS(mdata_cons)
                                *************************
                                IF FOUND()
                                        mcont ++
                                        AADD(m_nome,nome)
                                ELSE
                                        IF i <= 13
                                                AADD(m_nome,'Nao atende neste Horario')
                                        ELSE
                                                AADD(m_nome,SPACE(35))
                                        ENDIF
                                ENDIF
                        NEXT
                        setcor(3)
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+6);DEVOUT(m_nome[i])
                        NEXT
                        i = 0
                        FOR i = 1 to 13
                                DEVPOS(li+i,ci+47);DEVOUT(m_nome[i+13])
                        NEXT
                        setcor(1)
                        IF mconsulta = 'I'
                                IF mcont >= 13
                                        atencao('Este dia ja esta lotado. So p/Encaixe')
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                                IF EMPTY(m_nome[14])
                                        @ li+1,ci+47 GET m_nome[14] PICT '@!' VALID consulta(m_nome[14],m_horas[14],mconsulta,14)
                                ENDIF
                                IF EMPTY(m_nome[15])
                                        @ li+2,ci+47 GET m_nome[15] PICT '@!' VALID consulta(m_nome[15],m_horas[15],mconsulta,15)
                                ENDIF
                                IF EMPTY(m_nome[16])
                                        @ li+3,ci+47 GET m_nome[16] PICT '@!' VALID consulta(m_nome[16],m_horas[16],mconsulta,16)
                                ENDIF
                                IF EMPTY(m_nome[17])
                                        @ li+4,ci+47 GET m_nome[17] PICT '@!' VALID consulta(m_nome[17],m_horas[17],mconsulta,17)
                                ENDIF
                                IF EMPTY(m_nome[18])
                                        @ li+5,ci+47 GET m_nome[18] PICT '@!' VALID consulta(m_nome[18],m_horas[18],mconsulta,18)
                                ENDIF
                                IF EMPTY(m_nome[19])
                                        @ li+6,ci+47 GET m_nome[19] PICT '@!' VALID consulta(m_nome[19],m_horas[19],mconsulta,19)
                                ENDIF
                                IF EMPTY(m_nome[20])
                                        @ li+7,ci+47 GET m_nome[20] PICT '@!' VALID consulta(m_nome[20],m_horas[20],mconsulta,20)
                                ENDIF
                                IF EMPTY(m_nome[21])
                                        @ li+8,ci+47 GET m_nome[21] PICT '@!' VALID consulta(m_nome[21],m_horas[21],mconsulta,21)
                                ENDIF
                                IF EMPTY(m_nome[22])
                                        @ li+9,ci+47 GET m_nome[22] PICT '@!' VALID consulta(m_nome[22],m_horas[22],mconsulta,22)
                                ENDIF
                                IF EMPTY(m_nome[23])
                                        @ li+10,ci+47 GET m_nome[23] PICT '@!' VALID consulta(m_nome[23],m_horas[23],mconsulta,23)
                                ENDIF
                                IF EMPTY(m_nome[24])
                                        @ li+11,ci+47 GET m_nome[24] PICT '@!' VALID consulta(m_nome[24],m_horas[24],mconsulta,24)
                                ENDIF
                                IF EMPTY(m_nome[25])
                                        @ li+12,ci+47 GET m_nome[25] PICT '@!' VALID consulta(m_nome[25],m_horas[25],mconsulta,25)
                                ENDIF
                                IF EMPTY(m_nome[26])
                                        @ li+13,ci+47 GET m_nome[26] PICT '@!' VALID consulta(m_nome[26],m_horas[26],mconsulta,26)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ELSE
                                IF ! EMPTY(m_nome[14])
                                        @ li+1,ci+47 GET m_nome[14] PICT '@!' VALID consulta(m_nome[14],m_horas[14],mconsulta,14)
                                ENDIF
                                IF ! EMPTY(m_nome[15])
                                        @ li+2,ci+47 GET m_nome[15] PICT '@!' VALID consulta(m_nome[15],m_horas[15],mconsulta,15)
                                ENDIF
                                IF ! EMPTY(m_nome[16])
                                        @ li+3,ci+47 GET m_nome[16] PICT '@!' VALID consulta(m_nome[16],m_horas[16],mconsulta,16)
                                ENDIF
                                IF ! EMPTY(m_nome[17])
                                        @ li+4,ci+47 GET m_nome[17] PICT '@!' VALID consulta(m_nome[17],m_horas[17],mconsulta,17)
                                ENDIF
                                IF ! EMPTY(m_nome[18])
                                        @ li+5,ci+47 GET m_nome[18] PICT '@!' VALID consulta(m_nome[18],m_horas[18],mconsulta,18)
                                ENDIF
                                IF ! EMPTY(m_nome[19])
                                        @ li+6,ci+47 GET m_nome[19] PICT '@!' VALID consulta(m_nome[19],m_horas[19],mconsulta,19)
                                ENDIF
                                IF ! EMPTY(m_nome[20])
                                        @ li+7,ci+47 GET m_nome[20] PICT '@!' VALID consulta(m_nome[20],m_horas[20],mconsulta,20)
                                ENDIF
                                IF ! EMPTY(m_nome[21])
                                        @ li+8,ci+47 GET m_nome[21] PICT '@!' VALID consulta(m_nome[21],m_horas[21],mconsulta,21)
                                ENDIF
                                IF ! EMPTY(m_nome[22])
                                        @ li+9,ci+47 GET m_nome[22] PICT '@!' VALID consulta(m_nome[22],m_horas[22],mconsulta,22)
                                ENDIF
                                IF ! EMPTY(m_nome[23])
                                        @ li+10,ci+47 GET m_nome[23] PICT '@!' VALID consulta(m_nome[23],m_horas[23],mconsulta,23)
                                ENDIF
                                IF ! EMPTY(m_nome[24])
                                        @ li+11,ci+47 GET m_nome[24] PICT '@!' VALID consulta(m_nome[24],m_horas[24],mconsulta,24)
                                ENDIF
                                IF ! EMPTY(m_nome[25])
                                        @ li+12,ci+47 GET m_nome[25] PICT '@!' VALID consulta(m_nome[25],m_horas[25],mconsulta,25)
                                ENDIF
                                IF ! EMPTY(m_nome[26])
                                        @ li+13,ci+47 GET m_nome[26] PICT '@!' VALID consulta(m_nome[26],m_horas[26],mconsulta,26)
                                ENDIF
                                READ
                                IF LASTKEY() = 27
                                        RESTSCREEN(00,00,24,79,tela1)
                                        RETURN NIL
                                ENDIF
                        ENDIF
                ENDIF
        ENDDO
ENDDO
*************************** F I M **********************************

