// A B C D E D C B A 
// A B C D   D C B A
// A B C       C B A
// A B           B A
// A               A


#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j <= n + 1 - i || j >= n - 1 + i)
            {
                printf("%c ", a);
                if (j < n)
                {
                    a++;
                }
                else
                {
                    a--;
                }
            }
            else
            {
                printf("  ");
                if (j == n)
                {
                    a--;
                }
            }
        }
        printf("\n");
    }
}