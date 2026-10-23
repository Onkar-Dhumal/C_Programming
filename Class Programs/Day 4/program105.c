#include<stdio.h>
#include<stdlib.h>

int checkfact(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        printf("The Number is perfect: %d\n", iNo);
    }
    else
    {
        printf("The Number is not perfect: %d\n", iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = checkfact(iValue);

    printf("Summation of factors: %d\n", iRet);

    return EXIT_SUCCESS;
}