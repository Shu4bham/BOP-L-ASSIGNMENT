// C Program to demonstrate use of bitwise operators
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("This program is for bitwise operators.\nBitwise operators work on bits\nEnter two numbers:\n");

    int a, b;
    scanf("%d%d", &a, &b);

    printf("a = %d, b = %d\n", a, b);

    printf("Bitwise and => If both bits are high-> output is high.\nResult of bitwise and, a&b = %d\n\n", a & b);

    printf("Bitwise or => if any bit is high -> output is high.\nResult of bitwise or, a|b = %d\n\n", a | b);

    printf("Bitwise XOR => if there are different bits -> output is high(1)\nResult of bitwise XOR, a^b = %d\n\n", a ^ b);

    printf("Bitwise not => change bits from low to high and vice-versa\nResult of bitwise not, ~a = %d\n\n", a = ~a);

    return 0;
}
