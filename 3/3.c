// 1 
// 2 3
// 4 5 6
// 7 8 9 0
// 1 2 3 4 5

#include <stdio.h>
#include <conio.h>
int main()
{
    int no, p = 1;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", p);
            p++;
            if (p % 10 == 0)
            {
                p = 0;
            }
        }
        printf("\n");
    }
}