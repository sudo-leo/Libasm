	global		_ft_strlen

_ft_strlen:
	push		rcx
	xor			rcx, rcx			

.while_loop:
	cmp			byte [rdi + rcx], 0
	jz			.end_loop
	inc			rcx
	jne			.while_loop			; while (s[i] != 0)

.end_loop:
	mov 		rax, rcx
	pop			rcx
	ret
