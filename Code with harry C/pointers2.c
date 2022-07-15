#include<stdio.h>
int main()
{
    //int a=40;
    //int *ptra=&a;
    //printf("%d\n",ptra);
    //printf("%d\n",ptra+1);
    //printf("%d\n",ptra-1);
    int arr[] = {113,2,3,4,5,6,67};
    int *arrayptr=arr;
    printf("Value at position 3 of the array is %d\n",arr[3]);
    printf("The adress of first element of the array is %d \n",&arr[0]);
    printf("The adress of first element of the array is %d \n",arr);
    printf("The adress of second element of the array is %d \n",&arr[2]);
    printf("The adress of second element of the array is %d \n",arr+2);
    // arr--; //this line will throw an error
    
    printf("The value at adress of first element of the array is %d \n",*(&arr[0]));
    printf("The value at adress of first element of the array is %d \n",*(arr));
    printf("The value at adress of second element of the array is %d \n",*(&arr[1]));
    printf("The value at adress of second element of the array is %d \n",*(arr+1));
    printf("The value at adress of second element of the array is %d \n",arrayptr[0]);
    


    
    return 0;
}
