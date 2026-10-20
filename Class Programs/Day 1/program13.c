#include<stdio.h>
#include<stdlib.h>

int subtraction(
                int no1,   //Frist input number
                int no2    //Second input number
                )
{
    int ans=0;
    ans=no1-no2;
    return ans;
}

int main()
{
    int ivalue1=0; int ivalue2=0; int iresult=0;

    printf("Entre frist number : \n");
    if(scanf("%d",&ivalue1)!=1)
    {
        fprintf(stderr,"Unable to procede due to Input is invalid \n");

        return EXIT_FAILURE;
    }

    printf("Entre second number : \n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"Unable to procede due to Input is invalid \n");

        return EXIT_FAILURE;
    }
    
    iresult= subtraction(ivalue1,ivalue2);

    printf("Subtraction is : %d\n ",iresult);

    return EXIT_SUCCESS;
}