.MODEL SMALL
.STACK 100H
.DATA
	MSG DB 'PLEASE ENTER A LINE OF TEXT: ',0AH,0DH,'$'
	NO_CAP DB 'THERE IS NO CAPITAL LETTER. $'
	CAP DB 'FIRST CAPITAL LETTER : '
	FIRST DB '[',0AH,0DH,'LAST CAPITAL LETTER : '
	LAST DB '@',0AH,0DH,'$'
.CODE 
MAIN PROC
	MOV AX,@DATA
	MOV DS,AX
	
	MOV AH,9
	LEA DX,MSG
	INT 21H
	
	MOV AH,1
	INT 21H
	
	WHILE_:
		CMP AL,0DH
		JZ ENDWHILE
		
		CMP AL,'A'
		JNGE ENDCASE
		CMP AL,'Z'
		JNLE ENDCASE
		
		CMP AL,FIRST
		JNL LST 
		MOV FIRST,AL
		;JMP ENDCASE
		
		LST:
			CMP AL,LAST
			JNG ENDCASE
			MOV LAST,AL
		ENDCASE:
			INT 21H
			JMP WHILE_
	ENDWHILE:
		CMP FIRST,'['
		JZ NOCAP
		
		MOV AH,9
		LEA DX,CAP
		INT 21H
		JMP DOSEX
		
	NOCAP:
		MOV AH,9
		LEA DX,NO_CAP
		INT 21H
	DOSEX:
		MOV AH,4CH
		INT 21H
	MAIN ENDP
END MAIN
	    
		
		
		
		
		
		