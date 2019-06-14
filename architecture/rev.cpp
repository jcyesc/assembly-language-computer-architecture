//;                                              rev.___
//; Program that illustrates reverse comments.
//; Assemble by entering mas rev.cpp.
//; Examine the rev.mas and rev.lst files mas produces.

#include <iostream>   //; Sample program
using namespace std;
int x;                //x:        dw    0

int main() {          //main:
                      //       

   x = 2;             //          ldc   2
                      //          st    x

   cout << x << endl; //          ld    x
                      //          dout
                      //          ldc   '\n'
                      //          aout

   return 0;          //          ldc   0
                      //          halt
}                     //          end   main
