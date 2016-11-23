	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_sum
	.align	4, 0x90
_sum:                                   ## @sum
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	addl	%esi, %edi
	addl	%edi, _accnum(%rip)
	movl	%edi, %eax
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_accnum                 ## @accnum
.zerofill __DATA,__common,_accnum,4,2

.subsections_via_symbols
