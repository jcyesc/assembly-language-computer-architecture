// Program 7.37

#include <iostream>
using namespace std;

int x, y, z = 6;

void f(int a, int b, int c)
{
   static int h, i, j;
   b = c = h = i = ++j;
   cout << a << " " << b << endl;
}

int main()
{
   x = 1;
   y = 2;
   f(x, y, z);
   f(z, y, z);
}
