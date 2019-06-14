//;                                              revcaret.___
//; Program that illustrates reverse comments and ^-lines.
//; Assemble by entering mas revcaret.cpp.
//; Examine the revcaret.lst, revcaret.mas and revcaret.car files.
//; Note that the end, public, and extern directives do not 
//; require a "^" because they do not generate object code.

#include <iostream>  
using namespace std;
int x;                //x:        dw    0

int main() {          //main:
                      //          end   main

   x = -5;            //          ld    @_5
                      //^@_5:     dw    -5
                      //          st    x

   cout << x << endl; //          ld    x
                      //          dout
                      //          ldc   '\n'
                      //          aout

   return 0;          //          ldc   0
                      //          halt
}
