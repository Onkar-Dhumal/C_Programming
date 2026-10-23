#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkfact(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = checkfact(iValue);

    if(bRet == true)
    {
        printf("The number is perfect\n");
    }
    else
    {
        printf("The number is not perfect\n");
    }

    return EXIT_SUCCESS;
}