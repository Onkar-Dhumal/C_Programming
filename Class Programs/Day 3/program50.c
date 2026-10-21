#include<stdio.h>
#include<stdlib.h>

int minimum(int ino1, int ino2, int ino3,int ino4)
{
    if (ino1 < ino2 && ino1 < ino3 && (ino1 < ino4))
    {
        return ino1;
    }
    else if (ino2 < ino1 && ino2 < ino3 && (ino2 < ino4))
    {
        return ino2;
    }
    else if (ino3 < ino1 && ino3 < ino2 && (ino3 < ino4))
    {
        return ino3;
    }
    else
    {
        return ino4;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iValue4=0, iResult = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter second number:\n");
    scanf("%d", &iValue2);

    printf("Enter third number:\n");
    scanf("%d", &iValue3);

    printf("Enter fourth number:\n");
    scanf("%d", &iValue4);

    iResult = minimum(iValue1, iValue2, iValue3, iValue4);

    printf("Minimum number is %d\n", iResult);

    return EXIT_SUCCESS;
}