#include<stdio.h>
#include<stdlib.h>

void CountFrequency(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigit = 0, iCountSpecial = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= '0' && *str <= '9')
        {
            iCountDigit++;
        }
        else
        {
            iCountSpecial++;
        }

        str++;
    }

    printf("Number of Capital letters: %d\n", iCountCapital);
    printf("Number of Small letters: %d\n", iCountSmall);
    printf("Number of Digits: %d\n", iCountDigit);
    printf("Number of Special characters : %d\n", iCountSpecial);
}
    


int main()
{
    char Arr[100] = {'\0'};

    printf("Enter String:\n");
    scanf("%99[^\n]", Arr);

    CountFrequency(Arr);

    return EXIT_SUCCESS;
}