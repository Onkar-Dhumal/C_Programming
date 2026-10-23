#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if (iNo % 3 == 0)
    {
        if (iNo % 5 == 0)
        {
            printf("Divisible by 3 and 5");
        }
        else
        {
            printf("Not Divisible by 3 and 5");
        }
    }
    else
    {
        printf("Not Divisible by 3 and 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}

