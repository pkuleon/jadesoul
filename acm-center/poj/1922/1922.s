	.file	"1922.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC3:
	.ascii "%d\12\0"
	.text
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
L6:
	movl	$0, 52(%esp)
	leal	48(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	48(%esp), %eax
	testl	%eax, %eax
	jne	L2
	leave
	ret
L2:
	movl	$0x7f61b1e6, %eax
	movl	%eax, 56(%esp)
	jmp	L3
L5:
	movl	52(%esp), %eax
/APP
 # 9 "1922.c" 1
	incl %eax
 # 0 "" 2
/NO_APP
	movl	%eax, 52(%esp)
	leal	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	44(%esp), %eax
	movl	%eax, 20(%esp)
	fildl	20(%esp)
	fldl	LC2
	fdivp	%st, %st(1)
	fstps	60(%esp)
	leal	44(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	44(%esp), %eax
	testl	%eax, %eax
	js	L8
L4:
	movl	44(%esp), %eax
	movl	%eax, 20(%esp)
	fildl	20(%esp)
	flds	60(%esp)
	faddp	%st, %st(1)
	fstps	60(%esp)
	flds	60(%esp)
	flds	56(%esp)
	fucompp
	fnstsw	%ax
	testb	$69, %ah
	sete	%al
	testb	%al, %al
	je	L3
	movl	60(%esp), %eax
	movl	%eax, 56(%esp)
	jmp	L3
L8:
	nop
L3:
	movl	48(%esp), %eax
	cmpl	%eax, 52(%esp)
	jl	L5
	flds	56(%esp)
	fnstcw	26(%esp)
	movw	26(%esp), %ax
	movb	$12, %ah
	movw	%ax, 24(%esp)
	fldcw	24(%esp)
	fistpl	20(%esp)
	fldcw	26(%esp)
	movl	20(%esp), %edx
	flds	56(%esp)
	fldcw	24(%esp)
	fistpl	20(%esp)
	fldcw	26(%esp)
	movl	20(%esp), %eax
	movl	%eax, 20(%esp)
	fildl	20(%esp)
	flds	56(%esp)
	fxch	%st(1)
	fucompp
	fnstsw	%ax
	andb	$69, %ah
	xorb	$64, %ah
	setne	%al
	movzbl	%al, %eax
	leal	(%edx,%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	jmp	L6
	.section .rdata,"dr"
	.align 8
LC2:
	.long	0
	.long	1087349760
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
