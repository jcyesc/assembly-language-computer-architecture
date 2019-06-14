package org.sim.assembler;

import java.util.HashMap;
import java.util.Map;

public class SymbolTable {
	public Map<String, Short> symbols;
	
	public SymbolTable() {
		symbols = new HashMap<String, Short>();
	}
	
	public void add(String symbol, Short address) {			
		symbols.put(symbol, address);
	}
	
	public boolean containsSymbol(String symbol) {
		return this.symbols.containsKey(symbol);
	}
	
	public Short getAddress(String symbol) {
		return symbols.get(symbol);
	}
	
	public String toString() {
		return symbols != null ? symbols.toString() : "Empty";
	}
}
