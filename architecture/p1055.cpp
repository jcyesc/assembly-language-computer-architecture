#include <iostream>
using namespace std;
int main()
{
   int a, b[5];
   cout << "enter number\n";
   cin >> a;
   b[a] = 5;
   cout << "a = " << a << endl;
   for (a = 0; a < 5; a++)
      cout << b[a] << endl;
   return 0;
}
