// Program 8.43
/* 
C++ return statement uses the ac register to return a value to the
calling function. What if the value to be returned by the return statement
is too big to fit into the ac register? For example, supose the return
statement returns s, where s is a two-word struct. To handle this case,
the calling function passes the address of a return area to the called function
via the stack. The called function returns a struct by copying the struct to this
return area.

*/


#include <iostream>

using namespace std;

struct S 
{
    int x, y, z;
};

S b;

S f()
{
    S a;
    a.x = a.y = a.z = 5;
    return a;
}

int main()
{
    b = f();
    cout << b.x << " " << b.y << endl;
}
