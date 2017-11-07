	.file	"Aufgabe Basic IO 1.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Anzahl eingeben: \0"
LC1:
	.ascii "%d\0"
LC2:
	.ascii "Preis in Euro eingeben: \0"
LC3:
	.ascii "%lf\0"
LC4:
	.ascii "Anzahl: %d\0"
LC5:
	.ascii "Preis: %lf\0"
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
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_printf
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	$10, (%esp)
	call	_putchar
	movl	$LC2, (%esp)
	call	_printf
	leal	16(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_scanf
	movl	$10, (%esp)
	call	_putchar
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
	movl	$10, (%esp)
	call	_putchar
	fldl	16(%esp)
	fstpl	4(%esp)
	movl	$LC5, (%esp)
	call	_printf
	movl	$10, (%esp)
	call	_putchar
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE14:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_putchar;	.scl	2;	.type	32;	.endef
