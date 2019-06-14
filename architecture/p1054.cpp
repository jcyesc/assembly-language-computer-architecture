#include <iostream>
using namespace std;
int x = 5;
static int y;
static f(int *p)
{
   *p = 5;
}
int main()
{
   static int a = 1;
   int b = 2;
   f(&x);
   f(&y);
   f(&a);
   f(&b);
   cout << a << " " << b << " " << x << " " << y << endl;
   return 0;
}
