// Program 7.44

#include <iostream>

using namespace std;

void f1(int x, int y, short z)
{
   x = 1;
   y = 2;
   z = 3;
   cout << x << " " << y << " " << z << endl;
}

void f2(int x, int y, int z)
{
   x = 4;
   y = 5;
   z = 6;
   cout << x << " " << y << " " << z << endl;
}

int main()
{
   f1(10, 11, 12);
   f2(20, 21, 22);

   return 0;
}
