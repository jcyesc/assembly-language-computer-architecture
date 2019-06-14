#include <iostream>
using namespace std;
int x = 18;
void f(int *p, int *q)
{
   *p = *q + 5;
}
void g(int x)
{
   int y;
   y = x + 10;
   f(&x, &y);
   cout << x << " " << y << endl;
}
int main(void)
{
   g(7);
   return 0;
}
