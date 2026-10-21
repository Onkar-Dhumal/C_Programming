#include<stdio.h>
#include<stdlib.h>

float average(int ino1, int ino2)
{
    return (ino1 + ino2) / 2.0;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fResult = 0.0f;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    fResult = average(iValue1, iValue2);

    printf("Average is %f\n", fResult);

    return EXIT_SUCCESS;
}