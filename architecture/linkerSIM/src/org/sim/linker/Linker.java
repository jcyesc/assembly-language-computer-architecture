package org.sim.linker;

import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

/**
 * Algorithm to link the programs
 * 
 * PHASE 1
 * Open output file as a binary file
 * Set module_address to 0
 * Clear text_buffer
 * For each file on the command line
 * 		+--
 * 			Open file as a binary file
 * 			Read file into file_buffer.
 * 			Loop
 * 				+--
 * 					Get header entry
 * 					If T entry
 * 						Move text into text_buffer following the 
 * 						text that is already there
 * 						Set module_address to
 * 							module_address + size (in words) of text
 * 						Break from loop
 * 
 * 					If big-S entry
 * 						Insert 'S' and address into S table
 * 					If small-s entry
 * 						Insert 's' and address + module_address into S table
 * 					If P entry
 * 						Insert symbol and address + module_address into P table
 * 					If E entry
 * 						Insert symbol and address + module_address into E table
 * 					If R entry
 * 						Insert address + module_address and module_address
 * 							into R table
 * 				+--
 * 		+--
 * 
 * PHASE 2
 * Process each E entry
 * Process each R entry
 * 
 * PHASE 3
 * Output P table entries as P header entries
 * Output R table entries as R header entries
 * Output E table entries as R header entries
 * Output S table entry as s/S header entry
 * Output 'T'
 * Output text_buffer
 * Close files	
 * 
 * Note: This program doesn't manage Errors. The intention of this program is only to show the basic
 * functions of the linker.
 * 
 * @author yescas
 */

public class Linker {
	
	private TextBuffer textBuffer;
	private Table tableS;
	private Table tableP;
	private Table tableE;
	private Table tableR;
	private DataOutputStream outStream;
	
	public Linker() {
		this.textBuffer = new TextBuffer();
		tableS = new Table();
		tableP = new Table();
		tableE = new Table();
		tableR = new Table();
	}
	
	public void link(String []inputFiles, String outputFile) throws IOException, LinkerException {
		this.phase1(inputFiles);
		System.out.println("T -> " + this.textBuffer);
		System.out.println("S -> " + this.tableS);
		System.out.println("P -> " + this.tableP);
		System.out.println("E -> " + this.tableE);
		System.out.println("R -> " + this.tableR);
		this.phase2();
		this.phase3(outputFile);
	}
	 
	private void phase1(String []inputFiles) throws IOException {	
		short moduleAddress = 0;
		for(int i = 0; i < inputFiles.length; i++) {
			// Input File
			DataInputStream fileBuffer = new DataInputStream(new FileInputStream(inputFiles[i]));
			
			try {
				while(true) {
					char headerEntry = (char)fileBuffer.readByte();
					short address = 0;
					String symbol = "";
					System.out.println(headerEntry);
					
					if(headerEntry == 'T') {
						// Move text into text_buffer following the text that is already there
						// Set module_address to
							// module_address + size (in words) of text
						// Break from loop
						while(true) {
								this.textBuffer.add(fileBuffer.readShort());
								moduleAddress++;
						}
					} else if(headerEntry == 'S') {
						// Insert 'S' and address into S table
						this.tableS.setType('S');
						this.tableS.setAddress(fileBuffer.readShort());
					} else if(headerEntry == 's') {
						// Insert 's' and address + module_address into S table
						this.tableS.setType('s');
						this.tableS.setAddress(fileBuffer.readShort());
					} else if(headerEntry == 'P') {
						// Insert symbol and address + module_addres into P table
						address = (short)(fileBuffer.readShort() + moduleAddress);
						// Read symbol
						for(char c  = (char)fileBuffer.readByte(); c != 0; c = (char)fileBuffer.readByte()) {
							symbol += c;
						}
						this.tableP.addSymbolAddress(symbol, address);
					} else if(headerEntry == 'E') {
						// Insert symbol and address + module_address into E table
						address = (short)(fileBuffer.readShort() + moduleAddress);
						// Read symbol
						for(char c  = (char)fileBuffer.readByte(); c != 0; c = (char)fileBuffer.readByte()) {
							symbol += c;
						}
						this.tableE.addSymbolAddress(symbol, address);
					} else if(headerEntry == 'R') {
						// Insert address + module_address and module_address into R table
						address = fileBuffer.readShort();
						this.tableR.addAddressAddressModule((short)(address + moduleAddress), moduleAddress);
						//System.out.println("R -> " + address);
					}
				}
			} catch(EOFException eofEx) {
			} finally {
				fileBuffer.close();
			}
		}
	}
	
	private void phase2() throws LinkerException {
		// PHASE 2
		// Process each E entry
		for(String symbol : this.tableE.getSymbolAddress().keySet()) {
			Short addressValue = this.tableP.getAddress(symbol);
			if(addressValue == null)
				throw new LinkerException("The symbol " + symbol + " wasn't found!");
			
			this.textBuffer.relocate(this.tableE.getAddress(symbol), addressValue);
		}	
		
		// Proccess each R entry
		for(Short addr : this.tableR.getAddressAddressModule().keySet()) {
			this.textBuffer.relocate(addr, this.tableR.getAddressAddressModule().get(addr));
		}	
	}
	
	private void phase3(String outputFile) throws IOException {
		// PHASE 3
		try {
			outStream = new DataOutputStream(new FileOutputStream(outputFile));
			
			// Output P table entries as P header entries
			for(String symbol : this.tableP.getSymbolAddress().keySet()) {
				outStream.writeByte('P');
				outStream.writeShort(this.tableP.getAddress(symbol));
				for(int i = 0; i < symbol.length(); i++)
					outStream.writeByte(symbol.charAt(i));
				outStream.writeByte(0); // End of the string
			}
			
			// Output R table entries as R header entries
			for(short addr : this.tableR.getAddressAddressModule().keySet()) {
				outStream.writeByte('R');
				outStream.writeShort(addr);
			}
			
			// Output E table entries as R header entries
			for(String symbol : this.tableE.getSymbolAddress().keySet()) {
				short addr = this.tableE.getAddress(symbol);
				outStream.writeByte('R');
				outStream.writeShort(addr);
			}
			
			// Output S table entry as s/S header entry
			outStream.writeByte(this.tableS.getType());
			outStream.writeShort(this.tableS.getAddress());
			
			// Output 'T'
			outStream.writeByte('T');
	
			// Output textBuffer
			textBuffer.write(outStream);
		} catch(IOException ioEx) {
			throw ioEx;
		} finally {
			// Close files
			outStream.close();
		}
	}
	
	public static void main(String[] args) throws Exception {
		String []inputFiles = {
				"./linkerSIM/src/m1.mob", 
				"./linkerSIM/src/m2.mob"};
		String outputFile = "./linkerSIM/src/linked.mac";
		
		Linker linker = new Linker();
		linker.link(inputFiles, outputFile);
	}
}
