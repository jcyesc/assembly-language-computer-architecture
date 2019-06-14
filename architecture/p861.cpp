#include <iostream>
using namespace std;
int x;
int main()
{
   cout << "enter\n";
   cin >> x;
   if (x >= 5)
      cout << "hello\n";
   if (x <= -6)
      cout << "small\n";
   else {
      cout << "big\n";
      if (x > 30)
         cout << "really big\n";
   }
   return 0;
}
