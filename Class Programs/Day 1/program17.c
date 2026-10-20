#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue=0;

    printf("Entre number : \n");
    scanf("%d",&ivalue);

    if(ivalue % 2 == 0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This number is odd");
    }

    return EXIT_SUCCESS;
}