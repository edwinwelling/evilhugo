	.file	"WereldIdee.cpp"
	.text
	.section	.text._ZN10WereldIdeeD2Ev,"axG",@progbits,_ZN10WereldIdeeD5Ev,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZN10WereldIdeeD2Ev
	.type	_ZN10WereldIdeeD2Ev, @function
_ZN10WereldIdeeD2Ev:
.LFB3630:
	.cfi_startproc
	ret
	.cfi_endproc
.LFE3630:
	.size	_ZN10WereldIdeeD2Ev, .-_ZN10WereldIdeeD2Ev
	.weak	_ZN10WereldIdeeD1Ev
	.set	_ZN10WereldIdeeD1Ev,_ZN10WereldIdeeD2Ev
	.section	.text.unlikely,"ax",@progbits
	.align 2
.LCOLDB0:
	.text
.LHOTB0:
	.align 2
	.p2align 4,,15
	.globl	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv
	.type	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv, @function
_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv:
.LFB3086:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA3086
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	subq	$32, %rsp
	.cfi_def_cfa_offset 48
	movq	16(%rbx), %rsi
	movq	%rsp, %rdi
.LEHB0:
	call	_ZNK5Heini32geef_nummerkes_die_ik_gezien_hebEv@PLT
.LEHE0:
	movq	8(%rsp), %rax
	movq	(%rsp), %rdi
	cmpq	%rax, %rdi
	je	.L17
	movl	-4(%rax), %ebx
.L5:
	testq	%rdi, %rdi
	je	.L3
	call	_ZdlPv@PLT
.L3:
	addq	$32, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 16
	movl	%ebx, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L17:
	.cfi_restore_state
	movq	16(%rbx), %rdi
.LEHB1:
	call	_ZNK5Heini13geef_mijn_bsnEv@PLT
.LEHE1:
	movl	%eax, %ebx
	movq	(%rsp), %rdi
	jmp	.L5
.L9:
	movq	%rax, %rbx
	jmp	.L7
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA3086:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE3086-.LLSDACSB3086
.LLSDACSB3086:
	.uleb128 .LEHB0-.LFB3086
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB3086
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L9-.LFB3086
	.uleb128 0
.LLSDACSE3086:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC3086
	.type	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv.cold.10, @function
_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv.cold.10:
.LFSB3086:
.L7:
	.cfi_def_cfa_offset 48
	.cfi_offset 3, -16
	movq	(%rsp), %rdi
	testq	%rdi, %rdi
	je	.L8
	call	_ZdlPv@PLT
.L8:
	movq	%rbx, %rdi
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
	.cfi_endproc
.LFE3086:
	.section	.gcc_except_table
.LLSDAC3086:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC3086-.LLSDACSBC3086
.LLSDACSBC3086:
	.uleb128 .LEHB2-.LCOLDB0
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSEC3086:
	.section	.text.unlikely
	.text
	.size	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv, .-_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv
	.section	.text.unlikely
	.size	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv.cold.10, .-_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv.cold.10
.LCOLDE0:
	.text
.LHOTE0:
	.section	.text._ZN10WereldIdeeD0Ev,"axG",@progbits,_ZN10WereldIdeeD5Ev,comdat
	.align 2
	.p2align 4,,15
	.weak	_ZN10WereldIdeeD0Ev
	.type	_ZN10WereldIdeeD0Ev, @function
_ZN10WereldIdeeD0Ev:
.LFB3632:
	.cfi_startproc
	movl	$24, %esi
	jmp	_ZdlPvm@PLT
	.cfi_endproc
.LFE3632:
	.size	_ZN10WereldIdeeD0Ev, .-_ZN10WereldIdeeD0Ev
	.text
	.align 2
	.p2align 4,,15
	.globl	_ZN10WereldIdeeC2Ei
	.type	_ZN10WereldIdeeC2Ei, @function
_ZN10WereldIdeeC2Ei:
.LFB3084:
	.cfi_startproc
	leaq	16+_ZTV10WereldIdee(%rip), %rax
	movl	%esi, 8(%rdi)
	movq	$0, 16(%rdi)
	movq	%rax, (%rdi)
	ret
	.cfi_endproc
.LFE3084:
	.size	_ZN10WereldIdeeC2Ei, .-_ZN10WereldIdeeC2Ei
	.globl	_ZN10WereldIdeeC1Ei
	.set	_ZN10WereldIdeeC1Ei,_ZN10WereldIdeeC2Ei
	.weak	_ZTS7EenIdee
	.section	.rodata._ZTS7EenIdee,"aG",@progbits,_ZTS7EenIdee,comdat
	.align 8
	.type	_ZTS7EenIdee, @object
	.size	_ZTS7EenIdee, 9
_ZTS7EenIdee:
	.string	"7EenIdee"
	.weak	_ZTI7EenIdee
	.section	.data.rel.ro._ZTI7EenIdee,"awG",@progbits,_ZTI7EenIdee,comdat
	.align 8
	.type	_ZTI7EenIdee, @object
	.size	_ZTI7EenIdee, 16
_ZTI7EenIdee:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS7EenIdee
	.weak	_ZTS10WereldIdee
	.section	.rodata._ZTS10WereldIdee,"aG",@progbits,_ZTS10WereldIdee,comdat
	.align 8
	.type	_ZTS10WereldIdee, @object
	.size	_ZTS10WereldIdee, 13
_ZTS10WereldIdee:
	.string	"10WereldIdee"
	.weak	_ZTI10WereldIdee
	.section	.data.rel.ro._ZTI10WereldIdee,"awG",@progbits,_ZTI10WereldIdee,comdat
	.align 8
	.type	_ZTI10WereldIdee, @object
	.size	_ZTI10WereldIdee, 24
_ZTI10WereldIdee:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS10WereldIdee
	.quad	_ZTI7EenIdee
	.weak	_ZTV10WereldIdee
	.section	.data.rel.ro.local._ZTV10WereldIdee,"awG",@progbits,_ZTV10WereldIdee,comdat
	.align 8
	.type	_ZTV10WereldIdee, @object
	.size	_ZTV10WereldIdee, 40
_ZTV10WereldIdee:
	.quad	0
	.quad	_ZTI10WereldIdee
	.quad	_ZN10WereldIdeeD1Ev
	.quad	_ZN10WereldIdeeD0Ev
	.quad	_ZN10WereldIdee29welk_laatje_trek_ik_echt_openEv
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.ident	"GCC: (Debian 8.3.0-6) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
