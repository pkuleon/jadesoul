	.file	"1141_final_min.cpp"
.globl _x
	.bss
	.align 32
_x:
	.space 10201
.globl _y
	.align 32
_y:
	.space 10201
.globl _s
	.align 32
_s:
	.space 103
.globl _t
	.align 32
_t:
	.space 204
.globl _n
_n:
	.space 1
.globl _l
_l:
	.space 1
.globl _k
_k:
	.space 1
.globl _i
_i:
	.space 1
.globl _j
_j:
	.space 1
.globl _r
_r:
	.space 1
.globl _min
_min:
	.space 1
.globl _m
_m:
	.space 1
	.text
.globl __Z5trackhh
	.def	__Z5trackhh;	.scl	2;	.type	32;	.endef
__Z5trackhh:
LFB9:
	pushl	%ebp
LCFI0:
	movl	%esp, %ebp
LCFI1:
	pushl	%ebx
LCFI2:
	subl	$52, %esp
LCFI3:
	movl	8(%ebp), %edx
	movl	12(%ebp), %eax
	movb	%dl, -28(%ebp)
	movb	%al, -32(%ebp)
	movb	-28(%ebp), %al
	cmpb	-32(%ebp), %al
	jne	L2
	movzbl	-28(%ebp), %eax
	movb	_s(%eax), %al
	cmpb	$40, %al
	je	L3
	movzbl	-28(%ebp), %eax
	movb	_s(%eax), %al
	cmpb	$41, %al
	jne	L4
L3:
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movb	$40, _t(%eax)
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movb	$41, _t(%eax)
	nop
	jmp	L9
L4:
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movb	$91, _t(%eax)
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movb	$93, _t(%eax)
	jmp	L9
L2:
	movzbl	-28(%ebp), %edx
	movzbl	-32(%ebp), %ecx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %ebx
	addl	%ebx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ecx, %eax
	addl	$_y, %eax
	movb	(%eax), %al
	movb	%al, -9(%ebp)
	cmpb	$0, -9(%ebp)
	jne	L7
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movzbl	-28(%ebp), %edx
	movb	_s(%edx), %dl
	movb	%dl, _t(%eax)
	movzbl	-28(%ebp), %eax
	leal	1(%eax), %edx
	movzbl	-32(%ebp), %eax
	decl	%eax
	cmpl	%eax, %edx
	jg	L8
	movb	-32(%ebp), %al
	decl	%eax
	movzbl	%al, %edx
	movb	-28(%ebp), %al
	incl	%eax
	movzbl	%al, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__Z5trackhh
L8:
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movzbl	-32(%ebp), %edx
	movb	_s(%edx), %dl
	movb	%dl, _t(%eax)
	jmp	L9
L7:
	movzbl	-9(%ebp), %edx
	movzbl	-28(%ebp), %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__Z5trackhh
	movzbl	-32(%ebp), %edx
	movb	-9(%ebp), %al
	incl	%eax
	movzbl	%al, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__Z5trackhh
L9:
	addl	$52, %esp
	popl	%ebx
	leave
	ret
LFE9:
.globl __Z4dealv
	.def	__Z4dealv;	.scl	2;	.type	32;	.endef
__Z4dealv:
LFB10:
	pushl	%ebp
LCFI4:
	movl	%esp, %ebp
LCFI5:
	pushl	%esi
LCFI6:
	pushl	%ebx
LCFI7:
	subl	$16, %esp
LCFI8:
	movb	$1, _i
	jmp	L11
L12:
	movb	_i, %al
	movzbl	%al, %edx
	movb	_i, %al
	movzbl	%al, %ecx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %ebx
	addl	%ebx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ecx, %eax
	addl	$_x, %eax
	movb	$1, (%eax)
	movb	_i, %al
	incl	%eax
	movb	%al, _i
L11:
	movb	_i, %dl
	movb	_n, %al
	cmpb	%al, %dl
	setbe	%al
	testb	%al, %al
	jne	L12
	movb	$2, _r
	jmp	L13
L22:
	movb	$1, _i
	jmp	L14
L21:
	movb	_i, %dl
	movb	_r, %al
	leal	(%edx,%eax), %eax
	decl	%eax
	movb	%al, _j
	movb	$-1, _min
	movb	_i, %al
	movb	%al, _k
	jmp	L15
L17:
	movb	_i, %al
	movzbl	%al, %edx
	movb	_k, %al
	movzbl	%al, %ecx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %ebx
	addl	%ebx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ecx, %eax
	addl	$_x, %eax
	movb	(%eax), %cl
	movb	_k, %al
	movzbl	%al, %eax
	leal	1(%eax), %edx
	movb	_j, %al
	movzbl	%al, %ebx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %esi
	addl	%esi, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	addl	$_x, %eax
	movb	(%eax), %al
	leal	(%ecx,%eax), %eax
	movb	%al, _m
	movb	_m, %dl
	movb	_min, %al
	cmpb	%al, %dl
	jae	L16
	movb	_m, %al
	movb	%al, _min
	movb	_i, %al
	movzbl	%al, %edx
	movb	_j, %al
	movzbl	%al, %ebx
	movb	_k, %cl
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %esi
	addl	%esi, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	addl	$_y, %eax
	movb	%cl, (%eax)
L16:
	movb	_k, %al
	incl	%eax
	movb	%al, _k
L15:
	movb	_k, %dl
	movb	_j, %al
	cmpb	%al, %dl
	setb	%al
	testb	%al, %al
	jne	L17
	movb	_i, %al
	movzbl	%al, %eax
	movb	_s(%eax), %al
	cmpb	$40, %al
	jne	L18
	movb	_j, %al
	movzbl	%al, %eax
	movb	_s(%eax), %al
	cmpb	$41, %al
	je	L19
