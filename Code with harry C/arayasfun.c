#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, array[i]);
    }
    // array[0]=43434; Very important point if  you change any value here , it will get change here.
    return 0;
}
void func2(int* ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, *(ptr+i));
    }
    *(ptr+2)=545;
    
}
int main()
{
    int arr[] = {3, 32, 123, 44};
    // func1(arr);
    
    func2(arr);
    func2(arr);

    return 0;
}