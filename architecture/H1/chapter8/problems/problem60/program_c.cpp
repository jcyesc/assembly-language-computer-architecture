// Program 8.60

#include <iostream>

using namespace std;

int x;

int main()
{
    cout << "enter\n";
    cin >> x;
    if(x + 5)
        cout << "hello\n";
    if(x > 44)
        cout << "big\n";
    else {
	cout << "small\n";
	if(x < 30)
	   cout << "really small\n";
    }
}
