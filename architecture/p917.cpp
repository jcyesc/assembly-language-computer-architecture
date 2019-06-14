#include <iostream>
using namespace std;
struct A {
   int x,y;
};
A s;
A *p;
void f(A **p)
{
   (*p) -> x = 1;
   (*p) -> y = 2;
   cout << s.x << endl;
   cout << s.y << endl;
}
int main()
{
   p = &s;
   f(&p);
   cout << s.x << endl;
   cout << s.y << endl;
   return 0;
}
