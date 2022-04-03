/*Predicting grade of student by marks entered by keyboard*/

#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter your marks : ");
    int marks;
    scanf("%d", &marks);
    if (marks > 75)
    {
        printf("With Honour");
    }
    else if (marks > 60)
    {
        printf("1st Division");
    }
    else if (marks > 45)
    {
        printf("2nd Division");
    }
    else if (marks > 30)
    {
        printf("3rd Division");
    }
    else
    {
        printf("You failed nigga");
    }
    return 0;
}