#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
     cout << argc << endl;
     cout << argv[0] << endl;
     cout << argv[argc - 1] << endl;
     return 0;
}
