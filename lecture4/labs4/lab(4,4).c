#include <stdio.h>
int multiplynumbers (int x);
void main()
{
    int x;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("factorial of %d = %d",x, multiplynumbers(x));
}
int multiplynumbers(int x){
if(x>1)
    return x*multiplynumbers(x-1);
else
    return 1;
}
