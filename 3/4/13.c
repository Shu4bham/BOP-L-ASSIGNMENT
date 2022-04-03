//         A
//       A B
//     A B C
//   A B C D
// A B C D E

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    char a = 'A';

    for (int i = 1; i <= n; i++)
    {
        char a = 'A';
        for (int j = 1; j <= n; j++)
        {
            if (j >= n + 1 - i)
            {
                printf("%c ", a);
                a++;
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}