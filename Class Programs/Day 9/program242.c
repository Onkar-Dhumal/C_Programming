#include<stdio.h>
#include<stdlib.h>


void display(char *str)        
{
      
    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main ()
{
    char Arr[100];
    printf("Entre String : \n");
    scanf("%99[^\n]s",Arr);

    display(Arr);

    return EXIT_SUCCESS;
}