#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //logic 
    if (iNo %3 ==0)
    {
     printf("Divisible by 3");   
    }
    else
    {
        printf("Not Divisible by 3");
    }
    
}

int main ()
{
   int iValue=0;

    printf("Entre the number :\n");
    scanf("%d",&iValue);
    

    CheckDivisible(iValue);

    return EXIT_SUCCESS;
}