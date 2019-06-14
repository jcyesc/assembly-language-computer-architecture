#include <iostream> 
using namespace std;
static void f(int x)
{
   cout << "x = " << x << endl;
}
int main()
{
   int a;
   int b = 1;
   f(b);
   g(&a);
   cout << "a = " << a << endl;
   return 0;
}
