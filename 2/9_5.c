/*Program for relational operators*/
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("This program is for relational operators\nThey are used to check relation between two variables\n");
    printf("==, != , >, <, >=, <= etc are relational operators\n\n");
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    printf("Here 0 means False and 1 means true\n\n");
    printf("%d == %d is %d\n\n", a, b, a == b);
    printf("%d != %d is %d\n\n", a, b, a != b);
    printf("%d > %d is %d\n\n", a, b, a > b);
    printf("%d >= %d is %d\n\n", a, b, a >= b);

    printf("%d < %d is %d\n\n", a, b, a < b);
    printf("%d <= %d is %d\n\n", a, b, a <= b);

}