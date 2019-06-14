#include <iostream>
using namespace std;
int s,t;
int tough(int x, int *p)
{
   int a,b;
   a = x;
   b = *p;
   if (a == 0) return *p;
   return tough(x-1, &b);
 }
int main()
{
   s = 5;
   t = tough(3, &s);
   cout << "s = " << s << endl;
   cout << "t = " << t << endl;
   return 0;
}
