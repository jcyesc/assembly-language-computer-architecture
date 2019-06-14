#include <iostream>
using namespace std;
int x, y;
int f()
{
   cout << "hello\n";
   return 1;
}
int main()
{
   while (x < 5 && y < 12 && f()) {
      x = x + 1;
      y = y + 2;
   }
   return 0;
}
