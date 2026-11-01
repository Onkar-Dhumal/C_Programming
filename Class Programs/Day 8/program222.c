/*
    iRow = 4
    iColumn = 4

    $  *  *  *
    *  $  *  *
    *  *  $  *
    *  *  *  $
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iColumn)
{
    int i = 0, j = 0;

    if(iRow != iColumn || iRow <= 0 || iColumn <= 0)
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }

        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns: ");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}