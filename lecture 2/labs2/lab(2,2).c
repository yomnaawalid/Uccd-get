#include <stdio.h>
void main()
{
    float salary,working_hours;
    printf("enter the working_hours");
    scanf("%f",&working_hours);
    salary = 50 * working_hours;
    if(working_hours<40)
    {
        salary = salary - 0.1*salary;
}
printf("%f",salary);
}
