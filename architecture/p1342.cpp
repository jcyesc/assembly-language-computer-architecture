#include <iostream>
using namespace std;
int a = 100;
void f(int #x)
{
    a = x + 5;
}
void g(int z)
{
   int y = 1;
   f(y + 20);
   cout << "a = " << a << endl;
   cout << "y = " << y << endl;
   f(z + 20);
   cout << "a = " << a << endl;
   cout << "y = " << y << endl;
}
int main()
{
   g(7);
   return 0;
}
