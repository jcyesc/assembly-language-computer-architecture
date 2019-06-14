#include <iostream>
using namespace std;
struct S {
   int x, y, z;
};
S b;
S f()
{
   S a;
   a.x = a.y = a.z = 5;
   return a;
}
int main()
{
   b = f();
   cout << b.x << " " << b.y << endl;
   return 0;
}
