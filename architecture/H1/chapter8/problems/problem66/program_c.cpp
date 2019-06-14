// Problem 8.66

#include <iostream>

using namespace std;

void f()
{
    cout << 'A';
    f();
}

int main()
{
    f();
}
