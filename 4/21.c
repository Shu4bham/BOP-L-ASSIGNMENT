/*Reverse three digit number entered by user*/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter a three digit number: ");
    int a;
    scanf("%d", &a);
    int a1 = a % 10;
    a = a / 10;
    int a2 = a % 10;
    int a3 = a / 10;
    printf("Number after reversing the digit is : %d%d%d", a1, a2, a3);
}