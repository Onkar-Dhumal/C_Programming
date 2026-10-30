
#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iEvenFact = iEvenFact * iCnt;
    }

    if (iNo % 2 == 0)
    {
        iNo--;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt -= 2)
    {
        iOddFact = iOddFact * iCnt;
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
