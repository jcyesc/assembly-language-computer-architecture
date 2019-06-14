#include <iostream>
using namespace std;
struct A {
   int x,y;
};
A s;
void f()
{
   A *p;
   p = &s;
   p -> x = 1;
   p -> y = 2;
   cout << s.x << endl;
   cout << s.y << endl;
}
int main()
{
   f();
   return 0;
}
