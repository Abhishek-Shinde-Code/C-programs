#include<stdio.h>
int main(){
    int i,ans=1,n;
    printf("Enter a number=");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("The FAct is %d",ans);

    return 0;
}
