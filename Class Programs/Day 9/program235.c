#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String:\n");
    //scanf("%99[^\n]", Arr);
    fgets(Arr,sizeof(Arr),stdin);           // Because not gettig space in input 2nd method 

    printf("Entered string: %s\n", Arr);

    return EXIT_SUCCESS;
}