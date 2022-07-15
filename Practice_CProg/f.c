#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main()
{
    char s1[20],s2[20];
    printf("enter first string\n");
    scanf("%s",&s1);
    printf("enter second  string");
    scanf("%s",&s2);
    
    if(strcmp(s1,s2)==0)
    {
        printf("The strings are equAl");
    }
    else
    {
        printf("The strings are not equal");
    }

    return 0;
}