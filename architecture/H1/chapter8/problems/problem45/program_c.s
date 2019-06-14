.globl _y
	.data
	.align 2
_y:
	.long	3
	.mod_init_func
	.align 2
	.long	__GLOBAL__I_y
.lcomm __ZSt8__ioinit,1,0
	.cstring
LC0:
	.ascii "hello\12\0"
	.text
	.align 1,0x90
.globl __Z1fRi
__Z1fRi:
LFB1480:
	pushl	%ebp
LCFI0:
	movl	%esp, %ebp
LCFI1:
	pushl	%ebx
LCFI2:
	subl	$20, %esp
LCFI3:
	call	L5
"L00000000001$pb":
L5:
	popl	%ebx
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	je	L4
	leal	LC0-"L00000000001$pb"(%ebx), %eax
	movl	%eax, 4(%esp)
	leal	L__ZSt4cout$non_lazy_ptr-"L00000000001$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	L__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc$stub
	movl	8(%ebp), %eax
	movl	(%eax), %eax
	leal	-1(%eax), %edx
	movl	8(%ebp), %eax
	movl	%edx, (%eax)
	movl	8(%ebp), %eax
	movl	%eax, (%esp)
	call	__Z1fRi
L4:
	addl	$20, %esp
	popl	%ebx
	leave
	ret
LFE1480:
	.align 1,0x90
.globl _main
_main:
LFB1481:
	pushl	%ebp
LCFI4:
	movl	%esp, %ebp
LCFI5:
	pushl	%ebx
LCFI6:
	subl	$20, %esp
LCFI7:
	call	L8
"L00000000002$pb":
L8:
	popl	%ebx
	leal	_y-"L00000000002$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	__Z1fRi
	leal	_y-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	leal	L__ZSt4cout$non_lazy_ptr-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, (%esp)
	call	L__ZNSolsEi$stub
	movl	%eax, %edx
	leal	L__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_$non_lazy_ptr-"L00000000002$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	%edx, (%esp)
	call	L__ZNSolsEPFRSoS_E$stub
	movl	$0, %eax
	addl	$20, %esp
	popl	%ebx
	leave
	ret
LFE1481:
	.align 1,0x90
___tcf_0:
LFB1491:
	pushl	%ebp
LCFI8:
	movl	%esp, %ebp
LCFI9:
	pushl	%ebx
LCFI10:
	subl	$20, %esp
LCFI11:
	call	L11
"L00000000003$pb":
L11:
	popl	%ebx
	leal	__ZSt8__ioinit-"L00000000003$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L__ZNSt8ios_base4InitD1Ev$stub
	addl	$20, %esp
	popl	%ebx
	leave
	ret
LFE1491:
	.section __TEXT,__StaticInit,regular,pure_instructions
	.align 1
__Z41__static_initialization_and_destruction_0ii:
LFB1490:
	pushl	%ebp
LCFI12:
	movl	%esp, %ebp
LCFI13:
	pushl	%ebx
LCFI14:
	subl	$36, %esp
LCFI15:
	call	L17
"L00000000004$pb":
L17:
	popl	%ebx
	movl	%eax, -12(%ebp)
	movl	%edx, -16(%ebp)
	cmpl	$65535, -16(%ebp)
	jne	L16
	cmpl	$1, -12(%ebp)
	jne	L16
	leal	__ZSt8__ioinit-"L00000000004$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L__ZNSt8ios_base4InitC1Ev$stub
	leal	L___dso_handle$non_lazy_ptr-"L00000000004$pb"(%ebx), %eax
	movl	(%eax), %eax
	movl	%eax, 8(%esp)
	movl	$0, 4(%esp)
	leal	___tcf_0-"L00000000004$pb"(%ebx), %eax
	movl	%eax, (%esp)
	call	L___cxa_atexit$stub
L16:
	addl	$36, %esp
	popl	%ebx
	leave
	ret
LFE1490:
	.align 1
__GLOBAL__I_y:
LFB1492:
	pushl	%ebp
LCFI16:
	movl	%esp, %ebp
LCFI17:
	subl	$8, %esp
LCFI18:
	movl	$65535, %edx
	movl	$1, %eax
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	ret
LFE1492:
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0x0
	.byte	0x1
	.ascii "zPR\0"
	.byte	0x1
	.byte	0x7c
	.byte	0x8
	.byte	0x6
	.byte	0x9b
	.long	L___gxx_personality_v0$non_lazy_ptr-.
	.byte	0x10
	.byte	0xc
	.byte	0x5
	.byte	0x4
	.byte	0x88
	.byte	0x1
	.align 2
LECIE1:
	.globl __Z1fRi.eh
__Z1fRi.eh:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.long	LFB1480-.
	.set L$set$2,LFE1480-LFB1480
	.long L$set$2
	.byte	0x0
	.byte	0x4
	.set L$set$3,LCFI0-LFB1480
	.long L$set$3
	.byte	0xe
	.byte	0x8
	.byte	0x84
	.byte	0x2
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xd
	.byte	0x4
	.byte	0x4
	.set L$set$5,LCFI3-LCFI1
	.long L$set$5
	.byte	0x83
	.byte	0x3
	.align 2
