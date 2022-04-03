/*Program to check coolinearity of three points*/
#include <stdio.h>
#include <conio.h>
int main()
{
    float a[6];
    char k = 'a';
    for (int i = 0; i < 6; i = i + 2)
    {

        printf("Enter x,y coorinates of point %c\n", k);
        k++;
        scanf("%f%f", &a[i], &a[i + 1]);
    }
    if (((a[3] - a[1]) * (a[4] - a[0])) == ((a[5] - a[1]) * (a[2] - a[0])))
    {
        for (int i = 0; i < 6; i = i + 2)
        {
            printf("(%.0f,%.0f), ", a[i], a[i + 1]);
        }
        printf("\nGiven three points are on same line");
    }

    else
    {
        for (int i = 0; i < 6; i = i + 2)
        {
            printf("(%.0f,%.0f), ", a[i], a[i + 1]);
        }
        printf("\nGiven points are Not on same line.");
    }

    return 0;
}
