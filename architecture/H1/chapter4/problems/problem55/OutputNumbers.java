/*
 Version	: 1
 Created	: 7-january-2009
 Author		: Juan Carlos Yescas
 Description	: Write and run a Java program that creates a binary file containing
		  the binary values 1,2,3,4,5,6,7,8,9, and 10. Write and run a C++
		  program that inputs this file, sums the 10 values, and displays the sum.  

*/

import java.io.DataOutputStream;
import java.io.FileOutputStream;
import java.io.File;

public class OutputNumbers {
    public static void main(String[] args) throws Exception {
        File file = new File("numbers.dat");
        file.createNewFile();
        FileOutputStream fi = new FileOutputStream(file);
       
        DataOutputStream data = new DataOutputStream(fi);
       
	for(int i = 1; i <= 10; i++)
	   data.writeByte(i);

	// In numbers.dat the data is going to be in the next way:
	// 01 02 03 04 05 06 07 08 09 0a  
	// In Unix we can use the "hexdump" command and in MS-DOS the debug command.
        data.flush();
        data.close();
    }
}
