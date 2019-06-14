#include <iostream>
using namespace std;
int x = 1;
void f(int *p)
{
   *p++;
   cout << x << endl;
   *(p++);
   cout << x << endl;
   (*p)++;
}
int main()
{
   f(&x);
   cout << x << endl;
   return 0;
}        