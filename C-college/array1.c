// Prgram to create an array printing array in normal fashion and reverse fashion.
#include<stdio.h>
int main(){
    int a[5];
    int i;
    for ( i = 0; i <5; i++)
    {
    printf("Enter elements = ");
    scanf("%d",&a[i]);
    }
    printf("\n print elements in normal fashion");
    for (i = 0; i <5; i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n printing array in reverse fashion");
    for (i =4; i>=0; i--)
    {
        printf("%d ",a[i]);
    }
    
    
    

    return 0;
}