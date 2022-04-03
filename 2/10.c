// program for leap year
#include <stdio.h>
#include <conio.h>
int main()
{

    int year;
    printf("Enter year that you want to check is leap year or not:  ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("Entered year %d is a leap year", year);
    }
    else
    {
        printf("Entered year %d is not a leap year", year);
    }
}