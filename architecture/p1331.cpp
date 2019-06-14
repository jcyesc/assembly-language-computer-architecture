#include <iostream>
using namespace std;
void f(int x) {
   int a,b,c,d;
   a = -1;
   b = 1;
   c = 2;
   d = 3;
   a = a + b + x;
   b = x - 1;
   c = c * 5;
   d = d / 2;
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   cout << d << endl;
}
void main()
{
   f(5);
}
