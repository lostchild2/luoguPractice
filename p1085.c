#include <stdio.h>
int main(void)
{
    int num1, num2, i;
    for (i = 0; i < 7; i++)
    {
        scanf("%d%d", &num1, &num2);
        if (num1 + num2 > 8)
        {
            printf("%d", i + 1);
            break;
        }
    }
    if (i >= 7)
    {
        printf("0");
    }
    system("pause");
    return 0;
}