/*
  Figure 9.3 Pointer to an int pointer
*/

#include <iostream>

using namespace std;

int gv = 5;

void f(int **pp)		// pp receives address of x
{
    *pp = &gv;			// assigns x address of gv
    cout << **pp << endl;	// outputs contents of gv
}

int main()
{
    int *x;
    f(&x);			// &x is an int **
    cout << *x << endl;		// outputs contents of gv
}

