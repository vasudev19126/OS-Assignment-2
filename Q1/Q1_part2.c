/* Name: Vasudev Singhal
   Roll_Number: 2019126 */
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int a =10;

void* child(void* arg){
   printf("Child Process\n");
   // printf("%d \n", a);
   while (a>-90)
   {
      printf("%d \n",a);
      a--;  
   }
   printf("%d \n", a);
   pthread_exit(NULL);
}

int main(){
   pthread_t ptid;
   pthread_create(&ptid, NULL, &child, NULL);
   printf("Parent Process \n");
   // printf("%d \n", a);
   while (a<100)
   {
      printf("%d \n",a);
      a++;
      
   }
   printf("%d \n", a);
   pthread_join(ptid, NULL);
}