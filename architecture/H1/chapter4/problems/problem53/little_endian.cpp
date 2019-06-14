/*
 Version	: 1.0
 Created	: 6-december-2009
 Author		: Juan Carlos Yescas
 Description	: Write a C++ program that will work correctly on a little-endian computer
		  but not a big-endian computer.

		  If we save the numbers 65536 and 65535 in Mac Os X, the file is going to store in
		  the numbers in the next way:

		  	00 00 01 00 ff ff 00 00

		  65536 = 00 00 01 00 in LITTLE ENDIAN
		  65535 = ff ff 00 00 in LITTLE ENDIAN   

		  If we save the same numbers in LINUX UBUNTU we get the next:

			0000 0001 ffff 0000
*/

#include <fstream.h>
#include <iostream.h>

int main() {
   ofstream fout;

   cout << "Creating a file and saving data.\n";
   fout.open("file.dat");

   if(fout.fail()) {
      cout << "The file  couldn't be opened.\n";
      exit(1); 
   }

   
   long var = 65535;  // 0000ffff
   fout.write( reinterpret_cast< const char *>( &var), sizeof(var));
   fout.close();


   ifstream fin;
   fin.open("file.dat");
   if(fin.fail()) {
     cout << "The file couldn't be opened.\n";
     exit(1);
   }
	
   short res;
   
   fin.read( reinterpret_cast< char *>(&res), sizeof(res));
   
   if( res != 0)
	cout << "LITTLE ENDIAN";
   else
	cout << "BIG ENDIAN";

   cout << "\nResult (1 byte) : "  << res;
   
   fin.read( reinterpret_cast< char *>(&res), sizeof(res));
   cout << "\nResult (2 byte) : " << res;   

   cout << "\nsizeof: " << sizeof(res) << "\n";

   return 0;
}
