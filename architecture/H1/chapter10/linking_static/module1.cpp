#include <iostream>

using namespace std;

// If the next line is uncommented the linker is going to complaint about the symbol.
//extern int av;

int f1();

int main() {
    cout << "Using extern and static" << endl;
    //av = 5;
    f1();
}
