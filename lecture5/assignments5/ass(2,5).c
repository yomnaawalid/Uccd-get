#include <stdio.h>
void main()
{
    int arr1[10],arr2[10],arr3[10];
    int i, max1, min1 , max2, min2 , max3, min3;
    float sum=0,avg;
    int pass1,fail1,pass2,fail2,pass3,fail3,all_pass,all_fail;
    printf("Enter the elements of three arrays ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr1[i]);
        scanf("%d", &arr2[i]);
        scanf("%d", &arr3[i]);
    }

    max1 = arr1[0] ;
    min1 = arr1[0] ;

    for(i=1; i<10; i++)
    {

        if(arr1[i] > max1 )
        {
            max1 = arr1[i]  ;
        }
        if(arr1[i] < min1)
        {
            min1 = arr1[i] ;
        }
    }
    printf("Maximum element in first array%d\n", max1);
    printf("Minimum element is first array %d\n", min1);


    max2 = arr2[0];
    min2 = arr2[0];

    for(i=1; i<10; i++)
    {

        if(arr2[i] > max2)
        {max2 = arr2[i];
        }
        if(arr2[i] < min2)
        {min2 = arr2[i];
        }
    }
    printf("Maximum element in second array %d\n", max2);
    printf("Minimum element in second array  %d\n", min2);


    max3 = arr3[0];
    min3 = arr3[0];

    for(i=1; i<10; i++)
    {

        if(arr3[i] > max3)
        {max3 = arr3[i];
        }
        if(arr3[i] < min3)
        {min3 = arr3[i];
        }
    }
    printf("Maximum element in third array %d\n", max3);
    printf("Minimum element in third array %d\n", min3);

    if(max1>=max2&&max1>=max3)
    {
        printf("maximum of three arrays is %d\n",max1);
    }
    else if(max2>=max1&&max2>=max3)
    {
       printf("maximum of three arrays is %d\n",max2);
    }
    else
    {
       printf("maximum of three arrays is %d\n",max3);
    }

    if(min1<=min2&&min1<=min3)
    {
        printf("minimum of three arrays is %d\n",min1);
    }
    else if(min2<=min1&&min2<=min3)
    {
       printf("minimum of three arrays is %d\n",min2);
    }
    else
    {
       printf("minimum of three arrays is %d\n",min3);
    }

    for(i=0;i<10;i++)
    {
     sum = sum + arr1[i] + arr2[i] + arr3[i];
    }
     avg  = sum/30;
    printf("sum %f \n",sum);
    printf("avg %f \n",avg);


/*for(i=1; i<10; i++)
    {

        if(arr1[i] > pass)
        {
            printf("the student passed");
        }
        else {
             printf("the student failed");
        }
        if(arr2[i] > pass)
        {
            printf("the student passed");
        }
        else {
             printf("the student failed");
        }
        if(arr3[i] > pass)
        {
            printf("the student passed");
        }
        else {
             printf("the student failed");
        }
    }*/
    for(i=1; i<10; i++)
    {
        if (arr1[i] > 50 )
        {
            pass1++;
            //printf("number of passed people in first class:%d\n",pass1);
        }
        else{
                fail1++;
            // printf("number of failed people in first class :%d\n",fail1);
        }
        if ( arr2[i] > 50)
        {
            pass2++;
            //printf("number of passed people in second class :%d\n",pass2);
        }
        else{
                fail2++;
            // printf("number of failed people  in second class :%d\n",fail2);
        }
        if (arr3[i] > 50 )
        {
            pass3++;
           // printf("number of passed people  in third class:%d\n",pass3);
        }
        else{
                fail3++;
             //printf("number of failed people in third class:%d\n",fail3);
        }

    }
       all_pass = pass1 + pass2 + pass3;
       all_fail = 30 - all_pass;
       printf (" number of all passed people is %d\n ",all_pass);
       printf (" number of all failed people is %d\n ",all_fail);
}
