/*Write a program in C that will explain data type in c*/
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("1)Int data type\nIt is used to store interger values.\nIts size is 4 byte.\nSpecifier used for Int is %%d.\n\nEnter an integer: ");
    int a;
    scanf("%d", &a);
    printf("Integer value you entered is %d\n\n", a);
    printf("2)Float data type\nIt is used to store real numbers.\nIts size is 4 byte.\nSpecifier used for float is %%f.\n\nEnter a Float value: ");
    float b;
    scanf("%f", &b);
    printf("Float value you entered is %f\n\n", b);
    printf("3)Char data type\nIt is used to store Characters.\nIts size is 1 byte.\nSpecifier used for char is %%c.\n\nEnter a character: ");
    char c;
    scanf(" %c", &c);
    printf("Char you entered is %c\n\n", c);
}