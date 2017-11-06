	.file	"Aufgabe_1.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Erster Artikel (Anzahl): \0"
LC1:
	.ascii "%d\0"
	.align 4
LC2:
	.ascii "\12Erster Artikel (Preis in Euro): \0"
LC3:
	.ascii "%lf\0"
LC4:
	.ascii "\12Zweiter Artikel (Anzahl): \0"
	.align 4
LC5:
	.ascii "\12Zweiter  Artikel (Preis in Euro): \0"
LC6:
	.ascii "\12Summe ohne Rabatt: %.2lf\0"
LC8:
	.ascii "\12Summe mit Rabatt: %.2lf\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB14:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$64, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	36(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC2, (%esp)
	call	_printf
	leal	48(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	$LC4, (%esp)
	call	_printf
	leal	32(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$LC5, (%esp)
	call	_printf
	leal	40(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	36(%esp), %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fldl	48(%esp)
	fmulp	%st, %st(1)
	movl	32(%esp), %eax
	movl	%eax, 28(%esp)
	fildl	28(%esp)
	fldl	40(%esp)
	fmulp	%st, %st(1)
	faddp	%st, %st(1)
	fstpl	56(%esp)
	fldl	56(%esp)
	fstpl	4(%esp)
	movl	$LC6, (%esp)
	call	_printf
	fldl	56(%esp)
	fldl	LC7
	fmulp	%st, %st(1)
	fldl	56(%esp)
	fsubp	%st, %st(1)
	fstpl	4(%esp)
	movl	$LC8, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.section .rdata,"dr"
	.align 8
LC7:
	.long	-1717986918
	.long	1070176665
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
