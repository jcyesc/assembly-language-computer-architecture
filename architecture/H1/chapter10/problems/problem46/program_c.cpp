/*
 * 10.46 If main returns 0 (normal termination), the start-up code in Figure 10.36
 * will also return 0 even if a null pointer assignment is detected. Does this make
 * sense? Determine if your own C++ compiler behaves similarly.
 */

#include <iostream>
using namespace std;

int *p;
int a = 6;
int main()
{
    // WE GET A BUS ERROR   
    *p = a;
    cout << "Pointer -> " << p << endl;
}


