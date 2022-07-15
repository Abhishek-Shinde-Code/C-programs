#include <stdio.h>
int b = 35; // This is global variable since it is declared outside the  main()
int func1(int b1)
{
    static int myVar = 98;
    printf("The value of myVar is %d\n",myVar);
    myVar++;
    // printf("The value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n",&b);
    return b + myVar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside func1 is %d\n",&b);

    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);

    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    return 0;
    val = func1(b);

}

    