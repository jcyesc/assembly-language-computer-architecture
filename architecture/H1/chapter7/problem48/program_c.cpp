// Program 7.48

// The * and ++ have the same precedence, and the associativity is
// from right to left.

/*
	Note: It's important to see the difference between *p++, (*p)++ and *(p++).

	*p++ means, give me the value of *p, and them increment the address that is 
	     pointed by p;

	(*p)++ means, give me the value of *p and them increment the value of *p.

	*(p++) means, give me the address that is pointed by p and increment if, then 
	       give me the value that the address has.
*/

#include <iostream>

using namespace std;

int x = 1;

void f(int *p)
{
    *p++; 	
    cout << x << endl;
    *(p++);
    cout << x << endl;
    (*p)++;
}

int main()
{
    f(&x);
    cout << x << endl;

    return 0;
}
