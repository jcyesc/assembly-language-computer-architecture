// Program 7.53

#include <iostream>

using namespace std;

int f(int x, int y, int z)
{
    cout << x << " " << y << " " << z << endl;
    return 1;
}

int g(int a, int b, int c)
{
    return f(c, b, a) + 10;
}

int main()
{
    cout << g(1, 2, 3) << endl;
    return 0;
}

