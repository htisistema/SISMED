*************************************
* EMITE EXAME DE PNEUMOLOGIA
*************************************

FUNCTION smedpneu


LOCAL opcao,tela1,mhc,mhb,mht,ml,mb1,ms,mb2,me,mlt,mla,mm,mpl,mg,mu,mc,mha,mk,;
      mcl,mra,mcvf,mvef1,mit,mpfe,mfe,mvvm,mcv,mtef,mcoluna,machou

PRIVATE traco

lci := 00
cci := 02
lba := 23
cba := 79

tela1 := SAVESCREEN(00,00,24,79)
mhc := 0
mhb := 0
mht := 0
ml  := 0
mb1 := 0
ms  := 0
mb2 := 0
me  := 0
mlt := 0
mla := 0
mm  := 0
mpl := 0
mg  := 0
mu  := 0
mc  := 0
mha := 0
mk  := 0
mcl := 0
mra := 0

mcvf := 0
mvef1 := 0
mit := 0
mpfe := 0
mfef := 0
mvvm := 0
mcv := 0
mtef := 0



WHILE .T.
        SET INTEN ON
        opcao := SPACE(1)
        machou := ' '
        apaga(23,00,23,79)
        Mensagem('Preencha os Campos ou Tecle <ESC> p/Retornar')

        setcor(3)
        botao(lci,cci,lba,cba)
        janela(lci,cba,' Exames Complementares ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome........:')
        DEVPOS(lci+1,cci+57);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Idade.......:')
        DEVPOS(lci+2,cci+22);DEVOUT('Sexo:')
        setcor(3)
        DEVPOS(lci+1,cci+16);DEVOUT(mreg+'-'+mnome)
        DEVPOS(lci+1,cci+63);DEVOUT(mdata)
        DEVPOS(lci+2,cci+16);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(lci+2,cci+30);DEVOUT(cli->sexo)
        setcor(1)
        @ lci+3,cci+1 TO lci+3,cba-1
        @ lci+4,cci+16 TO lba-1,cci+16
        @ lci+4,cci+26 TO lba-1,cci+26
        @ lci+4,cci+37 TO lba-1,cci+37
        @ lci+4,cci+48 TO lba-1,cci+48
        @ lci+4,cci+60 TO lba-1,cci+60
        DEVPOS(lci+4,cci+2);DEVOUT('Hc:')
        DEVPOS(lci+5,cci+2);DEVOUT('Hb:')
        DEVPOS(lci+6,cci+2);DEVOUT('Ht:')
        DEVPOS(lci+7,cci+2);DEVOUT('L :')
        DEVPOS(lci+8,cci+2);DEVOUT('B :')
        DEVPOS(lci+9,cci+2);DEVOUT('S :')
        DEVPOS(lci+10,cci+2);DEVOUT('B :')
        DEVPOS(lci+11,cci+2);DEVOUT('E :')
        DEVPOS(lci+12,cci+2);DEVOUT('Lt:')
        DEVPOS(lci+13,cci+2);DEVOUT('La:')
        DEVPOS(lci+14,cci+2);DEVOUT('M :')
        DEVPOS(lci+15,cci+2);DEVOUT('Pl:')
        DEVPOS(lci+16,cci+2);DEVOUT('G :')
        DEVPOS(lci+17,cci+2);DEVOUT('U :')
        DEVPOS(lci+18,cci+2);DEVOUT('C :')
        DEVPOS(lci+19,cci+2);DEVOUT('Ha:')
        DEVPOS(lci+20,cci+2);DEVOUT('K :')
        DEVPOS(lci+21,cci+2);DEVOUT('Cl:')
        DEVPOS(lci+22,cci+2);DEVOUT('Ra:')
        mcoluna := 0
        *************
        SELE('com')
        SET ORDER TO 1
        *************
        IF com->(DBSEEK(mreg))
                WHILE codcli = mreg .AND. mcoluna <= 44
                        setcor(3)
                        DEVPOS(lci+3,cci+17+mcoluna);DEVOUT(data)
                        DEVPOS(lci+4,cci+17+mcoluna);DEVOUTPICT(Hc,'9,999,999')
                        DEVPOS(lci+5,cci+17+mcoluna);DEVOUTPICT(Hb,'9,999,999')
                        DEVPOS(lci+6,cci+17+mcoluna);DEVOUTPICT(Ht,'9,999,999')
                        DEVPOS(lci+7,cci+17+mcoluna);DEVOUTPICT(L,'9,999,999')
                        DEVPOS(lci+8,cci+17+mcoluna);DEVOUTPICT(B1,'9,999,999')
                        DEVPOS(lci+9,cci+17+mcoluna);DEVOUTPICT(S,'9,999,999')
                        DEVPOS(lci+10,cci+17+mcoluna);DEVOUTPICT(B2,'9,999,999')
                        DEVPOS(lci+11,cci+17+mcoluna);DEVOUTPICT(E,'9,999,999')
                        DEVPOS(lci+12,cci+17+mcoluna);DEVOUTPICT(Lt,'9,999,999')
                        DEVPOS(lci+13,cci+17+mcoluna);DEVOUTPICT(La,'9,999,999')
                        DEVPOS(lci+14,cci+17+mcoluna);DEVOUTPICT(M,'9,999,999')
                        DEVPOS(lci+15,cci+17+mcoluna);DEVOUTPICT(Pl,'9,999,999')
                        DEVPOS(lci+16,cci+17+mcoluna);DEVOUTPICT(G,'9,999,999')
                        DEVPOS(lci+17,cci+17+mcoluna);DEVOUTPICT(U,'9,999,999')
                        DEVPOS(lci+18,cci+17+mcoluna);DEVOUTPICT(C,'9,999,999')
                        DEVPOS(lci+19,cci+17+mcoluna);DEVOUTPICT(Ha,'9,999,999')
                        DEVPOS(lci+20,cci+17+mcoluna);DEVOUTPICT(K,'9,999,999')
                        DEVPOS(lci+21,cci+17+mcoluna);DEVOUTPICT(Cl,'9,999,999')
                        DEVPOS(lci+22,cci+17+mcoluna);DEVOUTPICT(Ra,'9,999,999')
                        setcor(1)
                        mcoluna := mcoluna + 11
                        SKIP
                ENDDO
        ENDIF
        @ lci+1,cci+63 GET mdata
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ENDIF
        IF com->(DBSEEK(mreg+(DESCEND(DTOS(mdata)))))
                machou := '*'
                mhc :=  hc
                mhb :=  hb
                mht :=  ht
                ml  :=  l
                mb1 :=  b1
                ms  :=  s
                mb2 :=  b2
                me  :=  e
                mlt :=  lt
                mla :=  la
                mm  :=  m
                mpl :=  pl
                mg  :=  g
                mu  :=  u
                mc  :=  c
                mha :=  ha
                mk  :=  k
                mcl :=  cl
                mra :=  ra
        ENDIF
        @ lci+4,cci+06 GET mhc PICT '9,999,999'
        @ lci+5,cci+06 GET mhb PICT '9,999,999'
        @ lci+6,cci+06 GET mht PICT '9,999,999'
        @ lci+7,cci+06 GET ml  PICT '9,999,999'
        @ lci+8,cci+06 GET mb1 PICT '9,999,999'
        @ lci+9,cci+06 GET ms  PICT '9,999,999'
        @ lci+10,cci+06 GET mb2 PICT '9,999,999'
        @ lci+11,cci+06 GET me  PICT '9,999,999'
        @ lci+12,cci+06 GET mlt PICT '9,999,999'
        @ lci+13,cci+06 GET mla PICT '9,999,999'
        @ lci+14,cci+06 GET mm  PICT '9,999,999'
        @ lci+15,cci+06 GET mpl PICT '9,999,999'
        @ lci+16,cci+06 GET mg  PICT '9,999,999'
        @ lci+17,cci+06 GET mu  PICT '9,999,999'
        @ lci+18,cci+06 GET mc  PICT '9,999,999'
        @ lci+19,cci+06 GET mha PICT '9,999,999'
        @ lci+20,cci+06 GET mk  PICT '9,999,999'
        @ lci+21,cci+06 GET mcl PICT '9,999,999'
        @ lci+22,cci+06 GET mra PICT '9,999,999'
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        setcor(3)
        botao(lci,cci,lba-10,cba)
        janela(lci,cba,' Funcao Pulmonar ')
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Nome........:')
        DEVPOS(lci+1,cci+53);DEVOUT('Data:')
        DEVPOS(lci+2,cci+2);DEVOUT('Idade.......:')
        DEVPOS(lci+2,cci+22);DEVOUT('Sexo:')
        setcor(3)
        DEVPOS(lci+1,cci+16);DEVOUT(mnome)
        DEVPOS(lci+1,cci+59);DEVOUT(mdata)
        DEVPOS(lci+2,cci+16);DEVOUT(STR(INT((DATE() - cli->datans)/365),2))
        DEVPOS(lci+2,cci+30);DEVOUT(cli->sexo)
        setcor(1)
        @ lci+3,cci+1 TO lci+3,cba-1
        @ lci+4,cci+17 TO lba-1-10,cci+17
        @ lci+4,cci+28 TO lba-1-10,cci+28
        @ lci+4,cci+40 TO lba-1-10,cci+40
        @ lci+4,cci+52 TO lba-1-10,cci+52
        @ lci+4,cci+65 TO lba-1-10,cci+65
        DEVPOS(lci+4,cci+2);DEVOUT('CVF :')
        DEVPOS(lci+5,cci+2);DEVOUT('VEF1:')
        DEVPOS(lci+6,cci+2);DEVOUT('IT  :')
        DEVPOS(lci+7,cci+2);DEVOUT('PFE :')
        DEVPOS(lci+8,cci+2);DEVOUT('FEF :')
        DEVPOS(lci+9,cci+2);DEVOUT('VVM :')
        DEVPOS(lci+10,cci+2);DEVOUT('CV  :')
        DEVPOS(lci+11,cci+2);DEVOUT('TEF :')
        mcoluna := 0
        *************
        SELE('pul')
        SET ORDER TO 1
        *************
        IF pul->(DBSEEK(mreg))
                WHILE cod_cli = mreg .AND. mcoluna <= 44
                        setcor(3)
                        DEVPOS(lci+3,cci+18+mcoluna);DEVOUT(data_pul)
                        DEVPOS(lci+4,cci+18+mcoluna);DEVOUTPICT(cvf,'9,999,999')
                        DEVPOS(lci+5,cci+18+mcoluna);DEVOUTPICT(vef1,'9,999,999')
                        DEVPOS(lci+6,cci+18+mcoluna);DEVOUTPICT(it,'9,999,999')
                        DEVPOS(lci+7,cci+18+mcoluna);DEVOUTPICT(pfe,'9,999,999')
                        DEVPOS(lci+8,cci+18+mcoluna);DEVOUTPICT(fef,'9,999,999')
                        DEVPOS(lci+9,cci+18+mcoluna);DEVOUTPICT(vvm,'9,999,999')
                        DEVPOS(lci+10,cci+18+mcoluna);DEVOUTPICT(cv,'9,999,999')
                        DEVPOS(lci+11,cci+18+mcoluna);DEVOUTPICT(tef,'9,999,999')
                        setcor(1)
                        mcoluna := mcoluna + 11
                        SKIP
                ENDDO
        ENDIF
        IF com->(DBSEEK(mreg+(DESCEND(DTOS(mdata)))))
                mcvf  := cvf
                mvef1 := vef1
                mit   := it
                mpfe  := pfe
                mfef  := fef
                mvvm  := vvm
                mcv   := cv
                mtef  := tef
        ENDIF
        @ lci+4,cci+08 GET mcvf PICT '9,999,999'
        @ lci+5,cci+08 GET mvef1 PICT '9,999,999'
        @ lci+6,cci+08 GET mit PICT '9,999,999'
        @ lci+7,cci+08 GET mpfe  PICT '9,999,999'
        @ lci+8,cci+08 GET mfef PICT '9,999,999'
        @ lci+9,cci+08 GET mvvm  PICT '9,999,999'
        @ lci+10,cci+08 GET mcv PICT '9,999,999'
        @ lci+11,cci+08 GET mtef  PICT '9,999,999'
        READ
        IF LASTKEY() = 27
                limpa(lci+4,cci+2,lci+21,cba-1)
                LOOP
        ENDIF
        IF machou = ' '
                opcao := op_simnao('S','Confirma Inclusao [S/n]:')
        ELSEIF machou = '*'
                opcao := op_simnao('S','Confirma Alteracao [S/n]:')
        ENDIF
        IF LASTKEY() = 27
                limpa(lci+4,cci+2,lci+21,cba-1)
                LOOP
        ENDIF
        IF opcao = 'S'
                ****************
                SELE('com')
                SET ORDER TO 1
                ****************
                IF machou = ' '
                        IF ! ADIREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ELSEIF machou = '*'
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ENDIF
                com->codcli := mreg
                com->data := mdata
                com->hc := mhc
                com->hb :=  mhb
                com->ht :=  mht
                com->l  :=  ml
                com->b1 :=  mb1
                com->s  :=  ms
                com->b2 :=  mb2
                com->e  :=  me
                com->lt :=  mlt
                com->la :=  mla
                com->m  :=  mm
                com->pl :=  mpl
                com->g  :=  mg
                com->u  :=  mu
                com->c  :=  mc
                com->ha :=  mha
                com->k  :=  mk
                com->cl :=  mcl
                com->ra :=  mra
                DBUNLOCKALL()
                DBCOMMITALL()

                ****************
                SELE('pul')
                SET ORDER TO 1
                ****************
                IF machou = ' '
                        IF ! ADIREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ELSEIF machou = '*'
                        IF ! BLOQREG()
                                atencao('Nao foi possivel acessar o arquivo')
                                LOOP
                        ENDIF
                ENDIF
                pul->cod_cli := mreg
                pul->data_pul := mdata
                pul->cvf := mcvf
                pul->vef1 := mvef1
                pul->it := mit
                pul->pfe := mpfe
                pul->fef := mfef
                pul->vvm := mvvm
                pul->cv := mcv
                pul->tef := mtef
                DBUNLOCKALL()
                DBCOMMITALL()
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ELSE
                LOOP
        ENDIF
ENDDO
******************************* F I M  *************************************************

