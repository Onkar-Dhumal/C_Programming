#include<stdio.h>
#include<stdlib.h>

int strlen(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%99[^\n]", Arr);

    iRet = strlen(Arr);

    printf("String length is: %d\n", iRet);

    return EXIT_SUCCESS;
}