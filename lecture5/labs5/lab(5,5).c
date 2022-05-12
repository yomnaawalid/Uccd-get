#include <stdio.h>
void main()
{
    int array[10],i,search;
     printf("enter the search value");
     scanf("%d",&search);
     printf("enter the elements of array");
    for(i=0;i<10;i++)
    {
     scanf("%d",&array[i]);
    }

    for(i=0;i<10;i++)
    {
     printf("%d\n",array[i]);
    }


    for(i=0;i<10;i++)
    {
        if(array[i]==search){
            printf("founded\n");
        }
        else
            {printf("unfounded");
            }
    }
}
