/*Swapping of two numbers*/
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers you want to swap\n");
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("Value after swapping is %d and %d", a, b);
    return 0;
}