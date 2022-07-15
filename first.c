#include<stdio.h>
void starPattern(int rows)
{
 for(int i=0;i<rows;i++)
 {
   for(int j=0;j<=i;j++)
   {
     printf("*");
   }
   printf("\n");
 }

}
void reversestarPattern(int rows)
{
  for(int i=0;i<rows;i++)
  {
    for(int j=0;j<rows-i-1;j++)
	{
	 printf("*");
	}
	printf("\n");
  }
}
int main()
{
 int rows,choice;
 printf("Plz select any of the  following");
 printf("0.Press zero for star pattern");
 printf("1.Press 1 for reverse star pattern");
 printf("plz select one of them");
 scanf(""%d, &choice);
 printf("how many stars do you want");
 scanf("%d",&rows);
 
 switch(choice)
 {
   case 0:
       starPattern(int rows);
	   break;
 
   case 1: 
       reversestarPattern(int rows);
	   break;
   default:
       printf("You have entered invalid choice");
       break;	   
 }

return 0;
}