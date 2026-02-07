;addition
mov ax, 0005h   ;   store 5h in ax
mov bx, 0003h   ;   store 3h in bx
add ax, bx      ;   ax = ax + bx

;subtraction
mov ax, 0005h   ;   store 5h in ax
mov bx, 0003h   ;   store 3h in bx
sub ax, bx      ;   ax = ax - bx

;multiple
mov ax, 0005h   ;   store 5h in ax
mov bx, 0003h   ;   store 3h in bx
mul bx          ;   ax = ax * bx  output will be stored
                ;                   in hexa formate
                
;division
mov ax, 0005h   ;   store 5h in ax
mov bx, 0003h   ;   store 3h in bx
div bx          ;   ax = ax / bx    output will be stored

;if_else statement

mov AX, 10H   ; store 5h in AX
CMP AX, 05H   ; store 3h in BX
 JA LEVEL
 MOV BX, 01H
 JMP EXT
 LEVEL:
 MOV BX, 02H
 EXT :RET
                ;                