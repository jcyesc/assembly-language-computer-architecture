// Program 8.41

#include <iostream>
using namespace std;

int x = 1, y = 2;

void f(int &x)
{
    x++;
    cout << x << endl;
}

int main()
{
    // With other compilers we could uncoment the next line.
    //f(x + y + 5);
    f(y);
    cout << x << " " << y << endl;
}

