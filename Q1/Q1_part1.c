/* Name: Vasudev Singhal
   Roll_Number: 2019126 */

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int a =10;

int main(){
   pid_t pid;
  

   pid = fork();
   if (pid<0)
   {
      fprintf(stderr, "Fork Failed");
      return 1;
   }
   else if (pid == 0)
   {
      printf("Child Process \n");
      while (a>-90)
      {
         printf("%d \n",a);
         a--;
         
      }
      printf("%d \n", a);
      exit(0);
      
   }
   else
   {
      wait(NULL);
      printf("Parent Process \n");
      while (a<100)
      {
         printf("%d \n",a);
         a++;
         
      }
      printf("%d \n", a);
   }
   
   return 0;
   
}
