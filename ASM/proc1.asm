.model small
.stack 100h
.data
msg db 'procedure 1',0ah,0dh,'$'
msg1 db 'procedure 2',0ah,0dh,'$'

.CODE
main proc
	mov ax,@data
	mov ds,ax
	call function
	MOV AH,4CH
	INT 21H
main endp
function proc 
	
	mov ah,9
	lea dx,msg
	int 21h
	
	LEA DX,MSG1
	INT 21H
	RET
function endp
end main 