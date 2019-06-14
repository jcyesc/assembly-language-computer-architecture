
// 10.56 Translate the next C program to assembly language. 
// Assume that the program is in two files


/*
	To compile we use the next command lines:

	g++ -c main_c.cpp
	g++ -c module1_c.cpp
	g++ -s main_c.o module1_c.o or g++ main_c.o module1_c.o

*/

// first file;

#include <iostream>
using namespace std;

void g(int *p);

static void f(int x)
{
    cout << "x = " << x << endl;
}

int main()
{
    int a;
    int b = 1;
    f(b);
    g(&a); 
    cout << "a = " << a << endl;
    return 0;
}


