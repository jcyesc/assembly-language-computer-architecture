// Program 8.16
// This program returns a struct, and uses implicit parameters

#include <iostream>
using namespace std;;

struct S {
    int x;
    int y;
};

S t;

S ret_struct() {
    S s;
    s.x = 1;
    s.y = 2;
    return s;	// return a struct
}

int main() {

    t = ret_struct();

    cout << t.x << " - " << t.y << endl;
}


