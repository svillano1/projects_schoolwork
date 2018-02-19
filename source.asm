;*****************************************************************************************************************
; Authors: S. Villano, Sheeva Szeremi, Alysia Broddrick 
; Date: 12/05/2016
; Final project for Group #9 
; Group Members - Steven Villano, Sheeva Szeremi, Alysia Broddrick, Brett Gable
;
; Project Description - We decided to build a program that simulates a Magic 8-ball. User is able to ask a 
;                       yes or no question, and the program will generate a random response, choosing between
;                       20 different pre-selected responses. The response is chosen using a random number 
;                       generator, which is seeded by accessing the system clock, and recording two timestamps,
;                       and taking the difference between the two stamps, then modulo the answer to select the 
;                       response. After a response is selected, then 6 random numbers are generated and output
;                       as the users 'lucky' lotto numbers. The numbers are verified as being unique so the user
;                       isn't provided with the same number twice. Numbers are then concatenated into a string and 
;                       output together. The user is then asked if they would like to ask another yes or no 
;                       question, and if they answer yes, then the program starts again. Otherwise, the program
;                       exits.
;*****************************************************************************************************************



.586
.MODEL FLAT

INCLUDE io.h            ; header file for input/output

.STACK 4096

.DATA 
lotto_array         dw        6 DUP (?)                                              ; array for lotto numbers
welcome             db        "Welcome to the Magic 8-Ball", 0                       ; welcome message
title1              db        "The Magic 8-Ball Speaks", 0                           ; title message
question            db        "What be thy yes or no question?", 0                   ; prompt for input
string              db        100 DUP (?)                                            ; variable to store question
title2              db        "Your lucky lottery numbers are", 0                    ; title for lotto number array                                             
resp1               db        "It is certain", 0
resp2               db        "It is decidedly so", 0
resp3               db        "Without a doubt", 0
resp4               db        "Yes, definitely", 0
resp5               db        "You may rely on it", 0
resp6               db        "As I see it, yes", 0
resp7               db        "Most likely", 0
resp8               db        "Outlook good", 0
resp9               db        "Yes", 0
resp10              db        "Signs point to yes", 0
resp11              db        "Reply hazy, try again", 0
resp12              db        "Ask again later", 0
resp13              db        "Better not tell you now", 0
resp14              db        "Cannot predict now", 0
resp15              db        "Concentrate and ask again", 0
resp16              db        "Don't count on it", 0
resp17              db        "My reply is no", 0
resp18              db        "My sources say no", 0
resp19              db        "Outlook not so good", 0
resp20              db        "Very doubtful", 0
outStr              db        40 DUP (?)                                                      ; string to hold output response
temp1               db        10 DUP(?)                                                       ; temp strings for lotto array
temp2               db        10 DUP(?)
temp3               db        10 DUP(?)
temp4               db        10 DUP(?)
temp5               db        10 DUP(?)
temp6               db        10 DUP(?)
outLot              db        100 DUP(?)                                                      ; final lotto array output
question2           db        "Do you fancy another question?('Y' or 'y' to continue)", 0     ; prompt to continue
str2                dd        10 DUP(?)                                                       ; string to hold continue response


 

.CODE
_MainProc PROC
               output    title1, welcome                                             ; output welcome message
start:         input     question, string, 100                                       ; prompt user for input
               call      rndm                                                        ; call rndm function
               cmp       eax, 0                                                      ; check if return value is negative
               jnl       switch                                                      ; jump to negate to return positive value
               neg       eax                                                         ; calculate 2's complement if negative
switch:        mov       ebx, 20                                                     ; move divisor into EBX
               cdq                                                                   ; prepare for division
               idiv      ebx                                                         ; divide by 20 (number of responses)
               mov       ecx, edx                                                    ; move remainder into ECX
               cmp       ecx, 1                                                      ; start switch to compare value in ECX to find which string to respond with
               je        response1
               cmp       ecx, 2
               je        response2
               cmp       ecx, 3
               je        response3
               cmp       ecx, 4
               je        response4
               cmp       ecx, 5
               je        response5
               cmp       ecx, 6
               je        response6
               cmp       ecx, 7
               je        response7
               cmp       ecx, 8
               je        response8
               cmp       ecx, 9
               je        response9
               cmp       ecx, 10
               je        response10
               cmp       ecx, 11
               je        response11
               cmp       ecx, 12
               je        response12
               cmp       ecx, 13
               je        response13
               cmp       ecx, 14
               je        response14
               cmp       ecx, 15
               je        response15
               cmp       ecx, 16
               je        response16
               cmp       ecx, 17
               je        response17
               cmp       ecx, 18
               je        response18
               cmp       ecx, 19
               je        response19
               cmp       ecx, 20
               je        response20
response1:     output    title1, resp1
               jmp       lotto
response2:     output    title1, resp2
               jmp       lotto
response3:     output    title1, resp3
               jmp       lotto
response4:     output    title1, resp4
               jmp       lotto
response5:     output    title1, resp5
               jmp       lotto
response6:     output    title1, resp6
               jmp       lotto
response7:     output    title1, resp7
               jmp       lotto
response8:     output    title1, resp8
               jmp       lotto
response9:     output    title1, resp9
               jmp       lotto
response10:    output    title1, resp10
               jmp       lotto
response11:    output    title1, resp11
               jmp       lotto
response12:    output    title1, resp12
               jmp       lotto
response13:    output    title1, resp13
               jmp       lotto
