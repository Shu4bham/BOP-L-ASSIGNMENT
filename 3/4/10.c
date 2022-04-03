// A B C D E F G H I 
// A B C D   F G H I
// A B C       G H I
// A B           H I
// A               I

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
                a++;
            }
            else
            {
                printf("  ");
                a++;
            }
        }
        printf("\n");
    }
}