#include<stdio.h>
float cmtoinches(float number)
{
    return (number * 0.394);
}
int main(){
    float num;
    printf("Enter a number \n");
    scanf("%f",&num);
    printf("The conversion of %f cm into inches is %f\n",num,cmtoinches(num));

    return 0;
}