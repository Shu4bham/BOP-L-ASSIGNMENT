/*Swapping of two numbers without using third variable.*/
#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter two number you want to swap");
    scanf("%d%d", &i, &j);
    i = i + j;
    j = i - j;
    i = i - j;
    printf("Value after swapping is %d and %d", i, j);
    return 0;
}