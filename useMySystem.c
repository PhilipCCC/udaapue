#include "apue.h"
#include <sys/wait.h>

int system(const char*);

int main(void)
{
  int status;

  if((status = system("date")) < 0)
    printf("status error");
  exit(0);
}
