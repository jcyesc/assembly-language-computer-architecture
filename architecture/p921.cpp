#include <iostream>
using namespace std;
int x, y;
void f(int &m) {
   cout << "enter\n";
   cin >> x >> y;
   m = x;
   if (x != y) {
      f(x + y);
   }
   cout << m << endl;
}
int main() 
{
    f(3);
    return 0;
}
