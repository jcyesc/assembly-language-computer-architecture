// Program 7.55

#include <iostream>

using namespace std;

void f()
{
    static int y = 3;
    int x = y;
    cout << x << endl;
}

int main()
{
    f();

    return 0;
}

