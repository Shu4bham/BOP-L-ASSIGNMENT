/*Program that will produce A.P for given a,d till n*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int a, d, n;
    printf("Enter first term,Common difference and no of terms of A.P you want respectively :  ");
    scanf("%d%d%d", &a, &d, &n);
    for (int i = 0; i < n; i++)
    {
        printf("a%d = %d  ", i + 1, a + i * d);
    }
}