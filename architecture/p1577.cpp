#include <cstdio> 
using namespace std;
void f(int x) 
{ 
   if (x == 0) return; 
   printf("%d\n", x); 
   f(x - 1); 
} 
int main() 
{ 
   f(10); 
   return 0;
} 
