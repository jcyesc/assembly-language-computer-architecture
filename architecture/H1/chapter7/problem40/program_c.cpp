// Program 7.40

#include <iostream>
using namespace std;

int x, y = 5;

void f(int x, int y)
{
   int p, q = 8;
   static int s, t = 17;
   p = q++;
   s = t++;
   x = ++y;
   cout << p << " " << q << " " << s << " " << t << endl;
}

int z;

int main()
{
    z = 5;
    f(x, y);
    cout << x << " " << y << " " << z << endl;
    f(y, x);
    cout << x << " " << y << " " << z << endl;
}

