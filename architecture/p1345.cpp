#include <iostream>
using namespace std;
void f(int n)
{
   if (n > 0) {
      cout << n << endl;
      f(n - 1);
      cout << "goodbye\n";
   }
   else 
      cout << "hello\n";
}
int main()
{
   f(3);
   return 0;
}
