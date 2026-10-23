#include<stdio.h>
#include<stdlib.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;
   
    printf("Factors of %d are : \n",iNo);

    for(iCnt = 1; iCnt < iNo/2; iCnt++)          //its iterate half now so time complexity is reduce now  exact 6 is not printing 
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}

// Time Complexity : O(N/2)