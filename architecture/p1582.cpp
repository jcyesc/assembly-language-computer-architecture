#include <cstdio> 
using namespace std;
struct S { 
   int x, y; 
}; 
int main() 
{ 
   S a; 
   a.x = 5; 
   a.y = 6; 
   printf("%d %d\n", a.x, a.y); 
   return 0; 
} 
