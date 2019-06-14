/*
  Program 8.15

  Rewrite the program in Figure 8.30 so that it will work correctly regarless of
  the length of an int.

  The size of an int in an Intel Core Duo is 4 BYTES.
*/

#include <iostream>

using namespace std;

int main()
{
    int x;
    int count = 8 * sizeof(int);	// cout = number bits in int
    //cout << (1 << 31) << endl;    

    int mask = 1 << (count - 1);	// mask has only leftmost bit = 1;

    //cout << sizeof(int);

    cout << "Enter a decimal number: ";
    cin >> x;
    cout << "Binary equivalent = ";
    for(int i = 1; i <= count; i++) {
    	if(x & mask)		// bitwise AND; leftmost bit == 17
	    cout << 1;
	else
	    cout << 0;

	x = x << 1;		// left shift x one position
    }
    
    cout << endl;
}
