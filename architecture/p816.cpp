#include <iostream>
using namespace std;
int x;
void f()
{
   int a[x], b;

   a[1] = 55;
   b = 33;
}
int main()
{
   cout << "enter number\n";
   cin >> x;
   f();
   return 0;
}
