// Program 7.54

#include <iostream>

using namespace std;

void f()
{
    int x;
    // enter 5 first time, enter 6 second time
    cin >> x;
    static int y = x;	// y initialized only once
    cout << y << endl;  // outputs 5 both times
}

int main()
{
    f();
    f();

    return 0;
}


