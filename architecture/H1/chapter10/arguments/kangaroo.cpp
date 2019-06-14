#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "argc    " << argc << endl;
    cout << "argv[0] " << argv[0] << endl;
    cout << "argv[1] " << argv[1] << endl;

    char *p = *argv;
  
    cout << "The whole string is the next:" << endl; 
    
    // Print character by character
    for(int i = 0; i < 40; i++)
	printf("%c", *p++);

    cout << endl << endl;
}
