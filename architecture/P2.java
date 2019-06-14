import java.io.*;
class P2 
{
    public static void main(String[] args) throws IOException {
       DataOutputStream outStream =
          new DataOutputStream(new FileOutputStream("outfile2"));
       short x = 10;
       outStream.writeShort(x);  // contents of x outputed as is
       outStream.writeByte('C');
       outStream.close();
    }
}
