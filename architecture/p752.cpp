#include <iostream>
using namespace std;
int a = 5;
void f(int x)
{
   cout << "x = " << x << endl;
   cout << "a = " << a << endl;
}
int main()
{
   f(a++);
   return 0;
} 