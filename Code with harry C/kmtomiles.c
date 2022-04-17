#include <stdio.h>
float kmtomiles(float number)
{
    return (number * 0.621);
}

int main()
{
    float num;
    printf("Enter a number\n");
    scanf("%f", &num);
    printf("The conversion of %f km to miles is %f ", num, kmtomiles(num));

    return 0;
}