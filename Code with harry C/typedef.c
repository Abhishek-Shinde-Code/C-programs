#include<stdio.h>
typedef struct Student 
{
    int id;
    int marks;
    char fav_char;
} std;
int main()
{
    std s1,s2;
    s1.id=35;
    printf("Value of s1's is %d",s1.id);
    //typedef unsigned long ul;
    //typedef int integer;
    //integer s =4;

    //ul l1,l2,l3; 
    return 0;
}