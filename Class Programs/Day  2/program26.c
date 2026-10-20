#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sName[30];

    printf("Enter your name:\n");
    scanf(" %29[^\n]", sName);     //sprcial scanf accept the input until tap on entre

    printf("Welcome %s\n", sName);

    return EXIT_SUCCESS;
}