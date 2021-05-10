			global	_ft_strcmp
			section	.text

_ft_strcmp:
			mov			rcx, -1
loop:
			inc			rcx
			mov			r8b, BYTE [rdi + rcx]
			mov			r9b, BYTE [rsi + rcx]
			cmp			r8b, 0
			je			end
			cmp			r9b, 0
			je			end
			cmp			r8b, r9b
			je			loop
			jmp			end
end:
			sub			r8b, r9b
			movsx		rax, r8b
			ret
			