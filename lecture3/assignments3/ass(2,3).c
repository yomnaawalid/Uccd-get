#include <stdio.h>
void main()
{
    int ID,flag=0 ;
    int password ;
    for(int i=0;i<3;i++)
    {
        printf("enter your ID :");
        scanf("%d",&ID);
    switch(ID)
    {
    case 1234:
       printf("enter your password :");
       scanf("%d",&password);
           switch(password)
               {
                 case(7788):
                  printf("Ahmed");
                  flag=1;
                 break;
            default:
                  printf("incorrect password");
                    }
       break;
    case 5678:
        printf("enter your password :");
       scanf("%d",&password);
           switch(password)
               {
                 case(7788):
                  printf("Ahmed");
                  flag=1;
                   break;
            default:
                  printf("incorrect password");
            }
            break;
    case 9870:
        printf("enter your password :");
       scanf("%d",&password);
             switch(password)
               {
                  case(1122):
                  printf("Wael");
                  flag=1;
                  break;
              default:
                  printf("incorrect password");
               }
               break;
    default:
       printf("you are not registered");
    }
    break;
}
switch(flag)
{
    case 1:
    break;
    default:
    printf("no more tries");
}
}
