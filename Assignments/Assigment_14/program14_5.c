
#include<stdio.h>

void FactDiff(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t", iCnt);
        }
    }

    printf("%d\n", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    FactDiff(iValue);

    return 0;
}
