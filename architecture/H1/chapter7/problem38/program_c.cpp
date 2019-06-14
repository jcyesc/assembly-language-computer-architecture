// Program 7.38

#include <iostream>
using namespace std;

int x, y = 5;

void f(int x)
{
   int y;
   y = x + 3;
   cout << x << " " << y << endl;
}

int main()
{
   cout << x << " " << y << endl;
   cin >> y;
   f(y);
   cout << x << " " << y << endl;
}

