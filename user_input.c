#include<stdio.h>
#include<unistd.h>

int main(){
         char size;

         printf("Enter pizza size:");
         scanf("%c",&size);

         printf("\n Generating message.....\n");
         usleep(5000000);

         printf("You have ordered pizza %c",size);  
    return 0;
}