#include<stdio.h>
#include<stdlib.h>

int sumaction(int iNo)
{
    int init = 0;
    int isum = 0;

    for(init = 1; init <= iNo; init++)
    {
        isum = isum + init;
    }

    return isum;
}

int main()
{
    int iValue = 0;
    int iret = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    iret = sumaction(iValue);

    printf("Sumaction is: %d\n", iret);

    return EXIT_SUCCESS;
}