// Program 7.51

#include <iostream>

using namespace std;

int x = 20;

int f()
{
    return x + 10;
}

int main()
{
    x = f();
    cout << x << endl;
}
