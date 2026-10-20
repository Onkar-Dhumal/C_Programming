
#include <stdio.h>

int calcus(int no1, int no2)
{
    int ans = 0;

    ans = no1 + no2;
    printf("Addition is: %d\n", ans);

    ans = no1 - no2;
    printf("Subtraction is: %d\n", ans);

    ans = no1 * no2;
    printf("Multiplication is: %d\n", ans);

    if (no2 != 0)
    {
        ans = no1 / no2;
        printf("Division is: %d\n", ans);
    }
    else
    {
        printf("Division is not possible by zero.\n");
    }

    return ans;
}

int main()
{
    int val1 = 0;
    int val2 = 0;
    int result = 0;

    printf("Enter first number:\n");
    scanf("%d", &val1);

    printf("Enter second number:\n");
    scanf("%d", &val2);

    result = calcus(val1, val2);

    return 0;
}
