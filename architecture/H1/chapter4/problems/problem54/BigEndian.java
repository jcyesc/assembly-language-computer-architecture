/*
 Version	: 1
 Created	: 6-january-2009
 Author		: Juan Carlos Yescas
 Description	: This Program shows that the JVM uses BIG ENDIAN to store the 
		  data. Remember that big endian saves first the most significant byte first.

*/

import java.io.DataOutputStream;
import java.io.FileOutputStream;
import java.io.File;

public class BigEndian {
    public static void main(String[] args) throws Exception {
        File file = new File("archivo.dat");
        file.createNewFile();
        FileOutputStream fi = new FileOutputStream(file);
       
        DataOutputStream data = new DataOutputStream(fi);
       
        data.writeLong(65535);	// 00 00 00 00 00 00 ff ff
	data.writeLong(65536);	// 00 00 00 00 00 0f 00 00       

	// In archivo.dat the data is going to be in the next way:
	// 00 00 00 00 00 00 ff ff 00 00 00 00 00 01 00 00
	// In Unix we can use the "hexdump" command and in MS-DOS the debug command.
        data.flush();
        data.close();
    }
}
