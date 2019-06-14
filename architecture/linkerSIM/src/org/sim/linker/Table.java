package org.sim.linker;

import java.util.HashMap;
import java.util.Map;

public class Table {
	private Map<String, Short> symbolAddress;
	private Map<Short, Short> addressModule;
	private char type;	 // For the S table
	private short address;	// Address for S
	
	public Table() {
		this.symbolAddress = new HashMap<String, Short>();
		this.addressModule = new HashMap<Short, Short>();
	}
	
	public char getType() {
		return type;
	}

	public void setType(char type) {
		this.type = type;
	}

	public short getAddress() {
		return address;
	}

	public void setAddress(short address) {
		this.address = address;
	}

	public void addSymbolAddress(String symbol, short address) {
		this.symbolAddress.put(symbol, address);
	}
	
	public Short getAddress(String symbol) {
		return this.symbolAddress.get(symbol);
	}
	
	public void addAddressAddressModule(short address, short moduleAddress) {
		this.addressModule.put(address, moduleAddress);
	}
	
	public Map<Short, Short> getAddressAddressModule() {
		return this.addressModule;
	}
	
	public Map<String, Short> getSymbolAddress() {
		return this.symbolAddress;
	}
	
	public String toString() {
		if(this.symbolAddress.size() != 0)
			return this.symbolAddress.toString();
		else if(this.addressModule.size() != 0) {
			return this.addressModule.toString();
		} else if(this.type != 0) {
			return this.type + ":" + this.address;
		} else 
			return "empty";
	}
	
}
