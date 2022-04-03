// A 
// B A 
// A B A 
// B A B A 
// A B A B A 

#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    char a = 'A', b = 'B';
    for (int i = 1; i <= no; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {

                printf("%c ", a);
            }
            else
            {
                printf("%c ", b);
            }
        }
        printf("\n");
    }
}