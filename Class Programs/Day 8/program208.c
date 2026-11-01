#include<stdio.h>
#include<stdlib.h>

void Pattern()
{

    int iCcnt = 0;

  for (iCcnt=1;iCcnt<=4;iCcnt++)
  {
    printf("*\t");
  }
  printf("\n\n");

  for (iCcnt=1;iCcnt<=4;iCcnt++)
  {
    printf("*\t");
  }
  printf("\n\n");

  for (iCcnt=1;iCcnt<=4;iCcnt++)
  {
    printf("*\t");
  }
  printf("\n\n");

}

int main()
{
    Pattern();

  return EXIT_SUCCESS;
}