#include <iostream>
using namespace std;
long x, *p; int *q, *r;
int main()
{
   p = &x;
   *p = 2;
   q = (int *)p;
   r = q + 1;
   cout << *q << endl;
   cout << *r << endl;
   return 0;
}        