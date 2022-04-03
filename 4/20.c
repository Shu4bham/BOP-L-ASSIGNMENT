/*Program for finding Quadrant for two coordinates*/

#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    printf("Enter coordinates(x,y)\n");
    scanf("%d%d", &x, &y);
    printf("The coordinates you entered are (%d,%d)\n", x, y);
    if (x > 0)
    {
        if (y > 0)
        {
            printf("First quadrant");
        }
        else
        {
            printf("Fourth quadrant");
        }
    }
    else
    {
        if (y > 0)
        {

            printf("Second Quadrant");
        }
        else
        {
            printf("Third Quadrat");
        }
    }

    return 0;
}