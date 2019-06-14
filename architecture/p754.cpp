#include <iostream>
using namespace std;
void f()
{
   int x;

   cin >> x;
   static int y = x;
   cout << y << endl;
}
int main()
{
   f();
   f();
   return 0;
}        