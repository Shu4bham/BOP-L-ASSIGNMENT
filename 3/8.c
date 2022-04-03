// A 
// B C
// D E F
// G H I J
// K L M N O

#include <stdio.h>
#include <conio.h>
int main()
{
    int no;
    printf("Enter number of rows\n");
    scanf("%d", &no);
    char a = 'A';
    for (int i = 1; i <= no; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
}