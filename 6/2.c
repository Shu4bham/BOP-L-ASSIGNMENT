/*Matrix multiplicaton*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], sum = 0;
    printf("Enter elments of matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of matrix B:\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }
    printf("Result of matrix multiplication is : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d  ", c[i][j]);
        }
        printf("\n");
    }
}