#include<stdio.h>
#include<stdlib.h>

int Addition(int ino1,int ino2)
{
    if (ino1 > ino2 )
    {
        printf("maximum is %d\n",ino1);
    }
    else 
    {
        printf("Maximum is %d\n",ino2);

    }
}

int main ()
{
    
    int iValue1=0,iValue2=0,iResult=0;

    printf("Entre frist number :\n");
    scanf("%d",&iValue1);

    printf("Entre second number :\n");
    scanf("%d",&iValue2);

    iResult=Addition(iValue1,iValue2);


    return EXIT_SUCCESS;
}