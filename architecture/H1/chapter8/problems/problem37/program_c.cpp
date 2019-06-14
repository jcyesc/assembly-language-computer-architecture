/*
  Problem 8.37
 
  Ackermann's function is a famous function from computability theory that uses
  double recursion. It is defined as follows:

  A(x, y) = y + 1			if x == 0
  A(x, y) = A(x - 1, 1)			if x > 0 and y == 0
  A(x, y) = A(x - 1, A(x, (y - 1))	if x > 0 and y > 0

  Write a C++ program in which you define Ackermann's function. Your program
  should call Ackermann's function three times to determine the values of A(0,0),
  A(1,1), and A(2,2). Display these values, apropiately labeled.

*/

#include <iostream>

using namespace std;

int ackermann(int x, int y)
{
    if( x == 0)
	return y + 1;

    if(x > 0 && y == 0)
	return ackermann(x - 1, 1);

    if(x > 0 && y > 0)
	return ackermann(x - 1, ackermann(x, (y - 1)));
}

int main()
{
	cout << "ackermann (0, 0) = " << ackermann(0, 0) << endl;

	cout << "ackermann (1, 1) = " << ackermann(1, 1) << endl;
	
	cout << "ackermann (2, 2) = " << ackermann(2, 2) << endl;

	cout << "ackermann (3, 3) = " << ackermann(3, 3) << endl;

	// If we invoke the function with ackermann(4,4) we get a segmentation fault.
	//cout << "ackermann (4, 4) = " << ackermann(4, 4) << endl;

	//cout << "ackermann (5, 5) = " << ackermann(5, 5) << endl;
}

