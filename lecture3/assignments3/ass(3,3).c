#include <stdio.h>

int main() {
            int hight;
            printf("enter the hight of the pyramid :");
            scanf("%d",&hight);
            for (int i =1; i<= hight; i++)
        {
             for(int s = 1; s <=hight-i ;++s)
                {
                   printf(" ");
                }


                for(int j=1; j<= i; ++j)
                {

                    printf(" *");
                }
                printf(" \n");
            }
}
