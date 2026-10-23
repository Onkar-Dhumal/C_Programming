#include<stdio.h>
#include<stdlib.h>

typedef unsigned long ULONG;

ULONG Factorial(int iNo)
{
    int iCnt = 0;
    ULONG iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %lu\n", iRet);

    return EXIT_SUCCESS;
}