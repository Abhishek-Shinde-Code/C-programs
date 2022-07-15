#include<stdio.h>
#include<stdlib.h>
int main()
{
    int chars, i = 0;
    char *ptr;
    while (i<3)
    {
        printf("Enter the number of characters in your Employee id\n");
        scanf("%d" ,&chars);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your employee id");
        scanf("%s",ptr);
        printf("Your Employee id is %s\n");
        free(ptr);
        i = i + 1;
    }
    
    
    return 0;
}