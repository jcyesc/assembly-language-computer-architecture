// Program 7.50

#include <iostream>

using namespace std;

int x = 1, y = 2;

void f(int x)
{
    x++;
    cout << x << endl;
}

int main()
{
    f(x + y + 5);
    cout << x << " " << y << endl;
}


