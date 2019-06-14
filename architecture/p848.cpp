#include <iostream>
using namespace std;
int n = 20, z[] = { 100, 101, 102 };
void f(int a[])
{
   a[1] = a[1] + 5;
   cout << a[1] << endl;
}
void f(int x)
{
   x = x + 3;
   cout << x << endl;
}
int main()
{
   f(n);
   f(z);
   return 0;
}
