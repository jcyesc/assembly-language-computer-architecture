#include <fstream>

using namespace std;

int main() 
{
    ofstream outStream;
    outStream.open("outfile3");
    short x = 10;
    outStream << x;
    outStream.write((char *)&x, sizeof(x));
    outStream.close();

    return 0;
}
