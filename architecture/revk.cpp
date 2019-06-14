//;                                              revk.___
//; Program that illustrates reverse comments.
//; Assemble by entering mas revk.cpp.
//; Examine the revk.mas and revk.lst files mas produces.

#include <iostream>   //; Sample program
                      //          !k
using namespace std;
int x;                //x:        dw    0

int main() {          //main:
                      //public    main       
                      //          esba

   x = 2;             //          pc    x
                      //          pc    2
                      //          stav

   cout << x << endl; //          p     x
                      //          dout
                      //          pc    '\n'
                      //          aout

   return 0;          //          pc   0
                      //          cora 4
}                     //          stva
                      //          reba
                      //          ret

