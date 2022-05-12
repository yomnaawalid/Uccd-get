#include <stdio.h>
int Get_Max(int x,int y);
void main(void)
{
    int x,y,max;
    printf("enter thvalue of x");
    scanf("%d",&x);
    printf("enter thvalue of y");
    scanf("%d",&y);
    max=Get_Max(x,y);
    printf("the max value is %d",max);

}
int Get_Max (int x,int y)
{
    int res=0;
    if(x>y)
    {
        res= x;
    }
    else {
            res=y;
    }
    return res;
}
