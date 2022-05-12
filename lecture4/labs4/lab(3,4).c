#include <stdio.h>
void my_name (name);

void main(void)
{
    char name[0];
    printf("enter your name");
    scanf("%s",&name);
    printf("my name is %s ",name);

}
void my_name (name)
{
    return name;

}
