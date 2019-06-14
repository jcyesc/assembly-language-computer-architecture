#include <iostream>
using namespace std;
int z = 100;
void f(int x)
{
   cout << x << endl;
}
void f(int a[])
{
   a[0] = 5;
}
int main()
{
   f(3);
   f(&z);
   cout << z << endl;
   return 0;
}
