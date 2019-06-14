import java.io.*;

public class OutputFileASCII
{
    public static void main(String[] args) throws IOException {
        PrintWriter outStream =
		new PrintWriter(new FileOutputStream("outfile1.txt"));

	short x = 10;
	outStream.print(x);	// contents of x converted to ASCII decimal
	outStream.close();
    }
}
