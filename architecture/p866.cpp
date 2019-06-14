#include <iostream>
using namespace std;
void f()
{
   cout << 'A';
   f();
}
int main()
{
   f();
   return 0;
}