response14:    output    title1, resp14
               jmp       lotto
response15:    output    title1, resp15
               jmp       lotto
response16:    output    title1, resp16
               jmp       lotto
response17:    output    title1, resp17
               jmp       lotto
response18:    output    title1, resp18
               jmp       lotto
response19:    output    title1, resp19
               jmp       lotto
response20:    output    title1, resp20
               jmp       lotto
lotto:         call      fillLotto
               call      verify
               lea       eax, lotto_array
printArr:      wtoa      temp1, [eax]                                           ; convert word to strings in temp variables
               add       eax, 2
               wtoa      temp2, [eax]
               add       eax, 2
               wtoa      temp3, [eax]
               add       eax, 2
               wtoa      temp4, [eax]
               add       eax, 2
               wtoa      temp5, [eax]
               add       eax, 2
               wtoa      temp6, [eax]
               lea       esi, temp1                                             ; concatenate strings to form one long string of lotto numbers
               lea       edi, outLot
               movsb     
               movsb
               movsb
               movsb
               movsb
               movsb
               lea       esi, temp2
               movsb
               movsb
               movsb
               movsb
               movsb
               movsb
               lea       esi, temp3
               movsb
               movsb
               movsb
               movsb
               movsb
               movsb
               lea       esi, temp4
               movsb
               movsb
               movsb
               movsb
               movsb
               movsb
               lea       esi, temp5
               movsb
               movsb
               movsb
               movsb
               movsb
               movsb
               lea       esi, temp6
               movsb
               movsb
               movsb
               movsb
               movsb
               movsb
               output    title2, outLot
               mov       eax, 0
               input     question2, str2, 10
               mov       eax, str2
               cmp       eax, 059h
               je        start
               cmp       eax, 079h
               je        start
               jmp       endpt
endpt:         mov       eax, 0
               ret

_MainProc ENDP


; function to return a random number
rndm      PROC
               push      ebp            ; save base pointer
               mov       ebp, esp       ; establish stack frame
               push      ebx            ; save EBX
               rdtsc                    ; get current timestamp
               xor       ebx, ebx       ; set EBX to 0
               add       ebx, eax       ; save timestamp to ecx
               rdtsc                    ; get another timestamp
               sub       eax, ebx       ; compute ticks
               mov       eax, ebx       ; move ticks to return to caller
               pop       ebx            ; restore ebx
               pop       ebp            ; restore ebp
               ret                      ; return
rndm      ENDP


; procedure to fill the lotto_array with random numbers
fillLotto PROC
               push      ebp                 ; save base pointer
               mov       ebp, esp            ; establish stack frame
               push      ebx                 ; save EBX
               push      esi                 ; save ESI
               xor       ecx, ecx            ; set EcX to zero
               add       ecx, 6              ; add 6 to ECX number of lotto numbers
               lea       ebx, lotto_array    ; load address of array
begin:         call      rndm                ; generate random number
               cmp       eax, 0              ; check if EAX is negative
               jnl       cont                ; jump if EAX is positive
               neg       eax                 ; find 2's complement if negative
cont:          mov       esi, 69             ; divisor for lotto number range
               cdq                           ; prepare for division
               idiv      esi                 ; divide
               mov       [ebx], edx          ; move value into array
               add       ebx, 2              ; move to next element
               loop      begin               ; loop to begin
               pop       esi                 ; restore ESI
               pop       ebx                 ; restore EBX
               pop       ebp                 ; restore ebp
               ret                           ; return
fillLotto ENDP



; procedure to verify no repeated numbers in lotto_array
verify    PROC
               push      ebp                 ; save base pointer
               mov       ebp, esp            ; establish stack frame
               push      ebx                 ; save EBX
               push      esi                 ; save ESI
               push      edi                 ; save EDI
               mov       edi, 6              ; iterations for outer loop
               lea       ebx, lotto_array    ; load starting array address
               mov       edx, ebx            ; copy array address to edx
               mov       ecx, 5              ; number of iterations for inner loop
               jmp       cmpre               ; jump to cmpre for first iteration
nextVal:       mov       ecx, 5              ; move the number of elements to compare to ecx
               dec       edi                 ; decrement edi
               cmp       edi, 0              ; is iterator == 0?
               je        endpt               ; if equal jump to end of process
               lea       ebx, lotto_array    ; return ebx to start of array
               add       edx, 2              ; move edx to next element
cmpre:         cmp       edx, ebx            ; determine if we are looking at the element we are comparing
               je        skip                ; skip this element if it is the element we are comparing
               mov       esi, [ebx]          ; move element into esi for comparison
               cmp       esi, [edx]          ; compare element values
               je        newval              ; jump if equal to reassign new value to element
               add       ebx, 2              ; move ebx to next element
               loop      cmpre               ; loop back to cmpre
               jmp       nextVal             ; next iteration through array
skip:          add       ebx, 2              ; move ebx to next element
               jmp       cmpre               ; jump back to compare next element
newval:        call      rndm                ; generate random number
               mov       esi, 69             ; divisor for lotto number range
               cdq                           ; prepare for division
               idiv      esi                 ; divide
               mov       [ebx], edx          ; move value into array
               jmp       cmpre               ; jump back to compare
endpt:         pop       edi                 ; restore registers
               pop       esi                 
               pop       ebx                
               pop       ebp                 ; restore base pointer
               ret                           ; return
verify    ENDP

END                                     ; end of source code               