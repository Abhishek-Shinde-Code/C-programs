#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != 0)
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[]={'a','b','h','i','\0'};
    // char str[]="abhi";
    char str[25];
    gets(str);
    printf("uing function \n");
    printstr(str);
    printf("Using printf %s \n", str);
    printf("Using puts:-\n");
    puts(str);

    return 0;
}