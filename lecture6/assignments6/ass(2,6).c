#include <stdio.h>
void main()
{
    int x=10;
    int y=20;
    int z=30;

    int *p,*q,*r;

     p=&x;
     q=&y;
     r=&z;

    printf("x is %d\n",x);
    printf("y is %d\n",y);
    printf("z is %d",z);

}
