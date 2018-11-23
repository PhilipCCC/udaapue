#include "apue.h"
void pt(short s1, short s2){
  printf("%hd, %hd", s1, s2);
}
int main(void)
{
  char cs[10] = {[0] = 1, [2] = 2, [4] = 3, [6] = 4, [8] = 5};
  for(int i = 0; i < 10; i ++){
    printf("%d", cs[i]);
    printf("\n");
  }
  putchar('\n');
  for(int i = 0; i < 5; i ++){
    pt(cs[2*i], cs[2*i+1]);
  }
  return 0;
}
