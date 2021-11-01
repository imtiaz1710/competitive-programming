;a program to read a character from the keyboard and display it at the next position
;of the same line.

.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
	MOV AH,1		;TAKE A CHARACTER AS INPUT
	INT 21H
	
	MOV DL,AL	
	MOV AH,2		;PRINT THE CHARACTER
	INT 21H
	
	MOV AH,1
	INT 21H
	
	MOV AH,4CH		;EXIT DOS
	INT 21H
MAIN ENDP
END MAIN