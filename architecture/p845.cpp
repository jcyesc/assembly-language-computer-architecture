#include <iostream>
using namespace std;
int y = 3;
void f(int &x)
{
   if (x) {
      cout << "hello\n";
      x = x - 1;
      f(x);
   }
}
int main()
{
   f(y);
   cout << y << endl;
   return 0;
}
