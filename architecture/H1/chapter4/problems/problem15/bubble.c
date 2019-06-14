#include <stdio.h>

int main() {
	int array[5];
	array[0] = 34;
	array[1] = 2;
	array[2] = 53;
	array[3] = 3;
	array[4] = 12;

	int i = 0;
	for(; i < 5; i++) {
		int j = 0;
		for(; j < 3; j++)
			if(array[j]> array[j +1]) {
				int tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}	

	}

	return 0;	
}
