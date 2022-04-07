#include <stdio.h>
void  main()
{
    int i,n;
    printf("enter the number to display its multiplication table :");
    scanf("%d",&n);
    for(i=1;i<=6;i++)
    printf("%d * %d =%d \n",n,i,n*i);

}
