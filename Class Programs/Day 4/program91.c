#include<stdio.h>
#include<stdlib.h>

int Sumaction(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

   iRet = Sumaction(iValue);

   printf("Sumaction is : %d\n",iRet);

    return EXIT_SUCCESS;
}