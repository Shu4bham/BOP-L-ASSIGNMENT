/*Program that will print table for a given number entered by user*/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter number: ");
    int no;
    scanf("%d", &no);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %2d\n", no, i, no * i);
    }
}