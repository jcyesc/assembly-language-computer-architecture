#include <iostream>
using namespace std;
int x, a[10], b[10] = { 2, 3, 4 };
void f()
{
   int c[10];

   a[x] = 1;
   b[x+1] = 2;
   c[x+2] = 3;
   cout << c[2] << endl;
}
int main()
{
   f();
   cout << a[0] << " " << b[1] << endl;
   return 0;
}
