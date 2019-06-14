#include <iostream>

using namespace std;

int x = 5;

void f(const int &m)
{
    if(m != 0) {
	int tmp = m - 1;
	f(tmp);
    }
    cout << m << endl;
}

int main()
{
    f(x);

    return 0;
}
