	.text
.globl _main
_main:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$40, %esp
	movl	$34, -40(%ebp)
	movl	$2, -36(%ebp)
	movl	$53, -32(%ebp)
	movl	$3, -28(%ebp)
	movl	$12, -24(%ebp)
	movl	$0, -20(%ebp)
	jmp	L2
L3:
	movl	$0, -16(%ebp)
	jmp	L4
L5:
	movl	-16(%ebp), %eax
	movl	-40(%ebp,%eax,4), %edx
	movl	-16(%ebp), %eax
	incl	%eax
	movl	-40(%ebp,%eax,4), %eax
	cmpl	%eax, %edx
	jle	L6
	movl	-16(%ebp), %eax
	movl	-40(%ebp,%eax,4), %eax
	movl	%eax, -12(%ebp)
	movl	-16(%ebp), %edx
	movl	-16(%ebp), %eax
	incl	%eax
	movl	-40(%ebp,%eax,4), %eax
	movl	%eax, -40(%ebp,%edx,4)
	movl	-16(%ebp), %edx
	incl	%edx
	movl	-12(%ebp), %eax
	movl	%eax, -40(%ebp,%edx,4)
L6:
	leal	-16(%ebp), %eax
	incl	(%eax)
L4:
	cmpl	$2, -16(%ebp)
	jle	L5
	leal	-20(%ebp), %eax
	incl	(%eax)
L2:
	cmpl	$4, -20(%ebp)
	jle	L3
	movl	$0, %eax
	leave
	ret
	.subsections_via_symbols
