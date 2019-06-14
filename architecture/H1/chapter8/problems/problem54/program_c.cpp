// Program 8.54

#include <iostream>

using namespace std;

int table[] = { 5, 6, 7 };

int *p;

int main()
{
    p = &table[1];
    cout << p[1] << endl;
}

