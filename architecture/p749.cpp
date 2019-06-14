#include <iostream>
using namespace std;
int x = 3;
void f(int *p)
{
   cout << *p << endl;
}
void g(int *p)
{
   f(p);
}
int main()
{
   g(&x);
   return 0;
}       