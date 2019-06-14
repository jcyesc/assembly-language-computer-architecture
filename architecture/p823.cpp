int x = 10, y;
void f(int n)
{
   x = x + n;
}
int f(int zebra)
{
   return x + zebra;
}
int main()
{
   f(2);
   y = f(3);
   return 0;
}
