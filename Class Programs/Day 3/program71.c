#include<stdio.h>
#include<stdlib.h>

void display(int iNo)
{
    int init = 0;

    for(init = 1; init <= iNo; init++)
    {
        printf("%d\n",init);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency:\n");
    scanf("%d", &iValue);

    display(iValue);

    return EXIT_SUCCESS;
}