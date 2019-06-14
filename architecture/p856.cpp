#include <iostream>
using namespace std;
void f(int x, unsigned y, short z)
{
   x = 1;
   y = 2;
   z = 3;
   cout << x << " " << y << " " << z << endl;
}
void f(int x, int y, int z)
{
   x = 4;
   y = 5;
   z = 6;
   cout << x << " " << y << " " << z << endl;
}
int main()
{
   f(10, -11, 12);
   f(10, 11, 12);
   f(10, 40000,12);
   return 0;
}
