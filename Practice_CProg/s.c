#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr1,*fptr2;
    char ch;
    char filename[50];
    printf("Enter name of file which you want to open");
    scanf("%s",filename);
    fptr1=fopen(filename,"r");
    if(fptr1==NULL)
    {
        printf("cannot open file %s",filename);
        exit(0);
    }
    printf("enter the filename for writing");
    scanf("%s",filename);
    fptr2=fopen(filename,"w");
    if(fptr2=NULL)
    {
        printf("Cannot open file %s",filename);
    }
    ch=fgetc(fptr1);
    while(ch != EOF)
    {
        fputc(ch,fptr2);
    }
    printf("The contents are copied to %s",filename);
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}