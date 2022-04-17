#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number of which you want to print the table ");
    scanf("%d",&num);
    
    printf("The table of %d is as follows\n",num);
    

for(int i=1;i<=10;i++){
         printf("%d * %d = %d\n",num,i,num*i);
    }


    
    return 0;
}
