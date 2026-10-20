#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fmarks = 0.0f;

    printf("Enter your name:\n");
    scanf(" %29[^\n]", sName);     //Enter remanins in input buffer 

    printf("Enter your age:\n");
    scanf(" %d", &iAge);           // space added 

    printf("Enter your marks:\n");
    scanf("%f", &fmarks);

    printf("Welcome  %s\n",sName);
    printf("Your age is :%f\n",&iAge);
    printf("Your marks is : %f\n",&fmarks);

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}