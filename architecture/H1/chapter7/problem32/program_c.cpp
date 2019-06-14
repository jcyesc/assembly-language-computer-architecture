// Program 7.32

#include <iostream>

using namespace std;

void f()
{
   static int x = 2;
   int y = 3;
   int z = 5;
   cout << x << " " << y << " " << z << endl;
   x = 1;
   y = 2;
   z = 3;
}

void g()
{
   static int x = 44;
   int y = 50;
   cout << x << " " << y << endl;
   y = 22;
   x = y;
}

int main()
{
   f();
   f();
   g();
   g();
}
