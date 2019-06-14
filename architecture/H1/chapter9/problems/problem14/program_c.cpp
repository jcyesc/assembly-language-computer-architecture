#include <iostream>

using namespace std;

int x = 1, y = 10, z;

int main()
{
    z = x < y;
    cout << z << endl;
    if(x < y)
	cout << "good\n";
    else
	cout << "bad\n";	

    return 0;
}
