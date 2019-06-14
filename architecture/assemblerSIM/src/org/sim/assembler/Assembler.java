package org.sim.assembler;

import java.io.BufferedReader;
import java.io.DataOutputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.IOException;

import org.sim.assembler.util.FileUtil;

/**
 * Pseudo Code For the First Release of SIM ASSEMBLER.
 * 
 * Set location_counter = 0;
 * Open input file as a text file
 * Open output file as a binary file
 *
 * PASS 1
 * Loop until no more input
 * 	+---
 * 		Read one line from the input file
 * 		If the current line starts with a label
 * 			get the label and enter it and the current value
 * 			of location_counter into the symbol table.
 * 		Get the operand on the current line.
 * 		If the operand is a label,
 * 			output 'R' and the current value of
 * 			location_counter to the output file.
 * 		Add 1 to location_counter
 * 	+---
 * Output 'T'
 * Reset input file to the beginning.
 * 
 * PASS 2
 * Loop until no more input
 * 	+---
 * 		Read one line from the input file
 * 		Get the operation (a mnemonic dw) from the current line.
 * 		If the operation is a mnemonic
 * 			look up the opcode in opcode table and save it in opcode.
 * 		Get the operand from the current line.
 * 		If the operand is a label,
 * 			look up its address in the symbol table and save
 * 			it in operand_value.
 * 		else
 * 			convert the operand to binary
 * 			and save it in operand_value
 * 		
 * 		If the operation is a mnemonic,
 * 			construct the machine language instruction from
 * 			opcode and operand_value, and save in machine word.
 * 		else
 * 			copy operand_value to machine_word.
 * 		
 * 		Output machine_word
 * 	+---
 * 
 * Close files
 * 
 * @author yescas
 */

public class Assembler {
	private short locationCounter;
	private int currentLine;
	private SymbolTable symbolTable;
	private DataOutputStream outStream;
	
	public void init() {
		this.locationCounter = 0;
		this.symbolTable = new SymbolTable();
	}
	
	public void assemble(String inputFile, String outputFile) throws AssemblerException {
		try {
			this.assembleFile(inputFile, outputFile);
		} catch(AssemblerException ass) {
			throw ass;
		} catch(Exception ex) {
			throw new AssemblerException("Error Processing line " + this.currentLine, ex);
		}
	}
	
	public void assembleFile(String inputFile, String outputFile) throws IOException, AssemblerException {
		// Input File
		BufferedReader br = new BufferedReader(new FileReader(inputFile));
		// Binary Output File
		outStream = new DataOutputStream(new FileOutputStream(outputFile));
		
		// -------------------------- PASS 1 ----------------------------
		this.currentLine = 1;
		String line = br.readLine();
		while(line != null) {
			processLineFirstPass(line);
			// Process this line
			// Read the line from the input file
			line = br.readLine();
			this.currentLine++;
		}
		
		// Output 'T'
		this.outStream.writeByte('T');
		// Reset input file to the beginning
		System.out.println("SYMBOL TABLE : " + this.symbolTable);
		br.close();
		
		// ------------------------- PASS 2 ----------------------------
		System.out.println("--------------------- PASS 2 ---------------------");
		br = new BufferedReader(new FileReader(inputFile));
		
		this.currentLine = 1;
		line = br.readLine();
		while(line != null) {
			System.out.println(this.currentLine + " : " + line);
			processLineSecondPass(line);	
			line = br.readLine();
			this.currentLine++;
		}
			
		br.close();
		this.outStream.close();
	}
	
	/**
	 * 
	 * @param line must not be null
	 */
	private void processLineFirstPass(String line) throws IOException, AssemblerException {
		if(line.trim().length() == 0 || FileUtil.isComment(line))
			return;
					
		// eliminate comments of the instruction
		line = FileUtil.eliminateComment(line);
		
		String[] tokens = line.trim().split("\\s+");
		// it could be only four cases: 
		//		label: add x, x: dw 5
		//		label: push
		//		add x, 
		//		push 
		
		if(tokens.length == 3) { // label: add x, label: dw 5
			if(!FileUtil.isStartLabel(tokens[0]))
				throw new AssemblerException("Invalid Label '" +  tokens[0] + "' in Line " + this.currentLine);
			String symbol = tokens[0].trim().replace(":", "");
			if(this.symbolTable.containsSymbol(symbol))
				throw new AssemblerException("Error processing line " + this.currentLine + " the symbol '" + symbol + "' is duplicated");
			// Add to the symbol table
			this.symbolTable.add(symbol, locationCounter);
			if(FileUtil.isLabel(tokens[2])) {
				// Output R and the current value of locationCounter
				this.outStream.writeByte('R');
				this.outStream.writeShort(this.locationCounter);			
			}
		} else if(tokens.length == 2) {
			if(FileUtil.isStartLabel(tokens[0])) { // label: push
				String symbol = tokens[0].trim().replace(":", "");
				if(this.symbolTable.containsSymbol(symbol))
					throw new AssemblerException("Error processing line " + this.currentLine + " the symbol '" + symbol + "' is duplicated");
				// Add to the symbol table
				this.symbolTable.add(symbol, locationCounter);
			} else { // add x
				// if the operand is a lael, output 'R' and the current value of locationCounter
				if(FileUtil.isLabel(tokens[1])) {
					// Output R and the current value of locationCounter
					this.outStream.writeByte('R');
					this.outStream.writeShort(this.locationCounter);
				}
			}
		}
		
		this.locationCounter++;
	}
	
