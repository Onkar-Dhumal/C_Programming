#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt < 0; iCnt ++)     //O(N)
    {
        printf("%d\t", iCnt);
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)      //O(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

//Time Complexity : O(2N)

int main()
{
    int iValue = 0;

    printf("Enter Frequency: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}