#include <cstdio> 
using namespace std;
int gv = 55; 
int f(int x, int y) 
{ 
   return gv + x + y; 
} 
int main() 
{ 
   int y = 3, z; 
   z = f(y + 18, 44); 
   printf("%d\n", z); 
   return 0; 
} 
