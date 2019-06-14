package org.sim.assembler;

public class Opcode implements Cloneable {
	private String name;
	private short opcode;
	private short length;

	public Opcode() {
	}
	
	public Opcode(String name, short opcode, short length) {
		this.name = name;
		this.opcode = opcode;
		this.length = length;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public short getOpcode() {
		return opcode;
	}

	public void setOpcode(short opcode) {
		this.opcode = opcode;
	}

	public short getLength() {
		return length;
	}

	public void setLength(short length) {
		this.length = length;
	}
	
	public Object clone() throws CloneNotSupportedException {
		return super.clone();
	}
	
	public String toString() {
		return name + ":" + opcode + ":" + length;
	}
}
