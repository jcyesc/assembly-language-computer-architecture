// Program 8.44

#include <iostream>

using namespace std;

int x = 1, y = 2;

void f(int &x)
{
    x--;
}

int main() 
{
    // The next line doesn't work in g++.
    //f(x - y);
    f(x);
    cout << x << " " << y << endl;
}
