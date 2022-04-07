#include <stdio.h>


void main()
{
    int grade;
    printf("enter the grade: ");
    scanf("%d", &grade);
    if( 0<=grade && grade<50)
   {
   printf("failed") ;
   }
   else if( 50<=grade && grade<65)
  {
      printf("normal");
  }
  else if( 65<=grade && grade<75)
   {
    printf("good");
   }
   else if( 75<=grade && grade<85)
    {
    printf("very good");
    }
    else if( grade>=85)
    {
      printf("excellant");
    }

}
