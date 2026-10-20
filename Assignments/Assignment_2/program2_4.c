
#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= (iFrequency < 0 ? -iFrequency : iFrequency); iCnt++)
    {
        printf("%d ", iNo);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    printf("Enter frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}
