#include "apue.h"
int main(void)
{
  int count;
  pid_t pid;
  
  count = 0;

  for(int i = 0; i < 10; i ++){
  if((pid = vfork()) < 0){
    printf("vfork error\n");
  }else if (pid == 0){
    count ++;
    _exit(0);
  }
  printf("count = %d.\n", count);
  }
  exit(0);
}
