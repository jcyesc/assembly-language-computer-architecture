#include <iostream>
using namespace std;
int main (int argc, char *argv[])
{
   int i = 0;
   while (argc--)
      cout << argv[i++] << endl;
   return 0;
}
