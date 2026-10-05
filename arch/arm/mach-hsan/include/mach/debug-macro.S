/* SPDX-License-Identifier: GPL-2.0-or-later */
#ifndef __MACH_DEBUG_MACRO_S__
#define __MACH_DEBUG_MACRO_S__

		.macro	addruart, rp, rv, tmp
		ldr	\rp, =0x1010f000	@ Physical UART1 (ttyAMA1)
		ldr	\rv, =0xf810f000	@ Virtual UART1 (0x1010f000 + 0xe8000000)
		.endm

		.macro	senduart, rd, rx
		strb	\rd, [\rx, #0]
		.endm

		.macro	busyuart, rd, rx
1001:		ldr	\rd, [\rx, #0x14]
		tst	\rd, #0x20
		beq	1001b
		.endm

		.macro	waituart, rd, rx
		.endm

#endif
