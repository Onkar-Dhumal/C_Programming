#include<stdio.h>
#include<stdlib.h>

float average(int ino1, int ino2, int ino3)
{
    return ((float)ino1 + (float)ino2 +(float) ino3 ) / 2.0;       //Typecasting
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3=0;
    float fResult = 0.0f;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    printf("Enter second number:\n");
    scanf("%d", &iValue3);


    fResult = average(iValue1, iValue2,iValue3);

    printf("Average is %f\n", fResult);

    return EXIT_SUCCESS;
}