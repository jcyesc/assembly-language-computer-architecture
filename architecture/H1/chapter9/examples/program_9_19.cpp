#include <cstdarg>
#include <iostream>

using namespace std;

int add(int count, ...)
{
    int i, sum = 0;
    va_list(p);				// void *p;
 
    va_start(p, count);			// p = &count + 1;

    for(i = 1; i <= count; i++)
	sum = sum + va_arg(p, int);	// sum = sum + *((int*)p)++;

    va_end(p);				// does nothing
    return sum;
}

int main()
{
    cout << add(3, 4, 5, 6) << endl;	// outputs 15
    cout << add(2, -10, 20) << endl;	// outputs 10
    cout << add(1, 7) << endl;		// outputs 7
}
