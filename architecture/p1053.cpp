#include <iostream>
using namespace std;
int x = 5;
int y;
static void f(int a, int b)
{
   y = a + b + x;
}
int main()
{
   int z = 10;
   f(z, z + 3);
   cout << "x = " << x << endl;
   cout << "y = " << y << endl;
   cout << "z = " << z << endl;
   return 0;
}
