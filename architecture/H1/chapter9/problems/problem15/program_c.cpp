#include <iostream>

using namespace std;

int x = 1, *p, **q;

int main()
{
    p = &x;
    q = &p;
    cout << *p << " " << **q << endl;
   
    return 0;
}

