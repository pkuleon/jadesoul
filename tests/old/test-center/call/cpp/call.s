	.file	"call.cpp"
	.text
.globl __Z4swapPiS_
	.def	__Z4swapPiS_;	.scl	2;	.type	32;	.endef
__Z4swapPiS_:
LFB0:
	pushl	%ebp
LCFI0:
	movl	%esp, %ebp
LCFI1:
	subl	$16, %esp
LCFI2:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	12(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	12(%ebp), %eax
	movl	-4(%ebp), %edx
	movl	%edx, (%eax)
	leave
	ret
LFE0:
	.def	___main;	.scl	2;	.type	32;	.endef
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1:
	pushl	%ebp
LCFI3:
	movl	%esp, %ebp
LCFI4:
	andl	$-16, %esp
LCFI5:
	subl	$32, %esp
LCFI6:
	call	___main
	movl	$2, 28(%esp)
	movl	$1, 24(%esp)
	leal	24(%esp), %eax
	movl	%eax, 4(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	__Z4swapPiS_
	movl	$0, %eax
	leave
	ret
LFE1:
