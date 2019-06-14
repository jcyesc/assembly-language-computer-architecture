// Program 7.36

#include <iostream>
using namespace std;
int x = 99;

void f(int x)
{
   ++x;
}

int main()
{
   f(++x);
   cout << x << endl;
   f(x++);
   cout << x << endl;
}
