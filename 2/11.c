/*Program for license eligibility*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter your age to know your eligibility for license:  ");
    scanf("%d", &age);
    if (age >= 18 && age < 60)
    {
        printf("You are eligible for license.\nEnter m for male and f for female to check the fee:  ");
        char g;
        scanf(" %c", &g);
        if (g == 'm' || g == 'M')
        {
            printf("Fees for male candidate is 1500 rupees");
        }
        else if (g == 'f' || g == 'F')
        {
            printf("Fees for female candidate is 1000 rupees");
        }
        else
        {
            printf("Wrong input.");
        }
    }
    else
    {
        printf("You are not eligibe for license application");
    }
}