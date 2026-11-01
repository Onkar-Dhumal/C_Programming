#include<stdio.h>
#include<stdlib.h>


void display(char *str)        
{
    printf("%s\n",str);
}
int main ()
{
    char Arr[100];
    printf("Entre String : \n");
    scanf("%99[^\n]s",Arr);

    display(Arr);

    return EXIT_SUCCESS;
}