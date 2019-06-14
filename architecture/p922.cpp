#include <iostream>
using namespace std;
int x = 5;
void f(const int &m)
{
   if (m != 0)
      f(m - 1);
  cout << m << endl;
}
int main()
{
   f(x);
   return 0;
}
