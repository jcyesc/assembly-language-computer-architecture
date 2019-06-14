// Program 7.52

#include <iostream>

using namespace std;

int a = 5;

void f(int x)
{
    cout << "x = " << x << endl;
    cout << "a = " << a << endl;

}

int main()
{
    f(a++);	// is a incremented before f is executed ? YES

    return 0;
}
