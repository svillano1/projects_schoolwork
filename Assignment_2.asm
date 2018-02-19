; Example assembly language program -- adds two numbers
; Author:  R. Detmer
; Date:    1/2008

.586
.MODEL FLAT

INCLUDE io.h            ; header file for input/output

.STACK 4096

.DATA
	volLbl	BYTE	"Volume is ", 0
	volume	BYTE	11 DUP(?), " cubic inches", 0


.CODE
_MainProc PROC
	mov		ebx, 124
	dtoa	volume, ebx
	output	volLbl, volume
        
_MainProc ENDP
END                             ; end of source code

