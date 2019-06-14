/*
  Program 8.16

  The following program is not valid C++ code but its intention is clear. Translate it
  to assembly language as a dumb compiler would. Assume 0 <= x <= 255. Assemble and
  run on sim.
 
*/

#include <iostream>

using namespace std;

int x;
// int c[x]; This code is not allowed because the compiler doesn't know how much space to reserve.
void f()
{
    int a[x], b;

    a[1] = 55;
    b = 33;
    
    for(int i = 0; i < x; i++)
       cout << a[i] << " ";
    
    cout << endl;
}

int main()
{
    cout << "enter number\n";
    cin >> x;
    f();
}
