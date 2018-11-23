#include "apue.h"
#include <sys/wait.h>

char *env_init[] = {"USER=unknown", "PATH=/tmp", NULL};

int main(void)
{
  pid_t pid;

  if((pid = fork()) < 0){
    printf("fork error.\n");
  }else if (pid == 0){
    if(execle("/home/gilbert/bin/echoall", "echoall", "myarg1", "MY ARG2", (char*)0, env_init) < 0){
      printf("execle ereor");
      perror("a.out");
    }
  }
  
  if(waitpid(pid, NULL, 0) < 0){
    perror("waitpid");
    printf("wait pid ereor");
  }
  if((pid = fork()) < 0)
    printf("fork2 error");
  else if (pid == 0){
    if(execlp("echoall", "echoall", "only 1 arg", (char*)0) < 0){
      printf("execlp 2 error");
    }
  }
  exit(0);
}