L18:
	movb	_i, %al
	movzbl	%al, %eax
	movb	_s(%eax), %al
	cmpb	$91, %al
	jne	L20
	movb	_j, %al
	movzbl	%al, %eax
	movb	_s(%eax), %al
	cmpb	$93, %al
	jne	L20
L19:
	movb	_i, %al
	movzbl	%al, %eax
	leal	1(%eax), %edx
	movb	_j, %al
	movzbl	%al, %eax
	leal	-1(%eax), %ebx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %ecx
	addl	%ecx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	addl	$_x, %eax
	movb	(%eax), %al
	movb	%al, _m
	movb	_m, %dl
	movb	_min, %al
	cmpb	%al, %dl
	jae	L20
	movb	_m, %al
	movb	%al, _min
	movb	_i, %al
	movzbl	%al, %edx
	movb	_j, %al
	movzbl	%al, %ecx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %ebx
	addl	%ebx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ecx, %eax
	addl	$_y, %eax
	movb	$0, (%eax)
L20:
	movb	_i, %al
	movzbl	%al, %edx
	movb	_j, %al
	movzbl	%al, %ebx
	movb	_min, %cl
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	0(,%eax,4), %esi
	addl	%esi, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	addl	$_x, %eax
	movb	%cl, (%eax)
	movb	_i, %al
	incl	%eax
	movb	%al, _i
L14:
	movb	_i, %al
	movzbl	%al, %eax
	movb	_n, %dl
	movzbl	%dl, %ecx
	movb	_r, %dl
	movzbl	%dl, %edx
	movl	%ecx, %ebx
	subl	%edx, %ebx
	movl	%ebx, %edx
	incl	%edx
	cmpl	%edx, %eax
	setle	%al
	testb	%al, %al
	jne	L21
	movb	_r, %al
	incl	%eax
	movb	%al, _r
L13:
	movb	_r, %dl
	movb	_n, %al
	cmpb	%al, %dl
	setbe	%al
	testb	%al, %al
	jne	L22
	movb	_n, %al
	movzbl	%al, %eax
	movl	%eax, 4(%esp)
	movl	$1, (%esp)
	call	__Z5trackhh
	movb	_l, %al
	incl	%eax
	movb	%al, _l
	movb	_l, %al
	movzbl	%al, %eax
	movb	$0, _t(%eax)
	addl	$16, %esp
	popl	%ebx
	popl	%esi
	leave
	ret
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%s\0"
	.text
.globl _main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	pushl	%ebp
LCFI9:
	movl	%esp, %ebp
LCFI10:
	andl	$-16, %esp
LCFI11:
	subl	$16, %esp
LCFI12:
	call	___main
	movl	$_s+1, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	jmp	L25
L26:
	movb	_n, %al
	incl	%eax
	movb	%al, _n
L25:
	movb	_n, %al
	movzbl	%al, %eax
	incl	%eax
	movb	_s(%eax), %al
	testb	%al, %al
	setne	%al
	testb	%al, %al
	jne	L26
	call	__Z4dealv
	movl	$_t+1, (%esp)
	call	_puts
	movl	$0, %eax
	leave
	ret
LFE11:
	.section	.eh_frame,"dr"
Lframe1:
	.long	LECIE1-LSCIE1
LSCIE1:
	.long	0x0
	.byte	0x1
	.def	___gxx_personality_v0;	.scl	2;	.type	32;	.endef
	.ascii "zP\0"
	.uleb128 0x1
	.sleb128 -4
	.byte	0x8
	.uleb128 0x5
	.byte	0x0
	.long	___gxx_personality_v0
	.byte	0xc
	.uleb128 0x4
	.uleb128 0x4
	.byte	0x11
	.uleb128 0x8
	.sleb128 1
	.align 4
LECIE1:
LSFDE1:
	.long	LEFDE1-LASFDE1
LASFDE1:
	.long	LASFDE1-Lframe1
	.long	LFB9
	.long	LFE9-LFB9
	.uleb128 0x0
	.byte	0x4
	.long	LCFI0-LFB9
	.byte	0xe
	.uleb128 0x8
	.byte	0x11
	.uleb128 0x5
	.sleb128 2
	.byte	0x4
	.long	LCFI1-LCFI0
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	LCFI3-LCFI1
	.byte	0x11
	.uleb128 0x3
	.sleb128 3
	.align 4
LEFDE1:
LSFDE3:
	.long	LEFDE3-LASFDE3
LASFDE3:
	.long	LASFDE3-Lframe1
	.long	LFB10
	.long	LFE10-LFB10
	.uleb128 0x0
	.byte	0x4
	.long	LCFI4-LFB10
	.byte	0xe
	.uleb128 0x8
	.byte	0x11
	.uleb128 0x5
	.sleb128 2
	.byte	0x4
	.long	LCFI5-LCFI4
	.byte	0xd
	.uleb128 0x5
	.byte	0x4
	.long	LCFI8-LCFI5
	.byte	0x11
	.uleb128 0x3
	.sleb128 4
	.byte	0x11
	.uleb128 0x6
	.sleb128 3
	.align 4
LEFDE3:
LSFDE5:
	.long	LEFDE5-LASFDE5
LASFDE5:
	.long	LASFDE5-Lframe1
	.long	LFB11
	.long	LFE11-LFB11
	.uleb128 0x0
	.byte	0x4
	.long	LCFI9-LFB11
	.byte	0xe
	.uleb128 0x8
	.byte	0x11
	.uleb128 0x5
	.sleb128 2
	.byte	0x4
	.long	LCFI10-LCFI9
	.byte	0xd
	.uleb128 0x5
	.align 4
LEFDE5:
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_puts;	.scl	2;	.type	32;	.endef
