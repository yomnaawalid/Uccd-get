#include <stdio.h>

int max (int num1,int num2,int num3,int num4);
int min (int num1,int num2,int num3,int num4);

void main(void)
{
    int num1,num2,num3,num4,max,min;
    printf("enter four values of numbers");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    maximum = max(num1,num2,num3,num4);
    minimum = max(num1,num2,num3,num4);

    printf("maximum = %d\n",max);
    printf("minimum = %d\n",min);

}
int max (int num1,int num2,int num3,int num4)
{
    return(num1>num2 && num1>num3 && num1>num4)?num2,num3,num4 :num1;
    return(num2>num1 && num2>num3 && num2>num4)?num1,num3,num4 :num2;
    return(num3>num1 && num3>num2 && num3>num4)?num1,num2,num4 :num3;
    return(num4>num1 && num4>num2 && num4>num3)?num1,num2,num3 :num4;
}
int min (int num1,int num2,int num3,int num4)
{
    return(num1<num2 && num1<num3 && num1<num4)?num2,num3,num4 :num1;
    return(num2<num1 && num2<num3 && num2<num4)?num1,num3,num4 :num2;
    return(num3<num1 && num3<num2 && num3<num4)?num1,num2,num4 :num3;
    return(num4<num1 && num4<num2 && num4<num3)?num1,num2,num3 :num4;

}
