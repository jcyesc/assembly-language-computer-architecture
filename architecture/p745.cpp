#include <iostream>
using namespace std;
void f()
{
   int x, y = 2;
   x = 10;
   {
      int x, y = 4;
      x = 5;
      cout << "x = " << x << " y = " << y << endl;
   }
   cout << "x = " << x << " y = " << y << endl;
}
int main()
{
   f();
   return 0;
}        