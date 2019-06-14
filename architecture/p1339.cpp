#include <iostream>
using namespace std;
int table[2][3];
int (*p)[3];
int main()
{
   p = table + 1;
   table[0][1] = 3;
   table[1][2] = 4;
   cout << table[0][1] << endl;
   cout << table[1][2] << endl;
   cout << p[0][2] << endl;
   cout << (*p)[2] << endl;
   return 0;
}
