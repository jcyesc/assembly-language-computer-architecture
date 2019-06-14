#include <iostream>
using namespace std;
class A {
   public:
      virtual void f();
};
void A::f()
{
   cout << "f in A\n";
}
class B: public A {
};
class C: public B {
   public:
      void f();
};
void C::f() {
   cout << "f in C\n";
}
int main()
{
   A* ap;
   B b;
   C c;

   ap = &b;
   ap -> f();
   ap = &c;
   ap -> f();
   return 0;
}
