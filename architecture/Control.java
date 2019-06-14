class Control {
 public static void main(String arg[])
 {                
    int x = 3,       // 0   06        iconst_3  ; push 3
                     // 1   3C        istore_1  ; pop into x
                       
        y = 4;       // 2   07        iconst_4  ; push 4
                     // 3   3D        istore_2  ; pop into y
                     
    while (x < 10 )  // 4   A7 0006   goto 6    ; goto loc 4+6
                     
       x++;          // 7   84 01 01  iinc 1 1  ; add 1 to 1
                     
    // (x < 10)         10  1B        iload_1   ; push x 
    // exit test        11  10 0A     bipush 10 ; push 10  
    // is here          13  A1 FFFA   if_icmplt -6 ; goto loc 13-6
                           
    if (x < y)       // 16  1B        iload_1    ; push x
                     // 17  1C        iload_2    ; push y
                     // 18  A2 0009   if_icmpge 9 ; goto 18+9
                     
       x = 20;       // 21  10 14     bipush 20  ; push 20  
                     // 23  3C        istore_1   ; store in x  
                     
    else             // 24 A7 0006    goto 6     ; goto 24+6 

       x = 30;       // 27 10 1E      bipush 30  ; push 30
                     // 29 3C         istore_1   ; pop into x

 }                   // 30 B1         return     ; return to caller
}  
