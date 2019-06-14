#include <iostream>
using namespace std;
void f()
{
   int a[500];

   a[499] = 56;
   cout << a[499] << endl;
}
int main()
{
   f();
   return 0;
}
