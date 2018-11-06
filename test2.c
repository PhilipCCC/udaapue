#include<stdio.h>
void fun(int a)
{
  printf("a:%d\n", a);
}
int main(void)
{
  void (* abc)(int) = fun;
  abc(1);
  return 0;
}
