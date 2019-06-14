package org.sim.linker;

import java.io.DataOutputStream;

public class TextBuffer {
	private final int mainMemorySize = 4096;
	private short buffer[];
	private int index;
	
	public TextBuffer() {
		this.buffer = new short[mainMemorySize];
	}
	
	public void add(short x) {
		this.buffer[index++] = x;
	}
	
	public void relocate(int address, int change) {
		this.buffer[address] = (short)(this.buffer[address] + change);
	}
	
	public void write(DataOutputStream out) throws java.io.IOException {
		for(int i = 0; i < index; i++)
			out.writeShort(this.buffer[i]);
	}
	
	public String toString() {
		return "Size " + index;
	}
}
