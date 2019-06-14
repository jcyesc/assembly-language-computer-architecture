#include <iostream>
using namespace std;
int table[3][3];
void f(int a[][3])
{
   int i = 2, j = 2;
   a[1][1] = 11;
   a[i][j] = 22; }
int main()
{
   f(table);
   cout << table[1][1] << endl;
   cout << table[2][2] << endl;
   return 0;
}
