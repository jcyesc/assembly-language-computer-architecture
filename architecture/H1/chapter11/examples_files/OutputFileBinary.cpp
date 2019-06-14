#include <fstream>

using namespace std;

int main()
{
    ofstream outStream;
    outStream.open("outfile4", ios::binary);
    short x = 10;
    outStream.write((char *)&x, sizeof(x));
    outStream << 'C';
    outStream.close();

    return 0;
}
