// Program 7.39

#include <iostream>
using namespace std;

void f(int x, int y, int z)
{
   static int q;
   q = x + y + y + z + z + z;
   cout << "q = " << q << endl;
}

int main()
{
   f(1, 2, 3);
}
