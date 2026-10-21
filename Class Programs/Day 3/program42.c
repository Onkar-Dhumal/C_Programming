#include<stdio.h>
#include<stdlib.h>

int maximum(int ino1,int ino2)
{
    if (ino1 > ino2 )
    {
        return ino1;
    }
    else 
    {
        return ino2;
    }
}

int main ()
{
    
    int iValue1=0,iValue2=0,iResult=0;

    printf("Entre frist number :\n");
    scanf("%d",&iValue1);

    printf("Entre second number :\n");
    scanf("%d",&iValue2);

    iResult=maxumum(iValue1,iValue2);

    printf("Maximum number is %d\n",iResult);


    return EXIT_SUCCESS;
}