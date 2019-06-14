#include <stdio.h>

void print(int *p, int length)
{
	int i;
	for( i = 0; i < length; i++) {
	 // printf("%d \n", (*p)++);
	 printf("%d \n", *p++);
	}
	printf("After the execution p is not pointing to any element of the array\n");
	printf("*p = %d\n", *p);
}

int main()
{
  int array[3];
  array[0] = 2;
  array[1] = 4;
  array[2] = 6;

  print(array, 3);

  int i = 0;
  for( ; i < 3; i++)
    printf("%d \n", array[i]);
}
