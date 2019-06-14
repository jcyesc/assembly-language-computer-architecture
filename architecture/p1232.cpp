#include <iostream>
using namespace std;
void f(int a[])
{ 
  a[3] = 45;
}
void g(void)
{
    int z[10];
    int x = 5;
    f(z);
    cout << *(z+3) << endl;

}
int main(void)
{
   g();
   return 0;
}
