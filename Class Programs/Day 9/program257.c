// Accept a  e  i  o  u

#include<stdio.h>
#include<stdlib.h>

int countsmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')      
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

    iRet = countsmall(Arr);

    printf("Frequency of small letter are :%d\n", iRet);

    return EXIT_SUCCESS;
}



