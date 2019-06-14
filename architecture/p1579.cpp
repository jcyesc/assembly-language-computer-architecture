#include <cstdio> 
using namespace std;
int gv; 
void f(int a,int b,int c,int d,int e,int f,int g,int h) 
{ 
   gv = a + b + c + d + e + f + h + g + 1; 
} 
int main() 
{ 
   f(1,2,3,4,5,6,7,8);
   printf("%d\n", gv); 
   return 0; 
} 
