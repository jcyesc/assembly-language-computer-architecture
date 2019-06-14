// Program 8.14
// When implementing a struct, we must consider three cases:
//	- Global structs
//	- Structs on the stack (local or parametr structs)
//	- Structs accessed via a pointer

#include <iostream>
using namespace std;

struct Coordinates {
    int x;
    int y;
};

Coordinates gs;

void tests(Coordinates *ps) {
    Coordinates ls;	// local struct
    int li = 5;		// local int
    ls.y = 4;
    ps->y = li;
}

int main() {
    tests(&gs);
    cout << gs.y << endl;
    gs.y = 3;
    cout << gs.y << endl;
}
