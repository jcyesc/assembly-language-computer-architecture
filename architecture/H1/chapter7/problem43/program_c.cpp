// Program 7.43

#include <iostream>
using namespace std;
char gc;
int gi;

void f(char c, int i, char *cp, int *ip)
{
   c = 'A';
   i = 2;
   *cp = 'B';
   *ip = 3;
}

int main()
{
   f('X', 5, &gc, &gi);
   cout << "gc = " << gc << " gi = " << gi << endl;

   return 0;
}


