int x = 10, y;
void f(void)
{
   x = x + 1;
}
int f(void)
{
   return x + 1;
}
int main()
{
   f();
   y = f();
   return 0;
}
