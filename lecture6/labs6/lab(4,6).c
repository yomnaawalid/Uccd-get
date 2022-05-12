#include <stdio.h>
void main()
{
    int array[4],i;
    int sum=0;
    int *ptr;
    printf("enter the elements of array");
    for(i=0;i<4;i++)
    {
        scanf("%d",&array[i]);
    }
    ptr=array;
    for(i=0;i<4;i++)
    {
        sum = sum + *ptr;
        ptr = ptr + 1;
    }
    printf("summation of array is %d",sum);
}
