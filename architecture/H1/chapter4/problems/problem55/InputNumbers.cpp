/*
 Version	: 1.0
 Created	: 6-december-2009
 Author		: Juan Carlos Yescas
 Description	: Write and run a Java program that creates a binary file containing
                  the binary values 1,2,3,4,5,6,7,8,9, and 10. Write and run a C++
                  program that inputs this file, sums the 10 values, and displays the sum.  
*/

#include <fstream.h>
#include <iostream.h>

int main() {
  
   int ac = 0;
   cout << "int sizeof : " << sizeof(ac) << "\n";
   char x = 0;
   cout << "char sizeof : " << sizeof(x) << "\n";
   
   ifstream fin;
   fin.open("numbers.dat");
   if(fin.fail()) {
     cout << "The file couldn't be opened.\n";
     exit(1);
   }
	
   // Read the 10 numbers in the file
   for(int i = 0; i < 10; i++) {
      char tmp;
      fin.read( reinterpret_cast< char *>(&tmp), sizeof(tmp));
      ac += tmp; 
      cout<< "ac -> " << ac << " tmp -> " << (int)tmp << "\n";
   }

   cout<< "TOTAL AC : " << ac << "\n";

   fin.close();

   return 0;
}
