#include <iostream>
using namespace std;
int x = 1, y = 2;
void f(int &x)
{
   x--;
}
int main()
{
   f(x - y);
   cout << x << " " << y << endl;
   return 0;
}