LEFDE1:
	.globl _main.eh
_main.eh:
LSFDE3:
	.set L$set$6,LEFDE3-LASFDE3
	.long L$set$6
LASFDE3:
	.long	LASFDE3-EH_frame1
	.long	LFB1481-.
	.set L$set$7,LFE1481-LFB1481
	.long L$set$7
	.byte	0x0
	.byte	0x4
	.set L$set$8,LCFI4-LFB1481
	.long L$set$8
	.byte	0xe
	.byte	0x8
	.byte	0x84
	.byte	0x2
	.byte	0x4
	.set L$set$9,LCFI5-LCFI4
	.long L$set$9
	.byte	0xd
	.byte	0x4
	.byte	0x4
	.set L$set$10,LCFI7-LCFI5
	.long L$set$10
	.byte	0x83
	.byte	0x3
	.align 2
LEFDE3:
___tcf_0.eh:
LSFDE5:
	.set L$set$11,LEFDE5-LASFDE5
	.long L$set$11
LASFDE5:
	.long	LASFDE5-EH_frame1
	.long	LFB1491-.
	.set L$set$12,LFE1491-LFB1491
	.long L$set$12
	.byte	0x0
	.byte	0x4
	.set L$set$13,LCFI8-LFB1491
	.long L$set$13
	.byte	0xe
	.byte	0x8
	.byte	0x84
	.byte	0x2
	.byte	0x4
	.set L$set$14,LCFI9-LCFI8
	.long L$set$14
	.byte	0xd
	.byte	0x4
	.byte	0x4
	.set L$set$15,LCFI11-LCFI9
	.long L$set$15
	.byte	0x83
	.byte	0x3
	.align 2
LEFDE5:
__Z41__static_initialization_and_destruction_0ii.eh:
LSFDE7:
	.set L$set$16,LEFDE7-LASFDE7
	.long L$set$16
LASFDE7:
	.long	LASFDE7-EH_frame1
	.long	LFB1490-.
	.set L$set$17,LFE1490-LFB1490
	.long L$set$17
	.byte	0x0
	.byte	0x4
	.set L$set$18,LCFI12-LFB1490
	.long L$set$18
	.byte	0xe
	.byte	0x8
	.byte	0x84
	.byte	0x2
	.byte	0x4
	.set L$set$19,LCFI13-LCFI12
	.long L$set$19
	.byte	0xd
	.byte	0x4
	.byte	0x4
	.set L$set$20,LCFI15-LCFI13
	.long L$set$20
	.byte	0x83
	.byte	0x3
	.align 2
LEFDE7:
__GLOBAL__I_y.eh:
LSFDE9:
	.set L$set$21,LEFDE9-LASFDE9
	.long L$set$21
LASFDE9:
	.long	LASFDE9-EH_frame1
	.long	LFB1492-.
	.set L$set$22,LFE1492-LFB1492
	.long L$set$22
	.byte	0x0
	.byte	0x4
	.set L$set$23,LCFI16-LFB1492
	.long L$set$23
	.byte	0xe
	.byte	0x8
	.byte	0x84
	.byte	0x2
	.byte	0x4
	.set L$set$24,LCFI17-LCFI16
	.long L$set$24
	.byte	0xd
	.byte	0x4
	.align 2
LEFDE9:
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L___cxa_atexit$stub:
	.indirect_symbol ___cxa_atexit
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L__ZSt4cout$non_lazy_ptr:
	.indirect_symbol __ZSt4cout
	.long	0
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc$stub:
	.indirect_symbol __ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	hlt ; hlt ; hlt ; hlt ; hlt
L__ZNSolsEPFRSoS_E$stub:
	.indirect_symbol __ZNSolsEPFRSoS_E
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L__ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_$non_lazy_ptr:
	.indirect_symbol __ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_
	.long	0
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L__ZNSolsEi$stub:
	.indirect_symbol __ZNSolsEi
	hlt ; hlt ; hlt ; hlt ; hlt
L__ZNSt8ios_base4InitD1Ev$stub:
	.indirect_symbol __ZNSt8ios_base4InitD1Ev
	hlt ; hlt ; hlt ; hlt ; hlt
	.section __IMPORT,__pointers,non_lazy_symbol_pointers
L___gxx_personality_v0$non_lazy_ptr:
	.indirect_symbol ___gxx_personality_v0
	.long	0
L___dso_handle$non_lazy_ptr:
	.indirect_symbol ___dso_handle
	.long	0
	.section __IMPORT,__jump_table,symbol_stubs,self_modifying_code+pure_instructions,5
L__ZNSt8ios_base4InitC1Ev$stub:
	.indirect_symbol __ZNSt8ios_base4InitC1Ev
	hlt ; hlt ; hlt ; hlt ; hlt
	.constructor
	.destructor
	.align 1
	.subsections_via_symbols
