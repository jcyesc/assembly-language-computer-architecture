/* 
 Problem 9.5
 
 Write a C++ function named last that is passed a variable number of arguments,
 all of type int. Your function should display the value of the last, and only
 the last, argument. Write your function so that it is as efficient as possible. The
 first argument is always the count of the number of arguments that folllow the first.
 Incorporate your function in a C++ program that call last as follows:

	last(3, -3, 5, 8);		// displays 8
	last(1, 4);			// displays 4
	last(5, 1, 2, 3, 4, 50);  	// displays 50
	last(0);			// displays nothing
*/

#include <iostream>

using namespace std;

void last(int count, ...)
{
    if(count == 0)
	return;

    int *p = &count + count;
    cout << "last -> " << *p << endl;
}

int main()
{
    last(3, -3, 5, 8);
    last(1, 4);
    last(5, 1, 2, 3, 4, 50);
    last(0);
}
