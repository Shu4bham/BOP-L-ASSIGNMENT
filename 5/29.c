/*Program that will tell  reverse of given number is equal to that number or not*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int num, orig, rev = 0, rem;
    printf("Enter a Number: ");
    scanf("%d", &num);
    orig = num;
    for (; num > 0;)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    printf("Reverse of given number is %d\n", rev);
    if (orig == rev)
    {
        printf("\nThis number is equal to its Reverse");
    }

    else
    {
        printf("\nThis number is not equal to its Reverse");
    }
    return 0;
}