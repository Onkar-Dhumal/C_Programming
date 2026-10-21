#include<stdio.h>
#include<stdlib.h>

int main()
{
    int icnt=0;
    int isum=0;

    icnt=1;

    //isum=0+1           ->1
    isum=isum+icnt;
    icnt++;   //2

    //isum=1+2           ->2
    isum=isum+icnt;
    icnt++;   //3

    //isum=3+3           ->6
    isum=isum+icnt;
    icnt++; //4

    //isum=6+4           ->10
    isum=isum+icnt;
    icnt++;

   //isum=isum+icnt;
   ///icnt++;

    printf("%d\n",isum);
    return EXIT_SUCCESS;
}

