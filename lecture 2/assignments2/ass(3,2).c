#include <stdio.h>
void main()
{
    int x,y,z;
    printf("enter the vaiur of x :");
    scanf("%d",&x);
    printf("enter the vaiur of y :");
    scanf("%d",&y);
    printf("enter the vaiur of z :");
    scanf("%d",&z);
    if(x>=y && x>=z)
    {
     printf("the max is %d",x);
    }
    else if(y>=x && y>=z)
    {
     printf("the max is %d",y);
    }
    else if(z>=x && z>=y)
    {
     printf("the max is %d",z);
    }

}
