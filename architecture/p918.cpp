#include <iostream> ###
using namespace std;
int y = 2;
void f(int $x)
{
   x--;
}
int main()
{
   f(y);
   cout << y << endl;
   return 0;
}
