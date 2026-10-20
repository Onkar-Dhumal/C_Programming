#include<stdio.h>
#include<stdlib.h>

void checkEven(int ino)
{

    if(ino%2==0)
    {
        printf("This is even number");
    }
    else
    {
        printf("This number is odd");
    }

}

int main()
{
    int ivalue=0;

    printf("Entre number : \n");
    scanf("%d",&ivalue);

    checkEven(ivalue);

    return EXIT_SUCCESS;
}