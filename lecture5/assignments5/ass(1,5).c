
#include <stdio.h>
void main()
{
    int arr[10];
    int i, max, min;

    printf("Enter the elements of array ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for(i=1; i<10; i++)
    {

        if(arr[i] > max)
        {max = arr[i];
        }
        if(arr[i] < min)
        {min = arr[i];
        }
    }
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d", min);

}
