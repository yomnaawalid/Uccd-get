
#include <stdio.h>
int x,y;
void swap(void);
void main()
{

    printf("enter the value of x");
    scanf("%d",&x);

     printf("enter the value of y");
    scanf("%d",&y);

     printf("values before swap:%d\t%d\n",x,y);

     swap();

     printf("values after swap:%d\t%d\n",x,y);
}
void swap(void)
{
    int z;
   z=x;
   x=y;
   y=z;
}
