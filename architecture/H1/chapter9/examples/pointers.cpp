#include <iostream>

using namespace std;

void pointer(int *p)
{
   cout << "Pointer p: " << p 
	<< ", *p: " << *p << endl;

   int a = 4;	
   int *x = &a;

   cout << "Pointer x: " << x
	<< ", *x: " << *x << endl;

   // The address of the pointer, not the address that is pointing is local
   // so if we make an assigment, the assigment changes the value of the local address.
   p = x;
 
   cout << "Pointer p: " << p
	<< ", *p: " << *p << endl;
}


int main() 
{	
   int x = 9;
   int *p = &x;
   pointer(p);
   cout << "Main p: " << p 
	<< ", *p: " << *p << endl;

   return 0;
}
