* CONSULTAS CONFIRMADAS
*****************************
FUNCTION smedcons(maut_cli,maut_prod)
**************************************
LOCAL mprg:='SMEDCONS',;
      mcodig_c,mcodig_p,opcao:=' ',;
      mnum_gerar,mcodig_o,mcod_autor,m_auto:={},m_posicao:={},m_ponto:=0,;
      mlci_aut:=00,mcci_aut:=00,mlba_aut:=40,mcba_aut:=90

PRIVATE mcliente,mcpf,mcgc,mconsulta,mrsoc,cons_dupr:={}

IF ! ver_nivel(mprg,'CONSULTAS CONFIRMADAS','1',nivel_acess)
        RETURN NIL
ENDIF
*----------------------------------------------
IF ! abriarq('smedconv','conv');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('smedespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('smedcli','cli');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*--------------------------------------------------
mdata_sis := DATE()
CLEAR GETS
op_tela(0,0,40,90,' CONSULTAS CONFIRMADAS ',,1)
WHILE .T.
        exibi_prg(mprg)
        WHILE LASTKEY() <> 27
                cons_dupr := {}
                sr_getconnection():exec("SELECT * FROM sacdupr WHERE emissao = "+sr_cdbvalue(mdata_sis)+" AND (status IS NULL OR status = ' ') AND cod_med = "+sr_cdbvalue(cod_operado),,.t.,@cons_dupr)
                sr_getconnection():exec('COMMIT',,.f.)
                IF EMPTY(cons_dupr)
                        atencao('Nao existe nenhum Clientes Marcado nesta DATA')
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                ASIZE(m_auto,0)
                ASIZE(m_posicao,0)
                i := 0
                FOR i = 1 TO LEN(cons_dupr)
                        //IF EMPTY(cons_dupr[1,69]) .AND. cod_operado = cons_dupr[1,68]
                                //setcor(3)
                                //DEVPOS(mlci_aut+1+i,mcci_aut+1);DEVOUT('Cliente: '+cons_dupr[1,7]+' - '+cons_dupr[1,8]+' - Hora:'+cons_dupr[1,70])
                                //setcor(1)
                                AADD(m_auto,'Cliente: '+cons_dupr[i,7]+'-'+cons_dupr[i,8]+' - Hora:'+cons_dupr[i,70])
                                AADD(m_posicao,cons_dupr[i,71])
                        //ELSE
                        //        LOOP
                        //ENDIF
                        //IF i = 7;SCROLL(mlci_aut+1,mcci_aut+1,mlba_aut-1,mcba_aut-1,1);ELSE;i++;ENDIF
                NEXT
                IF LEN(m_auto) = 0
                        atencao('Nao existe nenhum Clientes Marcado',5)
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                //IF LASTKEY() = 13 .AND. ! EMPTY(m_auto)
                        //op_tela(mlci_aut,mcci_aut,mlba_aut,mcba_aut,' CLIENTES COM CONSULTA MARCADA ',,1)
                        m_ponto := ACHOICE(mlci_aut+1,mcci_aut+1,mlba_aut-1,mcba_aut-1,m_auto,,,m_ponto)
                        IF LASTKEY() = 13
                                //mconsulta := cons_dupr[1,65]
                                /*
                                cons_cli := {}
                                sr_getconnection():exec("SELECT * FROM sacdupr WHERE emissao = "+sr_cdbvalue(mdata_sis),,.t.,@cons_cli)
                                IF EMPTY(cons_cli)
                                        atencao('Nao existe nenhum Clientes Marcado nesta DATA')
                                        EXIT
                                ENDIF
                                **********************
                                SELE('cli');ORDSETFOCUS(2)
                                GO TOP
                                **********************
                                cli->(DBSEEK(cons_dupr[1,7]))
                                IF(m_set[1,41]='1',f7_cli1(mconsulta),f7_cli(mconsulta))
                                */
                                opcao := op_simnao('S','Confirma o ATENDIMENTO [S/n]:')
                                IF LASTKEY() = 27 .OR. opcao = 'N'
                                        LOOP
                                ENDIF
                                sr_getconnection():exec("UPDATE sacdupr SET status = 'A' WHERE SR_RECNO = "+sr_cdbvalue(m_posicao[m_ponto]),,.f.)
                                sr_getconnection():exec("COMMIT",,.f.)
                                cons_dupr := {}
                                sr_getconnection():exec("SELECT fornec FROM sacdupr WHERE SR_RECNO = "+sr_cdbvalue(m_posicao[m_ponto]),,.t.,@cons_dupr)
                                sr_getconnection():exec('COMMIT',,.f.)
                                smed214(cons_dupr[1,1])
                                /*
                                **************************
                                SELE('dupr');ORDSETFOCUS(5)
                                GO m_posicao[m_ponto]
                                **************************
                                BLOQREG()
                                cons_dupr[1,69] := 'A'
                                DBCOMMIT()
                                DBUNLOCK()
                                */
                        ENDIF
                //ENDIF
        ENDDO
        IF LASTKEY() = 27
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
********************************** F I M ***********************************

