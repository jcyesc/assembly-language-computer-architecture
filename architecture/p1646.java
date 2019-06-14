class X {
   public static void main(String arg[]) 
   {
      O o,p;
      o = new O();
      p = new O();
      o.x = 5;
      p.x = 6;
      if (o == p)
         p = null;
   }
 }
class O {
   int x;
}
