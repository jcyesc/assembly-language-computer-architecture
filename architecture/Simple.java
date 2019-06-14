class Simple {
 static int gv1, gv2 = 5;

 // <init> method              ; default constructor
 // 0  2A     aload_0          ; get object's reference
 // 1  B70001 invokespecial 1  ; invoke <init> in superclass
 // 4  B1     return
 //===========================================================
 public static void main(String arg[])
 {                
   int lv1,           
   lv2 = 7;       // 0  1007   bipush 7       ; push 7
                  // 2  3D     istore_2       ; store in lv2
                                         
   lv1 = 11;      // 3  100B   bipush 11      ; push 11
                  // 5  3C     istore_1       ; store in lv1

   gv1 =  fa(gv2, lv1, lv2); 
                  // 6  B20002 getstatic 2    ; push gv2
                  // 9  1B     iload_1        ; push lv1
                  // 10 1C     iload_2        ; push lv2
                  // 11 B80003 invokestatic 3 ; call fa
                  // 14 B30004 putstatic 4    ; pop into gv1
                  // 17 B1     return
 }
 //===========================================================
 public static int fa(int x, int y, int z)
 {
   return x + y + z; // 0  1A  iload_0        ; push x
                     // 1  1B  iload_1        ; push y
                     // 2  60  iadd           ; pop/pop/add/push
                     // 3  1C  iload_2        ; push z
                     // 4  60  iadd           ; pop/pop/add/push
                     // 5  AC  ireturn        ; pop and return
 }
 //===========================================================
 // <clinit> method            ; class initializer
 // 0  08     iconst_5         ; push 5
 // 1  B30002 putstatic 2      ; pop into gv2
 // 4  B1     return
}
