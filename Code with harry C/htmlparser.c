#include <stdio.h>
#include<string.h>
void parser(char *string)
{
    int in = 0; // Variable to track whether we are insid the tag
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i]=='<')
            {
                in = 1;
                continue;
            }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    //Remove the trailing  spaces from beginning
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
        
    }
    // Remove the trailig spaces from end
    while (string[strlen(string)-1] == ' ')
    {
        string[strlen(string)-1] = '\0';
    }

    

}
int main()
{
    char string[] = "<h1> this is a heading    </h1>";
    parser(string);
    printf("The parsed string is ~~%s~~\n", string);
    return 0;
}