
#include <stdio.h>
void main()
{
    int n;
    int count=1;
    int fact=1;
    printf("enter the value of n :");
    scanf(" %d",&n);
    while(count<=n)
    {
        fact=fact*count ;
        count++;
    }
        printf("the factorial =%d",fact);
}
