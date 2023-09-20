********************************************************************************
*                                                                              *
*  PROMSYS.PRG  VERSAO 4.0                                                     *
*  NOVO SISTEMA CONTROLADOR DE MENUS DESENVOLVIDO GERA€ÇO CLIPPER              *
*                                                                              *
*  ALEM DAS MELHORIAS ANTERIORES FOI ADICIONADO UM PARSER PARA O CARACTER ^    *
*  QUE QUANDO COLOCADO DENTRO DO CAMPO DO PROMPT ELE FAZ COM QUE A PROXIMA     *
*  LETRA SEJA INTERPRETADA E DESTACADA DO RESTO DO CAMPO. O NOVO SISTEMA NAO   *
*  IMPEDE O USO PADRAO DO PROMPT DO CLIPPER ALEM DE MISTURAR ENTRE O PROMPT    *
*  PADRAO E O NOVO CONTROLE.                                                   *
*                                                                              *
********************************************************************************
#include "inkey.ch"
#include "set.ch"
#include "common.ch"

static Static1:= {}
static Static2:=""
static Static3:=""
static PRrow  := 0
static PRcol  := 0
static MPRrow := 0
static MPRcol := 0
static MExit  :=.f.

procedure __ATPROMPT(Arg1, Arg2, Arg3, Arg4)
Local Local1,Local2,Local3,Local4,Local5
if (Local1:=at("^",Arg3)) # 0
    Local2:=substr(Arg3,Local1+1,1)
    Arg3=strtran(Arg3,"^",,,1)
else
    Local2:=left(alltrim(Arg3),1)
endif
if Static2==""
    Local3:=setcolor()
    Static2:=Left(Local3,rat(",",Local3)-1)
    Static2:=Right(Static2,len(Static2)-rat(",",Static2))
    Static3:=Right(Local3,len(Local3)-rat(",",Local3))
endif
AAdd(Static1, {Arg1, Arg2, Arg3, Arg4, Local1, Local2})
@ Arg1, Arg2 say Arg3
if Local1 # 0
    @ Arg1, Arg2+Local1-1 say Local2 color Static2
endif
return

function __MENUTO(Arg1, Arg2)

local Local1 , Local2 , Local3 , Local4 , Local5 , Local6 , Local7
local Local8 , Local9 , Local10, Local11, Local12, Local13, Local14
local Local15, Local16, Local17, Local18, Local19, Local20, Local21
local Local22, Local23, Local24
Local13:= Static1
Local14:= Set(_SET_MESSAGE)
Local15:= Set(_SET_MCENTER)
Local16:= readvar(Upper(Arg2))
Static1:= {}
Local11:= errorblock({|_1| break(_1)})
Local21:=.t.
begin sequence
Local2:= eval(Arg1)
Local12:= .F.
recover
Local12:= .T.
end sequence
errorblock(Local11)
if (Local12)
    __qqpub(Arg2)
endif
if (ValType(Local2) != "N" .OR. Local2 < 1)
    Local2:= 1
endif
if (Local2 > Len(Local13))
    Local2:= Len(Local13)
endif
if (Set(_SET_INTENSITY))
    Local8:= setcursor(0)
endif
Local7:= .F.
Local6:= ""
Local9:= Local18:= Local19:= Local20:= 0
MPRrow:=-1
MPRcol:=-1
do while (Local2 != 0)
    Local1:= Local13[Local2]
    if (Set(_SET_INTENSITY))
        colorselec(1)
    endif
    @ Local1[1], Local1[2] say Local1[3]
    PRrow:=row()
    PRcol:=col()
    if Local1[5] # 0
        @ Local1[1], Local1[2]+Local1[5]-1 say Local1[6] color Static3
    endif
    if (Set(_SET_INTENSITY))
        colorselec(0)
    endif
    if (Local14 != 0)
        if (!Empty(Local6))
            @ Local14, Local9 say Space(Len(Local6))
        endif
        Local6:= Local1[4]
        if (ISBLOCK(Local6))
            Local6:= eval(Local6)
        elseif (ValType(Local6) == "U")
            Local6:= ""
        endif
        if (Local15)
            Local9:= Int((MaxCol() - Len(Local6)) / 2)
        endif
        @ Local14, Local9 say Local6
        SetPos(Local1[1], Local1[2])
    endif
    if (Local7)
        exit
    endif
    Local21:=.f.
    Local5:= 0
    do while (Local5 == 0)
        Local5:= InKey()
        if ((Local10:= SetKey(Local5)) != Nil)
            eval(Arg1, Local2)
            eval(Local10, procname(1), procline(1), Upper(Arg2))
            Local2:= eval(Arg1)
            Local5:= 0
        endif
    enddo
    if (Local2 > Len(Local13))
        Local2:= Len(Local13)
    endif
    do case
    case Local21
        Local24:=.f.
        for Local22 = 1 to len(Local13)
            if Local19=Local13[Local22,1]
                Local23:=Local13[Local22,2]+len(Local13[Local22,3])-1
                if Local20>=Local13[Local22,2] .and. Local20 <=Local23
                    Local2:=Local22
                    keyboard chr(K_ENTER)
                    Local24:=.t.
                    exit
                endif
            endif
        next
        if MExit
            if ! Local24
                MPRrow:=Local19
                MPRcol:=Local20
                Keyboard chr(K_ESC)
            endif
        endif
    case Local5 == K_UP .OR. Local5 == K_LEFT
        if (--Local2 < 1)
            Local2:= iif(Set(_SET_WRAP), Len(Local13), 1)
        endif
    case Local5 == K_DOWN .OR. Local5 == K_RIGHT
        if (++Local2 > Len(Local13))
            Local2:= iif(Set(_SET_WRAP), 1, Len(Local13))
        endif
    case Local5 == K_HOME
        Local2:= 1
    case Local5 == K_END
        Local2:= Len(Local13)
    case Local5 == K_PGUP
        Local7:= .T.
    case Local5 == K_PGDN
        Local7:= .T.
    case Local5 == K_ENTER
        Local7:= .T.
    case Local5 == K_ESC
        Local2:= 0
    otherwise
        Local4:= Upper(Chr(Local5))
        Local3:= ascan(Local13, {|_1| Local4 == Upper(_1[6])})
        if (Local3 != 0)
            Local2:= Local3
            Local7:= .T.
        endif
    endcase
    if (Local2 != 0)
        @ Local1[1], Local1[2] say Local1[3]
        if Local1[5] # 0
            @ Local1[1], Local1[2]+Local1[5]-1 say Local1[6] color Static2
        endif
    endif
enddo
setcursor(Local8)
eval(Arg1, Local2)
if (Local12)
    release (Arg2)
endif
if (!Empty(Local16))
    readvar(Local16)
endif
SetPos(MaxRow() - 1, 0)
Static2:=""
Static3:=""
return Local2

function PRrow()
return PRrow

function PRcol()
return PRcol

function MReturn(permissao)
if valtype(permissao)="L"
    if permissao
        MExit=.t.
        return Nil
    else
        MExit=.f.
        return Nil
    endif
else
    return {MPRrow,MPRcol}
endif
return Nil
