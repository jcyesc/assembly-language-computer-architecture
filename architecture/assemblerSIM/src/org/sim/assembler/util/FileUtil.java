package org.sim.assembler.util;

public class FileUtil {

	/**
	 * Method in charge of testing if a line is a comment or not
	 * 
	 * Comment start with ";"
	 * 
	 * @param comment
	 * @return
	 */
	public static boolean isComment(String comment) {
		if(comment != null && comment.trim().startsWith(";"))
			return true;
		
		return false;
	}
	
	/**
	 * Method in charge of testing if the toke is a label.
	 * 
	 * 
	 * @param token
	 * @return true if the token is a label, otherwise false.
	 */
	public static boolean isLabel(String token) {
		if(token != null && token.matches("^[^0-9'-]+[\\w_]*$"))
			return true;
		
		return false;
	}
	
	public static boolean isStartLabel(String token) {
		if(token != null && token.matches("^[^0-9'-]+[\\w_]*:$"))
			return true;
		
		return false;
	}
	
	public static String eliminateComment(String line) {
		if(line == null && line.trim().length() == 0)
			return "";
		return line.split(";")[0];
	}
	
	public static void main(String[] args) {
		
		String cad = "f: aloc	; int y =  7";
		System.out.println("Eliminate -> " + eliminateComment(cad));
		
		System.out.println(cad.split(";")[0]);
		
		for(String t : cad.split(";")[0].split("\\s+"))
			System.out.println(t);
		//System.out.println(isLabel("x"));
		
		//System.out.println(isComment("main: ld z ; sum("));
		//System.out.println(isStartLabel("value-"));
		
		System.out.println(Integer.toHexString((short)-1));
		
		System.out.println((short)65535);
	}
}
