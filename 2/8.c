/*W.A.P in c to identify which number is smaller out of inputted three numbers*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers you want to compare\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("%d is smaller than %d and %d", a, b, c);
    }
    else if (b < a && b < c)
    {
        printf("%d is smaller than %d and %d", b, a, c);
    }
    else
    {
        printf("%d is smaller than %d and %d", c, a, b);
    }
}