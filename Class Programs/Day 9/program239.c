#include<stdio.h>
#include<stdlib.h>


void display(char str[])        // Call by value 
{

    printf("%s\n",str);

}
int main ()
{

    char Arr[] = "Ganesh";

    display(Arr);


    return EXIT_SUCCESS;
}