#include <stdio.h>
void main()
{
    int x,y,sum,subtract;
    int *ptr1;
    int *ptr2;
    printf("enter the value of x ");
    scanf("%d",&x);
    printf("enter the value of y ");
    scanf("%d",&y);
          ptr1 = &x;
          ptr2 = &y;
    sum = *ptr1 + *ptr2;
    subtract = *ptr1 - *ptr2;
    printf("summation of %d and %d is %d", *ptr1 ,*ptr2 ,sum);
    printf("\n subtraction of %d and %d is %d", *ptr1 ,*ptr2 ,subtract);
}
