#include <stdio.h>
#include<string.h>
struct Dr
{
    char name[34];
    char dlNo[45];
    char route[40];
    int kms;

};

int main()
{
    struct  Dr d1, d2, d3;
    //For first driver
    printf("Enter the details of the drivers\n");
    printf("Enter the name  of the first drivers\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of the first  drivers\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of the first drivers\n");
    scanf("%s", &d1.route);

    printf("Enter the number of Kms of the first drivers\n");
    scanf("%d", &d1.kms);
// For second driver

    printf("Enter the details of the drivers\n");
    printf("Enter the name  of the second drivers\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of the second drivers\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of the second drivers\n");
    scanf("%s", &d2.route);

    printf("Enter the number of Kms of the second drivers\n");
    scanf("%d", &d2.kms);
//For third driver

    printf("Enter the details of the drivers\n");
    printf("Enter the name  of the third drivers\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of the third  drivers\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of the third drivers\n");
    scanf("%s", &d3.route);

    printf("Enter the number of Kms of the third drivers\n");
    scanf("%d", &d3.kms);

    printf("***********Printing Information of these Drivers*********\n");
    usleep(2000000); 

    printf("For driver NO.1 Name is %s\n", d1.name);
    printf("DL number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    printf("For driver NO.2 Name is %s\n", d2.name);
    printf("DL number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);

   printf("For driver NO.3 Name is %s\n", d3.name);
    printf("DL number is %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);

   







    return 0;
}