
// program to swap two numbers using pointers
#include<stdio.h>
void swap(int *X,int *Y){
    int temp;
    temp=*X;
    *X=*Y;
    *Y=temp;
}


int main(){
    int num1,num2;
    printf("Enter value for number 1 : \n");
    scanf("%d",&num1);
    printf("Enter value for number 2 :\n");
    scanf("%d",&num2);
    printf("Swapping num1 is %d, num2 is %d \n",num1,num2);
    swap(&num1,&num2);
    printf("\nAfter swapping num1 is %d ,num2 is %d",num1,num2);

    return 0;
}