#include <iostream>
using namespace std;
class A {
   public:
      int x;
};
class B: public A {
   public:
      int x;
};
int main()
{
   A* ap;
   B b;
   b.A::x = 1;
   b.x = 2;

   ap = &b;
   ap -> x = 3;
   cout << b.A::x << endl;
   cout << b.x << endl;
   return 0;
}

