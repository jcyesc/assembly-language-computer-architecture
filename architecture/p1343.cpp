#include <iostream>
using namespace std;
int a = 5, b = 6;
void f(int #x, int &r)
{
   a = x;
   r = 25;
   b = x;
}
int main()
{
   int y = 10;
   f(y, y);
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
   cout << "y = " << y << endl;
   return 0;
}
