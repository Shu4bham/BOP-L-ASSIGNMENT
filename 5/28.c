/*Program for finding whether number is prime or not*/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter a number : ");
    int no, flag = 0;
    scanf("%d", &no);
    for (int i = 2; i < no / 2; i++)
    {
        if (no % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Number is not prime");
    }
    else
    {
        printf("Number is prime");
    }
}