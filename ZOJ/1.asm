.386
STACK SEGMENT USE16 STACK
      DB 200 DUP(0)
STACK ENDS

DATA  SEGMENT USE16
BUF   DB 100 DUP (10 DUP (' '), 0, 0, 0, 0)
BUF2  DB 1 DUP(0)
BUF3  DB 10 DUP(' ')

MESS1 DB  0AH, 0DH, 'Please input the name and three scores:', 0AH, 0DH, '$'
MESS2 DB  0AH, 0DH, 'Please choose the next(q, i, n):', 0AH, 0DH, '$'
MESS3 DB  0AH, 0DH, 'Please choose the name that you want search:', 0AH, 0DH, '$'
DATA  ENDS

CODE  SEGMENT USE16
      ASSUME CS:CODE,DS:DATA,SS:STACK
START:  MOV AX, DATA
        MOV DS, AX
		MOV CX, 0
	   	
INPUT:  LEA DX, MESS1
		MOV AH, 9
		INT 21H
		
		MOV BX, CX
		IMUL BX, 14
		LEA DX, [BUF+BX]
		MOV AH, 10
		INT 21H
		INC CX
		
CHOOSE:	LEA DX, MESS2
		MOV AH, 9
		INT 21H
		
		MOV AH, 1
		INT 21H
		CMP AL, 'q'
		JE  EXIT
		CMP AL, 'i'
		JE  INPUT
		CMP AL, 'n'
		JE  NEXT
		JMP CHOOSE
		
NEXT:	LEA DX, MESS3
		MOV AH, 9
		INT 21H
		
		LEA DX, BUF3
		MOV AH, 10
		INT 21H
		INC CX
		MOV AX, CX
		
LOAP:   MOV BX, AX
		IMUL BX, 14
		MOV SI, 9
		
		CMP BUF3[SI], [BUF+BX+SI]
		JNE LOAP
		
		DEC SI
		JZ  
		
		JE  NEXT2
		DEC AX
		JZ  INPUT
		JMP 
		
NEXT2:  XOR DX, DX;
        XOR AX, AX;
        MOV AL, [BUF+BX+10]
		IMUL AX, 2
		MOV DX, AX;
		MOV AL, [BUF+BX+11]
        ADD BX, AX
		MOV AL, [BUF+BX+12]
		SHR AX, 1
        ADD BX, AX
		
		IMUL DX, 7
		SHR DX, 1
		
		MOV WORD PTR [BUF+BX+13], DX
		CMP DX, 90
		JAE A1
		CMP DX, 80
		JAE B1
		CMP DX, 70
		JAE C1
		CMP DX, 60
		JAE D1

		JMP F1

A1:     MOV DL, 'A'
        MOV AH, 2
		INT 21H
		JMP INPUT
B1:     MOV DL, 'B'
        MOV AH, 2
		INT 21H
		JMP INPUT
C1:     MOV DL, 'C'
        MOV AH, 2
		INT 21H
		JMP INPUT
D1:     MOV DL, 'D'
        MOV AH, 2
		INT 21H
		JMP INPUT
F1:     MOV DL, 'F'
        MOV AH, 2
		INT 21H
		JMP INPUT

EXIT:	MOV AH, 4CH
		INT 21H
CODE    ENDS
        END START