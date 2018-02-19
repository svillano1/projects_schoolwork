;------------------------------------------------------------------------------------------------------
; Author:  S. Villano - SID# - W0570843                                                               -
; Date:    11/19/2016                                                                                 -
; CISP 310 - Assembly language - Prof. Al Jaboori                                                     -
; Fall 2016 - FLC                                                                                     -
;                                                                                                     -
; Assignment #8 - Using the windows32 or windows64 framework, write a program to simulate             -
;                 a stack basics (LIFO) using a one dimensional array of size 20, and you             -
;                 need to start with an empty stack and implement a sequence of push and pop          -
;                 instructions then output the content of the stack after all those operations        -
;------------------------------------------------------------------------------------------------------


.586
.MODEL FLAT

INCLUDE io.h                       ; header file for input/output

.STACK 4096

.DATA 
array1    DWORD     20 DUP(?)
nbrElts   DWORD     ?
string    BYTE      ?
element   BYTE      11 DUP(?), 0
prompt1   BYTE      "Enter a number to enter into the array (0 to exit):", 0
errprmt   BYTE      "ERROR!", 0
string2   BYTE      "Exceeded array bounds!", 0
string3   BYTE      "Remaining Array Elements Are:", 0
string4   BYTE      "Popping last element entered:", 0


.CODE
_MainProc PROC
               mov         eax, 0                   ; eax to 0
               mov         nbrElts, 0               ; initialize number of elements
               lea         ebx, array1              ; get array address
               mov         ecx, ebx                 ; initialize pseudo-stack pointer

begin:         input       prompt1, string, 40      ; prompt user for input (push function)
               atod        string                   ; convert to decimal
               cmp         eax, 0                   ; compare input value
               je          printarr                 ; if equal to zero, jump to print pseudo-stack
               inc         nbrElts                  ; increment number of elements
               cmp         nbrElts, 20              ; compare number of entered elements with 20
               jg          bnderr                   ; jump if beyond array bounds
               mov         [ecx], eax               ; store element in array 
               mov         eax, NbrElts             ; move NbrElts into eax
               mov         esi, 3                   ; move divisor into edx
               cdq
               idiv        esi                      ; divide number of elements by 3
               cmp         edx, 0                   ; compare remainder to zero
               je          popper                   ; jump to popper for every third element
               add         ecx, 4                   ; increment pointer to the next element
               jmp         begin                    ; jump back to input

bnderr:        output      errprmt, string2         ; output error
               jmp         printarr                 ; jump to print array

popper:        mov         eax, [ecx]               ; move element into eax
               dtoa        element, eax             ; convert to string
               output      string4, element         ; output element popped
               jmp         begin                    ; jump back to begin

printarr:      mov         eax, [ebx]               ; move element to eax
               dtoa        element, eax             ; convert decimal to string 
               output      string3, element         ; output element at arrayPtr address
               add         ebx, 4                   ; move array pointer to first element                        

               cmp         ecx, ebx                 ; compare beginning array address with pointer address
               jl          endprog                  ; jump if arrayPtr address is less than array start address
               jmp         printarr                 ; otherwise continue printing array
               
endprog:       mov         eax, 0                   ; exit with return code 0
               ret
_MainProc ENDP
END                                                 ; end of source code
