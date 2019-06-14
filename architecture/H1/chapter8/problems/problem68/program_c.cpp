// Program 8.68

#include <iostream>

using namespace std;

void f(int x)
{
    if(x==0) {
        cout << "hello\n";
	return;
    }

    cout << "good\n";
    f(x - 1);
    cout << "bad\n";
    f(x - 1);
    cout << "so so\n";
}

int main()
{
    f(3);
}
