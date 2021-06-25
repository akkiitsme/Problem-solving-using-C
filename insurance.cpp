#include <stdio.h>
int main()
{
    int age, installment = 0;
    char name[20], gender, smoker;

    printf("Enter name of the person:");
    scanf("%s", &name);
    printf("Enter Gender of the person:(m/f)");
    scanf(" %c", &gender);
    printf("Smoker:(y/n)");
    scanf(" %c", &smoker);-
    printf("Enter Age of the Person: ");
    scanf("%d", &age);
    if (smoker == 'y' && gender == 'm')
    {
        if (age >= 20 && age <= 30)
        {
            installment = 10000 + 1000;
        }
        else if (age >= 31 && age <= 40)
        {
            installment = 15000 + 1500;
        }
        else if (age >= 41 && age <= 50)
        {
            installment = 20000 + 2000;
        }
        else if (age >= 51 && age <= 60)
        {
            installment = 40000 + 4000;
        }
        else
        {
            printf("\nNo insurance");
        }
    }
    else if ((smoker == 'y' && gender == 'f') || (smoker == 'n' && gender == 'm'))
    {
        if (age >= 20 && age <= 30)
        {
            installment = 10000;
        }
        else if (age >= 31 && age <= 40)
        {
            installment = 15000;
        }
        else if (age >= 41 && age <= 50)
        {
            installment = 20000;
        }
        else if (age >= 51 && age <= 60)
        {
            installment = 40000 - 4000 + 4000;
        }
        else
        {
            printf("\nNo insurance");
        }
    }
    else
    {
        if (age >= 20 && age <= 30)
        {
            installment = 10000;
        }
        else if (age >= 31 && age <= 40)
        {
            installment = 15000 - 1500;
        }
        else if (age >= 41 && age <= 50)
        {
            installment = 20000 - 2000;
        }
        else if (age >= 51 && age <= 60)
        {
            installment = 40000 - 4000;
        }
        else
        {
            printf("\nNo insurance");
        }
    }
    printf("Installment: %d", installment);
    return 0;
}
