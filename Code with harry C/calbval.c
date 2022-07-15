#include<stdio.h>
void addSub(int*x,int*y)
{
    int temp;
    temp=*x;
   *x=*x+*y;
   *y=temp-*y;

   return;
}
int main()
{
    int a=44,b=56;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);
    addSub(&a,&b);
    printf("The value of a is %d\n",a);
    printf("The value of b is %d\n",b);



    


    

    return 0;
}