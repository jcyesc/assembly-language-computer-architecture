#include <iostream>
using namespace std;
int a;
class  C {
   public:
      void f(int a, int &b);
      int x;
      int y;
};
void C::f(int a, int &b)
{
   x = a;
   y = a;
   b = x + y;;
}
int main()
{
   C c;
   c.f(10, a);
   cout << a << endl;
   c.f(20, a);
   cout << a << endl;
   c.x = 30;
   cout << c.x << endl;
   return 0;
}
