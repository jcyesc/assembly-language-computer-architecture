#include <iostream>
using namespace std;
int a = 100;
void f(int #x)
{
    x = x + 5;
}
int main()
{
   cout << "a = " << a << endl;
   f(a);
   cout << "a = " << a << endl;
   return 0;
}
