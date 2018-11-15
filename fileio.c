#include "apue.h"
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  char buf[] = "ABCDE";
  int fd = open("text.txt", O_RDWR | O_APPEND);
  //read(fd, buf, 1);
  //puts(buf);
  //write(fd, buf, 1);
  buf[0] = 'e';
  lseek(fd, 0, SEEK_SET);
  //read(fd, buf, 1);
  //puts(buf);
  write(fd, buf, 1);
  buf[0] = 'e';
  read(fd, buf, 1);
  puts(buf);
  return 0;
}
