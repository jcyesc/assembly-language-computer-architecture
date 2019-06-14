#include <stdio.h>

int fibonacciRecursivo(int number);
int fibonacciIterativo(int number);

int main()
{
	int i;
	for( i = 0; i < 10; i++)
	    printf("%d ", fibonacciRecursivo(i));
	
	printf("\n");
	
	for( i = 0; i < 10; i++)
	    printf("%d ", fibonacciIterativo(i));;
	
	return 0;
}

int fibonacciIterativo(int number)
{
    if(number <= 1)
	return number;
	
     int fibinf = 0;
     int fibsup = 1;
     
     int i;
     for(i=2; i <= number; i++)
     {
	int x;
	x = fibinf;
	fibinf = fibsup;
	fibsup = x + fibinf;
     }
     return fibsup;
}

int fibonacciRecursivo(int number)
{
	if( number == 0 || number == 1)
	  return number;
	else
	  return fibonacciRecursivo(number -1 ) + fibonacciRecursivo(number -2);
}
