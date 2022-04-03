/*Arranging 3 numbers in increasing sequence. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three distinct numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b && b >= c)
    {
        printf("Increasing sequence is %d, %d, %d", c, b, a);
    }
    else if (a >= c && c >= b)
    {
        printf("Increasing sequence is %d, %d, %d", b, c, a);
    }
    else if (b >= a && a >= c)
    {
        printf("Increasing sequence is %d, %d, %d", c, a, b);
    }
    else if (b >= c && c >= a)
    {
        printf("Increasing sequence is %d, %d, %d", a, c, b);
    }
    else if (c >= a && a >= b)
    {
        printf("Increasing sequence is %d, %d, %d", b, a, c);
    }
    else
    {
        printf("Increasing sequence is %d, %d, %d", a, b, c);
    }
}