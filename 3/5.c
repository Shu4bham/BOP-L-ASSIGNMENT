// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}