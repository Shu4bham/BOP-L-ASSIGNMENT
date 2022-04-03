//         A
//       B A
//     C B A
//   D C B A
// E D C B A

#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    char a = 'A';
    int c = a;
    for (int i = 1; i <= n; i++)
    {
        a = c + i - 1;
        for (int j = 1; j <= n; j++)
        {
            if (j >= n + 1 - i)
            {
                printf("%c ", a);
                a--;
            }
            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }
}