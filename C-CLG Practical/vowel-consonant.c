#include <stdio.h>
#include<conio.h>

int main() {
    // Write C code here
    char ch;
    printf("enter a letter ch =");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'){
        printf("%c  is a vowel",ch);
        
    }
    else{
         printf("%c  is a consonant" ,ch);
    }
    
    return 0;
}
