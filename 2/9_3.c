
// C Program to demonstrate use of bitwise Shift operators
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("This program is for bitwise shift operators.\nBitwise shift operators work on bits\nEnter a number:\n");

    int a;
    scanf("%d", &a);

    printf("a = %d\n", a);
    printf("There are two shift operators\nBitwise left shift and bitwise right shift\n\n\n");

    printf("Bitwise right shift => shifts the bits towards right\n%d>>1 = %d\n\n", a, a >> 1);

    printf("Bitwise left shift => shifts the bits towards left\n%d<<1 = %d\n\n\n", a, a << 1);

    printf("%d>>5=%d\n\n%d<<3=%d\n\n\n", a, a >> 5, a, a << 3);
    int b;
    printf("Enter how many bits you want to shift for %d\n", a);
    scanf("%d", &b);
    printf("Left shift => %d\n", a << b);
    printf("Right shift => %d", a >> b);
    return 0;
}
