#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool checkEven(int ino)
{

    if(ino%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int ivalue=0;
    bool bret= false;

    printf("Entre number : \n");
    scanf("%d",&ivalue);

    bret = checkEven(ivalue);

    if(bret ==true)
    {
        printf("It is Even :\n");
    }
    else
    {
        printf("It is odd :\n");
    }

    return EXIT_SUCCESS;
}