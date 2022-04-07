#include <stdio.h>

void main()
{
    int ID;
    printf("enter your ID:");
    scanf("%d",&ID);
    switch(ID)
    {
    case 1234:
        printf("Ahmed");
           break;
    case 5678:
        printf("Yousef");
            break;
    case 1145:
        printf("Mina");
            break;
    default:
        printf("wrong ID");
    }
}


