/*Program for calculatong THAT WILL CALCULATE tax amount for a given salary enter by user*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int salary;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    if (salary > 100000)
    {
        printf("Tax on salary: %0.2f", salary * 0.1);
    }
    else
    {
        printf("No tax payable");
    }
}