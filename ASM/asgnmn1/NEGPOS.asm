.MODEL SMALL
.STACK 100H
.DATA 
	MSG DB 'NAME: IMTIAZ ZAMAN',0DH,0AH,'ID : 17103024',0DH,0AH,'$';
	MSG2 DB 0DH,0AH,'$';
.CODE 
MAIN PROC
	MOV AX,@DATA
	MOV DS,AX
	
	LEA DX,MSG
	MOV AH,9
	INT 21H 
	
	MOV AH,1
	INT 21H
	
	MOV BL,AL
	
	INT 21H
	
	LEA DX,MSG2
	MOV AH,9
	INT 21H
	
	MOV AH,2
	CMP BL,'0'
	JL NEGA
	JE ZERO
	JG POS
	
	POS:
		MOV DL,'1'
		INT 21H
		JMP EXIT
	NEGA:
		MOV DL,'-'
		INT 21H
		MOV DL,'1'
		INT 21H
		JMP EXIT
	ZERO:
		MOV DL,'0'
		INT 21H
		JMP EXIT
		
	EXIT:
		MOV AH,1
		INT 21H
		MOV AH,4CH
		INT 21H
		
MAIN ENDP
END MAIN 
	