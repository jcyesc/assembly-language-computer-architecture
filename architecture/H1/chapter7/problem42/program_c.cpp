// Program 7.42

#include <iostream>
using namespace std;

int g = 20;

void f1(int x)
{
   x = x + 5;
   cout << "x = " << x << endl;
}

void f2(int *p)
{
   *p = 3;
}

void f3(int *p, int x)
{
   *p = x;
}

int main()
{
   cout << "g = " << g << endl;
   f1(g);
   cout << "g = " << g << endl;
   f2(&g);
   cout << "g = " << g << endl;
   f3(&g, 20);
   cout << "g = " << g << endl;	

   return 0;
}
