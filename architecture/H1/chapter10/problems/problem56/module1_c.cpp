// Second file:

#include <iostream>
using namespace std;

void f();

void g(int *p)
{
    *p = 100;
    f();
}

void f()
{
    cout << "hello\n";
}

