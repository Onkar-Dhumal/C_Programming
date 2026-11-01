// Accept a  e  i  o  u

#include<stdio.h>
#include<stdlib.h>

int countspaceX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')       // counting space between 2 words 
        {
            iCount++;
        }
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

    iRet = countspaceX(Arr);

    printf("Frequency of a is : %d\n", iRet);

    return EXIT_SUCCESS;
}

