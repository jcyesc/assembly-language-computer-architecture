#include <iostream>

using namespace std;

int x;

void f(int *p)	// value-result implemented like a call by reference.
{
    *p = 5;
}

int main()
{
    f(&x);
    cout << x << endl;
    
    return 0;
}
