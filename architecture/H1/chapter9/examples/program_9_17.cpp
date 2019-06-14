#include <iostream>

using namespace std;

int add(int count, ...)		// ... means variable number of parameters
{
    int i, sum = 0;
    int *p;

    p = &count + 1;		// p now points to first param to be added

    for(i = 1; i <= count; i++)
	sum = sum + *p++;

    return sum; 
}

int main()
{
    // arguments are pushed in right-to-left order
    cout << add(3, 4, 5, 6) << endl;	// outputs 15
    cout << add(2, -10, 20) << endl;	// outputs 10
    cout << add(1, 7) << endl;
}
