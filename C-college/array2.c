// Searching a element in an array
#include<stdio.h>
int main(){
    int a[5];
    int i,n ,x=0;
    for ( i = 0; i < 5; i++)
    {
      printf("Enter the elements =  ");
      scanf("%d",&a[i]);
    }
    printf("Enter a element to be searched =");
    scanf("%d",&n);
    for ( i = 0; i <5; i++)
    {
      if (a[i]==n)
      {
      x=1;
      break;
      }
    
        
    
    }
    if(x==0){
        printf("Element not found");
    }
    else
    {
    printf("element found. it is %d th element of an array",i);
    }
    

    return 0;
}