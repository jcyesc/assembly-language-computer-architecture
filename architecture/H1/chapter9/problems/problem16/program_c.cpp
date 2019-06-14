#include <iostream>

using namespace std;

int *q, x;

void f(int **p)
{
    *p = &x;
}

int main()
{
    f(&q);
    *q = 55;
    cout << x << endl;

    return 0;
}
