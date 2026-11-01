
#include<stdio.h>
#include<stdlib.h>

int main()
{

    char Arr[100] = {'G','a','n','e','s','h','\0','P','u','n','e'};      // '\0' Tells stop the string because od use %s its force to stop     
    printf("%s\n",&Arr);

    printf("Size of Array is : %d\n",sizeof(Arr));

    return EXIT_SUCCESS;
}