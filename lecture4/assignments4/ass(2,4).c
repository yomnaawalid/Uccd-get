#include <stdio.h>

int add(int x,int y);
int subtract(int x,int y);
int multiply(int x,int y);
int divide(int x,int y);
int and(int x,int y);
int or(int x,int y);
int not(int x);
int xor(int x,int y);
int reminder(int x,int y);
int increment(int x,int y);
int decrement(int x,int y);

void main(void)
{
    int x,y,add,substr,multiply,divide,and,or,not,xor,reminder,increment,decrement;

    printf("enter the value of x,y");
    scanf("%d%d",&x,&y);

    add=x+y;
    subtract=x-y;
    multiply=x*y;
    divide=x/y;
    and=x&y;
    or=x||y;
    not=x;
    xor!=x;
    reminder=x%y;
    increment=++(x+y);
    decrement=--(x+y);

    printf("add =%d\n",add);
    printf("subtract =%d\n",subtract);
    printf("multiply =%d\n",multiply);
    printf("divide =%d\n",divide);
    printf("and =%d\n",and);
    printf("or =%d\n",or);
    printf("not =%d\n",not);
    printf("xor =%d\n",xor);
    printf("reminder =%d\n",reminder);
    printf("increment =%d\n",increment);
    printf("decrement =%d\n",decrement);

}
int add(int x,int y)
{
  return(add);
}
int subtract(int x,int y)
{
  return(struct);
}
int multiply(int x,int y)
{
   return(multiply);
}
int divide(int x,int y)
{
  return(divide);
}
int and(int x,int y)
{
    return(and);
}
int or(int x,int y)
{
   return(or);
}
int not(int x)
{
   return(not);
}
int xor(int x,int y)
{
    return(xor);
}
int reminder(int x,int y)
{
    return(reminder);
}
int increment(int x,int y)
{
    return(increment);
}
int decrement(int x,int y)
{
    return(decrement);
}
