// Program 7.34

#include <iostream>
using namespace std;

int x = 1, y = 2;

void f(int x)
{
   int y = 7;
   x = y;
   cout << x << " " << y << endl;
}

int main() 
{
   f(x);
   f(y);
   cout << x << " " << y << endl;
   return 0;
}









