/*Find the sum of marks of 100 students entered by keyboard*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a[100], sum = 0;
    printf("Enter marks of students one after other: ");
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum is %d", sum);
}