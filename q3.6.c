#include "apue.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  int fd = open("text.txt", O_RDWR | O_APPEND);
  char buf[] = "abcd";
  lseek(fd, 2, SEEK_SET);
  read(fd, buf, 1);
  puts(buf);
  lseek(fd, 2, SEEK_SET);
  write(fd, buf, 1);
  
  return 0;
}
