#include <iostream>
using namespace std;
int table[5][5][5];
int i = 1, j = 2, k = 3;
int main()
{
   table[0][1][2] = 2;
   table[i][j][k] = 3;
   cout << table[0][1][2] << endl;
   cout << table[i][j][k] << endl;
   return 0;
}
