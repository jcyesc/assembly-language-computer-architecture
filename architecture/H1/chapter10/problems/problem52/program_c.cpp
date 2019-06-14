
#include <iostream>
using namespace std;
// run with program with the following command line args:
//  a1 a2 a3 a4

int main(int argc, char *argv[])
{
    while(--argc)
        cout << argv[argc] << endl;

    return 0;
}

