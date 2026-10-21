#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int init = 0;

    for(init = 1; init <= iNo; init++)
    {
        printf("%d", init);

        if(init < iNo)
        {
            printf(" * ");
        }
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