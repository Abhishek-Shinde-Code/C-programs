#include<stdio.h>
int main()
{
	int Size,i,sum=0;
	printf("Please Enter the size of array = \n");
	scanf("%d",&Size);

	int arr[Size];
	int *parr=arr;
	printf("Enter the array items = \n");
	for(i=0;i<Size;i++)
	{
		scanf("%d",parr+i);
	}
	for(i=0;i<Size;i++)
	{
		sum=sum+*(parr+i);
	}
	float avg=(float)sum/Size;
	printf("\n The sum of array items = %d\n",sum);
	printf("\n The average of array items =%.2f",avg);
	return 0;
}
