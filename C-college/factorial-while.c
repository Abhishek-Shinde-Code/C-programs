#include<stdio.h>
int main()
{

      int i=1,ans=1,n;
      printf("Enter a number");
      scanf("%d",&n);

      while (i<=n)
      {
          ans=ans*i;
          i++;
      }
      printf("The factorial is %d",ans);
      


  return 0;
}