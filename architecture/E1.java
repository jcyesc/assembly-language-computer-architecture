class E1 {
   public static void main(String[] s)
   {
      double sum = 0.0, z = 0.001;
      for (int i = 1; i <= 1000; i++)
         sum = sum + z;
      System.out.print("sum = ");
      System.out.println(sum);
   }
}
