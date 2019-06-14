void g(int *p)
{
   *p = 100;
   f();
}
void f()
{
   cout << "hello\n";
}
