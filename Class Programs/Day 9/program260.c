// $ % & * #

#include<stdio.h>
#include<stdlib.h>

int countspecialletter(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == '$' || *str == '%' || *str == '&' || *str == '*' || *str == '#')      
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

    iRet = countspecialletter(Arr);

    printf("Frequency of Special letters :%d\n", iRet);

    return EXIT_SUCCESS;
}