	private void processLineSecondPass(String line) throws IOException, AssemblerException {
		if(line.trim().length() == 0 || FileUtil.isComment(line))
			return;
		
		// eliminate comments of the instruction
		line = FileUtil.eliminateComment(line);
		
		String[] tokens = line.trim().split("\\s+");
		// it could be only four cases: 
		//		label: add x, x: dw 5
		//		label: push
		//		add x, 
		//		push 
		
		String operation = null;
		String operand = null;
		Opcode opcode;
		short machineWord = 0;
		
		if(tokens.length == 3) { // label: add x, label: dw 5
			operation = tokens[1];
			opcode = OpcodeTable.getOpcode(operation);
			operand = tokens[2];
		} else if(tokens.length == 2) {
			if(FileUtil.isStartLabel(tokens[0])) { // label: push
				operation = tokens[1];
				opcode = OpcodeTable.getOpcode(operation);
			} else { // add x
				operation = tokens[0];
				operand = tokens[1];
				opcode = OpcodeTable.getOpcode(operation);
			}
		} else { // push
			operation = tokens[0];
			opcode = OpcodeTable.getOpcode(operation);
		}
		
		// if the opcode is not found and it's no a dw 
		if(opcode == null && !"dw".equals(operation)) {
			throw new AssemblerException("Invalid Operation in Line" + this.currentLine + " '" + operation + "'");
		}
		
		machineWord = this.assemble(opcode, operand);
		this.outStream.writeShort(machineWord);
	}
	
	/**
	 * Method in charge of performing the next validations:
	 * 
	 * 		Address or operand out of range. The operands in dw statements and the values
	 * 		in the x and y fields of instructions have ranges as follows:
	 * 
	 * 			dw	operand:	-32768 to 65535
	 * 			x field value:	0 to 4095
	 * 			y field value:	0 to 255
	 * 
	 */
	private short processValue(Opcode opcode, String operand) throws AssemblerException{
		int operandValue = 0;
		try {
			// Check if it's a number
			operandValue = Integer.parseInt(operand);
		} catch(NumberFormatException nfm) {
			throw new AssemblerException("Error procession line " + this.currentLine + " invalid operand '" + operand + "'");
		}
		
		if(opcode != null && opcode.getLength() == 4 && !(operandValue >= 0 && operandValue <= 4095)) {
			throw new AssemblerException("Error processing line " + this.currentLine + " range operand invalid (0 to 4095) : " + operandValue);
		} else if(opcode != null &&opcode.getLength() == 8 && !(operandValue >= 0 && operandValue <= 255)) {
					throw new AssemblerException("Error processing line " + this.currentLine + " range operand invalid (0 to 255) :" + operandValue);
		} else if(!(operandValue >= -32768 && operandValue <= 65535))
			throw new AssemblerException("Error processing line " + this.currentLine + " range operand invalid (-32768 to 65535) " + operandValue);
	
		return (short)operandValue;
	}
	
	/**
	 * Method in charge of assembling the machine word
	 * 
	 * 	machine_word = (short) ((opcode << 12) | operand_value);
	 * 
	 * Validation
	 * 		When the label is not found in the symbol table
	 * 		When the operand is invalid
	 * 		Address or operand out of range. The operands in dw statements and the values
	 * 		in the x and y fields of instructions have ranges as follows:
	 * 
	 * 			dw	operand:	-32768 to 65535
	 * 			x field value:	0 to 4095
	 * 			y field value:	0 to 255
	 * 
	 * @param opcode
	 * @param operandValue
	 * @return
	 */
	private short assemble(Opcode opcode, String operand) throws AssemblerException{
		short machineWord = 0;
		short operandValue = 0; // It could be an address or a value
		
		if(operand != null && FileUtil.isLabel(operand)) {
			Short address = this.symbolTable.getAddress(operand); // ld x
			if(address == null)
				throw new AssemblerException("Error Processing line " + this.currentLine + " Label '" + operand + "' Not Found!");
			operandValue = address.shortValue(); 
		} else if(operand != null){
			if(operand.trim().equals("'\\n'")) {
				short caracter = '\n';
				operandValue = new Short(caracter); 
			} else {			
					operandValue = processValue(opcode, operand);
			}
		}
		
		if(opcode != null) { // operation is a mnemonic
			// Construct the machine language instruction from opcode and operand value
			if(opcode.getLength() < 16) {		
				machineWord = (short)(opcode.getOpcode() << (16 - opcode.getLength()) | operandValue);
			} else {
				// push
				machineWord = opcode.getOpcode();
			}
			
		} else { // operation is a dw
			machineWord = operandValue;
		}
		
		return machineWord;
	}
	
	public static void main(String[] args) throws Exception {
		// File that contains the right machine text.
		//String inputFile ="/Users/yescas/desarrollo/java/eclipse/workspaces/javaAlgorithms/assemblerSIM/src/program.mas";
		// File to test the different common mistakes
		String inputFile ="/Users/yescas/desarrollo/java/eclipse/workspaces/javaAlgorithms/assemblerSIM/src/programTest.mas";
		String outputFile ="/Users/yescas/desarrollo/java/eclipse/workspaces/javaAlgorithms/assemblerSIM/src/output.mac";
		
		Assembler as = new Assembler();
		as.init();
		as.assemble(inputFile, outputFile);
	}
}
