#include <stdio.h>
#include <string.h>
int main()
{
    char s1[43];
    char s3[45] = " is friend of ";
    char s2[55];
    char s4[55];

    // printf("The strcmp for s1 ,s2 returned %d",strcmp(s2,s1));

    // printf("The length of string s1 is %d\n",strlen(s1));
    // printf("The length of string s2 is %d\n",strlen(s2));
    // printf("The reverse of string  s2 is ");
    // puts(strrev(s2));
    // strcpy(s3,strcat(s1,s2));
    // puts(s3);
    printf("Enter name of friend 1: \n");
    gets(s1);
    printf("Enter name of friend 2: \n");
    gets(s2);
    puts (strcat(s1, strcat(s3, s2)));

    return 0;
}