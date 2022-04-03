/*WAP in c that will take two input from the keyboard and tells which one is greater*/
#include <stdio.h>
int main()
{
    int i, j;
    printf("Enter two numbers you want to compare\n");
    ;

    scanf("%d%d", &i, &j);
    if (i > j)
    {
        printf("%d is greater than %d", i, j);
    }
    else if (i == j)
    {
        printf("Numbers are equal.");
    }

    else
    {
        printf("%d is greater than %d", j, i);
    }
    return 0;
}