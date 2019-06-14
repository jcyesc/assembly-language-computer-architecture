#include <iostream>
using namespace std;
int a = 3;
void g(int &y) 
{
  y = 4;
}
void f(int &x)
{
   g(x);
}
int main()
{
   f(a);
   cout << a << endl;
   return 0;
}
