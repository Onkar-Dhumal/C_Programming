#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fmarks = 0.0f;

    printf("Enter your name:\n");
    scanf("%29[^\n]", sName);

    printf("Enter your age:\n");
    scanf("%d", &iAge);

    printf("Enter your marks:\n");
    scanf("%f", &fmarks);

    printf("Welcome %s\n", sName);
    printf("Your age is: %d\n", iAge);
    printf("Your marks are: %f\n", fmarks);

    return EXIT_SUCCESS;
}