package org.sim.assembler;

public class AssemblerException extends Exception{

	private static final long serialVersionUID = 1L;

	public AssemblerException(String msg, Throwable cause) {
		super(msg, cause);
	}
	
	public AssemblerException(Throwable cause) {
		super(cause);
	}
	
	public AssemblerException(String msg) {
		super(msg);
	}
}
