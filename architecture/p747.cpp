#include <iostream>
using namespace std;
int a, b;
void f(int x, int *p)
{
   x = 44;
   *p = 55;
}
int main()
{
   f(a, &b);
   cout << a << " " << b << endl;
   return 0;
}        