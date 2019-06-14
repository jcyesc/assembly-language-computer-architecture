package org.sim.assembler;

import java.util.HashMap;
import java.util.Map;

public class OpcodeTable {
	private static Map<String, Opcode> opcodes;
	
	/**
	 *  An Instruction could be 4, 8 or 16 bits, and the remaining bits are for
	 *  the operand.
	 *  
	 *  A Machine Word occupies 2 bytes (16 bits).
	 */
	static {
		opcodes = new HashMap<String, Opcode>();
		opcodes.put("ld", new Opcode("ld", (short)0x0, (short)4));
		opcodes.put("st", new Opcode("st", (short)0x1, (short)4));
		opcodes.put("add", new Opcode("add", (short)0x2, (short)4));
		opcodes.put("sub", new Opcode("sub", (short)0x3, (short)4));
		opcodes.put("ldr", new Opcode("ldr", (short)0x4, (short)4));
		opcodes.put("str", new Opcode("str", (short)0x5, (short)4));
		opcodes.put("addr", new Opcode("addr", (short)0x6, (short)4));
		opcodes.put("subr", new Opcode("subr", (short)0x7, (short)4));
		opcodes.put("ldc", new Opcode("ldc", (short)0x8, (short)4));
		opcodes.put("ja", new Opcode("ja", (short)0x9, (short)4));
		opcodes.put("jzop", new Opcode("jzop", (short)0xA, (short)4));
		opcodes.put("jn", new Opcode("jn", (short)0xB, (short)4));
		opcodes.put("jz", new Opcode("jz", (short)0xC, (short)4));
		opcodes.put("jnz", new Opcode("jnz", (short)0xD, (short)4));
		opcodes.put("call", new Opcode("call", (short)0xE, (short)4));
		opcodes.put("ret", new Opcode("ret", (short)0xF0, (short)8));
		opcodes.put("ldi", new Opcode("ldi", (short)0xF1, (short)8));
		opcodes.put("sti", new Opcode("sti", (short)0xF2, (short)8));
		opcodes.put("push", new Opcode("push", (short)0xF3, (short)8));
		opcodes.put("pop", new Opcode("pop", (short)0xF4, (short)8));
		opcodes.put("aloc", new Opcode("aloc", (short)0xF5, (short)8));
		opcodes.put("dloc", new Opcode("dloc", (short)0xF6, (short)8));
		opcodes.put("swap", new Opcode("swap", (short)0xF7, (short)8));
		opcodes.put("uout", new Opcode("uout", (short)0xFFF5, (short)16));
		opcodes.put("sin", new Opcode("sin", (short)0xFFF6, (short)16));
		opcodes.put("sout", new Opcode("sout", (short)0xFFF7, (short)16));
		opcodes.put("hin", new Opcode("hin", (short)0xFFF8, (short)16));
		opcodes.put("hout", new Opcode("hout", (short)0xFFF9, (short)16));
		opcodes.put("ain", new Opcode("ain", (short)0xFFFA, (short)16));
		opcodes.put("aout", new Opcode("aout", (short)0xFFFB, (short)16));
		opcodes.put("din", new Opcode("din", (short)0xFFFC, (short)16));
		opcodes.put("dout", new Opcode("dout", (short)0xFFFD, (short)16));
		opcodes.put("bkpt", new Opcode("bkpt", (short)0xFFFE, (short)16));
		opcodes.put("halt", new Opcode("halt", (short)0xFFFF, (short)16));
	}
	
	public static Opcode getOpcode(String opcode) {
		try {
			return (Opcode)opcodes.get(opcode).clone();
		} catch(CloneNotSupportedException cl) {
			return null;
		} catch(NullPointerException ex) {
			return null;
		}
	}
}
