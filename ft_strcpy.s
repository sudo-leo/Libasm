		global _ft_strcpy

_ft_strcpy:
	mov r8, 0
	jmp .loop

.loop:
	mov cl, [rsi + r8]
	mov [rdi + r8], cl
	cmp cl, 0
	je .end
	inc r8
	jmp .loop


.end:
	mov rax, rdi
	ret

