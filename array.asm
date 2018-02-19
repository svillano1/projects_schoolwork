; -----------------------------------------------------------------------------
; Author:  Steven Villano - SID: W0570843
; Date:    11/19/2016
; 
; CISP 310 - Assembly language
; Prof. Al Juboori - Fall 2016 FLC
; Assignment - Using the windows 32 or windows64 framework, write a program
;              to partially fill an array of size 20 by getting input values
;              from the user until the user enters zero, then count how many 
;              odd and even numbers in this array. In addition, the program 
;              needs to perform the following:
;                   
;                    - Check whether the user exceeds array bounds
;                    - Perform input validation (negative numbers not allowed)
;------------------------------------------------------------------------------

.586
.MODEL FLAT

INCLUDE io.h            ; header file for input/output

.STACK 4096

.DATA
nbrArray  DWORD   20 DUP (?)
nbrElts   DWORD   ?
ecount    DWORD   ?
ocount    DWORD   ?
prompt1   BYTE    "Enter number to add to array (0 to exit)", 0
prompt3   BYTE    "Press 'n' or 'N' to exit", 0
string    BYTE    40 DUP (?)
string4   DWORD   40 DUP (?)
string5   BYTE    "Input exceeded array bounds!", 0
sum       BYTE    11 DUP (?), 0
outlbl1   BYTE    "Number of even elements:", 0
outlbl2   BYTE    "Number of odd elements:", 0
outlbl4   BYTE    "ERROR!", 0

.CODE
_MainProc PROC
start:       mov     nbrElts, 0                   ; initialize number of elements to 0
             mov     ecx, 0                       ; initialize count to 0
             lea     ebx, nbrArray                ; get address of array
             mov     ecount, 0                    ; initialize even counter
             mov     ocount, 0                    ; initialize odd counter
             input   prompt1, string, 40          ; read ASCII characters
             atod    string                       ; convert to integer
innotz:      cmp     eax, 0                       ; compare input and zero
             jle     search                       ; jump to search if input < 0
             inc     nbrElts                      ; add 1 to numElts
             cmp     nbrElts, 20                  ; test that user is within array bounds
             jg      search2                      ; jump if greater than or =
             mov     [ebx], eax                   ; store in array
             add     ebx, 4                       ; get address of next element
             input   prompt1, string, 40          ; read ASCII characters
             atod    string                       ; convert to integer
             jmp     innotz                       ; jump to beginning of loop
             mov     ebx, 0                       ; clear register
             lea     ebx, nbrArray                ; get address of array
search2:     output  outlbl4, string5             ; output error message          
search:      lea     ebx, nbrArray                ; get beginning address of array
search3:     inc     ecx                          ; start count at 1
             cmp     ecx, nbrElts                 ; compare count and number of elements
             jg      sol                          ; jump to solution if count > nbrElts
             mov     eax, [ebx]                   ; move element to eax
             mov     esi, 2                        ; move divisor to al
             cdq                                  ; prepare for division
             idiv    esi                           ; divide
             cmp     edx, 0                       ; compare remainder to 0
             je      eve                          ; jump to even if remainder is 0
             jne     od                           ; jump to odd otherwise
eve:         inc     ecount                       ; incremnent ecounter
             add     ebx, 4                       ; increment to next address
             jmp     search3                      ; jump to search
od:          inc     ocount                       ; increment odd counter
             add     ebx, 4                       ; increment to next address
             jmp     search3                      ; jump to search
sol:         dtoa    sum, ecount                  ; convert to string
             output  outlbl1, sum                 ; output number of even elements
             dtoa    sum, ocount                  ; convert to string
             output  outlbl2, sum                 ; output number of odd elements
             input   prompt3, string4, 40         ; prompt user to continue
             mov     eax, string4                 ; move string to eax for comparison
             cmp     eax, 06Eh                    ; compare input
             je      endpt                        ; jump if equal
             cmp     eax, 04Eh                    ; compare input
             je      endpt                        ; jump if equal
             jmp     start                        ; otherwise, go back to the start
endpt:       mov     eax, 0                       ; exit with return code 0
             ret
_MainProc ENDP
END                                               ; end of source code
