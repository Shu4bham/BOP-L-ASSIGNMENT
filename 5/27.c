//  Find factorial of a number. Number can be +ive/zero/-ive.

#include <stdio.h>
#include <conio.h>

int main()
{
    int no, factorial = 1;
    printf("Enter number you want to calculate factorial of: ");
    scanf("%d", &no);
    if (no >= 0)
    {
        for (int i = 1; i <= no; i++)
        {
            factorial = factorial * i;
        }
        printf("Factorial of %d is %d", no, factorial);
    }
    else
    {
        printf("Factorial of negative no is not defined");
    }
}