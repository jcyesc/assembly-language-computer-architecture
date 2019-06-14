/*
  Program 8.39

  Declare a pointer variable p that can point to a function whose prototype is:

	int *f(int *q, int x);

*/

#include <iostream>

using namespace std;

int (*p)(int, int);

int add(int a, int b)
{
    return a + b;
}

int* (*p2)(int *, int );

int *f(int *q, int x)
{ 
    cout << "Inside the function " << *q << " - "
	 << x << endl;

    return q;
}




int main()
{
   p = add;

   int res = p(3,4);
   cout << "Result: " << res << endl;

   int *pointer;

   p2 = f;

   pointer = f(&res, 5);
   cout << "Returned Pointer *pointer " << *pointer << endl;



}
