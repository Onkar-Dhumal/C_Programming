#include<stdio.h>

float Percentage(float fTotal, float fObtained)
{
    float fAns = 0.0f;

    fAns = (fObtained / fTotal) * 100;

    return fAns;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%f", &fValue1);

    printf("Please enter obtained marks: ");
    scanf("%f", &fValue2);

    if(fValue1 <= 0 || fValue2 < 0 || fValue2 > fValue1)
    {
        printf("Invalid marks\n");
    }
    else
    {
        fRet = Percentage(fValue1, fValue2);

        printf("Percentage is: %.2f%%\n", fRet);
    }

    return 0;
}