/*
    iRow = 4
    iColumn = 4

    A  A  A  A
    B  B  B  B
    C  C  C  C
    D  D  D  D
    
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++,ch++)
    {
        for(j = 1; j <= iColumn; j++)
        {
          printf("%c\t",ch);
        }

        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Entre number of Rows : ");
    scanf("%d,",&iValue1);

    printf("Entre number of Columns : ");
    scanf("%d,",&iValue2);

    Pattern(iValue1,iValue2);

    return EXIT_SUCCESS;

}