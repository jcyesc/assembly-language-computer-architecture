#include <iostream>

using namespace std;

char *gp;

void mod_string(char *p)
{
    //*p = 'X';
    cout << "mod string -> " << *p << endl;
}

int main()
{
    char p[5];;
    /*
	p = "abc"; 
	When we declare string in this way, the string is constant, that means
	we cannot change the value.
    */
    mod_string(p);
    cout << "*p = " << *p << endl;
    
    gp = "abc";
    mod_string(gp);
    cout << gp << endl;
}
