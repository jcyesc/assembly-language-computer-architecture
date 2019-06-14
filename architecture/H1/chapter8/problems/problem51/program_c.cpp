// Program 8.51

#include <iostream>

using namespace std;

int a[10];

void f()
{
    int b[10];
    static int c[10];
    int *p, *q, *r, *s, *t, *u;

    p = a;
    q = b;
    r = c;

    *p = 10;
    *q = 11;
    *r = 12;

    s = &a[3];
    t = &b[3];
    u = &c[3];

    *s = 1;
    *t = 2;
    *u = 3;

    cout << a[0] << " " << a[3] << endl;
    cout << b[0] << " " << b[3] << endl;
    cout << c[0] << " " << c[3] << endl;
}

int main()
{
    f();
}


