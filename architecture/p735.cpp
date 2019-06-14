#include <iostream>
using namespace std;
int x = 1, y = 2, z = 3;
void f(int x)
{
   int y = 7;
   x = y;
   cout << x << " " << y << endl;
   int z = 8;
   x = z;
   cout << x << " " << z << endl;
}
int main()
{
   f(x);
   cout << x << " " << y << " " << z << endl;
   return 0;
}        