#include <stdio.h>

int main()
{
    int a[3][3],i,j,usum=0;
    for (i=0;i<3;i++) {
        for(j=0;j<3;j++){
            printf("%d",a[i][j]);
        }
    printf("\n");    
    }
    for (i=0;i<3;i++) {
        for(j=0;j<3;j++){
            if(j<i){
                if(a[i][j]==0){
                    flag=0;
                }
            }
            
        }
        }

    return 0;
}