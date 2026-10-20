/*
step 1 : Understand the problem statment 
step 2 : write the algorithm
step 3 : deside the program lang
step 4 : write the program
step 5 : test the program
*/



////////////////////////////////////////////////////////
//
//  step 1 : Understand the problem statment 
//          user is going to entre any 2 integer and we have to perform addition
//
////////////////////////////////////////////////////////


////////////////////////////////////////////////////////
//
//  step 2 : write the algorithm 
//           Alogo of 2 number of addition No1 + No2 and store into Ans 
//              
/////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////
//
//  step 3 : deside the program lang
//             We select C programing 
//
///////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//  
//  step 4 : write the program
//
////////////////////////////////////////////////////////////


#include<stdio.h>

    int Addition(int iNo1, int iNo2)
    {
        int iAns = 0;
        iAns=iNo1+iNo2;    //logic

        return iAns;
    }

    

int main()
{
    int iValue1=0, iValue2=0, iResult=0;

    printf("Entre frist number :\n");
    scanf("%d",&iValue1);

    printf("Entre second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);

    printf("Addition is : %d\n ",iResult);
    
    return 0;
}