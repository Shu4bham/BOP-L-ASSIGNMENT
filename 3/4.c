// A 
// A B
// A B C
// A B C D
// A B C D E


#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    for (int i = 1; i <= no; i++)
    {
        char a = 'A';
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}