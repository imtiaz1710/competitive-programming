;a program to display a”?” read two decimal digits whose sum is less than 10;
;display them and their sum on the next line, with an appropriate message.

.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
	MOV AH,2		;PRINT '?' CHARACTER
	MOV DL,'?'
	INT 21H
	MOV DL,' '
	INT 21H
	
	
	MOV AH,1		;INPUT FUNCTION
	INT 21H			;TAKE INPUT:FIRST NUMBER
	
	MOV BL,AL
	
	MOV AH,2
	MOV DL,' '
	INT 21H
	
	MOV AH,1		
	INT 21H				;TAKE INPUT:SECOND NUMBER
	
	ADD BL,AL 			;ADD TWO NUMBER
	SUB BL,30H			
	
	MOV AH,2			;PRINT NEW LINE
	MOV DL,0AH
	INT 21H
	MOV DL,0DH
	INT 21H
	
	MOV DL,BL
	INT 21H				;PRINT RESULT
	
	MOV AH,1
	INT 21H
	
	MOV AH,4CH			;EXIT DOS
	INT 21H
MAIN ENDP
END MAIN
	