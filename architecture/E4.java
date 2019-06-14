class E4 {                                  
   public static void main(String[] s)      
   {                                        
      float x = 0.0f;                       
      while (Math.abs(x - 1.0f) > 0.00001f) 
         x = x + 0.1f;                      
      System.out.print("x = ");
      System.out.println(x);
   }                                        
}                                           
