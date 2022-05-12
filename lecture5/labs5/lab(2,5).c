#include <stdio.h>

void main()
{
    int array[10],i;
    float sum=0,avg;
     printf("enter the elements of array");
    for(i=0;i<10;i++)
    {
     scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++)
    {
     sum=sum+array[i];
    }
    avg=sum/10;
    printf("sum %f",sum);
    printf("\n avg %f",avg);
}
