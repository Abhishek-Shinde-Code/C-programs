#include<stdio.h>
int main(){
    int r,c,n,x=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(r=1;r<=n;r++){
        x=1;
        for(c=1;c<=r;c++){
            printf("%d",x);
            x++;
        }
        printf("\n");

    }

    return 0;
}