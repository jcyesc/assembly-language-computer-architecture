//;                                              revo.___
//; Program that illustrates reverse comments.
//; Assemble by entering mas revo.cpp.
//; Examine the revo.mas and revo.lst files mas produces.

#include <iostream>   //; Sample program
                      //          !o
using namespace std;
int x;                //x:        dw    0

int main() {          //main:
                      //public    main       
                      //          esba

   x = 2;             //          ldc   2
                      //          st    x

   cout << x << endl; //          ld    x
                      //          dout
                      //          ldc   '\n'
                      //          aout

   return 0;          //          ldc   0
                      //          reba
}                     //          ret
