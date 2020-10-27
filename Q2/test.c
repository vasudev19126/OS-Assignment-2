/* Name: Vasudev Singhal
   Roll_Number: 2019126 */
#define GNU SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

#define SYS_sh_task_info 440

int main(int argc, char **argv){
   // long pid = argv[1];
   // char *file = argv[2];
   // printf("Making system call with %ld \n", pid);
   long res = syscall(SYS_sh_task_info);
   printf("System call returned %ld \n", res);
   return res;
}
