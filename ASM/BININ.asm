.MODEL SMALL
.STACK 100H
.CODE
MAIN PROC
	MOV AH,1
	INT 21H
	XOR BL,BL
	LABEL1:
		CMP AL,0DH
		JZ ENDCASE
		AND AL,0FH
		SHR AL,1
		RCL BL,1
		INT 21H
		JMP LABEL1

	ENDCASE:
		MOV DL,BL
		MOV AH,2
		INT 21H
		MOV AH,4CH
		INT 21H
MAIN ENDP
END MAIN