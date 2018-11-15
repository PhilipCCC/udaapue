#include "apue.h"
#include <fcntl.h>

int main(void)
{
  int fd, val;

  fd = open("text.txt", O_RDWR&O_APPEND);
  val = fcntl(fd, F_GETFL, 0);
  switch(val & O_ACCMODE){
  case O_RDONLY:
    puts("readonly.\n");
  case O_WRONLY:
    printf("writeonly.\n");
  case O_RDWR:
    puts("read and write.\n");
  default:
    puts("error.\n");
  }

  if(val & O_APPEND)
    puts("Access");
  if(val & O_NONBLOCK)
    puts("Nonblock");
  return 0;
}
