			global	_ft_strdup
			extern	_malloc
			extern	_ft_strlen
			extern	_ft_strcpy
			extern	___error
			section	.text

_ft_strdup:
			push	rdi
			call	_ft_strlen
			inc		rax
			mov		rdi, rax
			call	_malloc
			cmp		rax, 0
			je		end
			pop		rdi
			mov		rsi, rdi
			mov		rdi, rax
			call	_ft_strcpy
			ret
end:
			ret
