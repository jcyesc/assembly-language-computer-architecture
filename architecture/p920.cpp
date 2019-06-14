#include <iostream>
using namespace std;
int s, a = 1, b = 2, c = 3;
int f(int x, int $y, int &z)
{
   x++:
   y++;
   z++;
   return x + y + z;
}
int main()
{
   s = f(a, b, c);
   cout << s << endl;
   cout << a << endl;
   cout << b << endl;
   cout << c << endl;
   return 0;
}
