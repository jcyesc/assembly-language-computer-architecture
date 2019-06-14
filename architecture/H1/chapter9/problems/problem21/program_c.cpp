#include <iostream>

using namespace std;

int x, y;

void f(int &m) {
    cout << "enter\n";
    cin >> x >> y;
    m = x;
    if(x != y) {
	int tmp = x + y;
	f(tmp);
    }
    cout << m << endl;
}

int main() {
    int tmp = 3;

    f(tmp);
    return 0;
}
