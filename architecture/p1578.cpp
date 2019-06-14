#include <cstdio> 
using namespace std;
void f(int &x) 
{ 
   x = 5; 
} 
int main() 
{ 
   int y = 8; 
   f(y); 
   printf("%d\n", y); 
   return 0; 
} 
