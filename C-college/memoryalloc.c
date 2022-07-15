#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0;
    int *ptr;
    float avg;
    printf("\n Enter how many integers: ");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("\n Enter number %d :",i+1);
        scanf("%d",&ptr[i]);
        sum=sum+ptr[i];
    }
    avg=sum/n;
    printf("\n Sum of numbers is  %d",sum);
    printf("\n Average of numbers  is %.2f",avg);


    return 0;
}