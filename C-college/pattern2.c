#include<stdio.h>
int main(){
    int r,c,n ,ch=65;
    printf("Enter a number ");
    scanf("%d",&n);
    
    for(r=1;r<=n;r++){
        ch=65;
        for(c=1;c<=r;c++){

            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    

    return 0;
}