#include <iostream>
using namespace std;
int x;
void f(int &x)
{
   x = 5;
}
int main()
{
   f(x);
   cout << x << endl;
   return 0;
}
