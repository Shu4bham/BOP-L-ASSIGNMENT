/*Program for Arithmatic operators*/
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("This program is for assignment operators.\nEnter two numbers:\n");
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Sum of the numbers is %d\n", a + b);
    printf("Difference is %d\n", a - b);
    printf("Division is %.2f\n", (a * 1.0) / b);
    printf("Multiplication is %d\n", a * b);
    printf("Reminder when %d is divided by %d is %d\n", a, b, a % b);
}