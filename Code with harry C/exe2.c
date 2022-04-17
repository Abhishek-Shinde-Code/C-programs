#include <stdio.h>
int main()
{
    char input;
    float kmToMiles = 0.621371;
    float inchesToFoot = 0.083333;
    float cmsToInches = 0.393701;
    float poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, second;
    while (1)
    {
    printf("Enter a character . q to quit\n 1.kms to miles\n 2.inches to foot\n 3.cms to inches\n 4.pound to kgs\n 5.inches to meters\n");
    scanf(" %c",&input);

    switch(input)
    {
        case 'q':
            printf("Quitting the program.....");
            

            goto end;
            break;
        case '1':
            printf("Enter the quantity in terms of first  quantity");
            scanf("%f ", &first);
            second = first * kmToMiles;
            printf("%0.2f Kms is equal to %.2f  Miles\n\n", first, second);
            break;
        case '2':
            printf("Enter the quantity in terms of first quantity");
            scanf("%f", &first);
            second = first * inchesToFoot;
            printf("%f inches is equal to %f foot", first, second);
            break;
        case '3':
            printf("Enter the quantity in terms of first quantity");
            scanf("%f", &first);
            second = first * cmsToInches;
            printf("%f cms is equal to %f inches", first, second);
            break;
        case '4':
            printf("Enter the quantity in terms of first quantity");
            scanf("%f", &first);
            second = first * poundToKgs;
            printf("%f pounds is equal to %f kgs", first, second);
            break;
        case '5':
            printf("Enter the quantity in terms of first quantity");
            scanf("%f", &first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters", first, second);
            break;
         default:
            printf("This");
            break;    

     }
    
    }
    end:
    
    return 0;
}
