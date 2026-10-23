#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    //logic 
    if (iNo %5 ==0)
    {
     printf("Divisible by 5");   
    }
    else
    {
        printf("Not Divisible by 5");
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