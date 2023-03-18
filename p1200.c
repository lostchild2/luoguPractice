#include <stdio.h>
int main(void)
{
    char ch;
    int sum1 = 1, sum2 = 1;
    while ((ch = getchar()) != '\n')
    {
        sum1 *= (ch - 'A' + 1);
        // printf("%d ", ch - 'A' + 1);
    }
    // printf("%d", sum1);
    // printf("\n");
    while ((ch = getchar()) != '\n')
    {
        sum2 *= (ch - 'A' + 1);
        // printf("%d ", ch - 'A' + 1);
    }
    // printf("%d", sum2);
    if ((sum1 % 47) == (sum2 % 47))
    {
        printf("GO");
    }
    else
    {
        printf("STAY");
    }
    system("pause");
    return 0;
}