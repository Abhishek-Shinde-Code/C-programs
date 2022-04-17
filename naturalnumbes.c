#include<stdio.h>
int main(){
      int i , sum;
      int n;

      printf("Enter a number");
      scanf("%d",&n); 

      for(i=0;i<n;i++){
          if(i<n){
              sum=i+1;
          }
          printf("%d\n",sum);
          
      }

         
    return 0;
}