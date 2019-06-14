/*
    Program 8.11

    In C+, arrays are passed using call by reference. Howover, it is possible to 
    write a C++ program in which call by value is used instead (by writing explicit
    instructions that pass an array by value). Write such a C++ program.
*/

#include <iostream>

using namespace std;


void f(int a[], int length)
{
     // We create a copy of a[];
     int *tmp = new int[length];
     
     for(int i = 0 ; i < length; i++) {
	tmp[i] = a[i];
     }
     
     for(int i = 0; i < length; i++) {
        tmp[i] = 0;
	cout << tmp[i] << " ";
     }
     delete  [] tmp;
     cout << endl;
}

int main()
{
    int length = 4;
    int a[length];
  
    f(a, length);
    for(int i = 0; i < length; i++)
    {
	cout << a[i] << " ";
    }
    
    cout << endl;
}

