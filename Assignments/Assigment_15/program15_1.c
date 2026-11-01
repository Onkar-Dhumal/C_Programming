#include<stdio.h>

int main()
{
    char Name[50];

    printf("Please enter your name: ");
    scanf("%49[^\n]", Name);

    printf("Your name is %s\n", Name);

    return 0;
}