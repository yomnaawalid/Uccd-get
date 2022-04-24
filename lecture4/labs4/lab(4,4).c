#include <stdio.h>
int multiplynumbers (int x);
void main()
{
    int n;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("factorial of %d = %d",x, multiplynumbers);
}
int multiplynumbers(int x){
if(x>=1)
    return n*multiplynumbers(n-1);
else
    return 1;
}

