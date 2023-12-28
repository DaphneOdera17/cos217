	.file	"upper.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	jmp	L2
L4:
	cmpl	$96, 28(%esp)
	jle	L3
	cmpl	$122, 28(%esp)
	jg	L3
	subl	$32, 28(%esp)
L3:
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	_putchar
L2:
	call	_getchar
	movl	%eax, 28(%esp)
	cmpl	$-1, 28(%esp)
	jne	L4
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-8.2.0-3) 8.2.0"
	.def	_putchar;	.scl	2;	.type	32;	.endef
	.def	_getchar;	.scl	2;	.type	32;	.endef
