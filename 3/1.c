
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *   

#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}