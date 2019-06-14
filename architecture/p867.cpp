#include <iostream>
using namespace std;
int mult(int x, int y)
{
   if (y == 0)
      return 0;
   return mult(x, y - 1)  + x;
}
int exp(int x, int y)
{
   if (y == 0)
      return 1;
   return mult(exp(x, y-1), x);
}
int main()
{
   cout << exp(2,3) << endl;
   return 0;
}
