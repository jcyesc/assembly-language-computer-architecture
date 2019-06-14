package org.sim.linker;

public class LinkerException extends Exception {
	
	private static final long serialVersionUID = 1L;

	public LinkerException(String msg, Throwable cause) {
		super(msg, cause);
	}
	
	public LinkerException(Throwable cause) {
		super(cause);
	}
	
	public LinkerException(String msg) {
		super(msg);
	}
}
