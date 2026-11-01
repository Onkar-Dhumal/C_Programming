// Accept a  e  i  o  u

#include<stdio.h>
#include<stdlib.h>

int countcapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')      
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

    iRet = countcapital(Arr);

    printf("Frequency of small letter are :%d\n", iRet);

    return EXIT_SUCCESS;
}



