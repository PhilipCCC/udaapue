#include "apue.h"

void sig_int();
int main(void)
{
  if(signal(SIGINT, sig_int) == SIG_ERR)
    printf("signal error");
  getchar();
  exit(0);
}
void sig_int()
{
  printf("interr\n");
}
