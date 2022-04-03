/*Program to print 1 to 100*/

#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        printf("%2d  ", i);
        if (i % 10 == 0)
        {
            printf("\n");
        }
    }
}