/*Program to calculate power of a to b*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b;
    printf("Enter number and its power you want to calculate respectively :  ");
    scanf("%d%d", &a, &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("%d^%d = %d", a, b, power);
}