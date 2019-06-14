#include <iostream>
using namespace std;
void f()
{
   int x;
   x = 1;
   cout << x << endl; 
} 
void g() {
   f();
}
int main()
{
   f();
   g();
   return 0;
}       