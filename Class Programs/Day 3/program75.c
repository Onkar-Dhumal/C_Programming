#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int init = 0;

    for(init = iNo; init >= 1; init--)
    {
        printf("%d\t",init);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Entre the frequency : \n");
    scanf("%d", &iValue);

    display(iValue);

    return EXIT_SUCCESS;
}