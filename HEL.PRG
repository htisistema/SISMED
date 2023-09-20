*************************** F I M *********************************
FUNCTION AbriArq(arq,al,tp,sit,local,vext,vcamin)
**********************
LOCAL vtela,mcam:='',mcaminho:=''

vtela := SAVESCREEN(23,00,23,79)
mensagem('Solicitando acesso ao Arquivo: '+UPPER(arq))
IF SELECT(al) > 0 .AND. tp = NIL
        RESTSCREEN(23,00,23,79,vtela)
        RETURN .T.
ENDIF
IF SELECT('cfg') = 0
        USE saccfg ALIAS cfg SHARED NEW
ENDIF
IF local <> NIL .OR. al == 'cfg' .OR. al == 'movcn' .OR. al == 'movc1' .OR. al == 'prod' .OR. al == 'perf' .OR. al == 'sincl';
   .OR. al=='tped' .OR. al=='notp'
        IF SELECT(al) > 0
                RESTSCREEN(23,00,23,79,vtela)
                RETURN .T.
        ELSEIF tp <> 'E'
                USE (arq) ALIAS (al) SHARED NEW
                RESTSCREEN(23,00,23,79,vtela)
                RETURN .T.
        ELSE
                USE (arq) ALIAS (al) EXCLUSIVE NEW
                RESTSCREEN(23,00,23,79,vtela)
                RETURN .T.
        ENDIF
ENDIF
IF vcamin <> NIL
        mcam := ALLTRIM(vcamin)
        IF EMPTY(mcam)
                RETURN .F.
        ENDIF
        IF ! FILE(mcam+arq+'.dbf')
                atencao('Arquivo: '+mcam+UPPER(arq)+'.DBF nao encontrado neste caminho verifique o caminho especificado',1)
                RETURN .F.
        ENDIF
ELSE
*       mcam := ALLTRIM(cfg->caminho)
        mcam := mcaminho
ENDIF
IF ! FILE(mcam+arq+'.dbf')
        atencao('Arquivo: '+mcam+UPPER(arq)+'.DBF nao encontrado neste caminho verifique o caminho especificado')
        CLEAR MEMORY
        QUIT
ENDIF
IF sit = NIL .AND. tp <> 'E'
        IF SELECT('set') = 0
                USE (mcaminho+'SACSETUP') ALIAS set SHARED NEW
        ENDIF
ENDIF
WHILE .T.
        IF tp = 'E'
                IF SELECT(al) > 0
                        (al)->(DBCLOSEAREA())
                ENDIF
                USE (mcam+arq) ALIAS (al) EXCLUSIVE NEW
                IF ! NETERR()
                        RESTSCREEN(23,00,23,79,vtela)
                        RETURN .T.
                ELSE
                        atencao('Este ARQUIVO esta sendo usado por outro usuario, Aguarde...Tentando Acesso ao Arquivo: '+UPPER(arq)+' EXCLUSIVO',3)
                ENDIF
        ELSE
                IF SELECT(al) > 0
                        RESTSCREEN(23,00,23,79,vtela)
                        RETURN .T.
                ENDIF
                USE (mcam+arq) ALIAS (al) SHARED NEW
                IF ! NETERR()
                        RESTSCREEN(23,00,23,79,vtela)
                        RETURN .T.
                ELSE
                        atencao('Este ARQUIVO esta sendo usado EXCLUSIVO por outro usuario, Aguarde...Tentando Acesso ao Arquivo: '+UPPER(arq)+' COMPARTILHADO',3)
                ENDIF
        ENDIF
        IF LASTKEY() = 27
                EXIT
        ENDIF
ENDDO
RESTSCREEN(23,00,23,79,vtela)
RETURN .F.
*************************** F I M *********************************

