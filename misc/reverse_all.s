	.file	"reverse_all.c"
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
.LC1:
	.ascii "Res = %d\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$0, -4(%rbp)
	leaq	-12(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC0(%rip), %rcx
	call	scanf
	movl	-12(%rbp), %eax
	movl	%eax, -8(%rbp)
	jmp	.L2
.L4:
	movl	-8(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	je	.L3
	movl	-4(%rbp), %eax
	orl	$1, %eax
	addl	%eax, %eax
	movl	%eax, -4(%rbp)
	sarl	-8(%rbp)
	jmp	.L2
.L3:
	sall	-4(%rbp)
	sarl	-8(%rbp)
.L2:
	cmpl	$0, -8(%rbp)
	jne	.L4
	sarl	-4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 4.8.2"
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	printf;	.scl	2;	.type	32;	.endef
