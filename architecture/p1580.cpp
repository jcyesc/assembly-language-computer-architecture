#include <cstdio> 
using namespace std;
void f(int x) 
{ 
   int *p; 
   printf("%d\n", x); 
   p = &x; 
   *p = 99; 
   printf("%d\n", x); 
} 
int main() 
{ 
   f(5); 
   return 0;
} 
