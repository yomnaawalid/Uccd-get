#include <stdio.h>

void main()
{
    int ID =100;
    int password = 200;
    printf("enter your ID :");
    scanf("%d",&ID);
    switch(ID)
    {
    case 100:
       printf("enter your password :");
       scanf("%d",&password);
             switch(password)
               {
                 case(200):
                  printf("The username");
                 break;
                default:
                  printf("incorrect password");
               }
               break;
    default:
       printf("incorrect ID");

    }

}
