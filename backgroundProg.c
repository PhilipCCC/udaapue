#include "apue.h"
int main(void)
{
  for(int i = 0; i < 10; i ++){
    printf("%ld\n", (long)getpid());
    sleep(1);
  }
  return 0;
}
