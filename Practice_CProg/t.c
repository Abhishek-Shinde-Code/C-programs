#include <stdio.h>
int swap(int *x, int *y)
{
    int tep;
    tep = *x;
    *x = *y;
    *y = tep;
    
}
int main()
{
    int a, b;
    printf("Enter number 1\n");
    scanf("%d",&a);
    printf("Enter number 2\n");
    scanf("%d", &b);
    printf("The no. before swap are %d and %d\n", a, b);
    swap(&a,&b);
    printf("The no. after swap are %d and %d", a, b);

    return 0;
}