class E2 {
   public static void main(String[] s)
   {
      float sum = 0.0f, z = 1.0f/1024.0f;
      for (int i = 1; i <= 1024; i++)
         sum = sum + z;
      System.out.print("sum = ");
      System.out.println(sum);
   }
}
