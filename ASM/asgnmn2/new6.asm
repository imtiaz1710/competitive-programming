;a program to prompt the user, read a character, and if it is an uppercase letter,
;display it at the beginning of the next line.


.MODEL SMALL
.STACK 100H
.CODE 

MAIN PROC

	MOV AH,1		;INPUT A CHARACTER
	INT 21H
	
	MOV BL,AL
	
	CMP BL,'A'		;CHECK WHETHER IT IN BETWEEN 'A' TO 'Z' OR NOT
	JNGE ENDCASE

	CMP BL,'Z'
	JNLE ENDCASE
	
	MOV AH,2		;IF IT IS PRINT THE NEW LINE AND THE CHARACTER
	MOV DL,0AH
	INT 21H
	MOV DL,0DH
	INT 21H
	
	MOV DL,BL
	INT 21H
	ENDCASE:		;DOS EXIT
		MOV AH,1
		INT 21H
		MOV AH,4CH
		INT 21H
MAIN ENDP
END MAIN