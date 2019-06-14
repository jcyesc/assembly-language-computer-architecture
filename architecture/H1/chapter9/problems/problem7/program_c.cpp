/*
 Problem 9.7

 Write your own version of the strcpy funcion in C++.
*/

#include <iostream>

using namespace std;

void copy(char *p, char *target)
{
   int i;
   for(i = 0; target[i] != 0; i++) {
	cout << target[i] << " ->  " << (int)target[i] <<  endl;
	p[i]= target[i];
   }

   p[i] = 0;
}

int main()
{
   char p[7];
   copy(p, "target");

   cout << p << endl;
   cout << *p << endl;
}
