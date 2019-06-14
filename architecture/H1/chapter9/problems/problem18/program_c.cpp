#include <iostream>

using namespace std;

int y = 2;

// Call using value-result
void f(int *x)
{
    int tmp = *x;

    tmp--;

    *x = tmp;
}

int main()
{
    f(&y);
    cout << y << endl;

    return 0;
}
