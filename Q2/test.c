/* Name: Vasudev Singhal
   Roll_Number: 2019126 */
#define GNU SOURCE
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(int argc, char **argv){
   long pid = argv[1];
   char *name = argv[2];
   printf("Making system call with %ld \n", pid);
   long res = syscall(440, pid, name);
   printf("System call returned %ld \n", res);
   return res;
}
