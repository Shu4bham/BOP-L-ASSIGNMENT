/*Program for Increment|Decrement operator*/
#include <stdio.h>
#include <conio.h>
int main()
{
    printf("This program is for increment/decrement operator\nIncrement operator,i++,++i => inc. value by 1\nDecrement operator,i--,--i decrease value by 1\n\nEnter a number\n");
    int i;
    scanf("%d", &i);

    int a = i;
    printf("value after increment is %d\n", ++a);
    a=i;
    printf("value after decrement is %d\n", --a);
    return 0;
}
