#include <stdio.h>

void main()
{
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10;
    int sum=0;
    float average;
    printf("enter the value of num1:");
    scanf("%d",&num1);
    printf("enter the value of num2:");
    scanf("%d",&num2);
    printf("enter the value of num3:");
    scanf("%d",&num3);
    printf("enter the value of num4:");
    scanf("%d",&num4);
    printf("enter the value of num5:");
    scanf("%d",&num5);
    printf("enter the value of num6;");
    scanf("%d",&num6);
    printf("enter the value of num7:");
    scanf("%d",&num7);
    printf("enter the value of num8:");
    scanf("%d",&num8);
    printf("enter the value of num9:");
    scanf("%d",&num9);
    printf("enter the value of num10:");
    scanf("%d",&num10);
    for (int i=0;i<=10;i++)
        {
    sum=sum+i;
    printf("the sum is %d\n",sum);
        }
    average = sum / 10;
    printf("the average is %f",average);

}

