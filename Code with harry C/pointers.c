#include <stdio.h>
int main()
{
    printf("LEts us see pointers\n");
    int a = 45;
    int *ptra = &a;

    printf("The value of a is %p\n", &ptra);

    printf("The value of a is %p\n", &a);

    printf("The value of a is %p\n", ptra);

    printf("The value of a is %d\n", *ptra);

    printf("The value of a is %d\n", a);
    int *ptrb = NULL;
    printf("%p", ptrb);

    return 0;
}