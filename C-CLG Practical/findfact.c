#include<stdio.h>
int main(){
    int n;
    printf("Enter a number ");
    scanf("%d",&n);


    printf("Factors of number %d",n);


    for (int i = 1; i <=n/2; i++)
    {
        if (n%i==0)
        {
            printf("%d\n",i);
        }
        
    }
    

    return 0;
}