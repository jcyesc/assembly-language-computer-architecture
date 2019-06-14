#include <cstdio>
using namespace std;
struct S { 
   int x, y; 
}; 
S f() 
{ 
  S a; 
  a.x = 1; 
  a.y = 2; 
  return a; 
} 
int main() 
{ 
   S b; 
   b = f(); 
   printf("%d %d\n", b.x, b.y); 
   return 0; 
} 
