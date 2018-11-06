#include "apue.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
  printf("%ld\n", sysconf(_SC_CLK_TCK));
  return 0;
}
