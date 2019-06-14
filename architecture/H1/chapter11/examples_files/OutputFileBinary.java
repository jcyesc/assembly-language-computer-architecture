import java.io.*;

public class OutputFileBinary 
{
    public static void main(String[] args) throws IOException
    {
	DataOutputStream outputStream =
		new DataOutputStream(new FileOutputStream("outfile2"));
	short x = 10;
	outputStream.writeShort(x);	// contents of x output as is
	outputStream.writeByte('C');
	outputStream.close();

    }
}
