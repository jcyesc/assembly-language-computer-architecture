// Example 8.20 Pointers to Functions

#include <iostream>

using namespace std;

int y;
int (*p)(int);

int fp(int x)
{
   cout << x << endl;
   return x;
}

int main()
{
   y = fp(3);	// call fp
   p = fp;
   y = p(3);	// call fp via p
}

