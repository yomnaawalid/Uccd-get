#include <stdio.h>
void main()
{
    int x,y,sum;
    int *ptr1;
    int *ptr2;
    printf("enter the value of x , y");
    scanf("%d%d",&x,&y);
          ptr1 = &x;
          ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf("sum of %d and %d is %d", *ptr1 ,*ptr2 ,sum);
}

