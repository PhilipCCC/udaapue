#include<stdio.h>
void fun(int a, int b, int c, int d, int e, int f){
  printf("%d\n", c);
}
int main(void)
{
  fun(1,2,3,4,5,6);
  return 0;
}
